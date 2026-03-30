// Fill out your copyright notice in the Description page of Project Settings.


#include "AssimpFunctionLibrary.h"

#include "AIBone.h"
#include "AIScene.h"
#include "AINode.h"
#include "AIMesh.h"
#include "UE_Assimp.h"
#include "AIMaterial.h"
#include "Async/Async.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "DynamicMeshActor.h"
#include "Components/DynamicMeshComponent.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "HAL/FileManager.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2D.h"
#include "Misc/Paths.h" 
#include "assimp/cimport.h"
#include "assimp/DefaultLogger.hpp"
#include "assimp/scene.h"


#if PLATFORM_WINDOWS
#include <Runtime\Core\Public\HAL\FileManager.h>
#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\Windows\COMPointer.h>
#endif

#if PLATFORM_MAC
// Access to Objective-C functions for C++.
#include <CoreFoundation/CoreFoundation.h>
#include <objc/objc.h>
#include <objc/objc-runtime.h>
#include <objc/message.h>

// Access to MainThread wrapper.
#include "Mac/CocoaThread.h"

// Helpers for calling objective-c routines at runtime.
// The objc_msgSend function needs purpose-built casting.
#define id_OBJC_MSGSEND ((id (*)(id, SEL))objc_msgSend)
#define void_OBJC_MSGSEND_bool ((void (*)(id, SEL, bool))objc_msgSend)
#define id_OBJC_MSGSEND_id ((id (*)(id, SEL, id))objc_msgSend)
#define void_OBJC_MSGSEND_id ((void (*)(id, SEL, id))objc_msgSend)
#define id_OBJC_MSGSEND_cstr ((id (*)(id, SEL, const char *))objc_msgSend)
#define id_OBJC_MSGSEND_int ((id (*)(id, SEL, int))objc_msgSend)
#define cstr_OBJC_MSGSEND ((const char *(*)(id, SEL))objc_msgSend)
#define int_OBJC_MSGSEND ((int (*)(id, SEL))objc_msgSend)

#endif

#define MAX_FILETYPES_STR 4096
#define MAX_FILENAME_STR 65536

#ifdef UpdateResource
#undef UpdateResource
#endif

void UAssimpFunctionLibrary::OpenFileDialogue(FString DialogTitle, FString DefaultPath, FString DefaultFile,
                                              const FString& FileTypes, uint8 Flags, TArray<FString>& OutFilenames,
                                              bool MultiSelect, bool& Success)
{
	const void* ParentWindowHandle = nullptr;
	int OutFilterIndex;
	Success = FileDialogShared(false, ParentWindowHandle, DialogTitle, DefaultPath, DefaultFile, FileTypes, Flags,
	                           OutFilenames, OutFilterIndex);
}


