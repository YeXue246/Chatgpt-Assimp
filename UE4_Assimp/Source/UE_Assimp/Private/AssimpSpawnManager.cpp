// Fill out your copyright notice in the Description page of Project Settings.


#include "AssimpSpawnManager.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "UObject/UObjectGlobals.h"
#include "Kismet/KismetSystemLibrary.h"
#include "AIBone.h"
#include "AIScene.h"
#include "AINode.h"
#include "AIMesh.h"
#include "UE_Assimp.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "DynamicMeshActor.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DynamicMeshComponent.h"
#include "HAL/FileManager.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2D.h"
#include "Misc/Paths.h"

namespace
{
bool IsLinearColorTexture(const EAiTextureType TextureType)
{
    switch (TextureType)
    {
    case EAiTextureType::AiTextureType_NORMALS:
    case EAiTextureType::AiTextureType_NORMAL_CAMERA:
    case EAiTextureType::AiTextureType_METALNESS:
    case EAiTextureType::AiTextureType_DIFFUSE_ROUGHNESS:
    case EAiTextureType::AiTextureType_SHININESS:
    case EAiTextureType::AiTextureType_AMBIENT_OCCLUSION:
    case EAiTextureType::AiTextureType_LIGHTMAP:
    case EAiTextureType::AiTextureType_OPACITY:
        return true;
    default:
        return false;
    }
}
}

AAssimpSpawnManager::AAssimpSpawnManager()
{
    PrimaryActorTick.bCanEverTick = true;
    SpawnClass = AStaticMeshActor::StaticClass();
    LocalOffset = FTransform(
        FQuat(FRotator::ZeroRotator),
        FVector(100.f, 100.f, 100.f),
        FVector(100.f, 100.f, 100.f)
    );


    TextureComponent = CreateDefaultSubobject<UACTexture>(TEXT("TextureComponent"));

}

void AAssimpSpawnManager::BeginPlay()
{
    Super::BeginPlay();
    //TextureComponent->OnAllTexturesUploaded.AddLambda([this]()
    //{
    //    UE_LOG(LogTemp, Verbose, TEXT("[UACTexture] All textures uploaded"));
    //});

    TextureComponent->OnAllTexturesReady.AddDynamic(this, &AAssimpSpawnManager::OnAllSceneMaterialFinished);
}


void AAssimpSpawnManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);


}

void AAssimpSpawnManager::InitializeAndStart(UObject* WorldContextObject, const TArray<UAIScene*>& InScenes)
{
    if (!WorldContextObject) return;
    CachedWorld = WorldContextObject->GetWorld();
    if (!CachedWorld.IsValid()) return;


    if (InScenes.Num() == 0) return;
    if (!ParentMaterial) return;


    Scenes = InScenes;


    SceneMaterials.Empty();
    SceneMaterials.AddDefaulted(Scenes.Num());


    CurrentSceneIndex = 0;
    bCancelled = false;

    if (bEnableVerboseLog)
        UE_LOG(LogTemp, Warning, TEXT("[Assimp] Initialize with %d scenes"), Scenes.Num());

    StartNextScene();
}

void AAssimpSpawnManager::StartNextScene()
{

    if (bCancelled)
        return;


    if (CurrentSceneIndex >= Scenes.Num())
    {
        if (bEnableVerboseLog)
            UE_LOG(LogTemp, Warning, TEXT("[Assimp] All scenes finished"));

        OnAllScenesFinished.Broadcast();
        return;
    }


    UAIScene* Scene = Scenes[CurrentSceneIndex];
    if (!Scene)
    {
        CurrentSceneIndex++;
        StartNextScene();
        return;
    }


    SceneAIMaterials.Empty();
    SceneAIMaterials = Scene->GetAllMaterials();


    if (SceneMaterials.IsValidIndex(CurrentSceneIndex))
    {
        if (SceneMaterials[CurrentSceneIndex].Materials.Num() != SceneAIMaterials.Num())
        {
            SceneMaterials[CurrentSceneIndex].Materials.SetNum(SceneAIMaterials.Num());
        }
    }




    MaterialIndex = 0;
    PendingTextureImports = 0;
    PendingMaterialCount = SceneAIMaterials.Num();
    PendingTextureImportsForScene = 0;
    TextureCount = 0;
    bWaitingTextures = false;
    bRootQueued = false;
    NodeStack.Empty();
    CurrentSceneTasks.Empty();
    CurrentTaskIndex = 0;
    bSceneActive = true;
    bBuildingMeshTasks = false;
    bBuildingTextureTasks = false;


}

void AAssimpSpawnManager::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bCancelled || !bSceneActive) return;

    if (MaterialIndex < SceneAIMaterials.Num())
    {
        MaterialTickTimer += DeltaSeconds;
        if (MaterialTickTimer >= MaterialInterval)
        {
            MaterialTickTimer = 0.f;
            Tick_MakeMaterials();
            if (MaterialIndex >= SceneAIMaterials.Num())
            {
                UE_LOG(LogTemp, Log,
                    TEXT("[TextureDecode] Texture Uploade Start"),
                    TextureCooldownFrames);
                bBuildingTextureTasks = true;
                if (TextureCount == 0)
                {
                    OnAllSceneMaterialFinished();
                }
                else
                {
                    TextureComponent->StartStreaming();
                }


            }
        }
        return;
    }

    if (bBuildingTextureTasks)
    {
        return;
    }

    if (TextureCooldownFrames > 0)
    {
        UE_LOG(LogTemp, Log,
            TEXT("[TextureDecode] Enqueued texture: %.5f"),
            TextureCooldownFrames);
        TextureCooldownFrames = TextureCooldownFrames - DeltaSeconds;
        return; 
    }

    if (bBuildingMeshTasks && NodeStack.Num() > 0)
    {
        NodeTickTimer += DeltaSeconds;
        if (NodeTickTimer >= NodeInterval)
        {
            NodeTickTimer = 0.f;
            Tick_BuildMeshTasks();
        }
        return;
    }

    if (!RawBuildQueue.IsEmpty())
    {
        Tick_BuildRawMeshData();
    }


    if (!ActiveMeshQueue.IsEmpty())
    {
        Tick_BuildMesh();
        return;
    }

    if (CurrentTaskIndex < CurrentSceneTasks.Num())
    {
        SpawnTickTimer += DeltaSeconds;
        if (SpawnTickTimer >= SpawnInterval)
        {
            SpawnTickTimer = 0.f;
            Tick_SpawnMeshes();
        }
        return;
    }


    FinishScene();
}

