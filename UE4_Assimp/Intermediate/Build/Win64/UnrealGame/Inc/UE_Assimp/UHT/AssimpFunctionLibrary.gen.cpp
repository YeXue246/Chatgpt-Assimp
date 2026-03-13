// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AssimpFunctionLibrary.h"
#include "UE_Assimp/Public/AIBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssimpFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpFunctionLibrary();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpFunctionLibrary_NoRegister();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIBone();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIVertexWeight();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Delegate FOnProgressUpdated
struct Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnProgressUpdated_Parms
	{
		float NormalPercentage;
		UAIScene* ImportedScene;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///Check if this is necesarry for UE5\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//Check if this is necesarry for UE5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedScene_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalPercentage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::NewProp_NormalPercentage = { "NormalPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnProgressUpdated_Parms, NormalPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::NewProp_ImportedScene = { "ImportedScene", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnProgressUpdated_Parms, ImportedScene), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedScene_MetaData), NewProp_ImportedScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::NewProp_NormalPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::NewProp_ImportedScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnProgressUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::_Script_UE_Assimp_eventOnProgressUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::_Script_UE_Assimp_eventOnProgressUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProgressUpdated_DelegateWrapper(const FScriptDelegate& OnProgressUpdated, float NormalPercentage, UAIScene* ImportedScene)
{
	struct _Script_UE_Assimp_eventOnProgressUpdated_Parms
	{
		float NormalPercentage;
		UAIScene* ImportedScene;
	};
	_Script_UE_Assimp_eventOnProgressUpdated_Parms Parms;
	Parms.NormalPercentage=NormalPercentage;
	Parms.ImportedScene=ImportedScene;
	OnProgressUpdated.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnProgressUpdated

// Begin Delegate FOnImportSceneComplete
struct Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnImportSceneComplete_Parms
	{
		TArray<UAIScene*> ImportedScenes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedScenes_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedScenes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedScenes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::NewProp_ImportedScenes_Inner = { "ImportedScenes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::NewProp_ImportedScenes = { "ImportedScenes", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnImportSceneComplete_Parms, ImportedScenes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedScenes_MetaData), NewProp_ImportedScenes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::NewProp_ImportedScenes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::NewProp_ImportedScenes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnImportSceneComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::_Script_UE_Assimp_eventOnImportSceneComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::_Script_UE_Assimp_eventOnImportSceneComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImportSceneComplete_DelegateWrapper(const FScriptDelegate& OnImportSceneComplete, TArray<UAIScene*> const& ImportedScenes)
{
	struct _Script_UE_Assimp_eventOnImportSceneComplete_Parms
	{
		TArray<UAIScene*> ImportedScenes;
	};
	_Script_UE_Assimp_eventOnImportSceneComplete_Parms Parms;
	Parms.ImportedScenes=ImportedScenes;
	OnImportSceneComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnImportSceneComplete

// Begin Class UAssimpFunctionLibrary Function AiPostProcess_GenNormals
struct Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics
{
	struct AssimpFunctionLibrary_eventAiPostProcess_GenNormals_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Generates normals for all faces of all meshes.\n\x09 *\n\x09 * This is ignored if normals are already there at the time this flag\n\x09 * is evaluated. Model importers try to load them from the source file, so\n\x09 * they're usually already there. Face normals are shared between all points\n\x09 * of a single face, so a single point can have multiple normals, which\n\x09 * forces the library to duplicate vertices in some cases.\n\x09 * #AiPostProcess_JoinIdenticalVertices is *senseless* then.\n\x09 *\n\x09 * This flag may not be specified together with #AiPostProcess_GenSmoothNormals.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Generates normals for all faces of all meshes.\n\nThis is ignored if normals are already there at the time this flag\nis evaluated. Model importers try to load them from the source file, so\nthey're usually already there. Face normals are shared between all points\nof a single face, so a single point can have multiple normals, which\nforces the library to duplicate vertices in some cases.\n#AiPostProcess_JoinIdenticalVertices is *senseless* then.\n\nThis flag may not be specified together with #AiPostProcess_GenSmoothNormals." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventAiPostProcess_GenNormals_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "AiPostProcess_GenNormals", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::AssimpFunctionLibrary_eventAiPostProcess_GenNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::AssimpFunctionLibrary_eventAiPostProcess_GenNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execAiPostProcess_GenNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::AiPostProcess_GenNormals();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function AiPostProcess_GenNormals

// Begin Class UAssimpFunctionLibrary Function ApplyNormalMapSettingsToTexture
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics
{
	struct AssimpFunctionLibrary_eventApplyNormalMapSettingsToTexture_Parms
	{
		UTexture2D* In;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Apply normal map settings to imported textures\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply normal map settings to imported textures" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_In;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventApplyNormalMapSettingsToTexture_Parms, In), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::NewProp_In,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ApplyNormalMapSettingsToTexture", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::AssimpFunctionLibrary_eventApplyNormalMapSettingsToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::AssimpFunctionLibrary_eventApplyNormalMapSettingsToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execApplyNormalMapSettingsToTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssimpFunctionLibrary::ApplyNormalMapSettingsToTexture(Z_Param_In);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ApplyNormalMapSettingsToTexture

// Begin Class UAssimpFunctionLibrary Function GetBoneName
struct Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics
{
	struct AssimpFunctionLibrary_eventGetBoneName_Parms
	{
		FAIBone Bone;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! The name of the bone.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! The name of the bone." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneName_Parms, Bone), Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "GetBoneName", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::AssimpFunctionLibrary_eventGetBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::AssimpFunctionLibrary_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execGetBoneName)
{
	P_GET_STRUCT(FAIBone,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssimpFunctionLibrary::GetBoneName(Z_Param_Bone);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function GetBoneName

// Begin Class UAssimpFunctionLibrary Function GetBoneTransform
struct Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics
{
	struct AssimpFunctionLibrary_eventGetBoneTransform_Parms
	{
		FAIBone Bone;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Assimp: Matrix that transforms from bone space to mesh space in bind pose.\n\x09*\n\x09* This matrix describes the position of the mesh\n\x09* in the local space of this bone when the skeleton was bound.\n\x09* Thus it can be used directly to determine a desired vertex position,\n\x09* given the world-space transform of the bone when animated,\n\x09* and the position of the vertex in mesh space.\n\x09*\n\x09* It is sometimes called an inverse-bind matrix,\n\x09* or inverse bind pose matrix.\n\x09* UE: Matrix Converted to Transform\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assimp: Matrix that transforms from bone space to mesh space in bind pose.\n\nThis matrix describes the position of the mesh\nin the local space of this bone when the skeleton was bound.\nThus it can be used directly to determine a desired vertex position,\ngiven the world-space transform of the bone when animated,\nand the position of the vertex in mesh space.\n\nIt is sometimes called an inverse-bind matrix,\nor inverse bind pose matrix.\nUE: Matrix Converted to Transform" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneTransform_Parms, Bone), Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "GetBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::AssimpFunctionLibrary_eventGetBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::AssimpFunctionLibrary_eventGetBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execGetBoneTransform)
{
	P_GET_STRUCT(FAIBone,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UAssimpFunctionLibrary::GetBoneTransform(Z_Param_Bone);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function GetBoneTransform

// Begin Class UAssimpFunctionLibrary Function GetBoneWeights
struct Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics
{
	struct AssimpFunctionLibrary_eventGetBoneWeights_Parms
	{
		FAIBone Bone;
		TArray<FAIVertexWeight> Weights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! The influence weights of this bone, by vertex index.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! The influence weights of this bone, by vertex index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneWeights_Parms, Bone), Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIVertexWeight, METADATA_PARAMS(0, nullptr) }; // 1642256888
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetBoneWeights_Parms, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1642256888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Weights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::NewProp_Weights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "GetBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::AssimpFunctionLibrary_eventGetBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::AssimpFunctionLibrary_eventGetBoneWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execGetBoneWeights)
{
	P_GET_STRUCT(FAIBone,Z_Param_Bone);
	P_GET_TARRAY_REF(FAIVertexWeight,Z_Param_Out_Weights);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssimpFunctionLibrary::GetBoneWeights(Z_Param_Bone,Z_Param_Out_Weights);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function GetBoneWeights

// Begin Class UAssimpFunctionLibrary Function GetNumOfWeights
struct Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics
{
	struct AssimpFunctionLibrary_eventGetNumOfWeights_Parms
	{
		FAIBone Bone;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! The number of vertices affected by this bone.\n//! The maximum value for this member is #AI_MAX_BONE_WEIGHTS.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! The number of vertices affected by this bone.\n! The maximum value for this member is #AI_MAX_BONE_WEIGHTS." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetNumOfWeights_Parms, Bone), Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventGetNumOfWeights_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "GetNumOfWeights", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::AssimpFunctionLibrary_eventGetNumOfWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::AssimpFunctionLibrary_eventGetNumOfWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execGetNumOfWeights)
{
	P_GET_STRUCT(FAIBone,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::GetNumOfWeights(Z_Param_Bone);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function GetNumOfWeights

// Begin Class UAssimpFunctionLibrary Function ImportScene
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics
{
	struct AssimpFunctionLibrary_eventImportScene_Parms
	{
		FString FileName;
		UObject* WorldContextObject;
		int32 Flags;
		bool DisableAutoSpaceChange;
		UAIScene* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_DisableAutoSpaceChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAutoSpaceChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScene_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScene_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScene_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_DisableAutoSpaceChange_SetBit(void* Obj)
{
	((AssimpFunctionLibrary_eventImportScene_Parms*)Obj)->DisableAutoSpaceChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_DisableAutoSpaceChange = { "DisableAutoSpaceChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpFunctionLibrary_eventImportScene_Parms), &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_DisableAutoSpaceChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScene_Parms, ReturnValue), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_DisableAutoSpaceChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ImportScene", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::AssimpFunctionLibrary_eventImportScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::AssimpFunctionLibrary_eventImportScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execImportScene)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_DisableAutoSpaceChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIScene**)Z_Param__Result=UAssimpFunctionLibrary::ImportScene(Z_Param_FileName,Z_Param_WorldContextObject,Z_Param_Flags,Z_Param_DisableAutoSpaceChange);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ImportScene

// Begin Class UAssimpFunctionLibrary Function ImportScenes
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics
{
	struct AssimpFunctionLibrary_eventImportScenes_Parms
	{
		TArray<FString> InFilenames;
		UObject* WorldContextObject;
		TArray<UAIScene*> Scenes;
		int32 Flags;
		bool DisableAutoSpaceChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flags: You can use post process nodes and use | (bitwise Or node) between them to create any combination of flags. Also We recommend using preset flags. Flip UV flag is needed for correct urneal engine meshes\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags: You can use post process nodes and use | (bitwise Or node) between them to create any combination of flags. Also We recommend using preset flags. Flip UV flag is needed for correct urneal engine meshes" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scenes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilenames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scenes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scenes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_DisableAutoSpaceChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAutoSpaceChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_InFilenames_Inner = { "InFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_InFilenames = { "InFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenes_Parms, InFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Scenes_Inner = { "Scenes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Scenes = { "Scenes", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenes_Parms, Scenes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scenes_MetaData), NewProp_Scenes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenes_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_DisableAutoSpaceChange_SetBit(void* Obj)
{
	((AssimpFunctionLibrary_eventImportScenes_Parms*)Obj)->DisableAutoSpaceChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_DisableAutoSpaceChange = { "DisableAutoSpaceChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpFunctionLibrary_eventImportScenes_Parms), &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_DisableAutoSpaceChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_InFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_InFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Scenes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Scenes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::NewProp_DisableAutoSpaceChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ImportScenes", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::AssimpFunctionLibrary_eventImportScenes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::AssimpFunctionLibrary_eventImportScenes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execImportScenes)
{
	P_GET_TARRAY(FString,Z_Param_InFilenames);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UAIScene*,Z_Param_Out_Scenes);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_DisableAutoSpaceChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssimpFunctionLibrary::ImportScenes(Z_Param_InFilenames,Z_Param_WorldContextObject,Z_Param_Out_Scenes,Z_Param_Flags,Z_Param_DisableAutoSpaceChange);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ImportScenes

// Begin Class UAssimpFunctionLibrary Function ImportScenesAsync
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics
{
	struct AssimpFunctionLibrary_eventImportScenesAsync_Parms
	{
		TArray<FString> InFilenames;
		UObject* ParentObject;
		int32 Flags;
		bool DisableAutoSpaceChange;
		FScriptDelegate OnProgressUpdated;
		FScriptDelegate OnImportSceneComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Experimental\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experimental" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilenames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_DisableAutoSpaceChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAutoSpaceChange;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgressUpdated;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnImportSceneComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_InFilenames_Inner = { "InFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_InFilenames = { "InFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenesAsync_Parms, InFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_ParentObject = { "ParentObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenesAsync_Parms, ParentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenesAsync_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange_SetBit(void* Obj)
{
	((AssimpFunctionLibrary_eventImportScenesAsync_Parms*)Obj)->DisableAutoSpaceChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange = { "DisableAutoSpaceChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpFunctionLibrary_eventImportScenesAsync_Parms), &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_OnProgressUpdated = { "OnProgressUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenesAsync_Parms, OnProgressUpdated), Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1638287542
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_OnImportSceneComplete = { "OnImportSceneComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventImportScenesAsync_Parms, OnImportSceneComplete), Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4015674812
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_InFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_InFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_ParentObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_DisableAutoSpaceChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_OnProgressUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::NewProp_OnImportSceneComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ImportScenesAsync", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::AssimpFunctionLibrary_eventImportScenesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::AssimpFunctionLibrary_eventImportScenesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execImportScenesAsync)
{
	P_GET_TARRAY(FString,Z_Param_InFilenames);
	P_GET_OBJECT(UObject,Z_Param_ParentObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_DisableAutoSpaceChange);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnProgressUpdated);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnImportSceneComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportScenesAsync(Z_Param_InFilenames,Z_Param_ParentObject,Z_Param_Flags,Z_Param_DisableAutoSpaceChange,FOnProgressUpdated(Z_Param_OnProgressUpdated),FOnImportSceneComplete(Z_Param_OnImportSceneComplete));
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ImportScenesAsync

// Begin Class UAssimpFunctionLibrary Function OpenFileDialogue
struct Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics
{
	struct AssimpFunctionLibrary_eventOpenFileDialogue_Parms
	{
		FString DialogTitle;
		FString DefaultPath;
		FString DefaultFile;
		FString FileTypes;
		uint8 Flags;
		TArray<FString> OutFilenames;
		bool MultiSelect;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \nOpens the \"open file\" dialog for the platform\n DialogTitle\x09\x09\x09\x09The text for the title of the dialog window\nDefaultPath\x09\x09\x09\x09The path where the file dialog will open initially\n DefaultFile\x09\x09\x09\x09The file that the dialog will select initially\n Flags\x09\x09\x09\x09\x09\x09""Details about the dialog. See EFileDialogFlags.\nFileTypes\x09\x09\x09\x09\x09The type filters to show in the dialog. This string should be a \"|\" delimited list of (Description|Extensionlist) pairs. Extensionlists are \";\" delimited.\n OutFilenames\x09\x09\x09\x09The filenames that were selected in the dialog\n Success  true if files were successfully selected\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens the \"open file\" dialog for the platform\n DialogTitle                           The text for the title of the dialog window\nDefaultPath                            The path where the file dialog will open initially\n DefaultFile                           The file that the dialog will select initially\n Flags                                         Details about the dialog. See EFileDialogFlags.\nFileTypes                                      The type filters to show in the dialog. This string should be a \"|\" delimited list of (Description|Extensionlist) pairs. Extensionlists are \";\" delimited.\n OutFilenames                          The filenames that were selected in the dialog\n Success  true if files were successfully selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
	static void NewProp_MultiSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiSelect;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, DialogTitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, DefaultPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, DefaultFile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileTypes_MetaData), NewProp_FileTypes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, Flags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventOpenFileDialogue_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_MultiSelect_SetBit(void* Obj)
{
	((AssimpFunctionLibrary_eventOpenFileDialogue_Parms*)Obj)->MultiSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_MultiSelect = { "MultiSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpFunctionLibrary_eventOpenFileDialogue_Parms), &Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_MultiSelect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Success_SetBit(void* Obj)
{
	((AssimpFunctionLibrary_eventOpenFileDialogue_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpFunctionLibrary_eventOpenFileDialogue_Parms), &Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_DefaultFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_FileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_OutFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_OutFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_MultiSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "OpenFileDialogue", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::AssimpFunctionLibrary_eventOpenFileDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::AssimpFunctionLibrary_eventOpenFileDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execOpenFileDialogue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
	P_GET_UBOOL(Z_Param_MultiSelect);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssimpFunctionLibrary::OpenFileDialogue(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileTypes,Z_Param_Flags,Z_Param_Out_OutFilenames,Z_Param_MultiSelect,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function OpenFileDialogue

// Begin Class UAssimpFunctionLibrary Function PostProcess_CalcTangentSpace
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_CalcTangentSpace_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Calculates the tangents and bitangents for the imported meshes.\n\x09 *\n\x09 * Does nothing if a mesh does not have normals. You might want this post\n\x09 * processing step to be executed if you plan to use tangent space calculations\n\x09 * such as normal mapping  applied to the meshes. There's an importer property,\n\x09 * <tt>#AI_CONFIG_PP_CT_MAX_SMOOTHIN G_ANGLE</tt>, which allows you to specify\n\x09 * a maximum smoothing angle for the algorithm. However, usually you'll\n\x09 * want to leave it at the default value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Calculates the tangents and bitangents for the imported meshes.\n\nDoes nothing if a mesh does not have normals. You might want this post\nprocessing step to be executed if you plan to use tangent space calculations\nsuch as normal mapping  applied to the meshes. There's an importer property,\n<tt>#AI_CONFIG_PP_CT_MAX_SMOOTHIN G_ANGLE</tt>, which allows you to specify\na maximum smoothing angle for the algorithm. However, usually you'll\nwant to leave it at the default value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_CalcTangentSpace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_CalcTangentSpace", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::AssimpFunctionLibrary_eventPostProcess_CalcTangentSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::AssimpFunctionLibrary_eventPostProcess_CalcTangentSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_CalcTangentSpace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_CalcTangentSpace();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_CalcTangentSpace

// Begin Class UAssimpFunctionLibrary Function PostProcess_Debone
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_Debone_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step removes bones losslessly or according to some threshold.\n\x09 *\n\x09 *  In some cases (i.e. formats that require it) exporters are forced to\n\x09 *  assign dummy bone weights to otherwise static meshes assigned to\n\x09 *  animated meshes. Full, weight-based skinning is expensive while\n\x09 *  animating nodes is extremely cheap, so this step is offered to clean up\n\x09 *  the data in that regard.\n\x09 *\n\x09 *  Use <tt>#AI_CONFIG_PP_DB_THRESHOLD</tt> to control this.\n\x09 *  Use <tt>#AI_CONFIG_PP_DB_ALL_OR_NONE</tt> if you want bones removed if and\n\x09 *  only if all bones within the scene qualify for removal.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step removes bones losslessly or according to some threshold.\n\nIn some cases (i.e. formats that require it) exporters are forced to\nassign dummy bone weights to otherwise static meshes assigned to\nanimated meshes. Full, weight-based skinning is expensive while\nanimating nodes is extremely cheap, so this step is offered to clean up\nthe data in that regard.\n\nUse <tt>#AI_CONFIG_PP_DB_THRESHOLD</tt> to control this.\nUse <tt>#AI_CONFIG_PP_DB_ALL_OR_NONE</tt> if you want bones removed if and\nonly if all bones within the scene qualify for removal." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_Debone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_Debone", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::AssimpFunctionLibrary_eventPostProcess_Debone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::AssimpFunctionLibrary_eventPostProcess_Debone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_Debone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_Debone();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_Debone

// Begin Class UAssimpFunctionLibrary Function PostProcess_DropNormals
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_DropNormals_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Drops normals for all faces of all meshes.\n\x09 *\n\x09 * This is ignored if no normals are present.\n\x09 * Face normals are shared between all points of a single face,\n\x09 * so a single point can have multiple normals, which\n\x09 * forces the library to duplicate vertices in some cases.\n\x09 * #AiPostProcess_JoinIdenticalVertices is *senseless* then.\n\x09 * This process gives sense back to AiPostProcess_JoinIdenticalVertices\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Drops normals for all faces of all meshes.\n\nThis is ignored if no normals are present.\nFace normals are shared between all points of a single face,\nso a single point can have multiple normals, which\nforces the library to duplicate vertices in some cases.\n#AiPostProcess_JoinIdenticalVertices is *senseless* then.\nThis process gives sense back to AiPostProcess_JoinIdenticalVertices" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_DropNormals_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_DropNormals", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::AssimpFunctionLibrary_eventPostProcess_DropNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::AssimpFunctionLibrary_eventPostProcess_DropNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_DropNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_DropNormals();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_DropNormals

// Begin Class UAssimpFunctionLibrary Function PostProcess_EmbedTextures
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_EmbedTextures_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>A postprocessing step to embed of textures.\n\x09 *\n\x09 *  This will remove external data dependencies for textures.\n\x09 *  If a texture's file does not exist at the specified path\n\x09 *  (due, for instance, to an absolute path generated on another system),\n\x09 *  it will check if a file with the same name exists at the root folder\n\x09 *  of the imported model. And if so, it uses that.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>A postprocessing step to embed of textures.\n\nThis will remove external data dependencies for textures.\nIf a texture's file does not exist at the specified path\n(due, for instance, to an absolute path generated on another system),\nit will check if a file with the same name exists at the root folder\nof the imported model. And if so, it uses that." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_EmbedTextures_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_EmbedTextures", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::AssimpFunctionLibrary_eventPostProcess_EmbedTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::AssimpFunctionLibrary_eventPostProcess_EmbedTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_EmbedTextures)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_EmbedTextures();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_EmbedTextures

// Begin Class UAssimpFunctionLibrary Function PostProcess_FindDegenerates
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FindDegenerates_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step searches all meshes for degenerate primitives and\n\x09 *  converts them to proper lines or points.\n\x09 *\n\x09 * A face is 'degenerate' if one or more of its points are identical.\n\x09 * To have the degenerate stuff not only detected and collapsed but\n\x09 * removed, try one of the following procedures:\n\x09 * <br><b>1.</b> (if you support lines and points for rendering but don't\n\x09 *    want the degenerates)<br>\n\x09 * <ul>\n\x09 *   <li>Specify the #AiPostProcess_FindDegenerates flag.\n\x09 *   </li>\n\x09 *   <li>Set the <tt>#AI_CONFIG_PP_FD_REMOVE</tt> importer property to\n\x09 *       1. This will cause the step to remove degenerate triangles from the\n\x09 *       import as soon as they're detected. They won't pass any further\n\x09 *       pipeline steps.\n\x09 *   </li>\n\x09 * </ul>\n\x09 * <br><b>2.</b>(if you don't support lines and points at all)<br>\n\x09 * <ul>\n\x09 *   <li>Specify the #AiPostProcess_FindDegenerates flag.\n\x09 *   </li>\n\x09 *   <li>Specify the #AiPostProcess_SortByPType flag. This moves line and\n\x09 *     point primitives to separate meshes.\n\x09 *   </li>\n\x09 *   <li>Set the <tt>#AI_CONFIG_PP_SBP_REMOVE</tt> importer property to\n\x09 *       @code aiPrimitiveType_POINTS | aiPrimitiveType_LINES\n\x09 *       @endcode to cause SortByPType to reject point\n\x09 *       and line meshes from the scene.\n\x09 *   </li>\n\x09 * </ul>\n\x09 *\n\x09 * This step also removes very small triangles with a surface area smaller\n\x09 * than 10^-6. If you rely on having these small triangles, or notice holes\n\x09 * in your model, set the property <tt>#AI_CONFIG_PP_FD_CHECKAREA</tt> to\n\x09 * false.\n\x09 * @note Degenerate polygons are not necessarily evil and that's why\n\x09 * they're not removed by default. There are several file formats which\n\x09 * don't support lines or points, and some exporters bypass the\n\x09 * format specification and write them as degenerate triangles instead.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step searches all meshes for degenerate primitives and\nconverts them to proper lines or points.\n\nA face is 'degenerate' if one or more of its points are identical.\nTo have the degenerate stuff not only detected and collapsed but\nremoved, try one of the following procedures:\n<br><b>1.</b> (if you support lines and points for rendering but don't\n  want the degenerates)<br>\n<ul>\n <li>Specify the #AiPostProcess_FindDegenerates flag.\n </li>\n <li>Set the <tt>#AI_CONFIG_PP_FD_REMOVE</tt> importer property to\n     1. This will cause the step to remove degenerate triangles from the\n     import as soon as they're detected. They won't pass any further\n     pipeline steps.\n </li>\n</ul>\n<br><b>2.</b>(if you don't support lines and points at all)<br>\n<ul>\n <li>Specify the #AiPostProcess_FindDegenerates flag.\n </li>\n <li>Specify the #AiPostProcess_SortByPType flag. This moves line and\n   point primitives to separate meshes.\n </li>\n <li>Set the <tt>#AI_CONFIG_PP_SBP_REMOVE</tt> importer property to\n     @code aiPrimitiveType_POINTS | aiPrimitiveType_LINES\n     @endcode to cause SortByPType to reject point\n     and line meshes from the scene.\n </li>\n</ul>\n\nThis step also removes very small triangles with a surface area smaller\nthan 10^-6. If you rely on having these small triangles, or notice holes\nin your model, set the property <tt>#AI_CONFIG_PP_FD_CHECKAREA</tt> to\nfalse.\n@note Degenerate polygons are not necessarily evil and that's why\nthey're not removed by default. There are several file formats which\ndon't support lines or points, and some exporters bypass the\nformat specification and write them as degenerate triangles instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FindDegenerates_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FindDegenerates", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::AssimpFunctionLibrary_eventPostProcess_FindDegenerates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::AssimpFunctionLibrary_eventPostProcess_FindDegenerates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FindDegenerates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FindDegenerates();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FindDegenerates

// Begin Class UAssimpFunctionLibrary Function PostProcess_FindInstances
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FindInstances_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step searches for duplicate meshes and replaces them\n\x09 *  with references to the first mesh.\n\x09 *\n\x09 *  This step takes a while, so don't use it if speed is a concern.\n\x09 *  Its main purpose is to workaround the fact that many export\n\x09 *  file formats don't support instanced meshes, so exporters need to\n\x09 *  duplicate meshes. This step removes the duplicates again. Please\n\x09 *  note that Assimp does not currently support per-node material\n\x09 *  assignment to meshes, which means that identical meshes with\n\x09 *  different materials are currently *not* joined, although this is\n\x09 *  planned for future versions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step searches for duplicate meshes and replaces them\nwith references to the first mesh.\n\nThis step takes a while, so don't use it if speed is a concern.\nIts main purpose is to workaround the fact that many export\nfile formats don't support instanced meshes, so exporters need to\nduplicate meshes. This step removes the duplicates again. Please\nnote that Assimp does not currently support per-node material\nassignment to meshes, which means that identical meshes with\ndifferent materials are currently *not* joined, although this is\nplanned for future versions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FindInstances_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FindInstances", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::AssimpFunctionLibrary_eventPostProcess_FindInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::AssimpFunctionLibrary_eventPostProcess_FindInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FindInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FindInstances();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FindInstances

// Begin Class UAssimpFunctionLibrary Function PostProcess_FindInvalidData
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FindInvalidData_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step searches all meshes for invalid data, such as zeroed\n\x09 *  normal vectors or invalid UV coords and removes/fixes them. This is\n\x09 *  intended to get rid of some common exporter errors.\n\x09 *\n\x09 * This is especially useful for normals. If they are invalid, and\n\x09 * the step recognizes this, they will be removed and can later\n\x09 * be recomputed, i.e. by the #AiPostProcess_GenSmoothNormals flag.<br>\n\x09 * The step will also remove meshes that are infinitely small and reduce\n\x09 * animation tracks consisting of hundreds if redundant keys to a single\n\x09 * key. The <tt>AI_CONFIG_PP_FID_ANIM_ACCURACY</tt> config property decides\n\x09 * the accuracy of the check for duplicate animation tracks.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step searches all meshes for invalid data, such as zeroed\nnormal vectors or invalid UV coords and removes/fixes them. This is\nintended to get rid of some common exporter errors.\n\nThis is especially useful for normals. If they are invalid, and\nthe step recognizes this, they will be removed and can later\nbe recomputed, i.e. by the #AiPostProcess_GenSmoothNormals flag.<br>\nThe step will also remove meshes that are infinitely small and reduce\nanimation tracks consisting of hundreds if redundant keys to a single\nkey. The <tt>AI_CONFIG_PP_FID_ANIM_ACCURACY</tt> config property decides\nthe accuracy of the check for duplicate animation tracks." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FindInvalidData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FindInvalidData", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::AssimpFunctionLibrary_eventPostProcess_FindInvalidData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::AssimpFunctionLibrary_eventPostProcess_FindInvalidData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FindInvalidData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FindInvalidData();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FindInvalidData

// Begin Class UAssimpFunctionLibrary Function PostProcess_FixInfacingNormals
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FixInfacingNormals_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step tries to determine which meshes have normal vectors\n\x09 * that are facing inwards and inverts them.\n\x09 *\n\x09 * The algorithm is simple but effective:\n\x09 * the bounding box of all vertices + their normals is compared against\n\x09 * the volume of the bounding box of all vertices without their normals.\n\x09 * This works well for most objects, problems might occur with planar\n\x09 * surfaces. However, the step tries to filter such cases.\n\x09 * The step inverts all in-facing normals. Generally it is recommended\n\x09 * to enable this step, although the result is not always correct.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step tries to determine which meshes have normal vectors\nthat are facing inwards and inverts them.\n\nThe algorithm is simple but effective:\nthe bounding box of all vertices + their normals is compared against\nthe volume of the bounding box of all vertices without their normals.\nThis works well for most objects, problems might occur with planar\nsurfaces. However, the step tries to filter such cases.\nThe step inverts all in-facing normals. Generally it is recommended\nto enable this step, although the result is not always correct." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FixInfacingNormals_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FixInfacingNormals", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::AssimpFunctionLibrary_eventPostProcess_FixInfacingNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::AssimpFunctionLibrary_eventPostProcess_FixInfacingNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FixInfacingNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FixInfacingNormals();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FixInfacingNormals

// Begin Class UAssimpFunctionLibrary Function PostProcess_FlipUVs
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FlipUVs_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step flips all UV coordinates along the y-axis and adjusts\n\x09 * material settings and bitangents accordingly.\n\x09 *\n\x09 * <b>Output UV coordinate system:</b>\n\x09 * @code\n\x09 * 0y|0y ---------- 1x|0y\n\x09 * |                 |\n\x09 * |                 |\n\x09 * |                 |\n\x09 * 0x|1y ---------- 1x|1y\n\x09 * @endcode\n\x09 *\n\x09 * You'll probably want to consider this flag if you use Direct3D for\n\x09 * rendering. The #AiPostProcess_ConvertToLeftHanded flag supersedes this\n\x09 * setting and bundles all conversions typically required for D3D-based\n\x09 * applications.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step flips all UV coordinates along the y-axis and adjusts\nmaterial settings and bitangents accordingly.\n\n<b>Output UV coordinate system:</b>\n@code\n0y|0y ---------- 1x|0y\n|                 |\n|                 |\n|                 |\n0x|1y ---------- 1x|1y\n@endcode\n\nYou'll probably want to consider this flag if you use Direct3D for\nrendering. The #AiPostProcess_ConvertToLeftHanded flag supersedes this\nsetting and bundles all conversions typically required for D3D-based\napplications." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FlipUVs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FlipUVs", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::AssimpFunctionLibrary_eventPostProcess_FlipUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::AssimpFunctionLibrary_eventPostProcess_FlipUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FlipUVs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FlipUVs();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FlipUVs

// Begin Class UAssimpFunctionLibrary Function PostProcess_FlipWindingOrder
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_FlipWindingOrder_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step adjusts the output face winding order to be CW.\n\x09 *\n\x09 * The default face winding order is counter clockwise (CCW).\n\x09 *\n\x09 * <b>Output face order:</b>\n\x09 * @code\n\x09 *       x2\n\x09 *\n\x09 *                         x0\n\x09 *  x1\n\x09 * @endcode\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step adjusts the output face winding order to be CW.\n\nThe default face winding order is counter clockwise (CCW).\n\n<b>Output face order:</b>\n@code\n     x2\n\n                       x0\nx1\n@endcode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_FlipWindingOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_FlipWindingOrder", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::AssimpFunctionLibrary_eventPostProcess_FlipWindingOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::AssimpFunctionLibrary_eventPostProcess_FlipWindingOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_FlipWindingOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_FlipWindingOrder();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_FlipWindingOrder

// Begin Class UAssimpFunctionLibrary Function PostProcess_ForceGenNormals
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_ForceGenNormals_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AiPostProcess_GenEntityMeshes = 0x100000,\n// AiPostProcess_OptimizeAnimations = 0x200000\n// AiPostProcess_FixTexturePaths = 0x200000\n" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AiPostProcess_GenEntityMeshes = 0x100000,\nAiPostProcess_OptimizeAnimations = 0x200000\nAiPostProcess_FixTexturePaths = 0x200000" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_ForceGenNormals_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_ForceGenNormals", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::AssimpFunctionLibrary_eventPostProcess_ForceGenNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::AssimpFunctionLibrary_eventPostProcess_ForceGenNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_ForceGenNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_ForceGenNormals();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_ForceGenNormals

// Begin Class UAssimpFunctionLibrary Function PostProcess_GenBoundingBoxes
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_GenBoundingBoxes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_GenBoundingBoxes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_GenBoundingBoxes", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::AssimpFunctionLibrary_eventPostProcess_GenBoundingBoxes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::AssimpFunctionLibrary_eventPostProcess_GenBoundingBoxes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_GenBoundingBoxes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_GenBoundingBoxes();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_GenBoundingBoxes

// Begin Class UAssimpFunctionLibrary Function PostProcess_GenSmoothNormals
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_GenSmoothNormals_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Generates smooth normals for all vertices in the mesh.\n\x09*\n\x09* This is ignored if normals are already there at the time this flag\n\x09* is evaluated. Model importers try to load them from the source file, so\n\x09* they're usually already there.\n\x09*\n\x09* This flag may not be specified together with\n\x09* #AiPostProcess_GenNormals. There's a importer property,\n\x09* <tt>#UFUNCTION(BlueprintCallable)_CONFIG_PP_GSN_MAX_SMOOTHING_ANGLE</tt> which allows you to specify\n\x09* an angle maximum for the normal smoothing algorithm. Normals exceeding\n\x09* this limit are not smoothed, resulting in a 'hard' seam between two faces.\n\x09* Using a decent angle here (e.g. 80 degrees) results in very good visual\n\x09* appearance.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Generates smooth normals for all vertices in the mesh.\n\nThis is ignored if normals are already there at the time this flag\nis evaluated. Model importers try to load them from the source file, so\nthey're usually already there.\n\nThis flag may not be specified together with\n#AiPostProcess_GenNormals. There's a importer property,\n<tt>#UFUNCTION(BlueprintCallable)_CONFIG_PP_GSN_MAX_SMOOTHING_ANGLE</tt> which allows you to specify\nan angle maximum for the normal smoothing algorithm. Normals exceeding\nthis limit are not smoothed, resulting in a 'hard' seam between two faces.\nUsing a decent angle here (e.g. 80 degrees) results in very good visual\nappearance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_GenSmoothNormals_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_GenSmoothNormals", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::AssimpFunctionLibrary_eventPostProcess_GenSmoothNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::AssimpFunctionLibrary_eventPostProcess_GenSmoothNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_GenSmoothNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_GenSmoothNormals();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_GenSmoothNormals

// Begin Class UAssimpFunctionLibrary Function PostProcess_GenUVCoords
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_GenUVCoords_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step converts non-UV mappings (such as spherical or\n\x09 *  cylindrical mapping) to proper texture coordinate channels.\n\x09 *\n\x09 * Most applications will support UV mapping only, so you will\n\x09 * probably want to specify this step in every case. Note that Assimp is not\n\x09 * always able to match the original mapping implementation of the\n\x09 * 3D app which produced a model perfectly. It's always better to let the\n\x09 * modelling app compute the UV channels - 3ds max, Maya, Blender,\n\x09 * LightWave, and Modo do this for example.\n\x09 *\n\x09 * @note If this step is not requested, you'll need to process the\n\x09 * <tt>#AI_MATKEY_MAPPING</tt> material property in order to display all assets\n\x09 * properly.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step converts non-UV mappings (such as spherical or\ncylindrical mapping) to proper texture coordinate channels.\n\nMost applications will support UV mapping only, so you will\nprobably want to specify this step in every case. Note that Assimp is not\nalways able to match the original mapping implementation of the\n3D app which produced a model perfectly. It's always better to let the\nmodelling app compute the UV channels - 3ds max, Maya, Blender,\nLightWave, and Modo do this for example.\n\n@note If this step is not requested, you'll need to process the\n<tt>#AI_MATKEY_MAPPING</tt> material property in order to display all assets\nproperly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_GenUVCoords_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_GenUVCoords", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::AssimpFunctionLibrary_eventPostProcess_GenUVCoords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::AssimpFunctionLibrary_eventPostProcess_GenUVCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_GenUVCoords)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_GenUVCoords();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_GenUVCoords

// Begin Class UAssimpFunctionLibrary Function PostProcess_GlobalScale
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_GlobalScale_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step will perform a global scale of the model.\n\x09*\n\x09*  Some importers are providing a mechanism to define a scaling unit for the\n\x09*  model. This post processing step can be used to do so. You need to get the\n\x09*  global scaling from your importer settings like in FBX. Use the flag\n\x09*  AI_CONFIG_GLOBAL_SCALE_FACTOR_KEY from the global property table to configure this.\n\x09*\n\x09*  Use <tt>#AI_CONFIG_GLOBAL_SCALE_FACTOR_KEY</tt> to setup the global scaling factor.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step will perform a global scale of the model.\n\nSome importers are providing a mechanism to define a scaling unit for the\nmodel. This post processing step can be used to do so. You need to get the\nglobal scaling from your importer settings like in FBX. Use the flag\nAI_CONFIG_GLOBAL_SCALE_FACTOR_KEY from the global property table to configure this.\n\nUse <tt>#AI_CONFIG_GLOBAL_SCALE_FACTOR_KEY</tt> to setup the global scaling factor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_GlobalScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_GlobalScale", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::AssimpFunctionLibrary_eventPostProcess_GlobalScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::AssimpFunctionLibrary_eventPostProcess_GlobalScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_GlobalScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_GlobalScale();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_GlobalScale

// Begin Class UAssimpFunctionLibrary Function PostProcess_ImproveCacheLocality
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_ImproveCacheLocality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Reorders triangles for better vertex cache locality.\n\x09 *\n\x09 * The step tries to improve the ACMR (average post-transform vertex cache\n\x09 * miss ratio) for all meshes. The implementation runs in O(n) and is\n\x09 * roughly based on the 'tipsify' algorithm (see <a href=\"\n\x09 * http://www.cs.princeton.edu/gfx/pubs/Sander_2007_%3ETR/tipsy.pdf\">this\n\x09 * paper</a>).\n\x09 *\n\x09 * If you intend to render huge models in hardware, this step might\n\x09 * be of interest to you. The <tt>#AI_CONFIG_PP_ICL_PTCACHE_SIZE</tt>\n\x09 * importer property can be used to fine-tune the cache optimization.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Reorders triangles for better vertex cache locality.\n\nThe step tries to improve the ACMR (average post-transform vertex cache\nmiss ratio) for all meshes. The implementation runs in O(n) and is\nroughly based on the 'tipsify' algorithm (see <a href=\"\nhttp://www.cs.princeton.edu/gfx/pubs/Sander_2007_%3ETR/tipsy.pdf\">this\npaper</a>).\n\nIf you intend to render huge models in hardware, this step might\nbe of interest to you. The <tt>#AI_CONFIG_PP_ICL_PTCACHE_SIZE</tt>\nimporter property can be used to fine-tune the cache optimization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_ImproveCacheLocality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_ImproveCacheLocality", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::AssimpFunctionLibrary_eventPostProcess_ImproveCacheLocality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::AssimpFunctionLibrary_eventPostProcess_ImproveCacheLocality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_ImproveCacheLocality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_ImproveCacheLocality();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_ImproveCacheLocality

// Begin Class UAssimpFunctionLibrary Function PostProcess_JoinIdenticalVertices
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_JoinIdenticalVertices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Identifies and joins identical vertex data sets within all\n\x09 *  imported meshes.\n\x09 *\n\x09 * After this step is run, each mesh contains unique vertices,\n\x09 * so a vertex may be used by multiple faces. You usually want\n\x09 * to use this post processing step. If your application deals with\n\x09 * indexed geometry, this step is compulsory or you'll just waste rendering\n\x09 * time. <b>If this flag is not specified</b>, no vertices are referenced by\n\x09 * more than one face and <b>no index buffer is required</b> for rendering.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Identifies and joins identical vertex data sets within all\nimported meshes.\n\nAfter this step is run, each mesh contains unique vertices,\nso a vertex may be used by multiple faces. You usually want\nto use this post processing step. If your application deals with\nindexed geometry, this step is compulsory or you'll just waste rendering\ntime. <b>If this flag is not specified</b>, no vertices are referenced by\nmore than one face and <b>no index buffer is required</b> for rendering." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_JoinIdenticalVertices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_JoinIdenticalVertices", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::AssimpFunctionLibrary_eventPostProcess_JoinIdenticalVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::AssimpFunctionLibrary_eventPostProcess_JoinIdenticalVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_JoinIdenticalVertices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_JoinIdenticalVertices();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_JoinIdenticalVertices

// Begin Class UAssimpFunctionLibrary Function PostProcess_LimitBoneWeights
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_LimitBoneWeights_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Limits the number of bones simultaneously affecting a single vertex\n\x09*  to a maximum value.\n\x09*\n\x09* If any vertex is affected by more than the maximum number of bones, the least\n\x09* important vertex weights are removed and the remaining vertex weights are\n\x09* renormalized so that the weights still sum up to 1.\n\x09* The default bone weight limit is 4 (defined as <tt>#AI_LMW_MAX_WEIGHTS</tt> in\n\x09* config.h), but you can use the <tt>#AI_CONFIG_PP_LBW_MAX_WEIGHTS</tt> importer\n\x09* property to supply your own limit to the post processing step.\n\x09*\n\x09* If you intend to perform the skinning in hardware, this post processing\n\x09* step might be of interest to you.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Limits the number of bones simultaneously affecting a single vertex\nto a maximum value.\n\nIf any vertex is affected by more than the maximum number of bones, the least\nimportant vertex weights are removed and the remaining vertex weights are\nrenormalized so that the weights still sum up to 1.\nThe default bone weight limit is 4 (defined as <tt>#AI_LMW_MAX_WEIGHTS</tt> in\nconfig.h), but you can use the <tt>#AI_CONFIG_PP_LBW_MAX_WEIGHTS</tt> importer\nproperty to supply your own limit to the post processing step.\n\nIf you intend to perform the skinning in hardware, this post processing\nstep might be of interest to you." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_LimitBoneWeights_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_LimitBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::AssimpFunctionLibrary_eventPostProcess_LimitBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::AssimpFunctionLibrary_eventPostProcess_LimitBoneWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_LimitBoneWeights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_LimitBoneWeights();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_LimitBoneWeights

// Begin Class UAssimpFunctionLibrary Function PostProcess_MakeLeftHanded
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_MakeLeftHanded_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Converts all the imported data to a left-handed coordinate space.\n\x09 *\n\x09 * By default the data is returned in a right-handed coordinate space (which\n\x09 * OpenGL prefers). In this space, +X points to the right,\n\x09 * +Z points towards the viewer, and +Y points upwards. In the DirectX\n\x09 * coordinate space +X points to the right, +Y points upwards, and +Z points\n\x09 * away from the viewer.\n\x09 *\n\x09 * You'll probably want to consider this flag if you use Direct3D for\n\x09 * rendering. The #AiPostProcess_ConvertToLeftHanded flag supersedes this\n\x09 * setting and bundles all conversions typically required for D3D-based\n\x09 * applications.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Converts all the imported data to a left-handed coordinate space.\n\nBy default the data is returned in a right-handed coordinate space (which\nOpenGL prefers). In this space, +X points to the right,\n+Z points towards the viewer, and +Y points upwards. In the DirectX\ncoordinate space +X points to the right, +Y points upwards, and +Z points\naway from the viewer.\n\nYou'll probably want to consider this flag if you use Direct3D for\nrendering. The #AiPostProcess_ConvertToLeftHanded flag supersedes this\nsetting and bundles all conversions typically required for D3D-based\napplications." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_MakeLeftHanded_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_MakeLeftHanded", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::AssimpFunctionLibrary_eventPostProcess_MakeLeftHanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::AssimpFunctionLibrary_eventPostProcess_MakeLeftHanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_MakeLeftHanded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_MakeLeftHanded();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_MakeLeftHanded

// Begin Class UAssimpFunctionLibrary Function PostProcess_OptimizeGraph
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_OptimizeGraph_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>A post-processing step to optimize the scene hierarchy.\n\x09 *\n\x09 *  Nodes without animations, bones, lights or cameras assigned are\n\x09 *  collapsed and joined.\n\x09 *\n\x09 *  Node names can be lost during this step. If you use special 'tag nodes'\n\x09 *  to pass additional information through your content pipeline, use the\n\x09 *  <tt>#AI_CONFIG_PP_OG_EXCLUDE_LIST</tt> importer property to specify a\n\x09 *  list of node names you want to be kept. Nodes matching one of the names\n\x09 *  in this list won't be touched or modified.\n\x09 *\n\x09 *  Use this flag with caution. Most simple files will be collapsed to a\n\x09 *  single node, so complex hierarchies are usually completely lost. This is not\n\x09 *  useful for editor environments, but probably a very effective\n\x09 *  optimization if you just want to get the model data, convert it to your\n\x09 *  own format, and render it as fast as possible.\n\x09 *\n\x09 *  This flag is designed to be used with #AiPostProcess_OptimizeMeshes for best\n\x09 *  results.\n\x09 *\n\x09 *  @note 'Crappy' scenes with thousands of extremely small meshes packed\n\x09 *  in deeply nested nodes exist for almost all file formats.\n\x09 *  #AiPostProcess_OptimizeMeshes in combination with #AiPostProcess_OptimizeGraph\n\x09 *  usually fixes them all and makes them renderable.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>A post-processing step to optimize the scene hierarchy.\n\nNodes without animations, bones, lights or cameras assigned are\ncollapsed and joined.\n\nNode names can be lost during this step. If you use special 'tag nodes'\nto pass additional information through your content pipeline, use the\n<tt>#AI_CONFIG_PP_OG_EXCLUDE_LIST</tt> importer property to specify a\nlist of node names you want to be kept. Nodes matching one of the names\nin this list won't be touched or modified.\n\nUse this flag with caution. Most simple files will be collapsed to a\nsingle node, so complex hierarchies are usually completely lost. This is not\nuseful for editor environments, but probably a very effective\noptimization if you just want to get the model data, convert it to your\nown format, and render it as fast as possible.\n\nThis flag is designed to be used with #AiPostProcess_OptimizeMeshes for best\nresults.\n\n@note 'Crappy' scenes with thousands of extremely small meshes packed\nin deeply nested nodes exist for almost all file formats.\n#AiPostProcess_OptimizeMeshes in combination with #AiPostProcess_OptimizeGraph\nusually fixes them all and makes them renderable." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_OptimizeGraph_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_OptimizeGraph", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::AssimpFunctionLibrary_eventPostProcess_OptimizeGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::AssimpFunctionLibrary_eventPostProcess_OptimizeGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_OptimizeGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_OptimizeGraph();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_OptimizeGraph

// Begin Class UAssimpFunctionLibrary Function PostProcess_OptimizeMeshes
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_OptimizeMeshes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>A post-processing step to reduce the number of meshes.\n\x09 *\n\x09 *  This will, in fact, reduce the number of draw calls.\n\x09 *\n\x09 *  This is a very effective optimization and is recommended to be used\n\x09 *  together with #AiPostProcess_OptimizeGraph, if possible. The flag is fully\n\x09 *  compatible with both #AiPostProcess_SplitLargeMeshes and #AiPostProcess_SortByPType.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>A post-processing step to reduce the number of meshes.\n\nThis will, in fact, reduce the number of draw calls.\n\nThis is a very effective optimization and is recommended to be used\ntogether with #AiPostProcess_OptimizeGraph, if possible. The flag is fully\ncompatible with both #AiPostProcess_SplitLargeMeshes and #AiPostProcess_SortByPType." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_OptimizeMeshes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_OptimizeMeshes", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::AssimpFunctionLibrary_eventPostProcess_OptimizeMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::AssimpFunctionLibrary_eventPostProcess_OptimizeMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_OptimizeMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_OptimizeMeshes();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_OptimizeMeshes

// Begin Class UAssimpFunctionLibrary Function PostProcess_PopulateArmatureData
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_PopulateArmatureData_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This step generically populates aiBone->mArmature and aiBone->mNode generically\n\x09 * The point of these is it saves you later having to calculate these elements\n\x09 * This is useful when handling rest information or skin information\n\x09 * If you have multiple armatures on your models we strongly recommend enabling this\n\x09 * Instead of writing your own multi-root, multi-armature lookups we have done the\n\x09 * hard work for you :)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This step generically populates aiBone->mArmature and aiBone->mNode generically\nThe point of these is it saves you later having to calculate these elements\nThis is useful when handling rest information or skin information\nIf you have multiple armatures on your models we strongly recommend enabling this\nInstead of writing your own multi-root, multi-armature lookups we have done the\nhard work for you :)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_PopulateArmatureData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_PopulateArmatureData", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::AssimpFunctionLibrary_eventPostProcess_PopulateArmatureData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::AssimpFunctionLibrary_eventPostProcess_PopulateArmatureData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_PopulateArmatureData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_PopulateArmatureData();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_PopulateArmatureData

// Begin Class UAssimpFunctionLibrary Function PostProcess_PreTransformVertices
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_PreTransformVertices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Removes the node graph and pre-transforms all vertices with\n\x09* the local transformation matrices of their nodes.\n\x09*\n\x09* If the resulting scene can be reduced to a single mesh, with a single\n\x09* material, no lights, and no cameras, then the output scene will contain\n\x09* only a root node (with no children) that references the single mesh.\n\x09* Otherwise, the output scene will be reduced to a root node with a single\n\x09* level of child nodes, each one referencing one mesh, and each mesh\n\x09* referencing one material.\n\x09*\n\x09* In either case, for rendering, you can\n\x09* simply render all meshes in order - you don't need to pay\n\x09* attention to local transformations and the node hierarchy.\n\x09* Animations are removed during this step.\n\x09* This step is intended for applications without a scenegraph.\n\x09* The step CAN cause some problems: if e.g. a mesh of the asset\n\x09* contains normals and another, using the same material index, does not,\n\x09* they will be brought together, but the first meshes's part of\n\x09* the normal list is zeroed. However, these artifacts are rare.\n\x09* @note The <tt>#AI_CONFIG_PP_PTV_NORMALIZE</tt> configuration property\n\x09* can be set to normalize the scene's spatial dimension to the -1...1\n\x09* range.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Removes the node graph and pre-transforms all vertices with\nthe local transformation matrices of their nodes.\n\nIf the resulting scene can be reduced to a single mesh, with a single\nmaterial, no lights, and no cameras, then the output scene will contain\nonly a root node (with no children) that references the single mesh.\nOtherwise, the output scene will be reduced to a root node with a single\nlevel of child nodes, each one referencing one mesh, and each mesh\nreferencing one material.\n\nIn either case, for rendering, you can\nsimply render all meshes in order - you don't need to pay\nattention to local transformations and the node hierarchy.\nAnimations are removed during this step.\nThis step is intended for applications without a scenegraph.\nThe step CAN cause some problems: if e.g. a mesh of the asset\ncontains normals and another, using the same material index, does not,\nthey will be brought together, but the first meshes's part of\nthe normal list is zeroed. However, these artifacts are rare.\n@note The <tt>#AI_CONFIG_PP_PTV_NORMALIZE</tt> configuration property\ncan be set to normalize the scene's spatial dimension to the -1...1\nrange." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_PreTransformVertices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_PreTransformVertices", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::AssimpFunctionLibrary_eventPostProcess_PreTransformVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::AssimpFunctionLibrary_eventPostProcess_PreTransformVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_PreTransformVertices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_PreTransformVertices();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_PreTransformVertices

// Begin Class UAssimpFunctionLibrary Function PostProcess_RemoveComponent
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_RemoveComponent_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Removes some parts of the data structure (animations, materials,\n\x09 *  light sources, cameras, textures, vertex components).\n\x09 *\n\x09 * The  components to be removed are specified in a separate\n\x09 * importer property, <tt>#AI_CONFIG_PP_RVC_FLAGS</tt>. This is quite useful\n\x09 * if you don't need all parts of the output structure. Vertex colors\n\x09 * are rarely used today for example... Calling this step to remove unneeded\n\x09 * data from the pipeline as early as possible results in increased\n\x09 * performance and a more optimized output data structure.\n\x09 * This step is also useful if you want to force Assimp to recompute\n\x09 * normals or tangents. The corresponding steps don't recompute them if\n\x09 * they're already there (loaded from the source asset). By using this\n\x09 * step you can make sure they are NOT there.\n\x09 *\n\x09 * This flag is a poor one, mainly because its purpose is usually\n\x09 * misunderstood. Consider the following case: a 3D model has been exported\n\x09 * from a CAD app, and it has per-face vertex colors. Vertex positions can't be\n\x09 * shared, thus the #AiPostProcess_JoinIdenticalVertices step fails to\n\x09 * optimize the data because of these nasty little vertex colors.\n\x09 * Most apps don't even process them, so it's all for nothing. By using\n\x09 * this step, unneeded components are excluded as early as possible\n\x09 * thus opening more room for internal optimizations.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Removes some parts of the data structure (animations, materials,\nlight sources, cameras, textures, vertex components).\n\nThe  components to be removed are specified in a separate\nimporter property, <tt>#AI_CONFIG_PP_RVC_FLAGS</tt>. This is quite useful\nif you don't need all parts of the output structure. Vertex colors\nare rarely used today for example... Calling this step to remove unneeded\ndata from the pipeline as early as possible results in increased\nperformance and a more optimized output data structure.\nThis step is also useful if you want to force Assimp to recompute\nnormals or tangents. The corresponding steps don't recompute them if\nthey're already there (loaded from the source asset). By using this\nstep you can make sure they are NOT there.\n\nThis flag is a poor one, mainly because its purpose is usually\nmisunderstood. Consider the following case: a 3D model has been exported\nfrom a CAD app, and it has per-face vertex colors. Vertex positions can't be\nshared, thus the #AiPostProcess_JoinIdenticalVertices step fails to\noptimize the data because of these nasty little vertex colors.\nMost apps don't even process them, so it's all for nothing. By using\nthis step, unneeded components are excluded as early as possible\nthus opening more room for internal optimizations." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_RemoveComponent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_RemoveComponent", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::AssimpFunctionLibrary_eventPostProcess_RemoveComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::AssimpFunctionLibrary_eventPostProcess_RemoveComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_RemoveComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_RemoveComponent();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_RemoveComponent

// Begin Class UAssimpFunctionLibrary Function PostProcess_RemoveRedundantMaterials
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_RemoveRedundantMaterials_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Searches for redundant/unreferenced materials and removes them.\n\x09 *\n\x09 * This is especially useful in combination with the\n\x09 * #AiPostProcess_PreTransformVertices and #AiPostProcess_OptimizeMeshes flags.\n\x09 * Both join small meshes with equal characteristics, but they can't do\n\x09 * their work if two meshes have different materials. Because several\n\x09 * material settings are lost during Assimp's import filters,\n\x09 * (and because many exporters don't check for redundant materials), huge\n\x09 * models often have materials which are are defined several times with\n\x09 * exactly the same settings.\n\x09 *\n\x09 * Several material settings not contributing to the final appearance of\n\x09 * a surface are ignored in all comparisons (e.g. the material name).\n\x09 * So, if you're passing additional information through the\n\x09 * content pipeline (probably using *magic* material names), don't\n\x09 * specify this flag. Alternatively take a look at the\n\x09 * <tt>#AI_CONFIG_PP_RRM_EXCLUDE_LIST</tt> importer property.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Searches for redundant/unreferenced materials and removes them.\n\nThis is especially useful in combination with the\n#AiPostProcess_PreTransformVertices and #AiPostProcess_OptimizeMeshes flags.\nBoth join small meshes with equal characteristics, but they can't do\ntheir work if two meshes have different materials. Because several\nmaterial settings are lost during Assimp's import filters,\n(and because many exporters don't check for redundant materials), huge\nmodels often have materials which are are defined several times with\nexactly the same settings.\n\nSeveral material settings not contributing to the final appearance of\na surface are ignored in all comparisons (e.g. the material name).\nSo, if you're passing additional information through the\ncontent pipeline (probably using *magic* material names), don't\nspecify this flag. Alternatively take a look at the\n<tt>#AI_CONFIG_PP_RRM_EXCLUDE_LIST</tt> importer property." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_RemoveRedundantMaterials_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_RemoveRedundantMaterials", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::AssimpFunctionLibrary_eventPostProcess_RemoveRedundantMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::AssimpFunctionLibrary_eventPostProcess_RemoveRedundantMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_RemoveRedundantMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_RemoveRedundantMaterials();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_RemoveRedundantMaterials

// Begin Class UAssimpFunctionLibrary Function PostProcess_SortByPType
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_SortByPType_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step splits meshes with more than one primitive type in\n\x09 *  homogeneous sub-meshes.\n\x09 *\n\x09 *  The step is executed after the triangulation step. After the step\n\x09 *  returns, just one bit is set in aiMesh::mPrimitiveTypes. This is\n\x09 *  especially useful for real-time rendering where point and line\n\x09 *  primitives are often ignored or rendered separately.\n\x09 *  You can use the <tt>#AI_CONFIG_PP_SBP_REMOVE</tt> importer property to\n\x09 *  specify which primitive types you need. This can be used to easily\n\x09 *  exclude lines and points, which are rarely used, from the import.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step splits meshes with more than one primitive type in\nhomogeneous sub-meshes.\n\nThe step is executed after the triangulation step. After the step\nreturns, just one bit is set in aiMesh::mPrimitiveTypes. This is\nespecially useful for real-time rendering where point and line\nprimitives are often ignored or rendered separately.\nYou can use the <tt>#AI_CONFIG_PP_SBP_REMOVE</tt> importer property to\nspecify which primitive types you need. This can be used to easily\nexclude lines and points, which are rarely used, from the import." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_SortByPType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_SortByPType", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::AssimpFunctionLibrary_eventPostProcess_SortByPType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::AssimpFunctionLibrary_eventPostProcess_SortByPType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_SortByPType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_SortByPType();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_SortByPType

// Begin Class UAssimpFunctionLibrary Function PostProcess_SplitByBoneCount
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_SplitByBoneCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step splits meshes with many bones into sub-meshes so that each\n\x09 * sub-mesh has fewer or as many bones as a given limit.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step splits meshes with many bones into sub-meshes so that each\nsub-mesh has fewer or as many bones as a given limit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_SplitByBoneCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_SplitByBoneCount", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::AssimpFunctionLibrary_eventPostProcess_SplitByBoneCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::AssimpFunctionLibrary_eventPostProcess_SplitByBoneCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_SplitByBoneCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_SplitByBoneCount();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_SplitByBoneCount

// Begin Class UAssimpFunctionLibrary Function PostProcess_TransformUVCoords
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_TransformUVCoords_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>This step applies per-texture UV transformations and bakes\n\x09 *  them into stand-alone vtexture coordinate channels.\n\x09 *\n\x09 * UV transformations are specified per-texture - see the\n\x09 * <tt>#AI_MATKEY_UVTRANSFORM</tt> material key for more information.\n\x09 * This step processes all textures with\n\x09 * transformed input UV coordinates and generates a new (pre-transformed) UV channel\n\x09 * which replaces the old channel. Most applications won't support UV\n\x09 * transformations, so you will probably want to specify this step.\n\x09 *\n\x09 * @note UV transformations are usually implemented in real-time apps by\n\x09 * transforming texture coordinates at vertex shader stage with a 3x3\n\x09 * (homogeneous) transformation matrix.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>This step applies per-texture UV transformations and bakes\nthem into stand-alone vtexture coordinate channels.\n\nUV transformations are specified per-texture - see the\n<tt>#AI_MATKEY_UVTRANSFORM</tt> material key for more information.\nThis step processes all textures with\ntransformed input UV coordinates and generates a new (pre-transformed) UV channel\nwhich replaces the old channel. Most applications won't support UV\ntransformations, so you will probably want to specify this step.\n\n@note UV transformations are usually implemented in real-time apps by\ntransforming texture coordinates at vertex shader stage with a 3x3\n(homogeneous) transformation matrix." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_TransformUVCoords_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_TransformUVCoords", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::AssimpFunctionLibrary_eventPostProcess_TransformUVCoords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::AssimpFunctionLibrary_eventPostProcess_TransformUVCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_TransformUVCoords)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_TransformUVCoords();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_TransformUVCoords

// Begin Class UAssimpFunctionLibrary Function PostProcess_Triangulate
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_Triangulate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Triangulates all faces of all meshes.\n\x09 *\n\x09 * By default the imported mesh data might contain faces with more than 3\n\x09 * indices. For rendering you'll usually want all faces to be triangles.\n\x09 * This post processing step splits up faces with more than 3 indices into\n\x09 * triangles. Line and point primitives are *not* modified! If you want\n\x09 * 'triangles only' with no other kinds of primitives, try the following\n\x09 * solution:\n\x09 * <ul>\n\x09 * <li>Specify both #AiPostProcess_Triangulate and #AiPostProcess_SortByPType </li>\n\x09 * <li>Ignore all point and line meshes when you process assimp's output</li>\n\x09 * </ul>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Triangulates all faces of all meshes.\n\nBy default the imported mesh data might contain faces with more than 3\nindices. For rendering you'll usually want all faces to be triangles.\nThis post processing step splits up faces with more than 3 indices into\ntriangles. Line and point primitives are *not* modified! If you want\n'triangles only' with no other kinds of primitives, try the following\nsolution:\n<ul>\n<li>Specify both #AiPostProcess_Triangulate and #AiPostProcess_SortByPType </li>\n<li>Ignore all point and line meshes when you process assimp's output</li>\n</ul>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_Triangulate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_Triangulate", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::AssimpFunctionLibrary_eventPostProcess_Triangulate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::AssimpFunctionLibrary_eventPostProcess_Triangulate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_Triangulate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_Triangulate();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_Triangulate

// Begin Class UAssimpFunctionLibrary Function PostProcess_ValidateDataStructure
struct Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics
{
	struct AssimpFunctionLibrary_eventPostProcess_ValidateDataStructure_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** <hr>Validates the imported scene data structure.\n\x09 * This makes sure that all indices are valid, all animations and\n\x09 * bones are linked correctly, all material references are correct .. etc.\n\x09 *\n\x09 * It is recommended that you capture Assimp's log output if you use this flag,\n\x09 * so you can easily find out what's wrong if a file fails the\n\x09 * validation. The validator is quite strict and will find *all*\n\x09 * inconsistencies in the data structure... It is recommended that plugin\n\x09 * developers use it to debug their loaders. There are two types of\n\x09 * validation failures:\n\x09 * <ul>\n\x09 * <li>Error: There's something wrong with the imported data. Further\n\x09 *   postprocessing is not possible and the data is not usable at all.\n\x09 *   The import fails. #Importer::GetErrorString() or #aiGetErrorString()\n\x09 *   carry the error message around.</li>\n\x09 * <li>Warning: There are some minor issues (e.g. 1000000 animation\n\x09 *   keyframes with the same time), but further postprocessing and use\n\x09 *   of the data structure is still safe. Warning details are written\n\x09 *   to the log file, <tt>#AI_SCENE_FLAGS_VALIDATION_WARNING</tt> is set\n\x09 *   in #aiScene::mFlags</li>\n\x09 * </ul>\n\x09 *\n\x09 * This post-processing step is not time-consuming. Its use is not\n\x09 * compulsory, but recommended.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<hr>Validates the imported scene data structure.\nThis makes sure that all indices are valid, all animations and\nbones are linked correctly, all material references are correct .. etc.\n\nIt is recommended that you capture Assimp's log output if you use this flag,\nso you can easily find out what's wrong if a file fails the\nvalidation. The validator is quite strict and will find *all*\ninconsistencies in the data structure... It is recommended that plugin\ndevelopers use it to debug their loaders. There are two types of\nvalidation failures:\n<ul>\n<li>Error: There's something wrong with the imported data. Further\n postprocessing is not possible and the data is not usable at all.\n The import fails. #Importer::GetErrorString() or #aiGetErrorString()\n carry the error message around.</li>\n<li>Warning: There are some minor issues (e.g. 1000000 animation\n keyframes with the same time), but further postprocessing and use\n of the data structure is still safe. Warning details are written\n to the log file, <tt>#AI_SCENE_FLAGS_VALIDATION_WARNING</tt> is set\n in #aiScene::mFlags</li>\n</ul>\n\nThis post-processing step is not time-consuming. Its use is not\ncompulsory, but recommended." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventPostProcess_ValidateDataStructure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "PostProcess_ValidateDataStructure", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::AssimpFunctionLibrary_eventPostProcess_ValidateDataStructure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::AssimpFunctionLibrary_eventPostProcess_ValidateDataStructure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execPostProcess_ValidateDataStructure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::PostProcess_ValidateDataStructure();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function PostProcess_ValidateDataStructure

// Begin Class UAssimpFunctionLibrary Function Process_ConvertToLeftHanded
struct Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics
{
	struct AssimpFunctionLibrary_eventProcess_ConvertToLeftHanded_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @def aiProcess_ConvertToLeftHanded\n\x09*  @brief Shortcut flag for Direct3D-based applications.\n\x09*\n\x09*  Supersedes the #aiProcess_MakeLeftHanded and #aiProcess_FlipUVs and\n\x09*  #aiProcess_FlipWindingOrder flags.\n\x09*  The output data matches Direct3D's conventions: left-handed geometry, upper-left\n\x09*  origin for UV coordinates and finally clockwise face order, suitable for CCW culling.\n\x09*\n\x09*  @deprecated\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@def aiProcess_ConvertToLeftHanded\n@brief Shortcut flag for Direct3D-based applications.\n\nSupersedes the #aiProcess_MakeLeftHanded and #aiProcess_FlipUVs and\n#aiProcess_FlipWindingOrder flags.\nThe output data matches Direct3D's conventions: left-handed geometry, upper-left\norigin for UV coordinates and finally clockwise face order, suitable for CCW culling.\n\n@deprecated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventProcess_ConvertToLeftHanded_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "Process_ConvertToLeftHanded", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::AssimpFunctionLibrary_eventProcess_ConvertToLeftHanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::AssimpFunctionLibrary_eventProcess_ConvertToLeftHanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execProcess_ConvertToLeftHanded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::Process_ConvertToLeftHanded();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function Process_ConvertToLeftHanded

// Begin Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_Fast
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics
{
	struct AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Fast_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @def aiProcessPreset_TargetRealtime_Fast\n\x09 *  @brief Default postprocess configuration optimizing the data for real-time rendering.\n\x09 *\n\x09 *  Applications would want to use this preset to load models on end-user PCs,\n\x09 *  maybe for direct use in game.\n\x09 *\n\x09 * If you're using DirectX, don't forget to combine this value with\n\x09 * the #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\n\x09 * in your application apply the #aiProcess_TransformUVCoords step, too.\n\x09 *  @note Please take the time to read the docs for the steps enabled by this preset.\n\x09 *  Some of them offer further configurable properties, while some of them might not be of\n\x09 *  use for you so it might be better to not specify them.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@def aiProcessPreset_TargetRealtime_Fast\n@brief Default postprocess configuration optimizing the data for real-time rendering.\n\nApplications would want to use this preset to load models on end-user PCs,\nmaybe for direct use in game.\n\nIf you're using DirectX, don't forget to combine this value with\nthe #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\nin your application apply the #aiProcess_TransformUVCoords step, too.\n@note Please take the time to read the docs for the steps enabled by this preset.\nSome of them offer further configurable properties, while some of them might not be of\nuse for you so it might be better to not specify them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Fast_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ProcessPreset_TargetRealtime_Fast", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Fast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Fast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_Fast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::ProcessPreset_TargetRealtime_Fast();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_Fast

// Begin Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_MaxQuality
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics
{
	struct AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_MaxQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @def aiProcessPreset_TargetRealtime_MaxQuality\n\x09 *  @brief Default postprocess configuration optimizing the data for real-time rendering.\n\x09 *\n\x09 *  This preset enables almost every optimization step to achieve perfectly\n\x09 *  optimized data. It's your choice for level editor environments where import speed\n\x09 *  is not important.\n\x09 *\n\x09 *  If you're using DirectX, don't forget to combine this value with\n\x09 *  the #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\n\x09 *  in your application, apply the #aiProcess_TransformUVCoords step, too.\n\x09 *  @note Please take the time to read the docs for the steps enabled by this preset.\n\x09 *  Some of them offer further configurable properties, while some of them might not be\n\x09 *  of use for you so it might be better to not specify them.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@def aiProcessPreset_TargetRealtime_MaxQuality\n@brief Default postprocess configuration optimizing the data for real-time rendering.\n\nThis preset enables almost every optimization step to achieve perfectly\noptimized data. It's your choice for level editor environments where import speed\nis not important.\n\nIf you're using DirectX, don't forget to combine this value with\nthe #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\nin your application, apply the #aiProcess_TransformUVCoords step, too.\n@note Please take the time to read the docs for the steps enabled by this preset.\nSome of them offer further configurable properties, while some of them might not be\nof use for you so it might be better to not specify them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_MaxQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ProcessPreset_TargetRealtime_MaxQuality", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_MaxQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_MaxQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_MaxQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::ProcessPreset_TargetRealtime_MaxQuality();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_MaxQuality

// Begin Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_Quality
struct Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics
{
	struct AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Quality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @def aiProcessPreset_TargetRealtime_Quality\n\x09 *  @brief Default postprocess configuration optimizing the data for real-time rendering.\n\x09 *\n\x09 *  Unlike #aiProcessPreset_TargetRealtime_Fast, this configuration\n\x09 *  performs some extra optimizations to improve rendering speed and\n\x09 *  to minimize memory usage. It could be a good choice for a level editor\n\x09 *  environment where import speed is not so important.\n\x09 *\n\x09 *  If you're using DirectX, don't forget to combine this value with\n\x09 *  the #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\n\x09 *  in your application apply the #aiProcess_TransformUVCoords step, too.\n\x09 *  @note Please take the time to read the docs for the steps enabled by this preset.\n\x09 *  Some of them offer further configurable properties, while some of them might not be\n\x09 *  of use for you so it might be better to not specify them.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@def aiProcessPreset_TargetRealtime_Quality\n@brief Default postprocess configuration optimizing the data for real-time rendering.\n\nUnlike #aiProcessPreset_TargetRealtime_Fast, this configuration\nperforms some extra optimizations to improve rendering speed and\nto minimize memory usage. It could be a good choice for a level editor\nenvironment where import speed is not so important.\n\nIf you're using DirectX, don't forget to combine this value with\nthe #aiProcess_ConvertToLeftHanded step. If you don't support UV transformations\nin your application apply the #aiProcess_TransformUVCoords step, too.\n@note Please take the time to read the docs for the steps enabled by this preset.\nSome of them offer further configurable properties, while some of them might not be\nof use for you so it might be better to not specify them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Quality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "ProcessPreset_TargetRealtime_Quality", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Quality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::AssimpFunctionLibrary_eventProcessPreset_TargetRealtime_Quality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_Quality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssimpFunctionLibrary::ProcessPreset_TargetRealtime_Quality();
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function ProcessPreset_TargetRealtime_Quality

// Begin Class UAssimpFunctionLibrary Function SetActorNameDebug
struct Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics
{
	struct AssimpFunctionLibrary_eventSetActorNameDebug_Parms
	{
		AActor* InActor;
		FString ActorName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventSetActorNameDebug_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpFunctionLibrary_eventSetActorNameDebug_Parms, ActorName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpFunctionLibrary, nullptr, "SetActorNameDebug", nullptr, nullptr, Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::AssimpFunctionLibrary_eventSetActorNameDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::AssimpFunctionLibrary_eventSetActorNameDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpFunctionLibrary::execSetActorNameDebug)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssimpFunctionLibrary::SetActorNameDebug(Z_Param_InActor,Z_Param_ActorName);
	P_NATIVE_END;
}
// End Class UAssimpFunctionLibrary Function SetActorNameDebug

// Begin Class UAssimpFunctionLibrary
void UAssimpFunctionLibrary::StaticRegisterNativesUAssimpFunctionLibrary()
{
	UClass* Class = UAssimpFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AiPostProcess_GenNormals", &UAssimpFunctionLibrary::execAiPostProcess_GenNormals },
		{ "ApplyNormalMapSettingsToTexture", &UAssimpFunctionLibrary::execApplyNormalMapSettingsToTexture },
		{ "GetBoneName", &UAssimpFunctionLibrary::execGetBoneName },
		{ "GetBoneTransform", &UAssimpFunctionLibrary::execGetBoneTransform },
		{ "GetBoneWeights", &UAssimpFunctionLibrary::execGetBoneWeights },
		{ "GetNumOfWeights", &UAssimpFunctionLibrary::execGetNumOfWeights },
		{ "ImportScene", &UAssimpFunctionLibrary::execImportScene },
		{ "ImportScenes", &UAssimpFunctionLibrary::execImportScenes },
		{ "ImportScenesAsync", &UAssimpFunctionLibrary::execImportScenesAsync },
		{ "OpenFileDialogue", &UAssimpFunctionLibrary::execOpenFileDialogue },
		{ "PostProcess_CalcTangentSpace", &UAssimpFunctionLibrary::execPostProcess_CalcTangentSpace },
		{ "PostProcess_Debone", &UAssimpFunctionLibrary::execPostProcess_Debone },
		{ "PostProcess_DropNormals", &UAssimpFunctionLibrary::execPostProcess_DropNormals },
		{ "PostProcess_EmbedTextures", &UAssimpFunctionLibrary::execPostProcess_EmbedTextures },
		{ "PostProcess_FindDegenerates", &UAssimpFunctionLibrary::execPostProcess_FindDegenerates },
		{ "PostProcess_FindInstances", &UAssimpFunctionLibrary::execPostProcess_FindInstances },
		{ "PostProcess_FindInvalidData", &UAssimpFunctionLibrary::execPostProcess_FindInvalidData },
		{ "PostProcess_FixInfacingNormals", &UAssimpFunctionLibrary::execPostProcess_FixInfacingNormals },
		{ "PostProcess_FlipUVs", &UAssimpFunctionLibrary::execPostProcess_FlipUVs },
		{ "PostProcess_FlipWindingOrder", &UAssimpFunctionLibrary::execPostProcess_FlipWindingOrder },
		{ "PostProcess_ForceGenNormals", &UAssimpFunctionLibrary::execPostProcess_ForceGenNormals },
		{ "PostProcess_GenBoundingBoxes", &UAssimpFunctionLibrary::execPostProcess_GenBoundingBoxes },
		{ "PostProcess_GenSmoothNormals", &UAssimpFunctionLibrary::execPostProcess_GenSmoothNormals },
		{ "PostProcess_GenUVCoords", &UAssimpFunctionLibrary::execPostProcess_GenUVCoords },
		{ "PostProcess_GlobalScale", &UAssimpFunctionLibrary::execPostProcess_GlobalScale },
		{ "PostProcess_ImproveCacheLocality", &UAssimpFunctionLibrary::execPostProcess_ImproveCacheLocality },
		{ "PostProcess_JoinIdenticalVertices", &UAssimpFunctionLibrary::execPostProcess_JoinIdenticalVertices },
		{ "PostProcess_LimitBoneWeights", &UAssimpFunctionLibrary::execPostProcess_LimitBoneWeights },
		{ "PostProcess_MakeLeftHanded", &UAssimpFunctionLibrary::execPostProcess_MakeLeftHanded },
		{ "PostProcess_OptimizeGraph", &UAssimpFunctionLibrary::execPostProcess_OptimizeGraph },
		{ "PostProcess_OptimizeMeshes", &UAssimpFunctionLibrary::execPostProcess_OptimizeMeshes },
		{ "PostProcess_PopulateArmatureData", &UAssimpFunctionLibrary::execPostProcess_PopulateArmatureData },
		{ "PostProcess_PreTransformVertices", &UAssimpFunctionLibrary::execPostProcess_PreTransformVertices },
		{ "PostProcess_RemoveComponent", &UAssimpFunctionLibrary::execPostProcess_RemoveComponent },
		{ "PostProcess_RemoveRedundantMaterials", &UAssimpFunctionLibrary::execPostProcess_RemoveRedundantMaterials },
		{ "PostProcess_SortByPType", &UAssimpFunctionLibrary::execPostProcess_SortByPType },
		{ "PostProcess_SplitByBoneCount", &UAssimpFunctionLibrary::execPostProcess_SplitByBoneCount },
		{ "PostProcess_TransformUVCoords", &UAssimpFunctionLibrary::execPostProcess_TransformUVCoords },
		{ "PostProcess_Triangulate", &UAssimpFunctionLibrary::execPostProcess_Triangulate },
		{ "PostProcess_ValidateDataStructure", &UAssimpFunctionLibrary::execPostProcess_ValidateDataStructure },
		{ "Process_ConvertToLeftHanded", &UAssimpFunctionLibrary::execProcess_ConvertToLeftHanded },
		{ "ProcessPreset_TargetRealtime_Fast", &UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_Fast },
		{ "ProcessPreset_TargetRealtime_MaxQuality", &UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_MaxQuality },
		{ "ProcessPreset_TargetRealtime_Quality", &UAssimpFunctionLibrary::execProcessPreset_TargetRealtime_Quality },
		{ "SetActorNameDebug", &UAssimpFunctionLibrary::execSetActorNameDebug },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssimpFunctionLibrary);
UClass* Z_Construct_UClass_UAssimpFunctionLibrary_NoRegister()
{
	return UAssimpFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UAssimpFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssimpFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AssimpFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_AiPostProcess_GenNormals, "AiPostProcess_GenNormals" }, // 4137460953
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ApplyNormalMapSettingsToTexture, "ApplyNormalMapSettingsToTexture" }, // 3118906969
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneName, "GetBoneName" }, // 1248044522
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneTransform, "GetBoneTransform" }, // 4020487918
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_GetBoneWeights, "GetBoneWeights" }, // 2698707851
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_GetNumOfWeights, "GetNumOfWeights" }, // 3410743516
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScene, "ImportScene" }, // 3267660941
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenes, "ImportScenes" }, // 898839872
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ImportScenesAsync, "ImportScenesAsync" }, // 28339706
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_OpenFileDialogue, "OpenFileDialogue" }, // 3462480528
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_CalcTangentSpace, "PostProcess_CalcTangentSpace" }, // 2765417844
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Debone, "PostProcess_Debone" }, // 4024849768
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_DropNormals, "PostProcess_DropNormals" }, // 2581111000
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_EmbedTextures, "PostProcess_EmbedTextures" }, // 248492115
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindDegenerates, "PostProcess_FindDegenerates" }, // 3132024229
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInstances, "PostProcess_FindInstances" }, // 1845661307
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FindInvalidData, "PostProcess_FindInvalidData" }, // 1302967674
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FixInfacingNormals, "PostProcess_FixInfacingNormals" }, // 1909173154
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipUVs, "PostProcess_FlipUVs" }, // 3999370126
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_FlipWindingOrder, "PostProcess_FlipWindingOrder" }, // 1499067850
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ForceGenNormals, "PostProcess_ForceGenNormals" }, // 2609300721
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenBoundingBoxes, "PostProcess_GenBoundingBoxes" }, // 3426238959
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenSmoothNormals, "PostProcess_GenSmoothNormals" }, // 3844520281
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GenUVCoords, "PostProcess_GenUVCoords" }, // 2388421918
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_GlobalScale, "PostProcess_GlobalScale" }, // 882868600
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ImproveCacheLocality, "PostProcess_ImproveCacheLocality" }, // 2289203562
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_JoinIdenticalVertices, "PostProcess_JoinIdenticalVertices" }, // 3356693984
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_LimitBoneWeights, "PostProcess_LimitBoneWeights" }, // 4007342568
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_MakeLeftHanded, "PostProcess_MakeLeftHanded" }, // 3496868980
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeGraph, "PostProcess_OptimizeGraph" }, // 830283503
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_OptimizeMeshes, "PostProcess_OptimizeMeshes" }, // 1531369996
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PopulateArmatureData, "PostProcess_PopulateArmatureData" }, // 1440939001
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_PreTransformVertices, "PostProcess_PreTransformVertices" }, // 2686084266
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveComponent, "PostProcess_RemoveComponent" }, // 2290385498
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_RemoveRedundantMaterials, "PostProcess_RemoveRedundantMaterials" }, // 3508288752
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SortByPType, "PostProcess_SortByPType" }, // 3566931589
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_SplitByBoneCount, "PostProcess_SplitByBoneCount" }, // 3417617707
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_TransformUVCoords, "PostProcess_TransformUVCoords" }, // 3737524892
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_Triangulate, "PostProcess_Triangulate" }, // 3678426788
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_PostProcess_ValidateDataStructure, "PostProcess_ValidateDataStructure" }, // 1390601818
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_Process_ConvertToLeftHanded, "Process_ConvertToLeftHanded" }, // 4075283179
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Fast, "ProcessPreset_TargetRealtime_Fast" }, // 13815905
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_MaxQuality, "ProcessPreset_TargetRealtime_MaxQuality" }, // 414582886
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_ProcessPreset_TargetRealtime_Quality, "ProcessPreset_TargetRealtime_Quality" }, // 4201586893
		{ &Z_Construct_UFunction_UAssimpFunctionLibrary_SetActorNameDebug, "SetActorNameDebug" }, // 2122631300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssimpFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssimpFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssimpFunctionLibrary_Statics::ClassParams = {
	&UAssimpFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssimpFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssimpFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAssimpFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssimpFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAssimpFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssimpFunctionLibrary.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAssimpFunctionLibrary>()
{
	return UAssimpFunctionLibrary::StaticClass();
}
UAssimpFunctionLibrary::UAssimpFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssimpFunctionLibrary);
UAssimpFunctionLibrary::~UAssimpFunctionLibrary() {}
// End Class UAssimpFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssimpFunctionLibrary, UAssimpFunctionLibrary::StaticClass, TEXT("UAssimpFunctionLibrary"), &Z_Registration_Info_UClass_UAssimpFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssimpFunctionLibrary), 2288791084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_3924576827(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