bool UAssimpFunctionLibrary::FileDialogShared(bool bSave, const void* ParentWindowHandle, const FString& DialogTitle,
                                              const FString& DefaultPath, const FString& DefaultFile,
                                              const FString& FileTypes, uint32 Flags, TArray<FString>& OutFilenames,
                                              int32& OutFilterIndex)
{
#pragma region Windows
	//FScopedSystemModalMode SystemModalScope;
#if PLATFORM_WINDOWS
	WCHAR Filename[MAX_FILENAME_STR];
	FCString::Strcpy(Filename, MAX_FILENAME_STR, *(DefaultFile.Replace(TEXT("/"), TEXT("\\"))));

	// Convert the forward slashes in the path name to backslashes, otherwise it'll be ignored as invalid and use whatever is cached in the registry
	WCHAR Pathname[MAX_FILENAME_STR];
	FCString::Strcpy(Pathname, MAX_FILENAME_STR,
	                 *(FPaths::ConvertRelativePathToFull(DefaultPath).Replace(TEXT("/"), TEXT("\\"))));

	// Convert the "|" delimited list of filetypes to NULL delimited then add a second NULL character to indicate the end of the list
	WCHAR FileTypeStr[MAX_FILETYPES_STR];
	const WCHAR* FileTypesPtr = nullptr;
	const int32 FileTypesLen = FileTypes.Len();

	// Nicely formatted file types for lookup later and suitable to append to filenames without extensions
	TArray<FString> CleanExtensionList;

	// The strings must be in pairs for windows.
	// It is formatted as follows: Pair1String1|Pair1String2|Pair2String1|Pair2String2
	// where the second string in the pair is the extension.  To get the clean extensions we only care about the second string in the pair
	TArray<FString> UnformattedExtensions;
	FileTypes.ParseIntoArray(UnformattedExtensions, TEXT("|"), true);
	for (int32 ExtensionIndex = 1; ExtensionIndex < UnformattedExtensions.Num(); ExtensionIndex += 2)
	{
		const FString& Extension = UnformattedExtensions[ExtensionIndex];
		// Assume the user typed in an extension or doesnt want one when using the *.* extension. We can't determine what extension they wan't in that case
		if (Extension != TEXT("*.*"))
		{
			// Add to the clean extension list, first removing the * wildcard from the extension
			const int32 WildCardIndex = Extension.Find(TEXT("*"));
			CleanExtensionList.Add(WildCardIndex != INDEX_NONE ? Extension.RightChop(WildCardIndex + 1) : Extension);
		}
	}

	if (FileTypesLen > 0 && FileTypesLen - 1 < MAX_FILETYPES_STR)
	{
		FileTypesPtr = FileTypeStr;
		FCString::Strcpy(FileTypeStr, MAX_FILETYPES_STR, *FileTypes);

		TCHAR* Pos = FileTypeStr;
		while (Pos[0] != 0)
		{
			if (Pos[0] == '|')
			{
				Pos[0] = 0;
			}

			Pos++;
		}

		// Add two trailing NULL characters to indicate the end of the list
		FileTypeStr[FileTypesLen] = 0;
		FileTypeStr[FileTypesLen + 1] = 0;
	}

	OPENFILENAME ofn;
	FMemory::Memzero(&ofn, sizeof(OPENFILENAME));

	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = (HWND)ParentWindowHandle;
	ofn.lpstrFilter = FileTypesPtr;
	ofn.nFilterIndex = 1;
	ofn.lpstrFile = Filename;
	ofn.nMaxFile = MAX_FILENAME_STR;
	ofn.lpstrInitialDir = Pathname;
	ofn.lpstrTitle = *DialogTitle;
	if (FileTypesLen > 0)
	{
		ofn.lpstrDefExt = &FileTypeStr[0];
	}

	ofn.Flags = OFN_HIDEREADONLY | OFN_ENABLESIZING | OFN_EXPLORER;

	if (bSave)
	{
		ofn.Flags |= OFN_CREATEPROMPT | OFN_OVERWRITEPROMPT | OFN_NOVALIDATE;
	}
	else
	{
		ofn.Flags |= OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
	}

	if (Flags & 0x01)
	{
		ofn.Flags |= OFN_ALLOWMULTISELECT;
	}

	bool bSuccess;
	if (bSave)
	{
		bSuccess = !!::GetSaveFileName(&ofn);
	}
	else
	{
		bSuccess = !!::GetOpenFileName(&ofn);
	}

	if (bSuccess)
	{
		// GetOpenFileName/GetSaveFileName changes the CWD on success. Change it back immediately.
		//FPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();

		if (Flags & 0x01)
		{
			// When selecting multiple files, the returned string is a NULL delimited list
			// where the first element is the directory and all remaining elements are filenames.
			// There is an extra NULL character to indicate the end of the list.
			FString DirectoryOrSingleFileName = FString(Filename);
			TCHAR* Pos = Filename + DirectoryOrSingleFileName.Len() + 1;

			if (Pos[0] == 0)
			{
				// One item selected. There was an extra trailing NULL character.
				OutFilenames.Add(DirectoryOrSingleFileName);
			}
			else
			{
				// Multiple items selected. Keep adding filenames until two NULL characters.
				FString SelectedFile;
				do
				{
					SelectedFile = FString(Pos);
					new(OutFilenames) FString(DirectoryOrSingleFileName / SelectedFile);
					Pos += SelectedFile.Len() + 1;
				}
				while (Pos[0] != 0);
			}
		}
		else
		{
			new(OutFilenames) FString(Filename);
		}

		// The index of the filter in OPENFILENAME starts at 1.
		OutFilterIndex = ofn.nFilterIndex - 1;

		// Get the extension to add to the filename (if one doesnt already exist)
		FString Extension = CleanExtensionList.IsValidIndex(OutFilterIndex)
			                    ? CleanExtensionList[OutFilterIndex]
			                    : TEXT("");

		// Make sure all filenames gathered have their paths normalized and proper extensions added
		for (auto OutFilenameIt = OutFilenames.CreateIterator(); OutFilenameIt; ++OutFilenameIt)
		{
			FString& OutFilename = *OutFilenameIt;

			OutFilename = IFileManager::Get().ConvertToRelativePath(*OutFilename);

			if (FPaths::GetExtension(OutFilename).IsEmpty() && !Extension.IsEmpty())
			{
				// filename does not have an extension. Add an extension based on the filter that the user chose in the dialog
				OutFilename += Extension;
			}

			FPaths::NormalizeFilename(OutFilename);
		}
	}
	else
	{
		uint32 Error = ::CommDlgExtendedError();
		if (Error != ERROR_SUCCESS)
		{
			//UE_LOG(LogDesktopPlatform, Warning, TEXT("Error reading results of file dialog. Error: 0x%04X"), Error);
		}
	}

	return bSuccess;
#endif
#pragma endregion

#pragma region LINUX
#if PLATFORM_LINUX
	return false;
#endif
#pragma endregion

#pragma region MAC
#if PLATFORM_MAC

    bool bSuccess = false;

    OutFilenames.Empty();

    // TODO: honor multi select flag.
    // TODO: set dialog title
    // TODO: set default file
    // TODO: enable file type filters.

    MainThreadCall(^{
        SCOPED_AUTORELEASE_POOL;
        id panel = id_OBJC_MSGSEND((id)objc_getClass("NSOpenPanel"), sel_getUid("openPanel"));
        void_OBJC_MSGSEND_bool(panel, sel_getUid("setCanChooseFiles:"), YES);
        void_OBJC_MSGSEND_bool(panel, sel_getUid("setCanChooseDirectories:"), NO);
        void_OBJC_MSGSEND_bool(panel, sel_getUid("setAllowsMultipleSelection:"), YES);
        void_OBJC_MSGSEND_id(panel, sel_getUid("setDirectoryURL:"),
            id_OBJC_MSGSEND_id((id)objc_getClass("NSURL"), sel_getUid("fileURLWithPath:"),
            id_OBJC_MSGSEND_cstr((id)objc_getClass("NSString"), sel_getUid("stringWithUTF8String:"), TCHAR_TO_UTF8(&DefaultPath))));
        int response = int_OBJC_MSGSEND(panel, sel_getUid("runModal"));

        if (response == NSModalResponseOK) {
            id URLs = id_OBJC_MSGSEND(panel, sel_getUid("URLs"));
            int num_URLs = int_OBJC_MSGSEND(URLs, sel_getUid("count"));
            for (int i = 0; i < num_URLs; ++i) {
                id fileURL = id_OBJC_MSGSEND_int(URLs, sel_getUid("objectAtIndex:"), i);
                id path = id_OBJC_MSGSEND(fileURL, sel_getUid("path"));
                const char *path_utf8 = cstr_OBJC_MSGSEND(path, sel_getUid("UTF8String"));
	        OutFilenames.Add(FString(path_utf8));
            }
        }
    }, UnrealShowEventMode, true);

    return OutFilenames.Num() > 0;

#endif
#pragma endregion
}


