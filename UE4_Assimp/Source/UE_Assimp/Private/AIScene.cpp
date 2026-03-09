// Fill out your copyright notice in the Description page of Project Settings.


#include "AIScene.h"

#include "AICamera.h"
#include "AILight.h"
#include "AIMesh.h"
#include "AINode.h"
#include "AIMaterial.h"
#include "AssimpMesh.h"
#include "assimp/cimport.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "Rendering/Texture2DResource.h"


UAIScene* UAIScene::InternalConstructNewScene(const aiScene* Scene, const bool DisableAutoSpaceChange)
{
	if (!Scene)
	{
		UE_LOG(LogAssimp, Error, TEXT("InternalConstructNewScene called with null aiScene"));
		return nullptr;
	}

	//todo check if object is already created and skip creation and return object 
	UAIScene* SceneObject = NewObject<UAIScene>();
	SceneObject->scene = const_cast<aiScene*>(Scene);
	//Setup Meshes
	const unsigned NumMeshes = Scene->mNumMeshes;
	const unsigned NumLights = Scene->mNumLights;
	const unsigned NumCameras = Scene->mNumCameras;
	const unsigned NumMaterials = Scene->mNumMaterials;

	SceneObject->OwnedMeshes.Reset();
	SceneObject->OwnedMeshes.AddUninitialized(NumMeshes);
	SceneObject->OwnedLights.Reset();
	if (NumLights > 0) SceneObject->OwnedLights.AddUninitialized(NumLights);

	SceneObject->OwnedCameras.Reset();
	if (NumCameras > 0) SceneObject->OwnedCameras.AddUninitialized(NumCameras);

	SceneObject->OwnedMaterials.Reset();
	if (NumMaterials > 0) SceneObject->OwnedMaterials.AddUninitialized(NumMaterials);


        //Add Meshes
	if (Scene->HasMeshes())
	{
		for (unsigned Index = 0; Index < NumMeshes; ++Index)
		{
			UAIMesh* Mesh = NewObject<UAIMesh>(SceneObject, UAIMesh::StaticClass(), NAME_None, RF_Transient);
			Mesh->Mesh = Scene->mMeshes[Index];
			SceneObject->OwnedMeshes[Index] = Mesh;
		}
	}

	//Add Cams
	if (Scene->HasCameras())
	{
		for (unsigned Index = 0; Index < NumCameras; ++Index)
		{
			UAICamera* Camera = NewObject<UAICamera>(SceneObject, UAICamera::StaticClass(), NAME_None, RF_Transient);
			Camera->camera = Scene->mCameras[Index];
			SceneObject->OwnedCameras[Index] = Camera;
		}
	}

	//Add Lights
	if (Scene->HasLights())
	{
		for (unsigned Index = 0; Index < NumLights; ++Index)
		{
			UAILight* Light = NewObject<UAILight>(SceneObject, UAILight::StaticClass(), NAME_None, RF_Transient);
			Light->Light = Scene->mLights[Index];
			SceneObject->OwnedLights[Index] = Light;
		}
	}

	//Add Materials
	if (Scene->HasMaterials())
	{
		for (unsigned Index = 0; Index < NumMaterials; ++Index)
		{
			UAIMaterial* Material = NewObject<UAIMaterial>(SceneObject, UAIMaterial::StaticClass(), NAME_None, RF_Transient);
			Material->Material = Scene->mMaterials[Index];
			SceneObject->OwnedMaterials[Index] = Material;
		}
	}

        //Build Node Tree
	UAINode* RootNode = NewObject<UAINode>(SceneObject, UAINode::StaticClass(), NAME_None, RF_Transient);
	SceneObject->OwnedRootNode = RootNode;


        // If assimp scene does not have UnitScaleFactor in metadata, presume 1.0f
	float ParsedScale = 1.0f;
	bool bGotScale = false;
	if (Scene->mMetaData)
	{
		bGotScale = Scene->mMetaData->Get("UnitScaleFactor", ParsedScale);
	}
	if (!bGotScale || ParsedScale == 0.f)
	{
		ParsedScale = 1.0f;
		UE_LOG(LogAssimp, Verbose, TEXT("No valid UnitScaleFactor in metadata; using 1.0"));
	}
	SceneObject->SceneScale = ParsedScale;
	UE_LOG(LogAssimp, Log, TEXT("UAIScene: UnitScaleFactor = %g"), SceneObject->SceneScale);

        // The "parent" transform of the root node is an identity matrix.
        // However, we optionally apply the UnitScaleFactor and an x-rotation to move from y-up to z-up.
	aiMatrix4x4t<float> AdjustmentXfm; // identity by default
	if (!DisableAutoSpaceChange)
	{
		aiMatrix4x4t<float> tmpRot;
		aiMatrix4x4t<float> tmpScale;
		aiMatrix4x4t<float>::RotationX(PI / 2.0, tmpRot);
		aiMatrix4x4t<float>::Scaling(aiVector3t<float>(SceneObject->SceneScale), tmpScale);
		AdjustmentXfm = tmpScale * tmpRot;
	}

	if (Scene->mRootNode)
	{
		RootNode->Setup(Scene->mRootNode, SceneObject, AdjustmentXfm);

		if (!DisableAutoSpaceChange)
		{
			Scene->mRootNode->mTransformation = AdjustmentXfm * Scene->mRootNode->mTransformation;
		}
	}
	else
	{
		UE_LOG(LogAssimp, Warning, TEXT("Assimp scene has no root node"));
	}

	return SceneObject;
}