void AAssimpSpawnManager::Tick_MakeMaterials()
{
    if (!bSceneActive || MaterialIndex >= SceneAIMaterials.Num())
        return;

    int32 Count = 0;
    while (Count < MaterialPerFrame && MaterialIndex < SceneAIMaterials.Num())
    {
        UAIMaterial* AIMat = SceneAIMaterials[MaterialIndex];
        UMaterialInstanceDynamic* MID =
            UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, ParentMaterial);

        if (SceneMaterials.IsValidIndex(CurrentSceneIndex))
        {
            if (SceneMaterials[CurrentSceneIndex].Materials.IsValidIndex(MaterialIndex))
                SceneMaterials[CurrentSceneIndex].Materials[MaterialIndex] = MID;
            else
                SceneMaterials[CurrentSceneIndex].Materials.Add(MID);
        }

    auto TryEnqueue = [&](EAiTextureType TexType, FString ParamName)
    {
        FVector2D UVScale;
        FString Path;
        EAssimpReturn Result = AIMat->GetMaterialTexture(TexType, UVScale, 0, Path, EAiTextureMapping::AiTextureMapping_UV);

        if (Result == EAssimpReturn::ReturnSuccess && !Path.IsEmpty())
        {
            if (FPaths::IsRelative(Path))
            {
                Path = FPaths::Combine(
                    FPaths::GetPath(Scenes[CurrentSceneIndex]->FullFilePath),
                    Path);
            }
            FPaths::NormalizeFilename(Path);

            UE_LOG(LogTemp, Verbose,
                TEXT("[Texture] Decode thread entered222 %s : %s"),
                *ParamName,
                *Path);

            TextureCount++;

            const aiTexture* Embedded = Scenes[CurrentSceneIndex]->scene->GetEmbeddedTexture(TCHAR_TO_UTF8(*Path));
            if (Embedded)
            {
                TextureComponent->RequestTexture(Embedded, MID, ParamName, TexType);
            }
            else
            {
                const bool bLoadedExternal = ImportTextureAsync(
                    GetWorld(),
                    TexType,
                    FName(*ParamName),
                    Scenes[CurrentSceneIndex],
                    AIMat,
                    MID);

                if (!bLoadedExternal)
                {
                    UE_LOG(LogTemp, Warning,
                        TEXT("[Texture] Failed to load external texture: %s (%s)"),
                        *Path,
                        *ParamName);
                }
            }
        }
        else
        {
            if (TexType == EAiTextureType::AiTextureType_DIFFUSE)
            {
                FLinearColor BaseColor = FLinearColor::White;
                AIMat->GetMaterialBaseColor(BaseColor);

                MID->SetScalarParameterValue(
                    TEXT("UseBaseColorConstant"), 1.0f);
                MID->SetVectorParameterValue(
                    TEXT("BaseColorConstant"), BaseColor);

                UE_LOG(LogTemp, Verbose,
                    TEXT("[Texture] Use BaseColor constant: %s"),
                    *BaseColor.ToString());

            }
        }
    };

    TryEnqueue(EAiTextureType::AiTextureType_DIFFUSE, FString("BaseColor"));
    TryEnqueue(EAiTextureType::AiTextureType_NORMALS, FString("Normal"));
    TryEnqueue(EAiTextureType::AiTextureType_METALNESS, FString("Metallic"));

    // 优先使用 PBR Roughness 贴图；如果没有，再回退到旧式 SHININESS。
    FVector2D RoughnessUVScale;
    FString RoughnessPath;
    const EAssimpReturn RoughnessResult = AIMat->GetMaterialTexture(
        EAiTextureType::AiTextureType_DIFFUSE_ROUGHNESS,
        RoughnessUVScale,
        0,
        RoughnessPath,
        EAiTextureMapping::AiTextureMapping_UV);
    if (RoughnessResult == EAssimpReturn::ReturnSuccess && !RoughnessPath.IsEmpty())
    {
        TryEnqueue(EAiTextureType::AiTextureType_DIFFUSE_ROUGHNESS, FString("Roughness"));
    }
    else
    {
        TryEnqueue(EAiTextureType::AiTextureType_SHININESS, FString("Roughness"));
    }

    TryEnqueue(EAiTextureType::AiTextureType_AMBIENT_OCCLUSION, FString("AmbientOcclusion"));
    TryEnqueue(EAiTextureType::AiTextureType_LIGHTMAP, FString("AmbientOcclusion"));
    TryEnqueue(EAiTextureType::AiTextureType_EMISSIVE, FString("Emissive"));

    MID->SetScalarParameterValue("Opacity", 1.f);

    MaterialIndex++;
    Count++;

        //TSharedPtr<FMaterialTextureTracker> Tracker = MakeShared<FMaterialTextureTracker>();
        //ActiveTextureTrackers.Add(Tracker);
        //Tracker->SceneIndex = CurrentSceneIndex;
        //Tracker->Generation = TextureGeneration;

        //int32 TextureCount = 0;

        //auto TryEnqueue = [&](EAiTextureType TexType, FName ParamName)
        //    {
        //        FVector2D UVScale;
        //        FString Path;
        //        EAssimpReturn Result = AIMat->GetMaterialTexture(TexType, UVScale, 0, Path, EAiTextureMapping::AiTextureMapping_UV);

        //        if (Result == EAssimpReturn::ReturnSuccess && !Path.IsEmpty())
        //        {
        //            if (FPaths::IsRelative(Path))
        //            {
        //                Path = FPaths::Combine(
        //                    FPaths::GetPath(Scenes[CurrentSceneIndex]->FullFilePath),
        //                    Path);
        //            }
        //            FPaths::NormalizeFilename(Path);

        //            UE_LOG(LogTemp, Verbose,
        //                TEXT("[Texture] Decode thread entered222 %s : %s"),
        //                *ParamName.ToString(),
        //                *Path);

        //            TextureCount++;
        //            EnqueueTextureDecode(
        //                Path,
        //                TexType,
        //                ParamName,
        //                MID,
        //                Tracker);
        //        }
        //        else
        //        {
        //            if (TexType == EAiTextureType::AiTextureType_DIFFUSE)
        //            {
        //                FLinearColor BaseColor = FLinearColor::White;
        //                AIMat->GetMaterialBaseColor(BaseColor);

        //                MID->SetScalarParameterValue(
        //                    TEXT("UseBaseColorConstant"), 1.0f);
        //                MID->SetVectorParameterValue(
        //                    TEXT("BaseColorConstant"), BaseColor);

        //                UE_LOG(LogTemp, Verbose,
        //                    TEXT("[Texture] Use BaseColor constant: %s"),
        //                    *BaseColor.ToString());

        //            }
        //        }
        //    };

        //bool isbasecolor = ImportTextureAsync(GetWorld(), EAiTextureType::AiTextureType_DIFFUSE, "BaseColor", Scenes[CurrentSceneIndex], AIMat, MID);
        //if (isbasecolor)
        //{
        //    FLinearColor BaseColor = FLinearColor::White;
        //    AIMat->GetMaterialBaseColor(BaseColor);

        //    MID->SetScalarParameterValue(
        //        TEXT("UseBaseColorConstant"), 1.0f);
        //    MID->SetVectorParameterValue(
        //        TEXT("BaseColorConstant"), BaseColor);

        //    UE_LOG(LogTemp, Verbose,
        //        TEXT("[Texture] Use BaseColor constant: %s"),
        //        *BaseColor.ToString());
        //}
        ////ImportTextureAsync(GetWorld(), EAiTextureType::AiTextureType_NORMALS, "Normal", Scenes[CurrentSceneIndex], AIMat, MID);
        ////ImportTextureAsync(GetWorld(), EAiTextureType::AiTextureType_METALNESS, "Metallic", Scenes[CurrentSceneIndex], AIMat, MID);
        ////ImportTextureAsync(GetWorld(), EAiTextureType::AiTextureType_SHININESS, "Roughness", Scenes[CurrentSceneIndex], AIMat, MID);
        ////ImportTextureAsync(GetWorld(), EAiTextureType::AiTextureType_EMISSIVE, "Emissive", Scenes[CurrentSceneIndex], AIMat, MID);

        //TryEnqueue(EAiTextureType::AiTextureType_DIFFUSE, FName("BaseColor"));
        //TryEnqueue(EAiTextureType::AiTextureType_NORMALS, FName("Normal"));
        //TryEnqueue(EAiTextureType::AiTextureType_METALNESS, FName("Metallic"));
        //TryEnqueue(EAiTextureType::AiTextureType_SHININESS, FName("Roughness"));
        //TryEnqueue(EAiTextureType::AiTextureType_EMISSIVE, FName("Emissive"));

        //Tracker->Init(FMath::Max(TextureCount, 1));
        //int32 CapturedSceneIndex = CurrentSceneIndex;
        //Tracker->OnAllFinished = [this, Tracker, CapturedSceneIndex]()
        //    {
        //        ActiveTextureTrackers.Remove(Tracker);
        //        const int32 Left = --PendingMaterialCount;
        //        if (Left == 0)
        //        {
        //            OnSceneMaterialFinished(CapturedSceneIndex);
        //        }
        //    };

        //if (TextureCount == 0)
        //    Tracker->OneFinished();

        //MID->SetScalarParameterValue("Opacity", 1.f);

        //MaterialIndex++;
        //Count++;
    }
}


