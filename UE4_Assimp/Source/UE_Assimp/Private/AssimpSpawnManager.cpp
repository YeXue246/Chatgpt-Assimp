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
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
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

    if (bEnableVerboseLog)
        UE_LOG(LogTemp, Warning, TEXT("[Assimp] Initialize with %d scenes"), Scenes.Num());

    StartNextScene();
}

void AAssimpSpawnManager::InitializeAndStartWithActor(
    UObject* WorldContextObject, 
    const TArray<UAIScene*>& InScenes, 
    AActor* InActor)
{
    // 1. 基础合法性检查
    if (!WorldContextObject || InScenes.Num() == 0 || !ParentMaterial)
    {
        UE_LOG(LogTemp, Error, TEXT("[Assimp] 初始化失败: 请检查 WorldContext、场景数组或 ParentMaterial"));
        return;
    }

    CachedWorld = WorldContextObject->GetWorld();
    if (!CachedWorld.IsValid()) return;

    // 2. 设置外部容器
    ExternalActor = InActor; 
    
    // 3. 重置状态
    Scenes = InScenes;
    SceneMaterials.Empty();
    SceneMaterials.AddDefaulted(Scenes.Num());

    // 关键修复：重置组件计数器和数组
    ExternalMeshComponents.Empty(); 
    CurrentSceneTaskMeshIndex = 0; 

    CurrentSceneIndex = 0;
    bCancelled = false;

    if (bEnableVerboseLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("[Assimp] 开始异步加载任务，目标 Actor: %s"), 
            InActor ? *InActor->GetName() : TEXT("None"));
    }

    // 4. 启动异步链
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
    // CurrentSceneTaskMeshIndex = 0; // 【修复】删除重置，确保跨场景、跨节点时索引持续自增
    bSceneActive = true;
    bBuildingMeshTasks = false;
    bBuildingTextureTasks = false;
}