UAIScene* UAIScene::InternalConstructNewScene_A(UObject* WorldContextObject, const aiScene* Scene, const bool DisableAutoSpaceChange, int32 MaxMeshesVal, int32 MaxCamerasVal, int32 MaxLightsVal, int32 MaxMaterialsVal, int32 MaxNodesVal, float HandleTime)
{
	if (!Scene)
	{
		UE_LOG(LogAssimp, Error, TEXT("InternalConstructNewScene called with null aiScene"));
		return nullptr;
	}

	//todo check if object is already created and skip creation and return object 
	UAIScene* SceneObject = NewObject<UAIScene>(WorldContextObject);
	SceneObject->SourceScene = Scene;
	SceneObject->scene = const_cast<aiScene*>(Scene);
	SceneObject->SetBuildVal(MaxMeshesVal, MaxCamerasVal, MaxLightsVal, MaxMaterialsVal, MaxNodesVal, HandleTime);

	//Setup Meshes
	SceneObject->OwnedMeshes.SetNum(Scene->mNumMeshes);
	SceneObject->OwnedCameras.SetNum(Scene->mNumCameras);
	SceneObject->OwnedLights.SetNum(Scene->mNumLights);
	SceneObject->OwnedMaterials.SetNum(Scene->mNumMaterials);

	SceneObject->AdjustmentXfm = aiMatrix4x4();

	if (!DisableAutoSpaceChange)
	{
		aiMatrix4x4 Rot, Scale;
		aiMatrix4x4::RotationX(PI / 2.f, Rot);
		aiMatrix4x4::Scaling(aiVector3D(SceneObject->SceneScale), Scale);
		SceneObject->AdjustmentXfm = Scale * Rot;
	}

	SceneObject->BuildPhase = EAISceneBuildPhase::Meshes;
	SceneObject->BuildIndex = 0;
	SceneObject->bNodesPhaseInitialized = false;
	SceneObject->bBuildFinished = false;


	SceneObject->OwnerWorld = WorldContextObject->GetWorld();


	if (!SceneObject->GetWorld())
	{
		UE_LOG(LogAssimp, Error, TEXT("GetWorld() is nullptr in StartTimer"));
		return SceneObject;
	}
	UE_LOG(LogAssimp, Error, TEXT("GetWorld() is valid in StartTimer"));
	SceneObject->GetWorld()->GetTimerManager().SetTimer(
		SceneObject->BuildTimer,
		SceneObject,
		&UAIScene::TickBuild,
		SceneObject->LoopBuildHandleTime,
		true
	);

	return SceneObject;

}

