// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Queue.h"
#include "AIMaterial.h"
#include "AssimpFunctionLibrary.h"
#include "HAL/PlatformAtomics.h"
#include "ACTexture.h"
#include "MaterialTextureTracker.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AssimpSpawnManager.generated.h"

class UAIScene;
class UAINode;
class UAIMesh;
class UAIMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTextureStageFinished);

USTRUCT()
struct FAssimpMeshTask
{
    GENERATED_BODY()


    int32 SceneIndex = -1;
    UPROPERTY()
    UAINode* Node = nullptr;


    UPROPERTY()
    UAIMesh* Mesh = nullptr;


    int32 MaterialIndex = 0;

    
    UPROPERTY()
    AActor* TargetActor = nullptr;

    
    UPROPERTY()
    TArray<UStaticMeshComponent*> TargetMeshComponents;
};



USTRUCT()
struct FSceneMaterialBucket
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> Materials;
};

USTRUCT(BlueprintType)
struct FAssimpCachedMeshData
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Assimp Cache")
    FTransform NodeTransform = FTransform::Identity;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Assimp Cache")
    TObjectPtr<UAIMesh> Mesh = nullptr;

    // 与 Mesh 材质插槽数量保持一致，空槽位保持 nullptr
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Assimp Cache")
    TArray<TObjectPtr<UMaterialInterface>> MaterialSlots;
};

USTRUCT(BlueprintType)
struct FAssimpCachedSceneData
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Assimp Cache")
    TObjectPtr<UAIScene> Scene = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Assimp Cache")
    TArray<FAssimpCachedMeshData> MeshEntries;
};


UCLASS()
class UE_ASSIMP_API AAssimpSpawnManager : public AActor
{
	GENERATED_BODY()
	
public:
    AAssimpSpawnManager();

