#include "ACTexture.h"
#include "RenderResource.h"
#include "RenderingThread.h"
#include "RenderCommandFence.h"
#include "RHICommandList.h"
#include "Misc/Guid.h"
#include "assimp/texture.h"
#include "Rendering/Texture2DResource.h"
#include "Engine/Texture2D.h"
#include "RHI.h"
#include "RHIResources.h"


UACTexture::UACTexture()
{
    PrimaryComponentTick.bCanEverTick = true;
    bStreaming = false;
}

void UACTexture::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bStreaming)
        return;

    Budget.Reset();

    const int32 MaxTilesPerFrame = 2;
    int32 TilesThisFrame = MaxTilesPerFrame;

    while (TilesThisFrame > 0)
    {
        FRuntimeTextureRequest* Req = nullptr;

        if (!UploadQueue.Dequeue(Req))
            break;

        if (!Req)
            continue;

        for (int32 i = Req->UploadedTiles; i < Req->Tiles.Num(); ++i)
        {
            const FTextureTile& Tile = Req->Tiles[i];

            int64 Bytes = Tile.Width * Tile.Height * 4;

            if (!Budget.CanUpload(Bytes))
                break;

            Budget.Consume(Bytes);

            UploadTile_RenderThread(Req, Tile);

            Req->UploadedTiles++;

            TilesThisFrame--;

            if (TilesThisFrame <= 0)
                break;
        }

        if (Req->UploadedTiles < Req->TotalTiles)
        {
            UploadQueue.Enqueue(Req);
        }
        else
        {
            Req->State = ETextureRequestState::Uploaded;

            ApplyTexture(Req);

            Req->PixelBuffer.Data.Empty();

            Req->Tiles.Empty();
        }
    }
}

UTexture2D* FRuntimeTexturePool::Acquire(int32 Width, int32 Height)
{
    for (int32 i = 0; i < Pool.Num(); ++i)
    {
        UTexture2D* Tex = Pool[i];
        if (!Tex) continue;
        if (Tex->GetSizeX() == Width && Tex->GetSizeY() == Height)
        {
            Pool.RemoveAt(i);
            return Tex;
        }
    }
    return nullptr;
}

void FRuntimeTexturePool::Release(UTexture2D* Tex)
{
    if (Tex)
        Pool.Add(Tex);
}

void UACTexture::RequestTexture(const aiTexture* Texture, UMaterialInstanceDynamic* MID, const FString& ParamName, EAiTextureType Type)
{
    if (!Texture || !MID)
        return;

    TUniquePtr<FRuntimeTextureRequest> Req = MakeUnique<FRuntimeTextureRequest>();

    Req->ID = FGuid::NewGuid();
    Req->SourceTexture = Texture;
    Req->MID = MID;
    Req->ParameterName = ParamName;

    Req->StartTime = FPlatformTime::Seconds();

    Req->bNormal =
        (Type == EAiTextureType::AiTextureType_NORMALS ||
            Type == EAiTextureType::AiTextureType_NORMAL_CAMERA);

    Req->PendingMIDCount++;
    Req->State = ETextureRequestState::Pending;

    Requests.Add(MoveTemp(Req));

    FRuntimeTextureRequest* Ptr = Requests.Last().Get();

    DecodeQueue.Enqueue(Ptr);

    TotalTextures++;

    TryStartDecode();
}

void UACTexture::TryStartDecode()
{
    while (DecodeQueueCount < MaxDecodeThreads)
    {
        FRuntimeTextureRequest* Req = nullptr;

        if (!DecodeQueue.Dequeue(Req))
            return;

        DecodeQueueCount++;

        AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask,
            [this, Req]()
            {
                DecodeTexture(Req);

                DecodeQueueCount--;

                AsyncTask(ENamedThreads::GameThread,
                    [this]()
                    {
                        TryStartDecode();
                    });
            });
    }
}

void UACTexture::DecodeTexture(FRuntimeTextureRequest* Req)
{
    if (!Req || !Req->SourceTexture)
        return;

    Req->State = ETextureRequestState::Decoding;

    const aiTexture* SrcTex = Req->SourceTexture;

    Req->Width = SrcTex->mWidth;
    Req->Height = SrcTex->mHeight;

    int32 PixelCount = Req->Width * Req->Height * 4;

    Req->PixelBuffer.Data.SetNumUninitialized(PixelCount);

    FMemory::Memcpy(
        Req->PixelBuffer.Data.GetData(),
        SrcTex->pcData,
        PixelCount);

    AsyncTask(ENamedThreads::GameThread,
        [this, Req]()
        {
            Req->Texture = UTexture2D::CreateTransient(
                Req->Width,
                Req->Height,
                PF_B8G8R8A8);

            if (!Req->Texture)
                return;

            Req->Texture->MipGenSettings = TMGS_NoMipmaps;

            if (Req->bNormal)
            {
                Req->Texture->CompressionSettings = TC_Normalmap;
                Req->Texture->SRGB = false;
            }
            else
            {
                Req->Texture->CompressionSettings = TC_Default;
                Req->Texture->SRGB = true;
            }

            Req->Texture->UpdateResource();

            Req->State = ETextureRequestState::Decoded;

            CreateTiles(Req);

            Req->UploadedTiles = 0;
            Req->TotalTiles = Req->Tiles.Num();

            UploadQueue.Enqueue(Req);
        });
}

