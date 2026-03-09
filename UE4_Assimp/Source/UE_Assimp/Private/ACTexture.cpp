#include "ACTexture.h"

#include "Misc/Guid.h"
#include "RenderingThread.h"
#include "Rendering/Texture2DResource.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Modules/ModuleManager.h"
#include "assimp/texture.h"


namespace
{
bool IsLinearColorTextureType(const EAiTextureType TextureType)
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

UACTexture::UACTexture()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UACTexture::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bStreaming)
    {
        return;
    }

    Budget.MaxUploadBytesPerFrame = FMath::Max(131072, MaxUploadBytesPerFrame);
    Budget.Reset();

    int32 TilesThisFrame = FMath::Max(1, MaxTilesPerFrame);

    while (TilesThisFrame > 0)
    {
        FRuntimeTextureRequest* Req = nullptr;
        if (!UploadQueue.Dequeue(Req) || !Req)
        {
            break;
        }

        if (Req->State != ETextureRequestState::Decoded && Req->State != ETextureRequestState::Uploading)
        {
            continue;
        }

        Req->State = ETextureRequestState::Uploading;

        for (int32 i = Req->UploadedTiles; i < Req->Tiles.Num(); ++i)
        {
            const FTextureTile& Tile = Req->Tiles[i];
            const int32 Bytes = Tile.Width * Tile.Height * 4;

            if (!Budget.CanUpload(Bytes))
            {
                break;
            }

            Budget.Consume(Bytes);
            UploadTile_RenderThread(Req, Tile);
            ++Req->UploadedTiles;
            --TilesThisFrame;

            if (TilesThisFrame <= 0)
            {
                break;
            }
        }

        if (Req->UploadedTiles < Req->TotalTiles)
        {
            UploadQueue.Enqueue(Req);
        }
        else
        {
            Req->State = ETextureRequestState::Uploaded;
            Req->Tiles.Reset();
            Req->UploadFence.BeginFence();
            Req->bUploadFenceBegun = true;
            ApplyQueue.Enqueue(Req);
        }
    }

    FRuntimeTextureRequest* ApplyReq = nullptr;
    while (ApplyQueue.Dequeue(ApplyReq))
    {
        ApplyTexture(ApplyReq);
    }
}

void UACTexture::RequestTexture(const aiTexture* Texture, UMaterialInstanceDynamic* MID, const FString& ParamName, EAiTextureType Type)
{
    if (!Texture || !MID || ParamName.IsEmpty())
    {
        return;
    }

    TUniquePtr<FRuntimeTextureRequest> Req = MakeUnique<FRuntimeTextureRequest>();
    Req->ID = FGuid::NewGuid();
    Req->SourceTexture = Texture;
    Req->MID = MID;
    Req->ParameterName = ParamName;
    Req->TextureType = Type;
    Req->StartTime = FPlatformTime::Seconds();
    Req->bNormal = (Type == EAiTextureType::AiTextureType_NORMALS || Type == EAiTextureType::AiTextureType_NORMAL_CAMERA);
    Req->PendingMIDCount = 1;
    Req->State = ETextureRequestState::Pending;

    Requests.Add(MoveTemp(Req));
    FRuntimeTextureRequest* Ptr = Requests.Last().Get();

    DecodeQueue.Enqueue(Ptr);
    ++TotalTextures;

    if (bAutoStartStreaming)
    {
        StartStreaming();
    }

    TryStartDecode();
}