void UAssimpFunctionLibrary::ImportScenes(TArray<FString> InFilenames, UObject* WorldContextObject,
                                          TArray<UAIScene*>& Scenes, int Flags, bool DisableAutoSpaceChange)
{
	Assimp::DefaultLogger::set(new UEAssimpStream());

	for (FString FileName : InFilenames)
	{
		UAIScene* Object = UAssimpFunctionLibrary::ImportScene(FileName, WorldContextObject, Flags, DisableAutoSpaceChange);
		if (Object != nullptr)
                {
			Scenes.Add(Object);
                }
	}
}

UAIScene* UAssimpFunctionLibrary::ImportScene(FString FileName, UObject* WorldContextObject, int Flags, bool DisableAutoSpaceChange)
{
	Assimp::DefaultLogger::set(new UEAssimpStream());

        if (!DisableAutoSpaceChange) {
            Flags |= aiProcess_MakeLeftHanded | aiProcessPreset_TargetRealtime_Quality;
			//Flags |= aiProcess_ConvertToLeftHanded | aiProcessPreset_TargetRealtime_Quality;
        }

	const struct aiScene* scene = aiImportFile(TCHAR_TO_UTF8(*FileName), (unsigned int)Flags);

	if (!scene)
	{
		UE_LOG(LogAssimp, Error, TEXT("Error importing scene in assimpfunction library "))
		return nullptr;
	}
	else
	{
		UAIScene* Object = UAIScene::InternalConstructNewScene(scene, DisableAutoSpaceChange);
		Object->FullFilePath=FileName;
		return Object;
	}
}