    UFUNCTION(BlueprintCallable, Category = "Assimp|Performance")
    void ApplyRecommendedPerformanceSettings();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Performance")
    bool bAutoApplyRecommendedSettingsAtBeginPlay = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    bool bEnableVerboseLog = false;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void Tick(float DeltaSeconds) override;

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    void InitializeAndStart(UObject* WorldContextObject, const TArray<UAIScene*>& InScenes);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "InitializeAndStart With Actor"))
    void InitializeAndStartWithActor(
        UObject* WorldContextObject, 
        const TArray<UAIScene*>& InScenes, 
        AActor* InActor
    );

    void Cancel();

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllScenesFinished);
    UPROPERTY(BlueprintAssignable)
    FOnAllScenesFinished OnAllScenesFinished;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSingleSceneMeshSpawnFinished, int32, SceneIndex, const TArray<UStaticMeshComponent*>&, MeshComponents);
    UPROPERTY(BlueprintAssignable)
    FOnSingleSceneMeshSpawnFinished OnSingleSceneMeshSpawnFinished;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllMeshSpawnFinished, const TArray<UStaticMeshComponent*>&, MeshComponents);
    UPROPERTY(BlueprintAssignable)
    FOnAllMeshSpawnFinished OnAllMeshSpawnFinished;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProgress, int32, Current, int32, Total);
    UPROPERTY(BlueprintAssignable)
    FOnProgress OnProgress;

    UFUNCTION(BlueprintCallable, Category = "Assimp")
    UAssimpImportContext* ImportScenesAsync(
        const TArray<FString>& InFilenames,
        int32 Flags,
        bool DisableAutoSpaceChange,
        int32 MaxConcurrentTasks,
        FOnProgressUpdated OnProgressUpdated,
        FOnImportSceneComplete OnImportSceneComplete
    );

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Assimp|Cache")
    bool IsSceneCached(const FString& ImportPath) const;

    UFUNCTION(BlueprintCallable, Category = "Assimp|Cache")
    bool SpawnCachedSceneByPath(const FString& ImportPath, AActor* InActor, bool bSpawnOverFrames = false);

    void EnqueueTextureDecode(const FString& FilePath, EAiTextureType TextureType, FName ParamName, UMaterialInstanceDynamic* MID, TSharedPtr<FMaterialTextureTracker> Tracker);

    void DispatchTexture(const FPendingTextureItem& Pending);

    bool DecodeEmbeddedTexture(const aiTexture* Tex, FTextureRawData& Out);

    bool DecodeExternalTexture(const FPendingTextureItem& Pending, FTextureRawData& Out);

    UFUNCTION()
    void OnAllSceneMaterialFinished();

    void OnSceneMaterialFinished(int32 SceneIndex);

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    TSubclassOf<AActor> SpawnClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Texture")
    UACTexture* TextureComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    UMaterialInterface* ParentMaterial = nullptr;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    UMaterialInterface* DefaultMaterial = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    float MaterialInterval = 0.01f;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    float NodeInterval = 0.01f;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    float SpawnInterval = 0.01f;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    int32 MaterialPerFrame = 3;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    int32 NodePerFrame = 5;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    int32 SpawnPerFrame = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    float DefaultTextureCooldownFrames = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    FTransform LocalOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    int32 MaxMeshesPerFrame = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    int32 MaxCamerasPerFrame = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    int32 MaxLightsPerFrame = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    int32 MaxMaterialsPerFrame = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    int32 MaxNodesPerFrame = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
    float LoopBuildHandleTime = 0.010f;

    UPROPERTY(EditAnywhere, Category = "Assimp|Build")
    int32 BuildMeshesPerFrame = 1;

    UPROPERTY(EditAnywhere, Category = "Assimp|Build")
    int32 VertexBudgetPerFrame = 800;

    UPROPERTY(EditAnywhere, Category = "Assimp|Build")
    int32 TriangleBudgetPerFrame = 800;

    UPROPERTY(EditAnywhere, Category = "Assimp|Build")
    int32 MaxConcurrentRawTasks = 2;

    int32 ActiveRawTaskCount = 0;

    int32 TextureGeneration = 0;

    float TextureCooldownFrames = 0;

    int32 PendingMaterialCount = 0;

    TQueue<TWeakObjectPtr<UAIMesh>> ActiveMeshQueue;
    TQueue<TWeakObjectPtr<UAIMesh>> RawBuildQueue;
    TArray<TSharedPtr<FMaterialTextureTracker>> ActiveTextureTrackers;




    UPROPERTY(Transient)
    TWeakObjectPtr<UWorld> CachedWorld;

    UPROPERTY(Transient)
    TArray<UAIScene*> Scenes;

    UPROPERTY(Transient)
    AActor* ExternalActor = nullptr;

    UPROPERTY(Transient)
    TArray<UStaticMeshComponent*> ExternalMeshComponents;

    int32 ExternalMeshComponentCount = 0;

    int32 CurrentSceneTaskMeshIndex = 0;

    UPROPERTY(Transient)
    UAssimpImportContext* AssimpImportContext = nullptr;

    UPROPERTY(Transient)
    TArray<FSceneMaterialBucket> SceneMaterials;


    UPROPERTY(Transient)
    TArray<UAIMaterial*> SceneAIMaterials;


    UPROPERTY(Transient)
    TArray<UAINode*> NodeStack;


    UPROPERTY(Transient)
    TArray<FAssimpMeshTask> CurrentSceneTasks;
    int32 CurrentTaskIndex = 0;

    UPROPERTY(Transient)
    TMap<FString, FAssimpCachedSceneData> SceneCacheByPath;

    int32 CurrentSceneIndex = 0;
    int32 MaterialIndex = 0;
    int32 PendingTextureImports = 0;
    int32 PendingTextureImportsForScene = 0;

    int32 TextureCount = 0;

    bool bWaitingTextures = false;
    bool bBuildingMeshTasks = false;
    bool bBuildingTextureTasks = false;
    bool bSceneActive = false;
    bool bCancelled = false;

    bool bRootQueued = false;

    float MaterialTickTimer = 0.f;
    float NodeTickTimer = 0.f;
    float SpawnTickTimer = 0.f;

    FTimerHandle CachedSceneSpawnTimerHandle;
    TArray<FAssimpCachedMeshData> PendingCachedMeshEntries;
    int32 PendingCachedMeshSpawnIndex = 0;
    TWeakObjectPtr<AActor> PendingCachedSpawnActor;


    void StartNextScene();
    void Tick_MakeMaterials();
    void Tick_BuildMeshTasks();
    void HandleMeshRawReady(UAIMesh* Mesh);
    void RegisterMesh(UAIMesh* Mesh);
    void Tick_BuildRawMeshData();
    void Tick_BuildMesh();
    void Tick_SpawnMeshes();

    void SpawnOneMesh(const FAssimpMeshTask Task);
    void FinishScene();

    bool ImportTextureAsync(UObject* WorldContextObject, EAiTextureType TextureType, FName DynamicMaterialParamName, UAIScene* AssimpScene, UAIMaterial* AssimpMaterial, UMaterialInstanceDynamic* DynamicMaterialUnreal);
    FString NormalizeSceneCachePath(const FString& ImportPath) const;
    void CacheCurrentSceneData();
    bool SpawnOneCachedMesh(const FAssimpCachedMeshData& CachedMeshData, AActor* InActor);
    void TickSpawnCachedSceneMeshes();

};