void UAIScene::StartTimer()
{
	if (!GetWorld())
	{
		UE_LOG(LogAssimp, Error, TEXT("GetWorld() is nullptr in StartTimer"));
		return;
	}

	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, FName("TickBuild"));

	GetWorld()->GetTimerManager().SetTimer(
		BuildTimer,
		TimerDelegate,
		LoopBuildHandleTime,
		true
	);
}


float UAIScene::GetUnitScaleFactor()
{
	return SceneScale;
}

void UAIScene::SetBuildVal(int32 MaxMeshes, int32 MaxCameras, int32 MaxLights, int32 MaxMaterials, int32 MaxNodes, float HandleTime)
{
	MaxMeshesPerFrame = MaxMeshes;

	MaxCamerasPerFrame = MaxCameras;

	MaxLightsPerFrame = MaxLights;

	MaxMaterialsPerFrame = MaxMaterials;

	MaxNodesPerFrame = MaxNodes;

	LoopBuildHandleTime = HandleTime;
}


TArray<UMeshComponent*> UAIScene::SpawnAllMeshes(FTransform Transform, TSubclassOf<AActor> ClassToSpawn)
{
	//TODO 
	TArray<UMeshComponent*> SpawnedComponents;

	if (!scene)
	{
		UE_LOG(LogAssimp, Error, TEXT("SpawnAllMeshes: scene is null"));
		return SpawnedComponents;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogAssimp, Error, TEXT("SpawnAllMeshes: cannot find world to spawn actors - ensure this is called from a context with a valid World"));
		return SpawnedComponents;
	}

	if (!ClassToSpawn)
	{
		UE_LOG(LogAssimp, Error, TEXT("SpawnAllMeshes: ClassToSpawn is null"));
		return SpawnedComponents;
	}

	for (UAIMesh* MeshWrapper : OwnedMeshes)
	{
		if (!MeshWrapper || !MeshWrapper->Mesh)
		{
			continue;
		}


		FActorSpawnParameters Params;
		AActor* SpawnedActor = World->SpawnActor<AActor>(ClassToSpawn, Transform, Params);
		if (!SpawnedActor)
		{
			UE_LOG(LogAssimp, Warning, TEXT("SpawnAllMeshes: Failed to spawn actor for mesh"));
			continue;
		}

		if (!SpawnedActor->GetRootComponent())
		{
			USceneComponent* RootComp = NewObject<USceneComponent>(SpawnedActor, TEXT("RootComponent"));
			RootComp->RegisterComponent();
			SpawnedActor->SetRootComponent(RootComp);
		}

		UAssimpMesh* AssimpMeshComp = NewObject<UAssimpMesh>(SpawnedActor, UAssimpMesh::StaticClass(), NAME_None, RF_Transient);
		if (!AssimpMeshComp)
		{
			UE_LOG(LogAssimp, Warning, TEXT("SpawnAllMeshes: Failed to create UAssimpMesh component"));
			SpawnedActor->Destroy();
			continue;
		}

		AssimpMeshComp->RegisterComponent();
		AssimpMeshComp->AttachToComponent(SpawnedActor->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
		AssimpMeshComp->SetWorldLocation(Transform.GetLocation());
		AssimpMeshComp->SetWorldRotation(Transform.GetRotation());
		AssimpMeshComp->SetupMesh(MeshWrapper);

		SpawnedComponents.Add(AssimpMeshComp);
	}

	return SpawnedComponents;
}

const TArray<UAIMesh*>& UAIScene::GetAllMeshes() const
{
	return OwnedMeshes;
}


const TArray<UAIMaterial*>& UAIScene::GetAllMaterials() const
{
	return OwnedMaterials;
}

