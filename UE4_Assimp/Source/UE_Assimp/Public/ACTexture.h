#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Async/Async.h"
#include "Containers/Queue.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AIMaterial.h"
#include "ACTexture.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextureReady, FName, Param, UTexture2D*, Texture);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllTexturesReady);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureCreateDeferredWarning, const FString&, Message);

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
    const uint8* Data = nullptr;
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
    int64 DecodedBytes = 0;
    int32 CreateDeferredFrames = 0;
    int32 CreateDeferredWarnings = 0;
    double StartTime = 0;
    double DecodeEndTime = 0;
    int32 PendingMIDCount = 0;
    EAiTextureType TextureType = EAiTextureType::AiTextureType_UNKNOWN;
    ETextureRequestState State = ETextureRequestState::Pending;
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

    UFUNCTION(BlueprintCallable, Category = "Assimp|Texture")
    void RequestTexture(const struct aiTexture* Texture, UMaterialInstanceDynamic* MID, const FString& ParamName, EAiTextureType Type = EAiTextureType::AiTextureType_UNKNOWN);

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

    UPROPERTY(BlueprintAssignable, Category = "Assimp|Texture")
    FOnTextureCreateDeferredWarning OnTextureCreateDeferredWarning;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "16"))
    int32 MaxDecodeTasks = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "16"))
    int32 MaxTilesPerFrame = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "131072", UIMin = "1048576", UIMax = "16777216"))
    int32 MaxUploadBytesPerFrame = 2 * 1024 * 1024;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "8"))
    int32 MaxTextureCreatesPerFrame = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "32", UIMin = "64", UIMax = "4096"))
    int32 MinAvailablePhysicalMemoryMB = 256;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "4194304", UIMin = "16777216", UIMax = "536870912"))
    int64 MaxDecodedBytesInFlight = 128ll * 1024ll * 1024ll;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "600"))
    int32 MaxCreateDefersBeforeFail = 120;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "32", UIMin = "32", UIMax = "2048"))
    int32 CriticalAvailablePhysicalMemoryMB = 128;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "16", UIMin = "16", UIMax = "1024"))
    int32 HardFailAvailablePhysicalMemoryMB = 32;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "1", ClampMax = "64"))
    int32 MaxCreateQueueChecksPerFrame = 8;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Performance", meta = (ClampMin = "64", ClampMax = "1024"))
    int32 UploadTileSize = 256;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp|Texture|Flow")
    bool bAutoStartStreaming = true;

private:
    bool DecodeTexture(FRuntimeTextureRequest* Req);
    bool DecodeAssimpTextureToBGRA(FRuntimeTextureRequest* Req);
    void CreateTiles(FRuntimeTextureRequest* Req);
    bool CreateTextureResource(FRuntimeTextureRequest* Req);
    bool CanCreateTextureResourceNow(const FRuntimeTextureRequest* Req) const;
    void ReleaseDecodedBuffer(FRuntimeTextureRequest* Req);
    void UploadTile_RenderThread(FRuntimeTextureRequest* Req, const FTextureTile& Tile);
    void ApplyTexture(FRuntimeTextureRequest* Req);
    void MarkRequestFailed(FRuntimeTextureRequest* Req);
    void CheckFinished();
    void Cleanup();

private:
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> DecodeQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> CreateQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> UploadQueue;
    TQueue<FRuntimeTextureRequest*, EQueueMode::Mpsc> ApplyQueue;
    TMap<TWeakObjectPtr<UMaterialInstanceDynamic>, TSet<FName>> AppliedMIDParams;
    TArray<TUniquePtr<FRuntimeTextureRequest>> Requests;
    FTextureUploadBudget Budget;

    int32 TotalTextures = 0;
    int32 FinishedTextures = 0;
    int64 CurrentDecodedBytesInFlight = 0;
    std::atomic<int32> DecodeQueueCount = 0;
    bool bStreaming = false;
};
