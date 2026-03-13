// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIScene() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Class UAIScene Function GetAllCameras
struct Z_Construct_UFunction_UAIScene_GetAllCameras_Statics
{
	struct AIScene_eventGetAllCameras_Parms
	{
		TArray<UAICamera*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAICamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetAllCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllCameras", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::AIScene_eventGetAllCameras_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::AIScene_eventGetAllCameras_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetAllCameras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetAllCameras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAICamera*>*)Z_Param__Result=P_THIS->GetAllCameras();
	P_NATIVE_END;
}
// End Class UAIScene Function GetAllCameras

// Begin Class UAIScene Function GetAllLights
struct Z_Construct_UFunction_UAIScene_GetAllLights_Statics
{
	struct AIScene_eventGetAllLights_Parms
	{
		TArray<UAILight*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAILight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetAllLights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllLights", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::AIScene_eventGetAllLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetAllLights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::AIScene_eventGetAllLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetAllLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetAllLights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAILight*>*)Z_Param__Result=P_THIS->GetAllLights();
	P_NATIVE_END;
}
// End Class UAIScene Function GetAllLights

// Begin Class UAIScene Function GetAllMaterials
struct Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics
{
	struct AIScene_eventGetAllMaterials_Parms
	{
		TArray<UAIMaterial*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetAllMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllMaterials", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::AIScene_eventGetAllMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::AIScene_eventGetAllMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetAllMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetAllMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAIMaterial*>*)Z_Param__Result=P_THIS->GetAllMaterials();
	P_NATIVE_END;
}
// End Class UAIScene Function GetAllMaterials

// Begin Class UAIScene Function GetAllMeshes
struct Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics
{
	struct AIScene_eventGetAllMeshes_Parms
	{
		TArray<UAIMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get All meshes stored in this scene\n\x09* note that each material section is considered a  separate mesh \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All meshes stored in this scene\n       * note that each material section is considered a  separate mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetAllMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllMeshes", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::AIScene_eventGetAllMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::AIScene_eventGetAllMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetAllMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetAllMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAIMesh*>*)Z_Param__Result=P_THIS->GetAllMeshes();
	P_NATIVE_END;
}
// End Class UAIScene Function GetAllMeshes

// Begin Class UAIScene Function GetEmbeddedTexture
struct Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics
{
	struct AIScene_eventGetEmbeddedTexture_Parms
	{
		FString FilePath;
		bool bIsNormalMap;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Texture\n//! Returns an embedded texture. if null then check path or texture is not embedded and must be imported using unreal default import texture function\n" },
#endif
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture\n! Returns an embedded texture. if null then check path or texture is not embedded and must be imported using unreal default import texture function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bIsNormalMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNormalMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetEmbeddedTexture_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap_SetBit(void* Obj)
{
	((AIScene_eventGetEmbeddedTexture_Parms*)Obj)->bIsNormalMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap = { "bIsNormalMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIScene_eventGetEmbeddedTexture_Parms), &Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetEmbeddedTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetEmbeddedTexture", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::AIScene_eventGetEmbeddedTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::AIScene_eventGetEmbeddedTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetEmbeddedTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetEmbeddedTexture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bIsNormalMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetEmbeddedTexture(Z_Param_FilePath,Z_Param_bIsNormalMap);
	P_NATIVE_END;
}
// End Class UAIScene Function GetEmbeddedTexture

// Begin Class UAIScene Function GetMeshAtIndex
struct Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics
{
	struct AIScene_eventGetMeshAtIndex_Parms
	{
		int32 Index;
		UAIMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetMeshAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetMeshAtIndex_Parms, ReturnValue), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetMeshAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::AIScene_eventGetMeshAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::AIScene_eventGetMeshAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetMeshAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetMeshAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIMesh**)Z_Param__Result=P_THIS->GetMeshAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UAIScene Function GetMeshAtIndex

// Begin Class UAIScene Function GetRootNode
struct Z_Construct_UFunction_UAIScene_GetRootNode_Statics
{
	struct AIScene_eventGetRootNode_Parms
	{
		UAINode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The root node of the hierarchy.\n\x09*\n\x09* There will always be at least the root node if the import\n\x09* was successful (and no special flags have been set).\n\x09* Presence of further nodes depends on the format and content\n\x09* of the imported file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The root node of the hierarchy.\n\nThere will always be at least the root node if the import\nwas successful (and no special flags have been set).\nPresence of further nodes depends on the format and content\nof the imported file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetRootNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetRootNode", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::AIScene_eventGetRootNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetRootNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::AIScene_eventGetRootNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetRootNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetRootNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetRootNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAINode**)Z_Param__Result=P_THIS->GetRootNode();
	P_NATIVE_END;
}
// End Class UAIScene Function GetRootNode

// Begin Class UAIScene Function GetSceneScale
struct Z_Construct_UFunction_UAIScene_GetSceneScale_Statics
{
	struct AIScene_eventGetSceneScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetSceneScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetSceneScale", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::AIScene_eventGetSceneScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::AIScene_eventGetSceneScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetSceneScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetSceneScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSceneScale();
	P_NATIVE_END;
}
// End Class UAIScene Function GetSceneScale

// Begin Class UAIScene Function GetUnitScaleFactor
struct Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics
{
	struct AIScene_eventGetUnitScaleFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventGetUnitScaleFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetUnitScaleFactor", nullptr, nullptr, Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::AIScene_eventGetUnitScaleFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::AIScene_eventGetUnitScaleFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_GetUnitScaleFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execGetUnitScaleFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnitScaleFactor();
	P_NATIVE_END;
}
// End Class UAIScene Function GetUnitScaleFactor

// Begin Class UAIScene Function SpawnAllMeshes
struct Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics
{
	struct AIScene_eventSpawnAllMeshes_Parms
	{
		FTransform Transform;
		TSubclassOf<AActor> ClassToSpawn;
		TArray<UMeshComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*WIP Function:\n\x09WIll spawn all meshes in most optimised fashion \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WIP Function:\n       WIll spawn all meshes in most optimised fashion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, ClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "SpawnAllMeshes", nullptr, nullptr, Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::AIScene_eventSpawnAllMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::AIScene_eventSpawnAllMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIScene_SpawnAllMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIScene::execSpawnAllMeshes)
{
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_OBJECT(UClass,Z_Param_ClassToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->SpawnAllMeshes(Z_Param_Transform,Z_Param_ClassToSpawn);
	P_NATIVE_END;
}
// End Class UAIScene Function SpawnAllMeshes

// Begin Class UAIScene
void UAIScene::StaticRegisterNativesUAIScene()
{
	UClass* Class = UAIScene::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllCameras", &UAIScene::execGetAllCameras },
		{ "GetAllLights", &UAIScene::execGetAllLights },
		{ "GetAllMaterials", &UAIScene::execGetAllMaterials },
		{ "GetAllMeshes", &UAIScene::execGetAllMeshes },
		{ "GetEmbeddedTexture", &UAIScene::execGetEmbeddedTexture },
		{ "GetMeshAtIndex", &UAIScene::execGetMeshAtIndex },
		{ "GetRootNode", &UAIScene::execGetRootNode },
		{ "GetSceneScale", &UAIScene::execGetSceneScale },
		{ "GetUnitScaleFactor", &UAIScene::execGetUnitScaleFactor },
		{ "SpawnAllMeshes", &UAIScene::execSpawnAllMeshes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIScene);
UClass* Z_Construct_UClass_UAIScene_NoRegister()
{
	return UAIScene::StaticClass();
}
struct Z_Construct_UClass_UAIScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//wrapper for scene\n" },
#endif
		{ "IncludePath", "AIScene.h" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "wrapper for scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[] = {
		{ "Category", "AIScene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedMeshes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For Object Creation\n" },
#endif
		{ "ModuleRelativePath", "Public/AIScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Object Creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedRootNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedCameras_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedLights_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedRootNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedCameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedCameras;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedLights;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIScene_GetAllCameras, "GetAllCameras" }, // 1208641676
		{ &Z_Construct_UFunction_UAIScene_GetAllLights, "GetAllLights" }, // 2128799803
		{ &Z_Construct_UFunction_UAIScene_GetAllMaterials, "GetAllMaterials" }, // 4198340275
		{ &Z_Construct_UFunction_UAIScene_GetAllMeshes, "GetAllMeshes" }, // 3069365188
		{ &Z_Construct_UFunction_UAIScene_GetEmbeddedTexture, "GetEmbeddedTexture" }, // 707859449
		{ &Z_Construct_UFunction_UAIScene_GetMeshAtIndex, "GetMeshAtIndex" }, // 2663347634
		{ &Z_Construct_UFunction_UAIScene_GetRootNode, "GetRootNode" }, // 4149491919
		{ &Z_Construct_UFunction_UAIScene_GetSceneScale, "GetSceneScale" }, // 4165072251
		{ &Z_Construct_UFunction_UAIScene_GetUnitScaleFactor, "GetUnitScaleFactor" }, // 1071014640
		{ &Z_Construct_UFunction_UAIScene_SpawnAllMeshes, "SpawnAllMeshes" }, // 2338126531
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, FullFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullFilePath_MetaData), NewProp_FullFilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_Inner = { "OwnedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes = { "OwnedMeshes", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, OwnedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedMeshes_MetaData), NewProp_OwnedMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode = { "OwnedRootNode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, OwnedRootNode), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedRootNode_MetaData), NewProp_OwnedRootNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_Inner = { "OwnedCameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAICamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras = { "OwnedCameras", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, OwnedCameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedCameras_MetaData), NewProp_OwnedCameras_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_Inner = { "OwnedLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAILight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights = { "OwnedLights", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, OwnedLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedLights_MetaData), NewProp_OwnedLights_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_Inner = { "OwnedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials = { "OwnedMaterials", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIScene, OwnedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedMaterials_MetaData), NewProp_OwnedMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIScene_Statics::ClassParams = {
	&UAIScene::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIScene_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIScene()
{
	if (!Z_Registration_Info_UClass_UAIScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIScene.OuterSingleton, Z_Construct_UClass_UAIScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIScene.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAIScene>()
{
	return UAIScene::StaticClass();
}
UAIScene::UAIScene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIScene);
UAIScene::~UAIScene() {}
// End Class UAIScene

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIScene, UAIScene::StaticClass, TEXT("UAIScene"), &Z_Registration_Info_UClass_UAIScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIScene), 1956455442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_3124474497(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