void UAIScene::BeginDestroy()
{
	if (scene)
	{
		aiReleaseImport(scene);
		scene = nullptr;
	}

	if (OwnerWorld)
	{
		OwnerWorld->GetTimerManager().ClearTimer(BuildTimer);
	}

	Super::BeginDestroy();
}


UAINode* UAIScene::GetRootNode()
{
	return OwnedRootNode;
}

UAIMesh* UAIScene::GetMeshAtIndex(int Index)
{
	if (OwnedMeshes.IsValidIndex(Index))
	{
		return OwnedMeshes[Index];
	}
	UE_LOG(LogAssimp, Warning, TEXT("GetMeshAtIndex: index %d out of range (0..%d)"), Index, OwnedMeshes.Num() - 1);
	return nullptr;
}

const TArray<UAICamera*>& UAIScene::GetAllCameras() const
{
	return OwnedCameras;
}

const TArray<UAILight*>& UAIScene::GetAllLights() const
{
	return OwnedLights;
}

UTexture2D* UAIScene::GetEmbeddedTexture(FString FilePath, bool bIsNormalMap)
{
	if (!scene)
	{
		UE_LOG(LogAssimp, Error, TEXT("GetEmbeddedTexture: scene is null"));
		return nullptr;
	}

	const aiTexture* EmbedTexture = scene->GetEmbeddedTexture(TCHAR_TO_UTF8(*FilePath));
	if (!EmbedTexture)
	{
		UE_LOG(LogAssimp, Log, TEXT("Embedded texture '%s' not found. Might be external."), *FilePath);
		return nullptr;
	}

	UTexture2D* Result = nullptr;

	if (EmbedTexture->mHeight != 0)
	{
		const int TextureWidth = EmbedTexture->mWidth;
		const int TextureHeight = EmbedTexture->mHeight;
		const EPixelFormat PixelFormat = PF_B8G8R8A8;


		Result = UTexture2D::CreateTransient(TextureWidth, TextureHeight, PixelFormat);
		if (!Result)
		{
			UE_LOG(LogAssimp, Error, TEXT("GetEmbeddedTexture: Failed to create transient texture"));
			return nullptr;
		}
#if ENGINE_MAJOR_VERSION > 4
		FTexturePlatformData* PlatformData = Result->GetPlatformData();
#else
		FTexturePlatformData* PlatformData = Result->PlatformData;
#endif
		if (!PlatformData || PlatformData->Mips.Num() == 0)
		{
			UE_LOG(LogAssimp, Error, TEXT("GetEmbeddedTexture: PlatformData or Mips missing"));
			return nullptr;
		}

		void* LockedData = PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		if (!LockedData)
		{
			UE_LOG(LogAssimp, Error, TEXT("GetEmbeddedTexture: failed locking mip bulk data"));
			return nullptr;
		}

		const int PixelCount = TextureWidth * TextureHeight;
		uint8* Dest = static_cast<uint8*>(LockedData);
		for (int32 Y = 0; Y < TextureHeight; ++Y)
		{
			for (int32 X = 0; X < TextureWidth; ++X)
			{
				const int32 Idx = (Y * TextureWidth) + X;
				const aiTexel& Px = EmbedTexture->pcData[Idx];
				// write in RGBA order
				Dest[4 * Idx + 0] = Px.r;
				Dest[4 * Idx + 1] = Px.g;
				Dest[4 * Idx + 2] = Px.b;
				Dest[4 * Idx + 3] = Px.a;
			}
		}

		PlatformData->Mips[0].BulkData.Unlock();
		Result->UpdateResource();
	}
	else
	{
		const size_t SizeInBytes = static_cast<size_t>(EmbedTexture->mWidth);
		if (SizeInBytes == 0 || !EmbedTexture->pcData)
		{
			UE_LOG(LogAssimp, Warning, TEXT("GetEmbeddedTexture: compressed texture has zero size or null data"));
			return nullptr;
		}

		const unsigned char* BinaryData = reinterpret_cast<const unsigned char*>(EmbedTexture->pcData);
		TArray<uint8> Buffer;
		Buffer.Append(BinaryData, static_cast<int32>(SizeInBytes));

		UWorld* World = GetWorld();
		Result = UKismetRenderingLibrary::ImportBufferAsTexture2D(World, Buffer);
		if (!Result)
		{
			UE_LOG(LogAssimp, Warning, TEXT("GetEmbeddedTexture: ImportBufferAsTexture2D failed"));
			return nullptr;
		}
	}

	if (Result && bIsNormalMap)
	{
		Result->CompressionSettings = TC_Normalmap;
		Result->SRGB = false;
		Result->UpdateResource();
	}

	return Result;

}