void UACTexture::TryStartDecode()
{
    if (!bStreaming)
    {
        return;
    }

    const int32 DecodeLimit = FMath::Max(1, MaxDecodeTasks);
    while (DecodeQueueCount.load() < DecodeLimit)
    {
        FRuntimeTextureRequest* Req = nullptr;
        if (!DecodeQueue.Dequeue(Req) || !Req)
        {
            return;
        }

        ++DecodeQueueCount;

        AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, Req]()
        {
            const bool bDecodeOk = DecodeTexture(Req);

            AsyncTask(ENamedThreads::GameThread, [this, Req, bDecodeOk]()
            {
                if (!bDecodeOk || !Req)
                {
                    MarkRequestFailed(Req);
                    --DecodeQueueCount;
                    TryStartDecode();
                    return;
                }

                Req->Texture = UTexture2D::CreateTransient(Req->Width, Req->Height, PF_B8G8R8A8);
                if (!Req->Texture)
                {
                    MarkRequestFailed(Req);
                    --DecodeQueueCount;
                    TryStartDecode();
                    return;
                }

                Req->Texture->AddToRoot();
                Req->Texture->MipGenSettings = TMGS_NoMipmaps;
                Req->Texture->NeverStream = true;
                if (Req->bNormal)
                {
                    Req->Texture->CompressionSettings = TC_Normalmap;
                }
                else if (IsLinearColorTextureType(Req->TextureType))
                {
                    Req->Texture->CompressionSettings = TC_Masks;
                }
                else
                {
                    Req->Texture->CompressionSettings = TC_Default;
                }

                Req->Texture->SRGB = !IsLinearColorTextureType(Req->TextureType);
                Req->Texture->UpdateResource();

                Req->State = ETextureRequestState::Decoded;
                CreateTiles(Req);
                Req->UploadedTiles = 0;
                Req->TotalTiles = Req->Tiles.Num();
                UploadQueue.Enqueue(Req);

                --DecodeQueueCount;
                TryStartDecode();
            });
        });
    }
}

bool UACTexture::DecodeTexture(FRuntimeTextureRequest* Req)
{
    if (!Req || !Req->SourceTexture)
    {
        return false;
    }

    Req->State = ETextureRequestState::Decoding;
    const bool bDecoded = DecodeAssimpTextureToBGRA(Req);
    Req->DecodeEndTime = FPlatformTime::Seconds();
    return bDecoded;
}

bool UACTexture::DecodeAssimpTextureToBGRA(FRuntimeTextureRequest* Req)
{
    const aiTexture* SrcTex = Req ? Req->SourceTexture : nullptr;
    if (!SrcTex)
    {
        return false;
    }

    Req->PixelBuffer.Reset();

    if (SrcTex->mHeight > 0)
    {
        Req->Width = static_cast<int32>(SrcTex->mWidth);
        Req->Height = static_cast<int32>(SrcTex->mHeight);

        const int64 Bytes = static_cast<int64>(Req->Width) * Req->Height * 4;
        if (Req->Width <= 0 || Req->Height <= 0 || Bytes <= 0 || Bytes > TNumericLimits<int32>::Max())
        {
            return false;
        }

        Req->PixelBuffer.Data.SetNumUninitialized(static_cast<int32>(Bytes));
        FMemory::Memcpy(Req->PixelBuffer.Data.GetData(), SrcTex->pcData, static_cast<SIZE_T>(Bytes));
        return true;
    }

    const uint8* CompressedData = reinterpret_cast<const uint8*>(SrcTex->pcData);
    const int32 CompressedSize = static_cast<int32>(SrcTex->mWidth);
    if (!CompressedData || CompressedSize <= 0)
    {
        return false;
    }

    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));
    EImageFormat Format = ImageWrapperModule.DetectImageFormat(CompressedData, CompressedSize);
    if (Format == EImageFormat::Invalid)
    {
        return false;
    }

    TSharedPtr<IImageWrapper> Wrapper = ImageWrapperModule.CreateImageWrapper(Format);
    if (!Wrapper.IsValid() || !Wrapper->SetCompressed(CompressedData, CompressedSize))
    {
        return false;
    }

    Req->Width = Wrapper->GetWidth();
    Req->Height = Wrapper->GetHeight();
    if (Req->Width <= 0 || Req->Height <= 0)
    {
        return false;
    }

    TArray<uint8> RawBGRA;
    if (!Wrapper->GetRaw(ERGBFormat::BGRA, 8, RawBGRA))
    {
        return false;
    }

    Req->PixelBuffer.Data = MoveTemp(RawBGRA);
    return Req->PixelBuffer.Data.Num() == (Req->Width * Req->Height * 4);
}