//void UAssimpFunctionLibrary::ImportScenesAsync(TArray<FString> InFilenames,UObject* WorldContextObject, int Flags, bool DisableAutoSpaceChange,FOnProgressUpdated OnProgressUpdated,FOnImportSceneComplete OnImportSceneComplete)
//{
//
//	//I'm a noob in realms of async if you find a better way to keep data do a pull request
//	Assimp::DefaultLogger::set(new UEAssimpStream());
//
//	if (!DisableAutoSpaceChange) {
//		Flags |= aiProcess_MakeLeftHanded | aiProcessPreset_TargetRealtime_Quality;
//	}
//	
//	static  int NumOfThreads=0;
//	static int TotalThreads=0;
//	NumOfThreads=TotalThreads=InFilenames.Num();
//	static TArray<UAIScene*> AIScenes;
//	AIScenes.Empty();
//	
//	if(NumOfThreads==0)
//	{
//		return;
//	}
//
//	for( FString FileName:InFilenames)
//	{
//		FString FullPath = FileName;
//
//		AsyncTask(ENamedThreads::AnyNormalThreadNormalTask,[FullPath, Flags, DisableAutoSpaceChange, WorldContextObject, OnProgressUpdated, OnImportSceneComplete]()
//	   { 
//			const struct aiScene* scene = aiImportFile( TCHAR_TO_UTF8( *FullPath), (unsigned int)Flags);
//
//			if( !scene) {
//
//				UE_LOG(LogAssimp,Error,TEXT("Error importing scene in assimpfunction library async"))
//				
//			}else
//			{
//		   AsyncTask(ENamedThreads::GameThread,[scene, FullPath, DisableAutoSpaceChange, WorldContextObject, OnProgressUpdated, OnImportSceneComplete]()
//		   {
//							
//			   UAIScene* Object= UAIScene::InternalConstructNewScene_A(scene,DisableAutoSpaceChange);
//
//			   Object->OnBuildFinished.AddLambda(
//				   [Object, FullPath, WorldContextObject,
//				   OnProgressUpdated, OnImportSceneComplete]()
//				   {
//					   Object->FullFilePath = FullPath;
//
//					   NumOfThreads = NumOfThreads - 1;
//					   AIScenes.Add(Object);
//
//					   OnProgressUpdated.Execute(
//						   1.f - static_cast<float>(NumOfThreads) / TotalThreads,
//						   Object
//					   );
//
//					   if (NumOfThreads == 0)
//					   {
//						   const float EndTime =
//							   WorldContextObject->GetWorld()->GetTimeSeconds();
//
//						   OnImportSceneComplete.Execute(AIScenes);
//					   }
//				   }
//			   );
//		   });
//		}
//});
//	}
//}

FTransform UAssimpFunctionLibrary::aiMatToTransform(aiMatrix4x4 NodeTransform)
{
	FMatrix mtx;
	FTransform Transform;

	// Note that assimp matrix is transpose of Unreal matrix.
	// (The compiler will efficiently unroll these loops.)
	for (int j = 0; j < 4; ++j) {
		for (int i = 0; i < 4; ++i) {
			mtx.M[i][j] = NodeTransform[j][i];
		}
	}
	Transform = FTransform(mtx);

	return Transform;
}