void AAssimpSpawnManager::Tick_BuildMeshTasks()
{
    int32 Count = 0;


    while (Count < NodePerFrame && NodeStack.Num() > 0)
    {
        UAINode* Node = NodeStack.Pop();
        if (!Node) continue;


        TArray<UAIMesh*> Meshes;
        Node->GetNodeMeshes(Meshes);
        for (UAIMesh* Mesh : Meshes)
        {
            if (!Mesh) continue;

            if (Mesh->BuildState == EAIMeshBuildState::None)
            {
                RegisterMesh(Mesh);
            }

            FAssimpMeshTask Task;
            Task.SceneIndex = CurrentSceneIndex;
            Task.Node = Node;
            Task.Mesh = Mesh;
            Task.MaterialIndex = Mesh->GetMaterialIndex();



            if (!SceneMaterials.IsValidIndex(Task.SceneIndex) ||
                !SceneMaterials[Task.SceneIndex].Materials.IsValidIndex(Task.MaterialIndex))
            {
                if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("Mesh material index %d out of range for scene %d. Falling back to 0."),
                    Task.MaterialIndex, Task.SceneIndex);

                Task.MaterialIndex = 0;
            }


            CurrentSceneTasks.Add(Task);
        }


        TArray<UAINode*> ChildNodes = Node->GetChildNodes();
        for (UAINode* Child : ChildNodes)
            NodeStack.Push(Child);


        Count++;
    }

    if (NodeStack.Num() == 0)
    {
        bBuildingMeshTasks = false;
        CurrentTaskIndex = 0;
    }

}

