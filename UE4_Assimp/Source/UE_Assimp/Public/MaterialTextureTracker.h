#pragma once
#include "CoreMinimal.h"
#include "AIMaterial.h"

struct FMaterialTextureTracker
{
    FThreadSafeCounter PendingCount;
    FThreadSafeBool bFinished{ false };

    int32 SceneIndex = INDEX_NONE;
    int32 Generation = 0;

    TFunction<void()> OnAllFinished;

    void Init(int32 InPending)
    {
        PendingCount.Set(InPending);
    }

    void OneFinished()
    {
        const int32 Left = PendingCount.Decrement();
        if (Left <= 0)
        {
            bool bExpected = false;
            if (FPlatformAtomics::InterlockedCompareExchange(reinterpret_cast<int32*>(&bFinished), 1, 0) == 0)
            {
                if (OnAllFinished)
                {
                    AsyncTask(ENamedThreads::GameThread, [Callback = OnAllFinished]()
                        {
                            Callback();
                        });
                }
            }
        }

    }
};

struct FPendingTextureItem
{
    FString Path;
    EAiTextureType TextureType;
    FName MaterialParam;
    int32 SceneIndex;
    int32 Generation;
    TArray<uint8> RawBGRA;
    int32 Width;
    int32 Height;
    bool bIsCompressed = false;
    TWeakObjectPtr<UMaterialInstanceDynamic> MID;
    TSharedPtr<FMaterialTextureTracker> Tracker;
    TWeakObjectPtr<UWorld> World;
};

struct FTextureRawData
{
    int32 Width = 0;
    int32 Height = 0;
    bool bIsCompressed;
    TArray<uint8> RawBGRA;
};