void AAssimpSpawnManager::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bCancelled || !bSceneActive) return;

    // --- 1. 材质与纹理构建阶段 ---
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

    // --- 2. 网格任务分配阶段 ---
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

    // --- 3. 异步解析 Raw 数据阶段 ---
    if (!RawBuildQueue.IsEmpty())
    {
        Tick_BuildRawMeshData();
    }

    // --- 4. 游戏主线程构建 StaticMesh 阶段 ---
    if (!ActiveMeshQueue.IsEmpty())
    {
        Tick_BuildMesh();
        return; // 【修复】返回，防止与挂载阶段抢跑
    }

    // 【核心修复：线程阻塞屏障】
    // 只要后台还有正在解析的任务，绝对不允许进入挂载阶段，防止空网格生成！
    if (!RawBuildQueue.IsEmpty() || ActiveRawTaskCount > 0)
    {
        return; 
    }

    // --- 5. 挂载生成组件阶段 ---
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
                        UE_LOG(LogTemp, Warning, TEXT("[Texture] Failed to load external texture: %s (%s)"), *Path, *ParamName);
                    }
                }
            }
            else
            {
                if (TexType == EAiTextureType::AiTextureType_DIFFUSE)
                {
                    FLinearColor BaseColor = FLinearColor::White;
                    AIMat->GetMaterialBaseColor(BaseColor);

                    MID->SetScalarParameterValue(TEXT("UseBaseColorConstant"), 1.0f);
                    MID->SetVectorParameterValue(TEXT("BaseColorConstant"), BaseColor);
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

            if (Mesh->BuildState == EAIMeshBuildState::None)
            {
                RegisterMesh(Mesh);
                UE_LOG(LogTemp, Warning, TEXT("[AssetTracker] [Stage 1] 网格入队 (RawBuild): Node=%s"), *Node->GetNodeName());
            }

            FAssimpMeshTask Task;
            Task.SceneIndex = CurrentSceneIndex;
            Task.Node = Node;
            Task.Mesh = Mesh;
            Task.MaterialIndex = Mesh->GetMaterialIndex();
            // 【修复】去掉了深拷贝 Task.TargetMeshComponents = ExternalMeshComponents; 避免内存爆炸

            if (!SceneMaterials.IsValidIndex(Task.SceneIndex) ||
                !SceneMaterials[Task.SceneIndex].Materials.IsValidIndex(Task.MaterialIndex))
            {
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
        // 【修复】去除了 CurrentSceneTaskMeshIndex = 0; 防止组件覆盖
        UE_LOG(LogTemp, Error, TEXT("[AssetTracker] [Stage 2] 节点解析完毕！当前场景总任务数: %d"), CurrentSceneTasks.Num());
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

                UE_LOG(LogTemp, Warning, TEXT("[AssetTracker] [Stage 3] 网格体构建完成 (Collision Ready)！"));
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
        FAssimpMeshTask& Task = CurrentSceneTasks[CurrentTaskIndex];

        if (Task.Node == nullptr || Task.Mesh == nullptr)
        {
            UE_LOG(LogTemp, Error, TEXT("[AssetTracker] [异常] 任务 %d 节点或网格为空，跳过！"), CurrentTaskIndex);
            CurrentTaskIndex++;
            continue;
        }

        // 【双重保险】如果轮到这个模型了，但它的数据依然没 Ready，跳出当前循环等待下一帧！
        if (!Task.Mesh->IsStaticMeshReady())
        {
            UE_LOG(LogTemp, Warning, TEXT("[AssetTracker] [等待] 任务 %d (%s) 网格未就绪，等待下一帧..."), CurrentTaskIndex, *Task.Node->GetNodeName());
            break; 
        }

        UE_LOG(LogTemp, Log, TEXT("[AssetTracker] [Stage 4] 开始挂载任务 %d (%s)..."), CurrentTaskIndex, *Task.Node->GetNodeName());

        SpawnOneMesh(Task);
        
        CurrentTaskIndex++;
        CurrentSceneTaskMeshIndex++; // 此时才自增挂载索引
        Count++;
    }

    OnProgress.Broadcast(CurrentTaskIndex, CurrentSceneTasks.Num());
}

void AAssimpSpawnManager::SpawnOneMesh(const FAssimpMeshTask Task)
{
    // 阶段 0: 基础有效性检查
    if (!CachedWorld.IsValid() || !Task.Mesh || !Task.Node) 
    {
        UE_LOG(LogTemp, Error, TEXT("[SpawnOneMesh] 关键引用丢失: Node, Mesh 或 World 为空"));
        return;
    }

    FTransform MeshTransform = Task.Node->GetRootTransform() * LocalOffset;
    
    AStaticMeshActor* TargetActor = nullptr;
    UStaticMeshComponent* TargetComp = nullptr;

    // 阶段 1: 确定目标 Actor 和 Component
    if (ExternalActor)
    {
        int32 CompIndex = CurrentSceneTaskMeshIndex; 
        
        if (ExternalMeshComponents.IsValidIndex(CompIndex))
        {
            TargetComp = ExternalMeshComponents[CompIndex];
        }
        
        if (!TargetComp)
        {
            TargetComp = NewObject<UStaticMeshComponent>(ExternalActor);
            
            USceneComponent* RootComp = ExternalActor->GetRootComponent();
            if (RootComp)
            {
                TargetComp->SetupAttachment(RootComp);
            }
            else
            {
                ExternalActor->SetRootComponent(TargetComp);
            }
            
            TargetComp->RegisterComponent();
            TargetComp->SetMobility(EComponentMobility::Movable);
            
            if (ExternalMeshComponents.IsValidIndex(CompIndex))
                ExternalMeshComponents[CompIndex] = TargetComp;
            else
                ExternalMeshComponents.Add(TargetComp);
        }
    }
    else
    {
        FActorSpawnParameters Params;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        TSubclassOf<AActor> ClassToUse = SpawnClass ? SpawnClass : AStaticMeshActor::StaticClass();
        
        AActor* Spawned = CachedWorld->SpawnActor(ClassToUse, &MeshTransform, Params);
        TargetActor = Cast<AStaticMeshActor>(Spawned);
        
        if (TargetActor)
        {
            TargetActor->SetMobility(EComponentMobility::Movable);
            TargetComp = TargetActor->GetStaticMeshComponent();
            ExternalMeshComponents.Add(TargetComp);
        }
    }

    // 阶段 2: 属性与资源应用
    if (TargetComp)
    {
        if (ExternalActor)
        {
            TargetComp->SetRelativeTransform(MeshTransform, false, nullptr, ETeleportType::ResetPhysics);
        }

        if (Task.Mesh->IsStaticMeshReady())
        {
            TargetComp->SetStaticMesh(Task.Mesh->GetStaticMesh_NoBuild());
        }

        UMaterialInstanceDynamic* TargetMID = nullptr;
        if (SceneMaterials.IsValidIndex(Task.SceneIndex))
        {
            auto& Mats = SceneMaterials[Task.SceneIndex].Materials;
            if (Mats.IsValidIndex(Task.MaterialIndex) && Mats[Task.MaterialIndex])
            {
                TargetMID = Mats[Task.MaterialIndex];
            }
        }

        if (TargetMID)
        {
            TargetComp->SetMaterial(0, TargetMID);
        }
        else if (ParentMaterial)
        {
            TargetComp->SetMaterial(0, ParentMaterial);
        }

        if (bEnableVerboseLog)
        {
            UE_LOG(LogTemp, Log, TEXT("[SpawnOneMesh] 成功: 节点=%s, 当前组件总数=%d"), 
                *Task.Node->GetNodeName(), ExternalMeshComponents.Num());
        }
    }
}

void AAssimpSpawnManager::FinishScene()
{
    // 【核心对账账单】
    UE_LOG(LogTemp, Error, TEXT("================ [AssetTracker 对账单] ================"));
    UE_LOG(LogTemp, Error, TEXT("场景 %d 结束!"), CurrentSceneIndex);
    UE_LOG(LogTemp, Error, TEXT("计划生成的总网格数 (CurrentSceneTasks.Num) = %d"), CurrentSceneTasks.Num());
    UE_LOG(LogTemp, Error, TEXT("实际挂载的组件数 (ExternalMeshComponents.Num) = %d"), ExternalMeshComponents.Num());
    
    if (CurrentSceneTasks.Num() != ExternalMeshComponents.Num())
    {
        UE_LOG(LogTemp, Error, TEXT("【警告】检测到模型丢失！差值为: %d"), FMath::Abs(CurrentSceneTasks.Num() - ExternalMeshComponents.Num()));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("【完美】所有模型 1:1 挂载成功！"));
    }
    UE_LOG(LogTemp, Error, TEXT("======================================================"));

    // 清理当前场景的状态
    bSceneActive = false;
    SceneAIMaterials.Empty();
    CurrentSceneTasks.Empty();
    NodeStack.Empty();
    MaterialIndex = 0;
    CurrentTaskIndex = 0;
    bRootQueued = false;

    // --- 恢复丢失的事件派发与多场景流转逻辑 ---
    int32 NextScene = CurrentSceneIndex + 1;
    
    if (NextScene >= Scenes.Num())
    {
        // 已经是最后一个场景，触发所有级别的完成事件
        if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[Assimp] ALL SCENES FINISHED — broadcasting events"));
        
        OnAllScenesFinished.Broadcast();
        OnSingleSceneMeshSpawnFinished.Broadcast(CurrentSceneIndex, ExternalMeshComponents);
        OnAllMeshSpawnFinished.Broadcast(ExternalMeshComponents); // 你需要的核心事件在这里触发！

        CurrentSceneIndex = NextScene;
    }
    else
    {
        // 还有后续场景，仅触发单场景完成事件，并继续解析下一个
        OnSingleSceneMeshSpawnFinished.Broadcast(CurrentSceneIndex, ExternalMeshComponents);

        CurrentSceneIndex = NextScene;
        StartNextScene();
    }
}

