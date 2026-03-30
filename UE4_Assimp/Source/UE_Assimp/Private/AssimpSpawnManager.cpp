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
#include "Materials/Material.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "DynamicMeshActor.h"
#include "Components/DynamicMeshComponent.h"
#include "HAL/FileManager.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2D.h"
#include "Misc/Paths.h"
#include "HAL/PlatformMemory.h"
#include "HAL/PlatformMisc.h"

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


    TextureComponent->OnAllTexturesReady.AddDynamic(this, &AAssimpSpawnManager::OnAllSceneMaterialFinished);

    if (bAutoApplyRecommendedSettingsAtBeginPlay)
    {
        ApplyRecommendedPerformanceSettings();
    }
}


void AAssimpSpawnManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

}

void AAssimpSpawnManager::ApplyRecommendedPerformanceSettings()
{
    const FPlatformMemoryConstants MemoryConstants = FPlatformMemory::GetConstants();
    const int32 TotalMemoryGB = FMath::Max(1, static_cast<int32>(MemoryConstants.TotalPhysical / (1024ull * 1024ull * 1024ull)));
    const int32 LogicalCores = FMath::Max(2, FPlatformMisc::NumberOfCoresIncludingHyperthreads());

    MaxConcurrentRawTasks = FMath::Clamp(LogicalCores / 4, 2, 4);
    MaxMeshesPerFrame = 2;
    MaterialPerFrame = 2;
    NodePerFrame = 4;
    SpawnPerFrame = 2;
    MaxMaterialsPerFrame = 2;
    MaxNodesPerFrame = 4;
    LoopBuildHandleTime = 0.008f;

    VertexBudgetPerFrame = (TotalMemoryGB >= 16) ? 2200 : 1400;
    TriangleBudgetPerFrame = (TotalMemoryGB >= 16) ? 3000 : 1800;

    if (TextureComponent)
    {
        TextureComponent->MaxDecodeTasks = FMath::Clamp(LogicalCores / 6, 2, 3);
        TextureComponent->MaxTilesPerFrame = 2;
        TextureComponent->MaxUploadBytesPerFrame = (TotalMemoryGB >= 16) ? 4 * 1024 * 1024 : 2 * 1024 * 1024;
        TextureComponent->UploadTileSize = 256;
        TextureComponent->WarningMemoryThresholdMB = (TotalMemoryGB >= 16) ? 1536 : 1024;
        TextureComponent->CriticalMemoryThresholdMB = (TotalMemoryGB >= 16) ? 384 : 256;
    }

    UE_LOG(LogTemp, Log,
        TEXT("[Assimp][PerfPreset] Cores=%d MemoryGB=%d RawTasks=%d VertBudget=%d TriBudget=%d DecodeTasks=%d UploadMB=%d"),
        LogicalCores,
        TotalMemoryGB,
        MaxConcurrentRawTasks,
        VertexBudgetPerFrame,
        TriangleBudgetPerFrame,
        TextureComponent ? TextureComponent->MaxDecodeTasks : 0,
        TextureComponent ? TextureComponent->MaxUploadBytesPerFrame / (1024 * 1024) : 0);
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
    CurrentSceneCacheKey.Reset();
    bCurrentSceneUsingCache = false;
    CurrentSceneBindings.Reset();
    CurrentSceneResults.Reset();
    AllSceneResults.Reset();

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

        if (AllSceneResults.Num() > 0)
        {
            OnSceneMeshMaterialBindingsReady.Broadcast(AllSceneResults);
        }
        AllSceneResults.Reset();
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
    CurrentSceneCacheKey = BuildSceneCacheKey(Scene);
    bCurrentSceneUsingCache = false;
    CurrentSceneBindings.Reset();
    CurrentSceneResults.Reset();

    if (const FAssimpModelCacheEntry* CachedEntry = ModelCache.Find(CurrentSceneCacheKey))
    {
        if (CachedEntry->ActorBindings.Num() > 0)
        {
            bCurrentSceneUsingCache = true;
            CurrentSceneBindings = CachedEntry->ActorBindings;
            SceneAIMaterials.Empty();

            if (bEnableVerboseLog)
            {
                UE_LOG(LogTemp, Log, TEXT("[Assimp][Cache] Hit model cache: %s, ActorBindings=%d"),
                    *CurrentSceneCacheKey, CurrentSceneBindings.Num());
            }
        }
    }


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

    if (bCurrentSceneUsingCache)
    {
        bBuildingMeshTasks = true;
        if (UAINode* Root = Scene->GetRootNode())
        {
            NodeStack.Push(Root);
            bRootQueued = true;
        }
    }


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
                if (bEnableVerboseLog)
                {
                    UE_LOG(LogTemp, Log, TEXT("[TextureDecode] Texture upload start"));
                }
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

            const int32 BindingIndex = CurrentSceneTasks.Num();
            const bool bNeedLiveBuild = !bCurrentSceneUsingCache || !CurrentSceneBindings.IsValidIndex(BindingIndex);

            if (Mesh->BuildState == EAIMeshBuildState::None)
            {
                if (bNeedLiveBuild)
                {
                    RegisterMesh(Mesh);
                }
            }

            FAssimpMeshTask Task;
            Task.SceneIndex = CurrentSceneIndex;
            Task.Node = Node;
            Task.Mesh = Mesh;
            Task.MaterialIndex = Mesh->GetMaterialIndex();
            Task.BindingIndex = BindingIndex;



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

                if (bEnableVerboseLog)
                {
                    UE_LOG(LogTemp, Warning,
                        TEXT("Bounds Origin=%s Extent=%s Radius=%.2f"),
                        *B.Origin.ToString(),
                        *B.BoxExtent.ToString(),
                        B.SphereRadius
                    );
                }
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
            if (bEnableVerboseLog)
            {
                UE_LOG(LogTemp, Error, TEXT("Invalid Task: Node or Mesh is null"));
            }

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
    UStaticMesh* ResolvedStaticMesh = nullptr;
    UMaterialInterface* ResolvedMaterial = nullptr;
    TArray<UMaterialInterface*> ResolvedMaterials;

    if (bCurrentSceneUsingCache)
    {
        if (CurrentSceneBindings.IsValidIndex(Task.BindingIndex))
        {
            const FAssimpActorModelBinding& Binding = CurrentSceneBindings[Task.BindingIndex];
            ResolvedStaticMesh = Binding.StaticMesh;
            if (Binding.Materials.Num() > 0)
            {
                ResolvedMaterial = Binding.Materials[0];
                ResolvedMaterials = Binding.Materials;
            }
        }

        if (!ResolvedStaticMesh && Task.Mesh && Task.Mesh->IsStaticMeshReady())
        {
            ResolvedStaticMesh = Task.Mesh->GetStaticMesh_NoBuild();
        }
    }
    else if (Task.Mesh && Task.Mesh->IsStaticMeshReady())
    {
        ResolvedStaticMesh = Task.Mesh->GetStaticMesh_NoBuild();
    }

    if (!ResolvedStaticMesh && bEnableVerboseLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh missing for task in scene %d"), Task.SceneIndex);
    }



    if (SceneMaterials.IsValidIndex(Task.SceneIndex))
    {
        if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh for task in scene %d"), Task.SceneIndex);
        auto& Mats = SceneMaterials[Task.SceneIndex].Materials;


        if (Mats.IsValidIndex(Task.MaterialIndex) && Mats[Task.MaterialIndex])
        {
            if (!ResolvedMaterial)
            {
                ResolvedMaterial = Mats[Task.MaterialIndex];
                ResolvedMaterials.Reset();
                ResolvedMaterials.Add(ResolvedMaterial);
            }

            if (bEnableVerboseLog)
            {
                const UMaterialInterface* MatInterface = Mats[Task.MaterialIndex];
                const UMaterial* BaseMaterial = MatInterface ? MatInterface->GetMaterial() : nullptr;
                const bool bTwoSided = BaseMaterial ? BaseMaterial->IsTwoSided() : false;
                const EBlendMode BlendMode = BaseMaterial ? BaseMaterial->GetBlendMode() : BLEND_Opaque;

                UE_LOG(LogTemp, Warning,
                    TEXT("[LightingDebug][Scene=%d][Mat=%d] Material='%s' TwoSided=%d BlendMode=%d"),
                    Task.SceneIndex,
                    Task.MaterialIndex,
                    MatInterface ? *MatInterface->GetName() : TEXT("<null>"),
                    bTwoSided ? 1 : 0,
                    static_cast<int32>(BlendMode));

                UE_LOG(LogTemp, Warning, TEXT("[SpawnOneMesh]: Mesh or StaticMesh for MaterialIndexin scene %d"), Task.MaterialIndex);
            }
            
        }
        else
        {
            if (DefaultMaterial)
            {
                ResolvedMaterial = DefaultMaterial;
                ResolvedMaterials.Reset();
                ResolvedMaterials.Add(ResolvedMaterial);
            }
            else if (ParentMaterial)
            {
                ResolvedMaterial = ParentMaterial;
                ResolvedMaterials.Reset();
                ResolvedMaterials.Add(ResolvedMaterial);
            }
        }
    }
    else
    {
        if (DefaultMaterial)
        {
            ResolvedMaterial = DefaultMaterial;
            ResolvedMaterials.Reset();
            ResolvedMaterials.Add(ResolvedMaterial);
        }
    }

    if (!bCurrentSceneUsingCache)
    {
        if (!CurrentSceneBindings.IsValidIndex(Task.BindingIndex))
        {
            CurrentSceneBindings.SetNum(Task.BindingIndex + 1);
        }

        FAssimpActorModelBinding& Binding = CurrentSceneBindings[Task.BindingIndex];
        Binding.StaticMesh = ResolvedStaticMesh;
        Binding.Materials.Reset();
        if (ResolvedMaterials.Num() > 0)
        {
            Binding.Materials = ResolvedMaterials;
        }
        else if (ResolvedMaterial)
        {
            Binding.Materials.Add(ResolvedMaterial);
        }
    }

    if (!CurrentSceneResults.IsValidIndex(Task.BindingIndex))
    {
        CurrentSceneResults.SetNum(Task.BindingIndex + 1);
    }

    FAssimpMeshMaterialBindingResult& Result = CurrentSceneResults[Task.BindingIndex];
    Result.StaticMesh = ResolvedStaticMesh;
    Result.ModelKey = CurrentSceneCacheKey;
    Result.bFromCache = bCurrentSceneUsingCache;
    int32 SlotCount = 1;
    if (ResolvedStaticMesh)
    {
        SlotCount = FMath::Max(1, ResolvedStaticMesh->GetStaticMaterials().Num());
    }

    Result.SlotMaterials.Reset();
    Result.SlotMaterials.SetNum(SlotCount);

    if (ResolvedMaterials.Num() > 0)
    {
        const int32 CopyCount = FMath::Min(SlotCount, ResolvedMaterials.Num());
        for (int32 SlotIndex = 0; SlotIndex < CopyCount; ++SlotIndex)
        {
            Result.SlotMaterials[SlotIndex] = ResolvedMaterials[SlotIndex];
        }
    }
    else if (ResolvedMaterial)
    {
        Result.SlotMaterials[0] = ResolvedMaterial;
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

    if (!bCurrentSceneUsingCache && !CurrentSceneCacheKey.IsEmpty() && CurrentSceneBindings.Num() > 0)
    {
        FAssimpModelCacheEntry& CacheEntry = ModelCache.FindOrAdd(CurrentSceneCacheKey);
        CacheEntry.ActorBindings = CurrentSceneBindings;
        if (bEnableVerboseLog)
        {
            UE_LOG(LogTemp, Log, TEXT("[Assimp][Cache] Store model cache: %s, ActorBindings=%d"),
                *CurrentSceneCacheKey, CacheEntry.ActorBindings.Num());
        }
    }

    CurrentSceneBindings.Reset();
    bCurrentSceneUsingCache = false;
    CurrentSceneCacheKey.Reset();

    if (CurrentSceneResults.Num() > 0)
    {
        AllSceneResults.Append(CurrentSceneResults);
    }
    CurrentSceneResults.Reset();


    CurrentSceneIndex++;
    StartNextScene();
}

FString AAssimpSpawnManager::BuildSceneCacheKey(const UAIScene* Scene) const
{
    if (!Scene)
    {
        return FString();
    }

    FString CacheKey = Scene->FullFilePath;
    FPaths::NormalizeFilename(CacheKey);
    CacheKey = CacheKey.TrimStartAndEnd();
    return CacheKey;
}

bool AAssimpSpawnManager::ImportTextureAsync(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal)
{
    if (!WorldContextObject || !AssimpMaterial || !AssimpScene || !DynamicMaterialUnreal || !TextureComponent)
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



    const aiTexture* EmbeddedTex = AssimpScene->scene ? AssimpScene->scene->GetEmbeddedTexture(TCHAR_TO_UTF8(*Path)) : nullptr;
    if (EmbeddedTex)
    {
        TextureComponent->RequestTexture(EmbeddedTex, DynamicMaterialUnreal, DynamicMaterialParamName.ToString(), TextureType);
        return true;
    }


    FString FilePath = Path;
    FPaths::NormalizeFilename(FilePath);
    if (FPaths::IsRelative(FilePath))
    {
        FilePath = FPaths::ConvertRelativePathToFull(FilePath);
    }

    if (!FPaths::FileExists(FilePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("ImportTextureAsync: Texture file not found %s"), *FilePath);
        return false;
    }

    TextureComponent->RequestTextureFromFile(FilePath, DynamicMaterialUnreal, DynamicMaterialParamName.ToString(), TextureType);

    return true;

}


void AAssimpSpawnManager::Cancel()
{
    bCancelled = true;
    AllSceneResults.Reset();

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

  
}

void AAssimpSpawnManager::OnAllSceneMaterialFinished()
{


    bBuildingTextureTasks = false;
    TextureCooldownFrames = DefaultTextureCooldownFrames;
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