bool UAssimpFunctionLibrary::ImportTextureAsyncC(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal, TFunction<void()> OnDone)
{
	if (!WorldContextObject || !AssimpMaterial || !AssimpScene || !DynamicMaterialUnreal)
	{
		if (OnDone) OnDone();
		UE_LOG(LogTemp, Warning, TEXT("ImportTextureAsync: Invalid input parameters."));
		return false;
	}

	FVector2D UVScale;
	FString Path;
	EAssimpReturn Result = AssimpMaterial->GetMaterialTexture(TextureType, UVScale, 0, Path, EAiTextureMapping::AiTextureMapping_UV);

	if (Result != EAssimpReturn::ReturnSuccess)
	{
		if (OnDone) OnDone();
		return false;
	}

	UTexture2D* EmbeddedTex = AssimpScene->GetEmbeddedTexture(Path, (TextureType == EAiTextureType::AiTextureType_NORMALS));
	if (UKismetSystemLibrary::IsValid(EmbeddedTex))
	{
		DynamicMaterialUnreal->SetTextureParameterValue(DynamicMaterialParamName, EmbeddedTex);
		if (OnDone) OnDone();
		return true;
	}

	FString FilePath = Path;
	FPaths::NormalizeFilename(FilePath);
	if (FPaths::IsRelative(FilePath))
	{
		FilePath = FPaths::ConvertRelativePathToFull(FilePath);
	}

	Async(EAsyncExecution::ThreadPool, [WorldContextObject, FilePath, TextureType, DynamicMaterialUnreal, DynamicMaterialParamName, OnDone]()
		{
			if (!FPaths::FileExists(FilePath))
			{
				UE_LOG(LogTemp, Warning, TEXT("Texture file not found: %s"), *FilePath);
				if (OnDone) OnDone();
				return;
			}

			TArray<uint8> FileData;
			if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to load texture file: %s"), *FilePath);
				if (OnDone) OnDone();
				return;
			}

			IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
			EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(FileData.GetData(), FileData.Num());
			if (ImageFormat == EImageFormat::Invalid)
			{
				UE_LOG(LogTemp, Warning, TEXT("Unsupported texture format: %s"), *FilePath);
				if (OnDone) OnDone();
				return;
			}

			TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
			if (!ImageWrapper.IsValid() || !ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num()))
			{
				UE_LOG(LogTemp, Warning, TEXT("Invalid image wrapper: %s"), *FilePath);
				if (OnDone) OnDone();
				return;
			}

			TArray<uint8> UncompressedBGRA;
			if (!ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to decode texture: %s"), *FilePath);
				if (OnDone) OnDone();
				return;
			}

			const int32 Width = ImageWrapper->GetWidth();
			const int32 Height = ImageWrapper->GetHeight();

			AsyncTask(ENamedThreads::GameThread, [DynamicMaterialUnreal, DynamicMaterialParamName, UncompressedBGRA, Width, Height, TextureType, OnDone]()
				{
					UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
					if (!Texture)
					{
						UE_LOG(LogTemp, Warning, TEXT("Failed to create transient texture."));
						if (OnDone) OnDone();
						return;
					}

					void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
					FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
					Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

					if (TextureType == EAiTextureType::AiTextureType_NORMALS)
					{
						Texture->CompressionSettings = TC_Normalmap;
						Texture->SRGB = false;
					}
					else
					{
						Texture->CompressionSettings = TC_Default;
						Texture->SRGB = true;
					}


					Texture->UpdateResource();

					if (DynamicMaterialUnreal)
					{
						DynamicMaterialUnreal->SetTextureParameterValue(DynamicMaterialParamName, Texture);
					}

					UE_LOG(LogTemp, Log, TEXT("Async texture loaded: %dx%d from %s"), Width, Height, *DynamicMaterialParamName.ToString());

					if (OnDone) OnDone();
				});
		});

	return true;

}

bool UAssimpFunctionLibrary::ImportTextureAsync(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal)
{
	return ImportTextureAsyncC(WorldContextObject, TextureType, DynamicMaterialParamName, AssimpScene, AssimpMaterial, DynamicMaterialUnreal, []() {});
}