void AAssimpSpawnManager::HandleMeshRawReady(UAIMesh* Mesh)
{
    if (!Mesh) return;

    if (Mesh->BuildState == EAIMeshBuildState::RawReady)
    {
        ActiveMeshQueue.Enqueue(Mesh);
    }
}

void AAssimpSpawnManager::RegisterMesh(UAIMesh* Mesh)
{
    if (!Mesh || Mesh->BuildState != EAIMeshBuildState::None)
        return;

    Mesh->OnRawMeshReady.AddUObject(
        this,
        &AAssimpSpawnManager::HandleMeshRawReady
    );

    Mesh->BuildState = EAIMeshBuildState::Enqueued;
    RawBuildQueue.Enqueue(Mesh);
}

void AAssimpSpawnManager::Tick_BuildRawMeshData()
{
    while (ActiveRawTaskCount < MaxConcurrentRawTasks)
    {
        TWeakObjectPtr<UAIMesh> WeakMesh;
        if (!RawBuildQueue.Dequeue(WeakMesh))
            break;

        if (!WeakMesh.IsValid())
            continue;

        UAIMesh* Mesh = WeakMesh.Get();
        if (Mesh->BuildState != EAIMeshBuildState::Enqueued)
            continue;

        ++ActiveRawTaskCount;

        TWeakObjectPtr<AAssimpSpawnManager> WeakThis(this);

        AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask,
            [WeakMesh, WeakThis]()
            {
                if (WeakMesh.IsValid())
                {
                    WeakMesh->BuildRawMeshData();
                }

                AsyncTask(ENamedThreads::GameThread, [WeakThis]()
                    {
                        if (WeakThis.IsValid())
                        {
                            WeakThis->ActiveRawTaskCount =
                                FMath::Max(0, WeakThis->ActiveRawTaskCount - 1);
                        }
                    });
            });
    }
}

void AAssimpSpawnManager::Tick_BuildMesh()
{
    static bool bInitUsedThisFrame = false;
    static bool bCollisionUsedThisFrame = false;

    bInitUsedThisFrame = false;
    bCollisionUsedThisFrame = false;

    int32 ProcessedMeshCount = 0;

    while (!ActiveMeshQueue.IsEmpty() &&
        ProcessedMeshCount < MaxMeshesPerFrame)
    {
        TWeakObjectPtr<UAIMesh> WeakMesh;
        ActiveMeshQueue.Dequeue(WeakMesh);

        if (!WeakMesh.IsValid())
            continue;

        UAIMesh* Mesh = WeakMesh.Get();

        switch (Mesh->BuildState)
        {
        case EAIMeshBuildState::RawReady:
            Mesh->BeginBuildStaticMesh_GT();
            ActiveMeshQueue.Enqueue(Mesh);
            break;

        case EAIMeshBuildState::BuildVertices:
        {
            if (Mesh->TickBuildVertices_GT(VertexBudgetPerFrame))
            {
                Mesh->BuildState = EAIMeshBuildState::BuildTriangles;
            }
            ActiveMeshQueue.Enqueue(Mesh);
            break;
        }

        case EAIMeshBuildState::BuildTriangles:
        {
            if (Mesh->TickBuildTriangles_GT(TriangleBudgetPerFrame))
            {
                Mesh->BuildState = EAIMeshBuildState::Finalize_Prepare;
            }
            ActiveMeshQueue.Enqueue(Mesh);
            break;
        }
      
        case EAIMeshBuildState::Finalize_Prepare:
        {
            Mesh->FinalizeBuild_Build_GT();
            Mesh->BuildState = EAIMeshBuildState::Finalize_Init;
            ActiveMeshQueue.Enqueue(Mesh);
            break;
        }

        case EAIMeshBuildState::Finalize_Init:
            if (!bInitUsedThisFrame)
            {
                bInitUsedThisFrame = true;
                Mesh->FinalizeBuild_Init_GT();
                Mesh->BuildState = EAIMeshBuildState::Finalize_Collision;
            }
            ActiveMeshQueue.Enqueue(Mesh);
            break;

        case EAIMeshBuildState::Finalize_Collision:
            if (!bCollisionUsedThisFrame)
            {
                bCollisionUsedThisFrame = true;
                Mesh->FinalizeBuild_Collision_GT();

                if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[BuildMesh]: Mesh or StaticMesh for task %d"), CurrentSceneIndex);
                const FBoxSphereBounds B = Mesh->StaticMesh->GetBounds();

                UE_LOG(LogTemp, Warning,
                    TEXT("Bounds Origin=%s Extent=%s Radius=%.2f"),
                    *B.Origin.ToString(),
                    *B.BoxExtent.ToString(),
                    B.SphereRadius
                );
            }
            else
            {
                ActiveMeshQueue.Enqueue(Mesh);
            }
            break;

        case EAIMeshBuildState::Enqueued:
        case EAIMeshBuildState::Ready:
        default:
            break;
        }

        ++ProcessedMeshCount;
    }
}