void UACTexture::CreateTiles(FRuntimeTextureRequest* Req)
{
    if (!Req)
        return;

    const int32 TileSize = 256;

    for (int32 y = 0; y < Req->Height; y += TileSize)
    {
        for (int32 x = 0; x < Req->Width; x += TileSize)
        {
            FTextureTile Tile;

            Tile.X = x;
            Tile.Y = y;

            Tile.Width = FMath::Min(TileSize, Req->Width - x);
            Tile.Height = FMath::Min(TileSize, Req->Height - y);

            Tile.Pitch = Req->Width * 4;

            int32 Offset = (y * Req->Width + x) * 4;

            Tile.Data =
                Req->PixelBuffer.Data.GetData() + Offset;

            Req->Tiles.Add(Tile);
        }
    }

    Req->TotalTiles = Req->Tiles.Num();
}

void UACTexture::ScheduleUpload(FRuntimeTextureRequest* Req)
{
    if (!Req || Req->State != ETextureRequestState::Decoded) return;

    Req->State = ETextureRequestState::Uploading;

    for (const FTextureTile& Tile : Req->Tiles)
    {
        // 检查每帧预算
        if (!Budget.CanUpload(Tile.Width * Tile.Height * 4))
        {
            // 如果超出预算，延迟下一帧上传
            continue;
        }

        Budget.Consume(Tile.Width * Tile.Height * 4);

        // 上传到 RenderThread
        UploadTile_RenderThread(Req, Tile);
    }
}

void UACTexture::UploadTile_RenderThread(FRuntimeTextureRequest* Req, FTextureTile Tile)
{
    if (!Req || !Req->Texture)
        return;

    ENQUEUE_RENDER_COMMAND(UploadTextureTile)(
        [Req, Tile](FRHICommandListImmediate& RHICmdList)
        {
            FTexture2DResource* Res =
                (FTexture2DResource*)Req->Texture->GetResource();

            if (!Res)
                return;

            uint32 SrcPitch = Req->Width * 4;

            FUpdateTextureRegion2D Region(
                Tile.X,
                Tile.Y,
                0,
                0,
                Tile.Width,
                Tile.Height);

            RHIUpdateTexture2D(
                Res->GetTexture2DRHI(),
                0,
                Region,
                SrcPitch,
                Tile.Data);
        });
}


void UACTexture::ApplyTexture(FRuntimeTextureRequest* Req)
{
    if (!Req)
        return;

    if (Req->MID.IsValid())
    {
        FName Param(*Req->ParameterName);

        if (!AppliedMIDParams.Contains(Req->MID) ||
            !AppliedMIDParams[Req->MID].Contains(Param))
        {
            Req->MID->SetTextureParameterValue(
                Param,
                Req->Texture);

            AppliedMIDParams.FindOrAdd(Req->MID).Add(Param);
        }

        Req->PendingMIDCount--;
    }

    if (Req->PendingMIDCount <= 0)
    {
        Req->State = ETextureRequestState::Completed;

        FinishedTextures++;

        CheckFinished();
    }
}

void UACTexture::CheckFinished()
{
    if (FinishedTextures >= TotalTextures)
    {
        UE_LOG(LogTemp, Log, TEXT("All %d textures finished in %.3f s"), FinishedTextures, FPlatformTime::Seconds());

        OnAllTexturesReady.Broadcast();
        StopStreaming();

        TotalTextures = 0;
        FinishedTextures = 0;
    }
}

void UACTexture::StartStreaming()
{
    bStreaming = true;

    // 可以根据需求启动后台任务，持续处理 DecodeQueue
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this]()
        {
            while (bStreaming)
            {
                FRuntimeTextureRequest* Req = nullptr;

                // 从解码队列获取请求
                if (DecodeQueue.Dequeue(Req))
                {
                    DecodeTexture(Req);
                }
                else
                {
                    // 队列空时，睡眠一小段时间，减少 CPU 占用
                    FPlatformProcess::Sleep(0.001f);
                }
            }
        });
}

void UACTexture::StopStreaming()
{
    bStreaming = false;
}


void UACTexture::LogPerformance(FRuntimeTextureRequest* Req)
{
    if (!Req) return;

    double DecodeTime = Req->FinishTime - Req->StartTime;
    double UploadTime = FPlatformTime::Seconds() - Req->FinishTime;

    UE_LOG(LogTemp, Log, TEXT("Texture %s decode %.3f s, upload %.3f s"), *Req->ParameterName, DecodeTime, UploadTime);
}

UACTexture::~UACTexture()
{
    bStreaming = false;


    for (UTexture2D* Tex : TexturePool.Pool)
    {
        if (Tex)
        {
            Tex->RemoveFromRoot();
        }
    }
    TexturePool.Pool.Empty();


    for (TUniquePtr<FRuntimeTextureRequest>& Req : Requests)
    {
        if (Req->Texture)
        {
            Req->Texture->RemoveFromRoot();
            Req->Texture = nullptr;
        }
    }

    Requests.Empty();
    UploadQueue.Empty();
    DecodeQueue.Empty();
    ZeroCopyUploads.Empty();
}

void UACTexture::ResetRequest(FRuntimeTextureRequest* Req)
{
    if (!Req) return;

    Req->PendingMIDCount = 0;
    Req->UploadedTiles = 0;
    Req->TotalTiles = 0;
    Req->State = ETextureRequestState::Waiting;
    Req->PixelBuffer.Data.Empty();

    if (Req->Texture)
    {
        Req->Texture->RemoveFromRoot();
        Req->Texture = nullptr;
    }
}