void UAssimpFunctionLibrary::ProcessNodes(UObject* WorldContextObject, UAINode* RootNode, const TArray<UMaterialInstanceDynamic*>& Materials)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World) return;
	if (!RootNode) return;

	static UClass* DynMeshClass = ADynamicMeshActor::StaticClass();

	static FActorSpawnParameters SpawnParams;
	static bool bSpawnParamsInitialized = false;
	if (!bSpawnParamsInitialized)
	{
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		// SpawnParams.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
		bSpawnParamsInitialized = true;
	}

	const FTransform LocalOffset(
		FQuat(FRotator::ZeroRotator),        
		FVector(100.f, 100.f, 100.f),        
		FVector(100.f, 100.f, 100.f)         
	);

	const FTransform RootTransform = RootNode->GetRootTransform();
	const FTransform DefaultTransform = RootTransform * LocalOffset;

	TArray<UAINode*> NodeStack;
	NodeStack.Push(RootNode);

	while (NodeStack.Num() > 0)
	{
		UAINode* CurrentNode = NodeStack.Pop();
		if (!CurrentNode)
			continue;

		TArray<UAIMesh*> Meshes;
		CurrentNode->GetNodeMeshes(Meshes);

		for (UAIMesh* Mesh : Meshes)
		{
			if (!Mesh) continue;

			int32 MatIndex = Mesh->GetMaterialIndex();

			ADynamicMeshActor* SpawnedActor = World->SpawnActor<ADynamicMeshActor>(DynMeshClass, DefaultTransform, SpawnParams);
			if (!SpawnedActor)
			{
				UE_LOG(LogTemp, Warning, TEXT("SpawnActor failed for mesh in node %s"), *CurrentNode->GetName());
				continue;
			}

			auto* DynComp =  SpawnedActor->GetDynamicMeshComponent();

			if (!DynComp) continue;


			DynComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			DynComp->SetMobility(EComponentMobility::Movable);
			DynComp->SetDynamicMesh(Mesh->GetDynamicMesh());

			if (Materials.IsValidIndex(MatIndex))
			{
				DynComp->SetMaterial(0, Materials[MatIndex]);
				DynComp->EnableComplexAsSimpleCollision();
			}

		}

		const TArray<UAINode*>& Children = CurrentNode->GetChildNodes();
		for (int32 i = 0; i < Children.Num(); i++)
		{
			if (Children[i])
				NodeStack.Push(Children[i]);
		}
	}
}

void UAssimpFunctionLibrary::CreateScences(UObject* WorldContextObject, TArray<UAIScene*> AIScenes, class UMaterialInterface* Parent)
{
	TArray<UMaterialInstanceDynamic*> Materials;
	for (UAIScene* AIScene : AIScenes)
	{
		if (!AIScene) continue;
		Materials.Empty();
		TArray<UAIMaterial*> AIMaterials = AIScene->GetAllMaterials();
		for (UAIMaterial* AIMaterial : AIMaterials)
		{
			UMaterialInstanceDynamic* UEMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(WorldContextObject, Parent);
			Materials.Add(UEMaterial);
			bool IsImport = ImportTextureAsync(WorldContextObject, EAiTextureType::AiTextureType_DIFFUSE,"BaseColor", AIScene, AIMaterial, UEMaterial);
			if (!IsImport)
			{
				Materials[Materials.Num() - 1]->SetScalarParameterValue("UseBaseColorConstant", 1.0);
				FLinearColor BaseColor;
				AIMaterial->GetMaterialBaseColor(BaseColor);
				Materials[Materials.Num() - 1]->SetVectorParameterValue("BaseColorConstant", BaseColor);
			}
			ImportTextureAsync(WorldContextObject, EAiTextureType::AiTextureType_NORMALS, "Normal", AIScene, AIMaterial, UEMaterial);
			ImportTextureAsync(WorldContextObject, EAiTextureType::AiTextureType_METALNESS, "Metallic", AIScene, AIMaterial, UEMaterial);
			ImportTextureAsync(WorldContextObject, EAiTextureType::AiTextureType_SHININESS, "Roughness", AIScene, AIMaterial, UEMaterial);
			ImportTextureAsync(WorldContextObject, EAiTextureType::AiTextureType_EMISSIVE, "Emissive", AIScene, AIMaterial, UEMaterial);
			UEMaterial->SetScalarParameterValue("Opacity", 1.0);
			
		}

		ProcessNodes(WorldContextObject, AIScene->GetRootNode(), Materials);
	}
}


FString UAssimpFunctionLibrary::GetBoneName(FAIBone Bone)
{
	return UTF8_TO_TCHAR(Bone.Bone->mName.C_Str());
}

int UAssimpFunctionLibrary::GetNumOfWeights(FAIBone Bone)
{
	return Bone.Bone->mNumWeights;
}

FTransform UAssimpFunctionLibrary::GetBoneTransform(FAIBone Bone)
{
	return UAssimpFunctionLibrary::aiMatToTransform(Bone.Bone->mOffsetMatrix);
}

void UAssimpFunctionLibrary::GetBoneWeights(FAIBone Bone, TArray<FAIVertexWeight>& Weights)
{
	for (unsigned int i = 0; i < Bone.Bone->mNumWeights; i++)
	{
		FAIVertexWeight Weight = FAIVertexWeight(Bone.Bone->mWeights[i]);
		Weights.Add(Weight);
	}
}

