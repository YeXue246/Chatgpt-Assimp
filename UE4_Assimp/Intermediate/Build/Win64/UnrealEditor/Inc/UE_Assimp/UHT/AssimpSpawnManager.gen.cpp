// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AssimpSpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssimpSpawnManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_AAssimpSpawnManager();
UE_ASSIMP_API UClass* Z_Construct_UClass_AAssimpSpawnManager_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UACTexture_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpImportContext_NoRegister();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAssimpMeshTask();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FSceneMaterialBucket();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Delegate FOnTextureStageFinished
struct Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnTextureStageFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureStageFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTextureStageFinished)
{
	OnTextureStageFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTextureStageFinished

// Begin ScriptStruct FAssimpMeshTask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssimpMeshTask;
class UScriptStruct* FAssimpMeshTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssimpMeshTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssimpMeshTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssimpMeshTask, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("AssimpMeshTask"));
	}
	return Z_Registration_Info_UScriptStruct_AssimpMeshTask.OuterSingleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FAssimpMeshTask>()
{
	return FAssimpMeshTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssimpMeshTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssimpMeshTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssimpMeshTask, Node), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssimpMeshTask, Mesh), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	&NewStructOps,
	"AssimpMeshTask",
	Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::PropPointers),
	sizeof(FAssimpMeshTask),
	alignof(FAssimpMeshTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssimpMeshTask()
{
	if (!Z_Registration_Info_UScriptStruct_AssimpMeshTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssimpMeshTask.InnerSingleton, Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssimpMeshTask.InnerSingleton;
}
// End ScriptStruct FAssimpMeshTask

// Begin ScriptStruct FSceneMaterialBucket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneMaterialBucket;
class UScriptStruct* FSceneMaterialBucket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneMaterialBucket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneMaterialBucket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneMaterialBucket, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("SceneMaterialBucket"));
	}
	return Z_Registration_Info_UScriptStruct_SceneMaterialBucket.OuterSingleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FSceneMaterialBucket>()
{
	return FSceneMaterialBucket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneMaterialBucket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSceneMaterialBucket, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	&NewStructOps,
	"SceneMaterialBucket",
	Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::PropPointers),
	sizeof(FSceneMaterialBucket),
	alignof(FSceneMaterialBucket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSceneMaterialBucket()
{
	if (!Z_Registration_Info_UScriptStruct_SceneMaterialBucket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneMaterialBucket.InnerSingleton, Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SceneMaterialBucket.InnerSingleton;
}
// End ScriptStruct FSceneMaterialBucket

// Begin Delegate FOnAllScenesFinished
struct Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "OnAllScenesFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AAssimpSpawnManager::FOnAllScenesFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAllScenesFinished)
{
	OnAllScenesFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAllScenesFinished

// Begin Delegate FOnProgress
struct Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics
{
	struct AssimpSpawnManager_eventOnProgress_Parms
	{
		int32 Current;
		int32 Total;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Current;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventOnProgress_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventOnProgress_Parms, Total), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::NewProp_Total,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "OnProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::AssimpSpawnManager_eventOnProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::AssimpSpawnManager_eventOnProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AAssimpSpawnManager::FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, int32 Current, int32 Total)
{
	struct AssimpSpawnManager_eventOnProgress_Parms
	{
		int32 Current;
		int32 Total;
	};
	AssimpSpawnManager_eventOnProgress_Parms Parms;
	Parms.Current=Current;
	Parms.Total=Total;
	OnProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnProgress

// Begin Class AAssimpSpawnManager Function ApplyRecommendedPerformanceSettings
struct Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Performance" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "ApplyRecommendedPerformanceSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssimpSpawnManager::execApplyRecommendedPerformanceSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRecommendedPerformanceSettings();
	P_NATIVE_END;
}
// End Class AAssimpSpawnManager Function ApplyRecommendedPerformanceSettings

// Begin Class AAssimpSpawnManager Function ImportScenesAsync
struct Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics
{
	struct AssimpSpawnManager_eventImportScenesAsync_Parms
	{
		TArray<FString> InFilenames;
		int32 Flags;
		bool DisableAutoSpaceChange;
		int32 MaxConcurrentTasks;
		FScriptDelegate OnProgressUpdated;
		FScriptDelegate OnImportSceneComplete;
		UAssimpImportContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilenames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilenames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_DisableAutoSpaceChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAutoSpaceChange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentTasks;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgressUpdated;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnImportSceneComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_InFilenames_Inner = { "InFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_InFilenames = { "InFilenames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, InFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilenames_MetaData), NewProp_InFilenames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange_SetBit(void* Obj)
{
	((AssimpSpawnManager_eventImportScenesAsync_Parms*)Obj)->DisableAutoSpaceChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange = { "DisableAutoSpaceChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpSpawnManager_eventImportScenesAsync_Parms), &Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_MaxConcurrentTasks = { "MaxConcurrentTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, MaxConcurrentTasks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_OnProgressUpdated = { "OnProgressUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, OnProgressUpdated), Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3849146691
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_OnImportSceneComplete = { "OnImportSceneComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, OnImportSceneComplete), Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 457174719
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventImportScenesAsync_Parms, ReturnValue), Z_Construct_UClass_UAssimpImportContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_InFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_InFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_MaxConcurrentTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_OnProgressUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_OnImportSceneComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "ImportScenesAsync", nullptr, nullptr, Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::AssimpSpawnManager_eventImportScenesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::AssimpSpawnManager_eventImportScenesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssimpSpawnManager::execImportScenesAsync)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFilenames);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_DisableAutoSpaceChange);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxConcurrentTasks);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnProgressUpdated);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnImportSceneComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAssimpImportContext**)Z_Param__Result=P_THIS->ImportScenesAsync(Z_Param_Out_InFilenames,Z_Param_Flags,Z_Param_DisableAutoSpaceChange,Z_Param_MaxConcurrentTasks,FOnProgressUpdated(Z_Param_OnProgressUpdated),FOnImportSceneComplete(Z_Param_OnImportSceneComplete));
	P_NATIVE_END;
}
// End Class AAssimpSpawnManager Function ImportScenesAsync

// Begin Class AAssimpSpawnManager Function InitializeAndStart
struct Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics
{
	struct AssimpSpawnManager_eventInitializeAndStart_Parms
	{
		UObject* WorldContextObject;
		TArray<UAIScene*> InScenes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScenes_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InScenes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InScenes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventInitializeAndStart_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_InScenes_Inner = { "InScenes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_InScenes = { "InScenes", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpSpawnManager_eventInitializeAndStart_Parms, InScenes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScenes_MetaData), NewProp_InScenes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_InScenes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::NewProp_InScenes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "InitializeAndStart", nullptr, nullptr, Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::AssimpSpawnManager_eventInitializeAndStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::AssimpSpawnManager_eventInitializeAndStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssimpSpawnManager::execInitializeAndStart)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UAIScene*,Z_Param_Out_InScenes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAndStart(Z_Param_WorldContextObject,Z_Param_Out_InScenes);
	P_NATIVE_END;
}
// End Class AAssimpSpawnManager Function InitializeAndStart

// Begin Class AAssimpSpawnManager Function OnAllSceneMaterialFinished
struct Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssimpSpawnManager, nullptr, "OnAllSceneMaterialFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssimpSpawnManager::execOnAllSceneMaterialFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAllSceneMaterialFinished();
	P_NATIVE_END;
}
// End Class AAssimpSpawnManager Function OnAllSceneMaterialFinished

// Begin Class AAssimpSpawnManager
void AAssimpSpawnManager::StaticRegisterNativesAAssimpSpawnManager()
{
	UClass* Class = AAssimpSpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRecommendedPerformanceSettings", &AAssimpSpawnManager::execApplyRecommendedPerformanceSettings },
		{ "ImportScenesAsync", &AAssimpSpawnManager::execImportScenesAsync },
		{ "InitializeAndStart", &AAssimpSpawnManager::execInitializeAndStart },
		{ "OnAllSceneMaterialFinished", &AAssimpSpawnManager::execOnAllSceneMaterialFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssimpSpawnManager);
UClass* Z_Construct_UClass_AAssimpSpawnManager_NoRegister()
{
	return AAssimpSpawnManager::StaticClass();
}
struct Z_Construct_UClass_AAssimpSpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssimpSpawnManager.h" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_MetaData[] = {
		{ "Category", "Assimp|Performance" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVerboseLog_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAllScenesFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureComponent_MetaData[] = {
		{ "Category", "Texture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterval_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInterval_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPerFrame_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePerFrame_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerFrame_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextureCooldownFrames_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Assimp Spawn" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMeshesPerFrame_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCamerasPerFrame_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLightsPerFrame_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsPerFrame_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNodesPerFrame_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopBuildHandleTime_MetaData[] = {
		{ "Category", "Assimp Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildMeshesPerFrame_MetaData[] = {
		{ "Category", "Assimp|Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexBudgetPerFrame_MetaData[] = {
		{ "Category", "Assimp|Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleBudgetPerFrame_MetaData[] = {
		{ "Category", "Assimp|Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentRawTasks_MetaData[] = {
		{ "Category", "Assimp|Build" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scenes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssimpImportContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneAIMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSceneTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpSpawnManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyRecommendedSettingsAtBeginPlay;
	static void NewProp_bEnableVerboseLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVerboseLog;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllScenesFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodePerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTextureCooldownFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMeshesPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCamerasPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLightsPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNodesPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopBuildHandleTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildMeshesPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexBudgetPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleBudgetPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentRawTasks;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scenes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scenes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssimpImportContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAIMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneAIMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeStack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSceneTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentSceneTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAssimpSpawnManager_ApplyRecommendedPerformanceSettings, "ApplyRecommendedPerformanceSettings" }, // 2452499688
		{ &Z_Construct_UFunction_AAssimpSpawnManager_ImportScenesAsync, "ImportScenesAsync" }, // 3418587
		{ &Z_Construct_UFunction_AAssimpSpawnManager_InitializeAndStart, "InitializeAndStart" }, // 2409294472
		{ &Z_Construct_UFunction_AAssimpSpawnManager_OnAllSceneMaterialFinished, "OnAllSceneMaterialFinished" }, // 3887085479
		{ &Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature, "OnAllScenesFinished__DelegateSignature" }, // 1266602347
		{ &Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature, "OnProgress__DelegateSignature" }, // 2461521845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssimpSpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_SetBit(void* Obj)
{
	((AAssimpSpawnManager*)Obj)->bAutoApplyRecommendedSettingsAtBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bAutoApplyRecommendedSettingsAtBeginPlay = { "bAutoApplyRecommendedSettingsAtBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAssimpSpawnManager), &Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_MetaData), NewProp_bAutoApplyRecommendedSettingsAtBeginPlay_MetaData) };
void Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bEnableVerboseLog_SetBit(void* Obj)
{
	((AAssimpSpawnManager*)Obj)->bEnableVerboseLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bEnableVerboseLog = { "bEnableVerboseLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAssimpSpawnManager), &Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bEnableVerboseLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVerboseLog_MetaData), NewProp_bEnableVerboseLog_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_OnAllScenesFinished = { "OnAllScenesFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, OnAllScenesFinished), Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAllScenesFinished_MetaData), NewProp_OnAllScenesFinished_MetaData) }; // 1266602347
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, OnProgress), Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 2461521845
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, SpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnClass_MetaData), NewProp_SpawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_TextureComponent = { "TextureComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, TextureComponent), Z_Construct_UClass_UACTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureComponent_MetaData), NewProp_TextureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, ParentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMaterial_MetaData), NewProp_ParentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaterialInterval = { "MaterialInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaterialInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInterval_MetaData), NewProp_MaterialInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeInterval = { "NodeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, NodeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInterval_MetaData), NewProp_NodeInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaterialPerFrame = { "MaterialPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaterialPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPerFrame_MetaData), NewProp_MaterialPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodePerFrame = { "NodePerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, NodePerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePerFrame_MetaData), NewProp_NodePerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnPerFrame = { "SpawnPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, SpawnPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPerFrame_MetaData), NewProp_SpawnPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_DefaultTextureCooldownFrames = { "DefaultTextureCooldownFrames", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, DefaultTextureCooldownFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextureCooldownFrames_MetaData), NewProp_DefaultTextureCooldownFrames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, LocalOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOffset_MetaData), NewProp_LocalOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxMeshesPerFrame = { "MaxMeshesPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxMeshesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMeshesPerFrame_MetaData), NewProp_MaxMeshesPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxCamerasPerFrame = { "MaxCamerasPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxCamerasPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCamerasPerFrame_MetaData), NewProp_MaxCamerasPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxLightsPerFrame = { "MaxLightsPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxLightsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLightsPerFrame_MetaData), NewProp_MaxLightsPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxMaterialsPerFrame = { "MaxMaterialsPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxMaterialsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMaterialsPerFrame_MetaData), NewProp_MaxMaterialsPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxNodesPerFrame = { "MaxNodesPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxNodesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNodesPerFrame_MetaData), NewProp_MaxNodesPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_LoopBuildHandleTime = { "LoopBuildHandleTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, LoopBuildHandleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopBuildHandleTime_MetaData), NewProp_LoopBuildHandleTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_BuildMeshesPerFrame = { "BuildMeshesPerFrame", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, BuildMeshesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildMeshesPerFrame_MetaData), NewProp_BuildMeshesPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_VertexBudgetPerFrame = { "VertexBudgetPerFrame", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, VertexBudgetPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexBudgetPerFrame_MetaData), NewProp_VertexBudgetPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_TriangleBudgetPerFrame = { "TriangleBudgetPerFrame", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, TriangleBudgetPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleBudgetPerFrame_MetaData), NewProp_TriangleBudgetPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxConcurrentRawTasks = { "MaxConcurrentRawTasks", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, MaxConcurrentRawTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentRawTasks_MetaData), NewProp_MaxConcurrentRawTasks_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CachedWorld = { "CachedWorld", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, CachedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWorld_MetaData), NewProp_CachedWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_Scenes_Inner = { "Scenes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_Scenes = { "Scenes", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, Scenes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scenes_MetaData), NewProp_Scenes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_AssimpImportContext = { "AssimpImportContext", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, AssimpImportContext), Z_Construct_UClass_UAssimpImportContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssimpImportContext_MetaData), NewProp_AssimpImportContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneMaterials_Inner = { "SceneMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSceneMaterialBucket, METADATA_PARAMS(0, nullptr) }; // 3284887240
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneMaterials = { "SceneMaterials", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, SceneMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneMaterials_MetaData), NewProp_SceneMaterials_MetaData) }; // 3284887240
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneAIMaterials_Inner = { "SceneAIMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneAIMaterials = { "SceneAIMaterials", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, SceneAIMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneAIMaterials_MetaData), NewProp_SceneAIMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeStack_Inner = { "NodeStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeStack = { "NodeStack", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, NodeStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeStack_MetaData), NewProp_NodeStack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CurrentSceneTasks_Inner = { "CurrentSceneTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssimpMeshTask, METADATA_PARAMS(0, nullptr) }; // 1047116523
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CurrentSceneTasks = { "CurrentSceneTasks", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssimpSpawnManager, CurrentSceneTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSceneTasks_MetaData), NewProp_CurrentSceneTasks_MetaData) }; // 1047116523
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAssimpSpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bAutoApplyRecommendedSettingsAtBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_bEnableVerboseLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_OnAllScenesFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_TextureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaterialInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaterialPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodePerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SpawnPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_DefaultTextureCooldownFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_LocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxMeshesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxCamerasPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxLightsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxMaterialsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxNodesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_LoopBuildHandleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_BuildMeshesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_VertexBudgetPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_TriangleBudgetPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_MaxConcurrentRawTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CachedWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_Scenes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_Scenes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_AssimpImportContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneAIMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_SceneAIMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_NodeStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CurrentSceneTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssimpSpawnManager_Statics::NewProp_CurrentSceneTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssimpSpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAssimpSpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssimpSpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssimpSpawnManager_Statics::ClassParams = {
	&AAssimpSpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAssimpSpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAssimpSpawnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAssimpSpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAssimpSpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAssimpSpawnManager()
{
	if (!Z_Registration_Info_UClass_AAssimpSpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssimpSpawnManager.OuterSingleton, Z_Construct_UClass_AAssimpSpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAssimpSpawnManager.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<AAssimpSpawnManager>()
{
	return AAssimpSpawnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpSpawnManager);
AAssimpSpawnManager::~AAssimpSpawnManager() {}
// End Class AAssimpSpawnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssimpMeshTask::StaticStruct, Z_Construct_UScriptStruct_FAssimpMeshTask_Statics::NewStructOps, TEXT("AssimpMeshTask"), &Z_Registration_Info_UScriptStruct_AssimpMeshTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssimpMeshTask), 1047116523U) },
		{ FSceneMaterialBucket::StaticStruct, Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics::NewStructOps, TEXT("SceneMaterialBucket"), &Z_Registration_Info_UScriptStruct_SceneMaterialBucket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneMaterialBucket), 3284887240U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAssimpSpawnManager, AAssimpSpawnManager::StaticClass, TEXT("AAssimpSpawnManager"), &Z_Registration_Info_UClass_AAssimpSpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssimpSpawnManager), 933841427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_3824158001(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