bool AAssimpSpawnManager::ImportTextureAsync(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal)
{
    if (!WorldContextObject || !AssimpMaterial || !AssimpScene || !DynamicMaterialUnreal || !TextureComponent)
    {
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
        return false;
    }

    TextureComponent->RequestTextureFromFile(FilePath, DynamicMaterialUnreal, DynamicMaterialParamName.ToString(), TextureType);

    return true;
}

void AAssimpSpawnManager::Cancel()
{
    bCancelled = true;
    if (bEnableVerboseLog) UE_LOG(LogTemp, Warning, TEXT("[Assimp] Cancel"));
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
    if (!TextureComponent) return;

    const int32 LocalGeneration = TextureGeneration;
    const int32 LocalSceneIndex = Tracker->SceneIndex;

    if (LocalGeneration != TextureGeneration)
    {
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

    IImageWrapperModule& ImageWrapper = FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");
    EImageFormat Format = ImageWrapper.DetectImageFormat(Data, Size);

    if (Format == EImageFormat::Invalid)
        return false;

    TSharedPtr<IImageWrapper> Wrapper = ImageWrapper.CreateImageWrapper(Format);

    if (!Wrapper.IsValid() || !Wrapper->SetCompressed(Data, Size))
        return false;

    OutWidth = Wrapper->GetWidth();
    OutHeight = Wrapper->GetHeight();

    if (!Wrapper->GetRaw(ERGBFormat::BGRA, 8, OutBGRA))
        return false;

    return true;
}

bool AAssimpSpawnManager::DecodeEmbeddedTexture(const aiTexture* Tex, FTextureRawData& Out)
{
    if (!Tex) return false;

    if (Tex->mHeight != 0)
    {
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
  
    const uint8* Data = reinterpret_cast<const uint8*>(Tex->pcData);
    const int32 Size = static_cast<int32>(Tex->mWidth); 

    if (Size <= 0 || !Data)
        return false;

    return DecodeCompressedToBGRA(Data, Size, Out.Width, Out.Height, Out.RawBGRA);
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

    return DecodeCompressedToBGRA(FileData.GetData(), FileData.Num(), Out.Width, Out.Height, Out.RawBGRA);
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
}