FString UAssimpFunctionLibrary::GetTexturePath(const UAIScene* Scene, const UAIMaterial* Material, EAiTextureType TextureType)
{
	if (Scene && Material)
	{
		return Material->GetTexturePath(TextureType);
	}
	return FString();
}

bool UAssimpFunctionLibrary::HasTexture(const UAIScene* Scene, const UAIMaterial* Material, EAiTextureType TextureType)
{
	if (Scene && Material)
	{
		return Material->HasTexture(TextureType);
	}
	return false;
}

void UAssimpFunctionLibrary::SetActorNameDebug(AActor* InActor, FString ActorName)
{


	//we intend to use this only for debugging inside editor
#if WITH_EDITOR  
	InActor->Rename(*ActorName);
	InActor->SetActorLabel(*ActorName);
#endif //  
}

void UAssimpImportContext::StartNextTask(int32 Flags, bool DisableAutoSpaceChange, int32 MaxMeshesVal, int32 MaxCamerasVal, int32 MaxLightsVal, int32 MaxMaterialsVal, int32 MaxNodesVal, float HandleTime)
{
	if (bCancelled || PendingFiles.Num() == 0 || RunningTasks.GetValue() >= MaxConcurrentTasks)
	{
		return;
	}


	const FString File = PendingFiles.Pop(false);
	RunningTasks.Increment();

	TWeakObjectPtr<UAssimpImportContext> WeakThis(this);

	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask,
		[WeakThis, File, Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime]()
		{
			if (!WeakThis.IsValid())
			{
				return;
			}
			UAssimpImportContext* ImportContext = WeakThis.Get();
			if (ImportContext->bCancelled)
			{
				ImportContext->RunningTasks.Decrement();
				return;
			}

			Assimp::DefaultLogger::set(new UEAssimpStream());

			const aiScene* Scene = aiImportFile(TCHAR_TO_UTF8(*File), (unsigned int)Flags);

			AsyncTask(ENamedThreads::GameThread,
				[WeakThis, Scene, File, Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime]()
				{
					if (!WeakThis.IsValid())
					{
						return;
					}
					UAssimpImportContext* ContextPtr = WeakThis.Get();
					if (ContextPtr->bCancelled)
					{
						return;
					}
					ContextPtr->RunningTasks.Decrement();

					UAIScene* SceneObj = nullptr;

					if (Scene)
					{

						SceneObj = UAIScene::InternalConstructNewScene_A(ContextPtr->WorldContextObject, Scene, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime);
						ContextPtr->ResultScenes.Add(SceneObj);
						SceneObj->OnBuildFinished.AddLambda([WeakThis, File, Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime](UAIScene* BuiltScene)
							{
								if (!WeakThis.IsValid())
								{
									return;
								}
								UAssimpImportContext* Self = WeakThis.Get();
								if (Self->bCancelled)
								{
									return;
								}

								BuiltScene->FullFilePath = File;

								

								const int32 Finished = Self->FinishedCount.Increment();

								if (Self->OnProgressUpdated.IsBound())
								{
									Self->OnProgressUpdated.Execute((float)Finished / (float)Self->TotalCount, BuiltScene);
								}


								Self->StartNextTask(Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime);

								if (Finished == Self->TotalCount)
								{
									const double EndTime = FPlatformTime::Seconds();
									UE_LOG(LogAssimp, Log,
										TEXT("Import finished: %d success, %d failed, time %.2fs"),
										Self->ResultScenes.Num(),
										Self->FailedFiles.Num(),
										EndTime - Self->StartTime);

									if (Self->FailedFiles.Num() > 0)
									{
										UE_LOG(LogAssimp, Warning, TEXT("Failed files:"));
										for (const FString& F : Self->FailedFiles)
										{
											UE_LOG(LogAssimp, Warning, TEXT("  %s"), *F);
										}
									}

									if (Self->OnImportSceneComplete.IsBound())
									{
										for (TObjectPtr<UAIScene> CurrentBuiltScene : Self->ResultScenes)
										{
											if (CurrentBuiltScene)
											{
												if (CurrentBuiltScene->IsRooted())
												{
													CurrentBuiltScene->RemoveFromRoot();
												}
											}
										}
										Self->OnImportSceneComplete.Execute(Self->ResultScenes);
									}

									if (Self->IsRooted())
									{
										Self->RemoveFromRoot();
									}
								}
							});
					}
					else
					{

						ContextPtr->FailedFiles.Add(File);
						const int32 Finished = ContextPtr->FinishedCount.Increment();

						UE_LOG(LogAssimp, Error, TEXT("Assimp import failed: %s"), *File);


						ContextPtr->StartNextTask(Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime);


						if (Finished == ContextPtr->TotalCount)
						{
							const double EndTime = FPlatformTime::Seconds();
							UE_LOG(LogAssimp, Log,
								TEXT("Import finished: %d success, %d failed, time %.2fs"),
								ContextPtr->ResultScenes.Num(),
								ContextPtr->FailedFiles.Num(),
								EndTime - ContextPtr->StartTime);

							if (ContextPtr->FailedFiles.Num() > 0)
							{
								UE_LOG(LogAssimp, Warning, TEXT("Failed files:"));
								for (const FString& F : ContextPtr->FailedFiles)
								{
									UE_LOG(LogAssimp, Warning, TEXT("  %s"), *F);
								}
							}

							if (ContextPtr->OnImportSceneComplete.IsBound())
							{
								for (TObjectPtr<UAIScene> CurrentBuiltScene : ContextPtr->ResultScenes)
								{
									if (CurrentBuiltScene)
									{
										if (CurrentBuiltScene->IsRooted())
										{
											CurrentBuiltScene->RemoveFromRoot();
										}
									}
								}
								ContextPtr->OnImportSceneComplete.Execute(ContextPtr->ResultScenes);
							}

							if (ContextPtr->IsRooted())
							{
								ContextPtr->RemoveFromRoot();
							}
						}
					}
				});
		});
}