void UACTexture::CreateTiles(FRuntimeTextureRequest* Req)
{
    if (!Req || Req->Width <= 0 || Req->Height <= 0 || Req->PixelBuffer.Data.Num() <= 0)
    {
        return;
    }

    const int32 TileSize = FMath::Clamp(UploadTileSize, 64, 1024);

    for (int32 Y = 0; Y < Req->Height; Y += TileSize)
    {
        for (int32 X = 0; X < Req->Width; X += TileSize)
        {
            FTextureTile Tile;
            Tile.X = X;
            Tile.Y = Y;
            Tile.Width = FMath::Min(TileSize, Req->Width - X);
            Tile.Height = FMath::Min(TileSize, Req->Height - Y);
            Tile.Pitch = Tile.Width * 4;
            Tile.Data.SetNumUninitialized(Tile.Width * Tile.Height * 4);

            for (int32 Row = 0; Row < Tile.Height; ++Row)
            {
                const int32 SrcOffset = ((Y + Row) * Req->Width + X) * 4;
                const int32 DstOffset = Row * Tile.Pitch;
                FMemory::Memcpy(Tile.Data.GetData() + DstOffset, Req->PixelBuffer.Data.GetData() + SrcOffset, Tile.Pitch);
            }

            Req->Tiles.Add(MoveTemp(Tile));
        }
    }
}

void UACTexture::UploadTile_RenderThread(FRuntimeTextureRequest* Req, const FTextureTile& Tile)
{
    if (!Req || !Req->Texture || Tile.Data.Num() <= 0)
    {
        return;
    }

    ENQUEUE_RENDER_COMMAND(UploadTextureTile)([Req, Tile](FRHICommandListImmediate& RHICmdList)
    {
        FTexture2DResource* Res = static_cast<FTexture2DResource*>(Req->Texture->GetResource());
        if (!Res)
        {
            return;
        }

        const FUpdateTextureRegion2D Region(Tile.X, Tile.Y, 0, 0, Tile.Width, Tile.Height);
        RHIUpdateTexture2D(Res->GetTexture2DRHI(), 0, Region, Tile.Pitch, Tile.Data.GetData());
    });
}

void UACTexture::ApplyTexture(FRuntimeTextureRequest* Req)
{
    if (!Req)
    {
        return;
    }

    if (!IsInGameThread())
    {
        AsyncTask(ENamedThreads::GameThread, [this, Req]() { ApplyTexture(Req); });
        return;
    }

    if (Req->bUploadFenceBegun && !Req->UploadFence.IsFenceComplete())
    {
        ApplyQueue.Enqueue(Req);
        return;
    }

    Req->bUploadFenceBegun = false;
    Req->PixelBuffer.Data.Reset();

    if (Req->MID.IsValid() && Req->Texture)
    {
        FName Param(*Req->ParameterName);
        TSet<FName>& ParamSet = AppliedMIDParams.FindOrAdd(Req->MID);

        if (!ParamSet.Contains(Param))
        {
            Req->MID->SetTextureParameterValue(Param, Req->Texture);
            ParamSet.Add(Param);
            OnTextureReady.Broadcast(Param, Req->Texture);
        }

        --Req->PendingMIDCount;
    }

    if (Req->PendingMIDCount <= 0)
    {
        Req->State = ETextureRequestState::Completed;
        ++FinishedTextures;
        CheckFinished();
    }
}

void UACTexture::MarkRequestFailed(FRuntimeTextureRequest* Req)
{
    if (!Req)
    {
        return;
    }

    Req->State = ETextureRequestState::Failed;
    ++FinishedTextures;
    CheckFinished();
}

void UACTexture::CheckFinished()
{
    if (TotalTextures <= 0 || FinishedTextures < TotalTextures)
    {
        return;
    }

    OnAllTexturesReady.Broadcast();
    TotalTextures = 0;
    FinishedTextures = 0;
    StopStreaming();
}

void UACTexture::StartStreaming()
{
    bStreaming = true;
    TryStartDecode();
}

void UACTexture::StopStreaming()
{
    bStreaming = false;
}

void UACTexture::BeginDestroy()
{
    Cleanup();
    Super::BeginDestroy();
}

void UACTexture::Cleanup()
{
    bStreaming = false;

    for (TUniquePtr<FRuntimeTextureRequest>& Req : Requests)
    {
        if (Req.IsValid() && Req->Texture)
        {
            Req->Texture->RemoveFromRoot();
            Req->Texture = nullptr;
        }
    }

    Requests.Reset();
    DecodeQueue.Empty();
    UploadQueue.Empty();
    ApplyQueue.Empty();
    AppliedMIDParams.Reset();
    DecodeQueueCount = 0;
}