void AAssimpSpawnManager::Tick_SpawnMeshes()
{
    int32 Count = 0;


    while (Count < SpawnPerFrame && CurrentTaskIndex < CurrentSceneTasks.Num())
    {
        FAssimpMeshTask Task = CurrentSceneTasks[CurrentTaskIndex];

        if (Task.Node == nullptr || Task.Mesh == nullptr)
        {
            UE_LOG(LogTemp, Error, TEXT("Invalid Task: Node or Mesh is null"));
            CurrentTaskIndex++;
            continue;
        }
        SpawnOneMesh(Task);
        CurrentTaskIndex++;
        Count++;
    }


    OnProgress.Broadcast(CurrentTaskIndex, CurrentSceneTasks.Num());
}

void AAssimpSpawnManager::SpawnOneMesh(const FAssimpMeshTask Task)
{
    if (!CachedWorld.IsValid()) return;


    FTransform T = Task.Node->GetRootTransform() * LocalOffset;


    FActorSpawnParameters Params;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


    AStaticMeshActor* A = CachedWorld->SpawnActor<AStaticMeshActor>(SpawnClass, T, Params);
    if (!A) return;
    A->SetMobility(EComponentMobility::Movable);

    UStaticMeshComponent* Comp = A->GetStaticMeshComponent();
    if (!Comp) return;


    if (Task.Mesh && Task.Mesh->IsStaticMeshReady())
    {
        Comp->SetStaticMesh(Task.Mesh->GetStaticMesh_NoBuild());
    }
    else
    {
        if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh missing for task in scene %d"), Task.SceneIndex);
    }



    if (SceneMaterials.IsValidIndex(Task.SceneIndex))
    {
        if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh for task in scene %d"), Task.SceneIndex);
        auto& Mats = SceneMaterials[Task.SceneIndex].Materials;


        if (Mats.IsValidIndex(Task.MaterialIndex) && Mats[Task.MaterialIndex])
        {
            Comp->SetMaterial(0, Mats[Task.MaterialIndex]);
            
            UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh for MaterialIndexin scene %d"), Task.MaterialIndex);
        }
        else
        {
            if (DefaultMaterial)
            {
                Comp->SetMaterial(0, DefaultMaterial);
            }
            else if (ParentMaterial)
            {
                Comp->SetMaterial(0, ParentMaterial);
            }
        }
    }
    else
    {
        if (DefaultMaterial) Comp->SetMaterial(0, DefaultMaterial);
    }
}


void AAssimpSpawnManager::FinishScene()
{
    if (bEnableVerboseLog)
        UE_LOG(LogTemp, Warning, TEXT("[Assimp] Scene %d finished"), CurrentSceneIndex);

    bSceneActive = false;
    SceneAIMaterials.Empty();
    CurrentSceneTasks.Empty();
    NodeStack.Empty();
    MaterialIndex = 0;
    CurrentTaskIndex = 0;
    bRootQueued = false;


    CurrentSceneIndex++;
    StartNextScene();
}

bool AAssimpSpawnManager::ImportTextureAsync(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal)
{
    if (!WorldContextObject || !AssimpMaterial || !AssimpScene || !DynamicMaterialUnreal)
    {
        UE_LOG(LogTemp, Warning, TEXT("ImportTextureAsync: Invalid input parameters."));
        return false;
    }

    FVector2D UVScale;
    FString Path;
    EAssimpReturn Result = AssimpMaterial->GetMaterialTexture(TextureType, UVScale, 0, Path, EAiTextureMapping::AiTextureMapping_UV);

    if (Result != EAssimpReturn::ReturnSuccess)
    {
        return false;
    }

    const bool bIsNormalMapTexture =
        (TextureType == EAiTextureType::AiTextureType_NORMALS ||
         TextureType == EAiTextureType::AiTextureType_NORMAL_CAMERA);
    UTexture2D* EmbeddedTex = AssimpScene->GetEmbeddedTexture(Path, bIsNormalMapTexture);
    if (UKismetSystemLibrary::IsValid(EmbeddedTex))
    {
        DynamicMaterialUnreal->SetTextureParameterValue(DynamicMaterialParamName, EmbeddedTex);
        return true;
    }

    FString FilePath = Path;
    FPaths::NormalizeFilename(FilePath);
    if (FPaths::IsRelative(FilePath))
    {
        FString PathPart;
        FString FilenamePart;
        FString ExtensionPart;
        FPaths::Split(FilePath, PathPart, FilenamePart, ExtensionPart);
        FilePath = FPaths::ConvertRelativePathToFull(PathPart);
    }

    UTexture2D* Tex = UKismetRenderingLibrary::ImportFileAsTexture2D(WorldContextObject, FilePath);
    if (!Tex)
    {
        UE_LOG(LogTemp, Warning, TEXT("ImportTextureAsync: failed to import texture %s"), *FilePath);
        return false;
    }

    if (bIsNormalMapTexture)
    {
        Tex->CompressionSettings = TC_Normalmap;
    }
    else if (IsLinearColorTexture(TextureType))
    {
        Tex->CompressionSettings = TC_Masks;
    }

    Tex->SRGB = !IsLinearColorTexture(TextureType);
    Tex->UpdateResource();
    DynamicMaterialUnreal->SetTextureParameterValue(DynamicMaterialParamName, Tex);


    return true;

}


void AAssimpSpawnManager::Cancel()
{
    bCancelled = true;

    if (bEnableVerboseLog)
        UE_LOG(LogTemp, Warning, TEXT("[Assimp] Cancel"));
}

UAssimpImportContext* AAssimpSpawnManager::ImportScenesAsync(const TArray<FString>& InFilenames, int32 Flags, bool DisableAutoSpaceChange, int32 MaxConcurrentTasks, FOnProgressUpdated OnProgressUpdated, FOnImportSceneComplete OnImportSceneComplete)
{
    AssimpImportContext = UAssimpFunctionLibrary::ImportScenesAsync(InFilenames, this, Flags, DisableAutoSpaceChange, MaxConcurrentTasks, MaxMeshesPerFrame, MaxCamerasPerFrame, MaxLightsPerFrame, MaxMaterialsPerFrame, MaxNodesPerFrame, LoopBuildHandleTime, OnProgressUpdated, OnImportSceneComplete);
    return AssimpImportContext;
}

