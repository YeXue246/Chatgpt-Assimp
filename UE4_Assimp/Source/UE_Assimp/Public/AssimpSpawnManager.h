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
};



USTRUCT()
struct FSceneMaterialBucket
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> Materials;
};

//UENUM()
//enum class EACTextureType : uint8
//{
//    Color,
//    Normal,
//    Mask
//};
//
//struct FTextureRawData
//{
//    int32 Width = 0;
//    int32 Height = 0;
//    TArray<uint8> RawBGRA;
//
//    bool IsValid() const
//    {
//        return Width > 0 && Height > 0 && RawBGRA.Num() == Width * Height * 4;
//    }
//};
//
//struct FPendingTextureCreate;
//struct FMaterialTextureTracker;
//struct FMaterialTextureTracker : public TSharedFromThis<FMaterialTextureTracker>
//{
//    FThreadSafeCounter PendingCount;
//    FThreadSafeBool bFinished{ false };
//
//    int32 SceneIndex = INDEX_NONE;
//    int32 Generation = 0;
//
//    TFunction<void()> OnAllFinished;
//
//    void Init(int32 InPending)
//    {
//        PendingCount.Set(InPending);
//    }
//
//    void OneFinished()
//    {
//        const int32 Left = PendingCount.Decrement();
//        if (Left <= 0)
//        {
//            bool bExpected = false;
//            if (FPlatformAtomics::InterlockedCompareExchange(reinterpret_cast<int32*>(&bFinished), 1, 0) == 0)
//            {
//                if (OnAllFinished)
//                {
//                    AsyncTask(ENamedThreads::GameThread, [Callback = OnAllFinished]()
//                        {
//                            Callback();
//                        });
//                }
//            }
//        }
//
//    }
//};
//
//USTRUCT()
//struct FPendingTextureCreate
//{
//    bool bEmbedded = false;
//    const aiTexture* EmbeddedTex = nullptr;
//
//    FString FilePath;
//    FName ParamName;
//    int32 SceneIndex = INDEX_NONE;
//    int32 Generation = 0;
//
//    UMaterialInstanceDynamic* MID = nullptr;
//    EACTextureType TextureType = EACTextureType::Color;
//    TSharedPtr<FMaterialTextureTracker> Tracker;
//};


UCLASS()
class UE_ASSIMP_API AAssimpSpawnManager : public AActor
{
	GENERATED_BODY()
	
public:
    AAssimpSpawnManager();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Spawn")
    bool bEnableVerboseLog = true;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void Tick(float DeltaSeconds) override;

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    void InitializeAndStart(UObject* WorldContextObject, const TArray<UAIScene*>& InScenes);

    void Cancel();

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllScenesFinished);
    UPROPERTY(BlueprintAssignable)
    FOnAllScenesFinished OnAllScenesFinished;


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
    float LoopBuildHandleTime = 0.034f;

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

};
