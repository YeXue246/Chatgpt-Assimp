#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Async/Async.h"
#include "Containers/Queue.h"
#include "RenderCommandFence.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AIMaterial.h"
#include "ACTexture.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextureReady, FName, Param, UTexture2D*, Texture);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllTexturesReady);

UENUM(BlueprintType)
enum class ETextureMemoryPressureLevel : uint8
{
    Normal,
    Warning,
    Critical
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMemoryPressure, ETextureMemoryPressureLevel, PressureLevel, FName, Param, int32, AvailableMemoryMB, int32, ThresholdMemoryMB);


UENUM(BlueprintType)
enum class ETextureRequestState : uint8
{
    Waiting,
    Pending,
    Decoding,
    Decoded,
    Uploading,
    Uploaded,
    Completed,
    Failed
};

struct FTextureTile
{
    int32 X = 0;
    int32 Y = 0;
    int32 Width = 0;
    int32 Height = 0;
    int32 Pitch = 0;
    TArray<uint8> Data;
};

struct FTexturePixelBuffer
{
    int32 Width = 0;
    int32 Height = 0;
    bool bNormalMap = false;
    TArray<uint8> Data;

    void Reset()
    {
        Width = 0;
        Height = 0;
        bNormalMap = false;
        Data.Reset();
    }
};

struct FRuntimeTextureRequest
{
    FGuid ID;
    const struct aiTexture* SourceTexture = nullptr;
    FString SourceFilePath;
    FString ParameterName;
    TWeakObjectPtr<UMaterialInstanceDynamic> MID;
    int32 Width = 0;
    int32 Height = 0;
    bool bNormal = false;
    FTexturePixelBuffer PixelBuffer;
    UTexture2D* Texture = nullptr;
    TArray<FTextureTile> Tiles;
    int32 UploadedTiles = 0;
    int32 TotalTiles = 0;
    double StartTime = 0;
    double DecodeEndTime = 0;
    int32 PendingMIDCount = 0;
    FRenderCommandFence UploadFence;
    bool bUploadFenceBegun = false;
    EAiTextureType TextureType = EAiTextureType::AiTextureType_UNKNOWN;
    ETextureRequestState State = ETextureRequestState::Pending;
    bool bWarningBroadcasted = false;
};

struct FTextureUploadBudget
{
    int32 MaxUploadBytesPerFrame = 8 * 1024 * 1024;
    int32 CurrentBytes = 0;

    void Reset() { CurrentBytes = 0; }
    bool CanUpload(int32 Bytes) const { return (CurrentBytes + Bytes) <= MaxUploadBytesPerFrame; }
    void Consume(int32 Bytes) { CurrentBytes += Bytes; }
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UE_ASSIMP_API UACTexture : public UActorComponent
{
    GENERATED_BODY()

public:
    UACTexture();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void BeginDestroy() override;


    void RequestTexture(const struct aiTexture* Texture, UMaterialInstanceDynamic* MID, const FString& ParamName, EAiTextureType Type = EAiTextureType::AiTextureType_UNKNOWN);

    void RequestTextureFromFile(const FString& FilePath, UMaterialInstanceDynamic* MID, const FString& ParamName, EAiTextureType Type);

    UFUNCTION(BlueprintCallable, Category = "Assimp|Texture")
    void TryStartDecode();

    UFUNCTION(BlueprintCallable, Category = "Assimp|Texture")
    void StartStreaming();

    UFUNCTION(BlueprintCallable, Category = "Assimp|Texture")
    void StopStreaming();

public:
    UPROPERTY(BlueprintAssignable)
    FOnTextureReady OnTextureReady;

    UPROPERTY(BlueprintAssignable)
    FOnAllTexturesReady OnAllTexturesReady;

    UPROPERTY(BlueprintAssignable)
    FOnMemoryPressure OnMemoryPressure;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "16"))
    int32 MaxDecodeTasks = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "16"))
    int32 MaxTilesPerFrame = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "131072", UIMin = "1048576", UIMax = "16777216"))
    int32 MaxUploadBytesPerFrame = 2 * 1024 * 1024;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "64", ClampMax = "1024"))
    int32 UploadTileSize = 256;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Flow")
    bool bAutoStartStreaming = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Memory", meta = (ClampMin = "64", UIMin = "128", UIMax = "4096"))
    int32 CriticalMemoryThresholdMB = 256;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Memory", meta = (ClampMin = "128", UIMin = "256", UIMax = "8192"))
    int32 WarningMemoryThresholdMB = 1024;


private:
    bool DecodeTexture(FRuntimeTextureRequest* Req);
    bool DecodeAssimpTextureToBGRA(FRuntimeTextureRequest* Req);
    void CreateTiles(FRuntimeTextureRequest* Req);
    void UploadTile_RenderThread(FRuntimeTextureRequest* Req, const FTextureTile& Tile);
    void ApplyTexture(FRuntimeTextureRequest* Req);
    void MarkRequestFailed(FRuntimeTextureRequest* Req);
    bool HandleMemoryPressure(FRuntimeTextureRequest* Req);
    void CheckFinished();
    void Cleanup();

private:
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> DecodeQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> UploadQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> ApplyQueue;
    TMap<TWeakObjectPtr<UMaterialInstanceDynamic>, TSet<FName>> AppliedMIDParams;
    TArray<TUniquePtr<FRuntimeTextureRequest>> Requests;
    FTextureUploadBudget Budget;

    int32 TotalTextures = 0;
    int32 FinishedTextures = 0;
    std::atomic<int32> DecodeQueueCount = 0;
    bool bStreaming = false;
};