void AAssimpSpawnManager::EnqueueTextureDecode(
    const FString& FilePath,
    EAiTextureType TextureType,
    FName ParamName,
    UMaterialInstanceDynamic* MID,
    TSharedPtr<FMaterialTextureTracker> Tracker)
{

    if (!TextureComponent)
        return;

    //TextureComponent->SubmitDecodedTexture(
    //    FilePath,
    //    TextureType,
    //    ParamName,
    //    MID,
    //    Tracker,
    //    TextureGeneration,
    //    CurrentSceneIndex
    //);


    const int32 LocalGeneration = TextureGeneration;
    const int32 LocalSceneIndex = Tracker->SceneIndex;

    if (LocalGeneration != TextureGeneration)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[TextureDecode] Generation mismatch: %d vs %d"),
            LocalGeneration, TextureGeneration);

        Tracker->OneFinished();
        return;
    }

    FPendingTextureItem Pending;
    Pending.Path = FilePath;
    Pending.TextureType = TextureType;
    Pending.MaterialParam = ParamName;
    Pending.MID = MID;
    Pending.Tracker = Tracker;
    Pending.SceneIndex = LocalSceneIndex;
    Pending.Generation = LocalGeneration;
    Pending.World = GetWorld();

    DispatchTexture(Pending);
    //TextureCreateQueue.Enqueue(MoveTemp(Pending));

    UE_LOG(LogTemp, Log,
        TEXT("[TextureDecode] Enqueued texture: %s"),
        *FilePath);

}

//void AAssimpSpawnManager::ResetTexturePipeline()
//{
//    TextureGeneration++;
//    FPendingTextureCreate Dummy;
//    while (TextureCreateQueue.Dequeue(Dummy)) {}
//
//    if (bEnableVerboseLog)
//        UE_LOG(LogTemp, Warning,
//            TEXT("[Assimp] Texture pipeline reset. Generation = %d"),
//            TextureGeneration);
//}
//