EPixelFormat UAIScene::GetPixelFormat(const aiTexture* Texture)
{
	if (!Texture)
	{
		return PF_Unknown;
	}
	if (Texture->CheckFormat("rgba8888"))
	{
		return EPixelFormat::PF_R8G8B8A8;
	}
	UE_LOG(LogAssimp, Warning, TEXT("GetPixelFormat: unknown format - returning PF_Unknown"));
	return EPixelFormat::PF_Unknown;
}

 float UAIScene::GetSceneScale()
{
	return SceneScale;
}



 void UAIScene::TickBuild()
 {
	 if (!IsValid(this)) return;

	 int32 Count = 0;

	 while (Count < BuildBatchSize)
	 {
		 switch (BuildPhase)
		 {
		 case EAISceneBuildPhase::Meshes:
			 if (!StepBuildMeshes()) return;
			 break;

		 case EAISceneBuildPhase::Cameras:
			 if (!StepBuildCameras()) return;
			 break;

		 case EAISceneBuildPhase::Lights:
			 if (!StepBuildLights()) return;
			 break;

		 case EAISceneBuildPhase::Materials:
			 if (!StepBuildMaterials()) return;
			 break;

		 case EAISceneBuildPhase::Nodes:
			 if (!StepBuildNodes()) return;
			 break;

		 case EAISceneBuildPhase::Finished:
			 FinishBuild();
			 return;
		 }

		 ++Count;
	 }
 }

 void UAIScene::NotifyBuildFinished()
 {
	 OnBuildFinished.Broadcast(this);
 }

 bool UAIScene::StepBuildMeshes()
 {
	 int32 Processed = 0;
	 while (BuildIndex < SourceScene->mNumMeshes && Processed < MaxMeshesPerFrame)
	 {
		 UAIMesh* Mesh = NewObject<UAIMesh>(
			 this,
			 UAIMesh::StaticClass(),
			 NAME_None,
			 RF_Transient
		 );
		 Mesh->Mesh = SourceScene->mMeshes[BuildIndex];
		 OwnedMeshes[BuildIndex] = Mesh;

		 ++BuildIndex;
		 ++Processed;
	 }

	 if (BuildIndex >= SourceScene->mNumMeshes)
	 {
		 BuildPhase = EAISceneBuildPhase::Cameras;
		 BuildIndex = 0;
		 return true; 
	 }
	 return false;
 }


 bool UAIScene::StepBuildCameras()
 {
	 int32 Processed = 0;
	 while (BuildIndex < SourceScene->mNumCameras && Processed < MaxCamerasPerFrame)
	 {
		 UAICamera* Camera = NewObject<UAICamera>(
			 this,
			 UAICamera::StaticClass(),
			 NAME_None,
			 RF_Transient
		 );
		 Camera->camera = SourceScene->mCameras[BuildIndex];
		 OwnedCameras[BuildIndex] = Camera;

		 ++BuildIndex;
		 ++Processed;
	 }

	 if (BuildIndex >= SourceScene->mNumCameras)
	 {
		 BuildPhase = EAISceneBuildPhase::Lights;
		 BuildIndex = 0;
		 return true;
	 }
	 return false;
 }


 bool UAIScene::StepBuildLights()
 {
	 int32 Processed = 0;
	 while (BuildIndex < SourceScene->mNumLights && Processed < MaxLightsPerFrame)
	 {
		 UAILight* Light = NewObject<UAILight>(
			 this,
			 UAILight::StaticClass(),
			 NAME_None,
			 RF_Transient
		 );
		 Light->Light = SourceScene->mLights[BuildIndex];
		 OwnedLights[BuildIndex] = Light;

		 ++BuildIndex;
		 ++Processed;
	 }

	 if (BuildIndex >= SourceScene->mNumLights)
	 {
		 BuildPhase = EAISceneBuildPhase::Materials;
		 BuildIndex = 0;
		 return true;
	 }
	 return false;
 }


 bool UAIScene::StepBuildMaterials()
 {
	 int32 Processed = 0;
	 while (BuildIndex < SourceScene->mNumMaterials && Processed < MaxMaterialsPerFrame)
	 {
		 UAIMaterial* Material = NewObject<UAIMaterial>(
			 this,
			 UAIMaterial::StaticClass(),
			 NAME_None,
			 RF_Transient
		 );
		 Material->Material = SourceScene->mMaterials[BuildIndex];
		 OwnedMaterials[BuildIndex] = Material;

		 ++BuildIndex;
		 ++Processed;
	 }

	 if (BuildIndex >= SourceScene->mNumMaterials)
	 {
		 BuildPhase = EAISceneBuildPhase::Nodes;
		 BuildIndex = 0;
		 return true;
	 }
	 return false;
 }

 void UAIScene::BeginBuildNodeTree(aiNode* RootNode, const aiMatrix4x4& RootTransform)
 {
	 check(RootNode);
	 check(OwnedRootNode);

	 PendingNodeBuildQueue.Reset();

	 FAINodeBuildItem RootItem;
	 RootItem.AssimpNode = RootNode;
	 RootItem.UNode = OwnedRootNode;
	 RootItem.ParentTransform = RootTransform;

	 PendingNodeBuildQueue.Push(RootItem);

 }

 void UAIScene::InitNodesPhase()
 {
	 check(SourceScene && SourceScene->mRootNode);

	 OwnedRootNode = NewObject<UAINode>(
		 this,
		 UAINode::StaticClass(),
		 NAME_None,
		 RF_Transient
	 );

	 BeginBuildNodeTree(SourceScene->mRootNode, AdjustmentXfm);
	 bNodesPhaseInitialized = true;
 }


 bool UAIScene::StepBuildNodes()
 {

	 if (!bNodesPhaseInitialized)
	 {
		 InitNodesPhase();
	 }

	 int32 Processed = 0;
	 while (PendingNodeBuildQueue.Num() > 0 && Processed < MaxNodesPerFrame)
	 {
		 FAINodeBuildItem Item = PendingNodeBuildQueue.Pop();

		 aiNode* ANode = Item.AssimpNode;
		 UAINode* UNode = Item.UNode;

		 check(ANode && UNode);

		 const aiMatrix4x4 MyTransform = Item.ParentTransform * ANode->mTransformation;

		 UNode->Setup_A(ANode, MyTransform);

		 for (uint32 i = 0; i < ANode->mNumChildren; ++i)
		 {
			 aiNode* ChildANode = ANode->mChildren[i];

			 UAINode* ChildUNode = NewObject<UAINode>(this, UAINode::StaticClass(), NAME_None, RF_Transient);
			 UNode->OwnedNodes.Add(ChildUNode);

			 PendingNodeBuildQueue.Push({
				 ChildANode,
				 ChildUNode,
				 MyTransform
				 });
		 }

		 ++Processed;
	 }


	 if (PendingNodeBuildQueue.Num() == 0)
	 {
		 BuildPhase = EAISceneBuildPhase::Finished;
		 return true;  
	 }

	 return false;  
 }





 void UAIScene::FinishBuild()
 {
	 if (bBuildFinished)
		 return;

	 bBuildFinished = true;
	 GetWorld()->GetTimerManager().ClearTimer(BuildTimer);
	 UE_LOG(LogAssimp, Log, TEXT("UAIScene build finished"));
	 NotifyBuildFinished();
 }