void UAssimpImportContext::Cancel()
{
	bCancelled = true;
}

UAssimpImportContext* UAssimpFunctionLibrary::ImportScenesAsync(
	const TArray<FString>& InFilenames,
	UObject* WorldContextObject,
	int32 Flags,
	bool DisableAutoSpaceChange,
	int32 MaxConcurrentTasks,
	int32 MaxMeshesVal,
	int32 MaxCamerasVal,
	int32 MaxLightsVal,
	int32 MaxMaterialsVal,
	int32 MaxNodesVal,
	float HandleTime,
	FOnProgressUpdated OnProgressUpdated,
	FOnImportSceneComplete OnImportSceneComplete)
{
	if (InFilenames.Num() == 0)
	{
		return nullptr;
	}

	Assimp::DefaultLogger::set(new UEAssimpStream());

	if (!DisableAutoSpaceChange)
	{
		Flags |= aiProcess_MakeLeftHanded |
			aiProcessPreset_TargetRealtime_Quality;
	}

	UAssimpImportContext* Context = NewObject<UAssimpImportContext>(WorldContextObject);


	Context->WorldContextObject = WorldContextObject;
	const int32 LogicalCores = FMath::Max(1, FPlatformMisc::NumberOfCoresIncludingHyperthreads());
	const int32 PhysicalCores = FMath::Max(1, FPlatformMisc::NumberOfCores());
	const int32 RecommendedMaxTasks = FMath::Clamp(PhysicalCores / 3, 1, 4);
	const int32 RequestedTasks = (MaxConcurrentTasks <= 0) ? RecommendedMaxTasks : MaxConcurrentTasks;
	Context->MaxConcurrentTasks = FMath::Clamp(RequestedTasks, 1, RecommendedMaxTasks);

	UE_LOG(LogAssimp, Log,
		TEXT("Async import concurrency: requested=%d, clamped=%d, recommendedMax=%d (physical=%d, logical=%d)"),
		MaxConcurrentTasks,
		Context->MaxConcurrentTasks,
		RecommendedMaxTasks,
		PhysicalCores,
		LogicalCores);

	Context->TotalCount = InFilenames.Num();
	Context->PendingFiles = InFilenames;
	Context->OnProgressUpdated = OnProgressUpdated;
	Context->OnImportSceneComplete = OnImportSceneComplete;
	Context->StartTime = FPlatformTime::Seconds();

	for (int32 i = 0; i < Context->MaxConcurrentTasks; ++i)
	{
		Context->StartNextTask(Flags, DisableAutoSpaceChange, MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime);
	}

	return Context;
}

void UAssimpFunctionLibrary::CancelImport(UAssimpImportContext* Context)
{
	if (Context)
	{
		Context->Cancel();
	}
}