//
//void AAssimpSpawnManager::Tick_TextureCreate()
//{
//    int32 Budget = MaxTextureCreatePerFrame;
//
//    while (Budget-- > 0)
//    {
//        FDecodedTexture Pending;
//        if (!TextureCreateQueue_GT.Dequeue(Pending))
//            break;
//
//        if (Pending.Generation != TextureGeneration ||
//            Pending.SceneIndex != CurrentSceneIndex ||
//            !Pending.MID.IsValid() ||
//            !Pending.Tracker.IsValid())
//        {
//            if (Pending.Tracker.IsValid())
//                Pending.Tracker->OneFinished();
//            continue;
//        }
//
//        UTexture2D* Texture = UTexture2D::CreateTransient(Pending.Width, Pending.Height, PF_B8G8R8A8);
//        if (!Texture || !Texture->GetPlatformData())
//        {
//            Pending.Tracker->OneFinished();
//            continue;
//        }
//
//        Texture->MipGenSettings = TMGS_NoMipmaps;
//        Texture->NeverStream = true;
//        Texture->SRGB = Pending.TextureType != EAiTextureType::AiTextureType_NORMALS;
//        Texture->CompressionSettings = Pending.TextureType == EAiTextureType::AiTextureType_NORMALS
//            ? TC_Normalmap
//            : TC_Default;
//
//        Texture->UpdateResource();
//
//        const int32 TileSize = GetTileSize(SelectedTileSizeEnum);
//
//        for (int32 Y = 0; Y < Pending.Height; Y += TileSize)
//        {
//            for (int32 X = 0; X < Pending.Width; X += TileSize)
//            {
//                FTextureTileTask Tile;
//                Tile.TileX = X;
//                Tile.TileY = Y;
//                Tile.TileW = FMath::Min(TileSize, Pending.Width - X);
//                Tile.TileH = FMath::Min(TileSize, Pending.Height - Y);
//                Tile.FullW = Pending.Width;
//                Tile.FullH = Pending.Height;
//
//                Tile.RawBGRA.SetNumUninitialized(Tile.TileW * Tile.TileH * 4);
//
//                for (int32 y = 0; y < Tile.TileH; ++y)
//                {
//                    const int32 Src = ((Y + y) * Pending.Width + X) * 4;
//                    const int32 Dst = y * Tile.TileW * 4;
//                    FMemory::Memcpy(
//                        Tile.RawBGRA.GetData() + Dst,
//                        Pending.RawBGRA.GetData() + Src,
//                        Tile.TileW * 4
//                    );
//                }
//
//                Tile.Texture = Texture;
//                Tile.MID = Pending.MID;
//                Tile.ParamName = Pending.ParamName;
//                Tile.Tracker = Pending.Tracker;
//
//                TextureUpdateQueue_GT.Enqueue(MoveTemp(Tile));
//            }
//        }
//    }
//
//
//    TextureCooldownFrames = 1;
//}
//
//void AAssimpSpawnManager::TickTexturePending()
//{
//    if (TextureCreateQueue.IsEmpty())
//    {
//        return;
//    }
//
//    int32 Budget = MaxTextureCreatePerFrame;
//
//    while (Budget-- > 0)
//    {
//        FPendingTextureCreate Pending;
//        if (!TextureCreateQueue.Dequeue(Pending))
//        {
//            break;
//        }
//
//        if (Pending.Generation != TextureGeneration ||
//            Pending.SceneIndex != CurrentSceneIndex ||
//            !Pending.MID.IsValid() ||
//            !Pending.Tracker.IsValid())
//        {
//            Pending.Tracker->OneFinished();
//            continue;
//        }
//
//        DispatchTexture(Pending);
//    }
//}
//
//void AAssimpSpawnManager::Tick_TextureUpdate()
//{
//    int32 Budget = MaxTilesPerFrame;
//    UTexture2D* UpdatedTexture = nullptr;
//    FName UpdatedParam;
//    UMaterialInstanceDynamic* UpdatedMID = nullptr;
//
//    while (Budget-- > 0)
//    {
//        FTextureTileTask Tile;
//        if (!TextureUpdateQueue_GT.Dequeue(Tile))
//            break;
//
//        if (!Tile.Texture.IsValid())
//        {
//            Tile.Tracker->OneFinished();
//            continue;
//        }
//
//        UTexture2D* Tex = Tile.Texture.Get();
//        FTexturePlatformData* PD = Tex->GetPlatformData();
//
//        void* Base = PD->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
//
//        for (int32 y = 0; y < Tile.TileH; ++y)
//        {
//            const int32 Dst =
//                ((Tile.TileY + y) * Tile.FullW + Tile.TileX) * 4;
//            const int32 Src =
//                y * Tile.TileW * 4;
//
//            FMemory::Memcpy(
//                (uint8*)Base + Dst,
//                Tile.RawBGRA.GetData() + Src,
//                Tile.TileW * 4
//            );
//        }
//
//        PD->Mips[0].BulkData.Unlock();
//
//        UpdatedTexture = Tex;
//        UpdatedMID = Tile.MID.Get();
//        UpdatedParam = Tile.ParamName;
//
//        Tile.Tracker->OneFinished();
//    }
//
//    if (UpdatedTexture)
//    {
//        UpdatedTexture->UpdateResource();
//
//        if (UpdatedMID)
//        {
//            UpdatedMID->SetTextureParameterValue(
//                UpdatedParam,
//                UpdatedTexture
//            );
//        }
//    }
//}
//
//
void AAssimpSpawnManager::DispatchTexture(const FPendingTextureItem& Pending)
{
    if (!Scenes.IsValidIndex(Pending.SceneIndex) || !Scenes[Pending.SceneIndex]->scene)
        return;

    const aiTexture* Embedded = Scenes[Pending.SceneIndex]->scene->GetEmbeddedTexture(TCHAR_TO_UTF8(*Pending.Path));

    if (Embedded)
    {
        Async(EAsyncExecution::ThreadPool, [this, Pending, Embedded]()
            {
                FPendingTextureItem Decoded;
                Decoded.MaterialParam = Pending.MaterialParam;
                Decoded.SceneIndex = Pending.SceneIndex;
                Decoded.Generation = Pending.Generation;
                Decoded.MID = Pending.MID;
                Decoded.Tracker = Pending.Tracker;
                Decoded.Path = Pending.Path;
                Decoded.TextureType = Pending.TextureType;
                Decoded.World = Pending.World;
                FTextureRawData Raw;

                if (DecodeEmbeddedTexture(Embedded, Raw))
                {
                    Decoded.RawBGRA = Raw.RawBGRA;
                    Decoded.Width = Raw.Width;
                    Decoded.Height = Raw.Height;
                    Decoded.bIsCompressed = Raw.bIsCompressed;

                    //TextureComponent->Enqueue(Decoded);
                    //TextureCreateQueue_GT.Enqueue(MoveTemp(Decoded));
                }
                else
                {
                    if (Pending.Tracker.IsValid()) Pending.Tracker->OneFinished();
                }
            });
    }
    else
    {
        Async(EAsyncExecution::ThreadPool, [this, Pending]()
            {
                FPendingTextureItem Decoded;
                Decoded.MaterialParam = Pending.MaterialParam;
                Decoded.SceneIndex = Pending.SceneIndex;
                Decoded.Generation = Pending.Generation;
                Decoded.MID = Pending.MID;
                Decoded.Tracker = Pending.Tracker;
                Decoded.Path = Pending.Path;
                Decoded.TextureType = Pending.TextureType;
                Decoded.World = Pending.World;
                FTextureRawData Raw;

                if (DecodeExternalTexture(Pending, Raw))
                {
                    Decoded.RawBGRA = Raw.RawBGRA;
                    Decoded.Width = Raw.Width;
                    Decoded.Height = Raw.Height;
                    Decoded.bIsCompressed = Raw.bIsCompressed;

                   // TextureComponent->Enqueue(Decoded);
                    //TextureCreateQueue_GT.Enqueue(MoveTemp(Decoded));
                }
                else
                {
                    if (Pending.Tracker.IsValid()) Pending.Tracker->OneFinished();
                }
            });
    }
}

static bool DecodeCompressedToBGRA(
    const uint8* Data,
    int32 Size,
    int32& OutWidth,
    int32& OutHeight,
    TArray<uint8>& OutBGRA)
{
    if (!Data || Size <= 0)
        return false;

    IImageWrapperModule& ImageWrapper =
        FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");

    EImageFormat Format =
        ImageWrapper.DetectImageFormat(Data, Size);

    if (Format == EImageFormat::Invalid)
        return false;

    TSharedPtr<IImageWrapper> Wrapper =
        ImageWrapper.CreateImageWrapper(Format);

    if (!Wrapper.IsValid() ||
        !Wrapper->SetCompressed(Data, Size))
        return false;

    OutWidth = Wrapper->GetWidth();
    OutHeight = Wrapper->GetHeight();

    if (!Wrapper->GetRaw(
        ERGBFormat::BGRA,
        8,
        OutBGRA))
        return false;

    return true;
}

