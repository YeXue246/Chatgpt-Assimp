#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Async/Async.h"
#include "Containers/Queue.h"
#include "RHI.h"
#include "RHIResources.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AIMaterial.h"
#include "ACTexture.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextureReady, FName, Param, UTexture2D*, Texture);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllTexturesReady);

UENUM(BlueprintType)
enum class ETextureRequestState : uint8
{
    Waiting,
    Pending,
    Decoding,
    Decoded,
    Uploading,
    Uploaded,
    Completed
};

struct FTextureTile
{
    int32 X = 0;
    int32 Y = 0;

    int32 Width = 0;
    int32 Height = 0;

    int32 Pitch = 0;

    const uint8* Data = nullptr;
};

struct FTextureUploadTile
{
    int32 X = 0;
    int32 Y = 0;
    int32 Width = 0;
    int32 Height = 0;
    int32 Offset = 0;
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
        Data.Reset();
    }
};

struct FRuntimeTextureRequest
{
    FGuid ID;
    const struct aiTexture* SourceTexture = nullptr;
    FString ParameterName;
    TWeakObjectPtr<UMaterialInstanceDynamic> MID;
    int32 Width = 0;
    int32 Height = 0;
    bool bNormal = false;
    FTexturePixelBuffer PixelBuffer;
    UTexture2D* Texture = nullptr;
    FTexture2DRHIRef TextureRHI;
    TArray<FTextureTile> Tiles;
    int32 UploadedTiles = 0;
    int32 TotalTiles = 0;
    double StartTime = 0;
    double FinishTime = 0;
    int32 PendingMIDCount = 0;
    EAiTextureType TextureType = EAiTextureType::AiTextureType_UNKNOWN;
    ETextureRequestState State = ETextureRequestState::Pending;
};

struct FTextureUploadBudget
{
    int32 MaxUploadBytesPerFrame = 8 * 1024 * 1024;
    int32 CurrentBytes = 0;

    void Reset() { CurrentBytes = 0; }
    bool CanUpload(int32 Bytes) { return CurrentBytes + Bytes < MaxUploadBytesPerFrame; }
    void Consume(int32 Bytes) { CurrentBytes += Bytes; }
};

struct FRuntimeTexturePool
{
    TArray<UTexture2D*> Pool;
    UTexture2D* Acquire(int32 Width, int32 Height);
    void Release(UTexture2D* Tex);
};

// GPU RingBuffer 上传管理
struct FGPUUploadRingBuffer
{
    TArray<uint8> Buffer;
    int32 Size = 8 * 1024 * 1024; // 默认 8MB
    int32 WriteOffset = 0;

    void Init(int32 InSize = 8 * 1024 * 1024)
    {
        Size = InSize;
        Buffer.SetNumZeroed(Size);
        WriteOffset = 0;
    }

    int32 Allocate(int32 Bytes)
    {
        if (Bytes > Size) return -1;

        if (WriteOffset + Bytes > Size)
        {
            WriteOffset = 0; // 回绕
        }

        int32 Offset = WriteOffset;
        WriteOffset += Bytes;
        return Offset;
    }

    void Reset()
    {
        WriteOffset = 0;
    }
};

struct FZeroCopyUpload
{
    uint8* DataPtr = nullptr;
    int32 Size = 0;

    void Init(uint8* InData, int32 InSize)
    {
        DataPtr = InData;
        Size = InSize;
    }
};

struct FAsyncTileUpload
{
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> PendingTiles;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UE_ASSIMP_API UACTexture : public UActorComponent
{
    GENERATED_BODY()

public:

    UACTexture();

    virtual void TickComponent(
        float DeltaTime,
        ELevelTick TickType,
        FActorComponentTickFunction* ThisTickFunction) override;

    void RequestTexture(
        const struct aiTexture* Texture,
        UMaterialInstanceDynamic* MID,
        const FString& ParamName,
        EAiTextureType Type = EAiTextureType::AiTextureType_UNKNOWN);

    void TryStartDecode();

    void StartStreaming();
    void StopStreaming();

public:

    UPROPERTY(BlueprintAssignable)
    FOnTextureReady OnTextureReady;

    UPROPERTY(BlueprintAssignable)
    FOnAllTexturesReady OnAllTexturesReady;

private:
    void DecodeTexture(FRuntimeTextureRequest* Req);
    void CreateTiles(FRuntimeTextureRequest* Req);
    void ScheduleUpload(FRuntimeTextureRequest* Req);
    void UploadTile_RenderThread(FRuntimeTextureRequest* Req, FTextureTile Tile);
    void LogPerformance(FRuntimeTextureRequest* Req);
    ~UACTexture();
    void ResetRequest(FRuntimeTextureRequest* Req);
    void ApplyTexture(FRuntimeTextureRequest* Req);
    void CheckFinished();

private:

private:
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> RequestQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> DecodeQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> UploadQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> ApplyQueue;
    TMap<TWeakObjectPtr<UMaterialInstanceDynamic>, TSet<FName>> AppliedMIDParams;
    TArray<TUniquePtr<FRuntimeTextureRequest>> Requests;
    FRuntimeTexturePool TexturePool;
    FTextureUploadBudget Budget;
    FGPUUploadRingBuffer GPUBuffer;
    TArray<FZeroCopyUpload> ZeroCopyUploads;
    FAsyncTileUpload AsyncUploadQueue;
    int32 TotalTextures = 0;
    int32 FinishedTextures = 0;
    std::atomic<int32> DecodeQueueCount = 0;
    std::atomic<int32> UploadQueueCount = 0;
    int32 MaxDecodeThreads = 4;
    int32 MaxUploadQueue = 2;
    bool bStreaming = true;
};