bool AAssimpSpawnManager::DecodeEmbeddedTexture(const aiTexture* Tex, FTextureRawData& Out)
{
    if (!Tex) return false;

    if (Tex->mHeight != 0)
    {
        UE_LOG(LogAssimp, Warning, TEXT("DecodeEmbeddedTexture: Tex->mHeight != 0"));
        const int32 Width = Tex->mWidth;
        const int32 Height = Tex->mHeight;
        Out.Width = Width;
        Out.Height = Height;
        Out.bIsCompressed = false;

        const int32 PixelCount = Width * Height;
        Out.RawBGRA.SetNumUninitialized(PixelCount * 4);

        uint8* Dest = Out.RawBGRA.GetData();

        for (int32 Y = 0; Y < PixelCount; ++Y)
        {
            const aiTexel& Px = Tex->pcData[Y];

            Dest[Y * 4 + 0] = Px.b;
            Dest[Y * 4 + 1] = Px.g;
            Dest[Y * 4 + 2] = Px.r;
            Dest[Y * 4 + 3] = Px.a;
        }
        return true;
    }
    //else
    //{
    //    UE_LOG(LogAssimp, Warning, TEXT("DecodeEmbeddedTexture: Tex->mHeight == 0"));

    //    const size_t SizeInBytes = static_cast<size_t>(Tex->mWidth);
    //    if (SizeInBytes == 0 || !Tex->pcData)
    //    {
    //        UE_LOG(LogAssimp, Warning, TEXT("GetEmbeddedTexture: compressed texture has zero size or null data"));
    //        return false;
    //    }

    //    const unsigned char* BinaryData = reinterpret_cast<const unsigned char*>(Tex->pcData);
    //    TArray<uint8> Buffer;
    //    Buffer.Append(BinaryData, static_cast<int32>(SizeInBytes));


    //    const uint8* Data = reinterpret_cast<const uint8*>(Tex->pcData);
    //    const int32 Size = static_cast<int32>(Tex->mWidth);

    //    IImageWrapperModule& ImageWrapper =
    //        FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");

    //    EImageFormat Format =
    //        ImageWrapper.DetectImageFormat(Data, Size);

    //    if (Format == EImageFormat::Invalid)
    //        return false;

    //    TSharedPtr<IImageWrapper> Wrapper =
    //        ImageWrapper.CreateImageWrapper(Format);

    //    if (!Wrapper.IsValid() || !Wrapper->SetCompressed(Data, Size))
    //        return false;

    //    Out.Width = Wrapper->GetWidth();
    //    Out.Height = Wrapper->GetHeight();
    //    Out.bIsCompressed = true;
    //    Out.RawBGRA = MoveTemp(Buffer);
    //    return true;
    //}
    const uint8* Data =
        reinterpret_cast<const uint8*>(Tex->pcData);

    const int32 Size =
        static_cast<int32>(Tex->mWidth); 

    if (Size <= 0 || !Data)
        return false;

    return DecodeCompressedToBGRA(
        Data,
        Size,
        Out.Width,
        Out.Height,
        Out.RawBGRA);
}

bool AAssimpSpawnManager::DecodeExternalTexture(const FPendingTextureItem& Pending, FTextureRawData& Out)
{
    FString Normalized = Pending.Path;
    FPaths::NormalizeFilename(Normalized);
    if (FPaths::IsRelative(Normalized))
    {
        Normalized = FPaths::ConvertRelativePathToFull(Normalized);
    }

    if (!FPaths::FileExists(Normalized))
    {
        return false;
    }

    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *Normalized))
    {
        return false;
    }

    return DecodeCompressedToBGRA(
        FileData.GetData(),
        FileData.Num(),
        Out.Width,
        Out.Height,
        Out.RawBGRA);

    //IImageWrapperModule& WrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");
    //EImageFormat Format = WrapperModule.DetectImageFormat(FileData.GetData(), FileData.Num());
    //if (Format == EImageFormat::Invalid)
    //{
    //    return false;
    //}

    //TSharedPtr<IImageWrapper> Wrapper = WrapperModule.CreateImageWrapper(Format);
    //if (!Wrapper.IsValid() || !Wrapper->SetCompressed(FileData.GetData(), FileData.Num()))
    //{
    //    return false;
    //}

    //TArray<uint8> BGRA;
    //if (!Wrapper->GetRaw(ERGBFormat::BGRA, 8, BGRA))
    //{
    //    return false;
    //}


    //Out.Width = Wrapper->GetWidth();
    //Out.Height = Wrapper->GetHeight();
    //Out.RawBGRA = MoveTemp(BGRA);

    //return true;
}

void AAssimpSpawnManager::OnAllSceneMaterialFinished()
{


    bBuildingTextureTasks = false;
    TextureCooldownFrames = 1;
    //TextureComponent->StopTextureTick();
    bBuildingMeshTasks = true;

    if (!bRootQueued)
    {
        if (UAINode* Root = Scenes[CurrentSceneIndex]->GetRootNode())
        {
            NodeStack.Push(Root);
            bRootQueued = true;
        }
    }

    UE_LOG(LogTemp, Log,
        TEXT("[MaterialFinished] Scene=%d"), CurrentSceneIndex);

}

void AAssimpSpawnManager::OnSceneMaterialFinished(int32 SceneIndex)
{
   if (SceneIndex != CurrentSceneIndex || !bSceneActive)
        return;

   bBuildingTextureTasks = false;
   TextureCooldownFrames = 1;
   bBuildingMeshTasks = true;

   if (!bRootQueued)
   {
       if (UAINode* Root = Scenes[CurrentSceneIndex]->GetRootNode())
       {
           NodeStack.Push(Root);
           bRootQueued = true;
       }
   }

    UE_LOG(LogTemp, Log,
        TEXT("[MaterialFinished] Scene=%d"), SceneIndex);

}
