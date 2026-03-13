// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AICamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICamera() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Class UAICamera Function GetAspectRatio
struct Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics
{
	struct AICamera_eventGetAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Screen aspect ratio.\n\x09*\n\x09* This is the ration between the width and the height of the\n\x09* screen. Typical values are 4/3, 1/2 or 1/1. This value is\n\x09* 0 if the aspect ratio is not defined in the source file.\n\x09* 0 is also the default value.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Screen aspect ratio.\n\nThis is the ration between the width and the height of the\nscreen. Typical values are 4/3, 1/2 or 1/1. This value is\n0 if the aspect ratio is not defined in the source file.\n0 is also the default value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::AICamera_eventGetAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::AICamera_eventGetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
	P_NATIVE_END;
}
// End Class UAICamera Function GetAspectRatio

// Begin Class UAICamera Function GetCameraFOV
struct Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics
{
	struct AICamera_eventGetCameraFOV_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half horizontal field of view angle, in radians.\n\x09*\n\x09*  The field of view angle is the angle between the center\n\x09*  line of the screen and the left or right border.\n\x09*  The default value is 1/4PI.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half horizontal field of view angle, in radians.\n\nThe field of view angle is the angle between the center\nline of the screen and the left or right border.\nThe default value is 1/4PI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetCameraFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetCameraFOV", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::AICamera_eventGetCameraFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::AICamera_eventGetCameraFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetCameraFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetCameraFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCameraFOV();
	P_NATIVE_END;
}
// End Class UAICamera Function GetCameraFOV

// Begin Class UAICamera Function GetCameraName
struct Z_Construct_UFunction_UAICamera_GetCameraName_Statics
{
	struct AICamera_eventGetCameraName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the camera.\n\x09*\n\x09*  There must be a node in the scenegraph with the same name.\n\x09*  This node specifies the position of the camera in the scene\n\x09*  hierarchy and can be animated.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the camera.\n\nThere must be a node in the scenegraph with the same name.\nThis node specifies the position of the camera in the scene\nhierarchy and can be animated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAICamera_GetCameraName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetCameraName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetCameraName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetCameraName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetCameraName", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::AICamera_eventGetCameraName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetCameraName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::AICamera_eventGetCameraName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetCameraName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetCameraName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetCameraName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCameraName();
	P_NATIVE_END;
}
// End Class UAICamera Function GetCameraName

// Begin Class UAICamera Function GetClipPlaneFar
struct Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics
{
	struct AICamera_eventGetClipPlaneFar_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance of the far clipping plane from the camera.\n\x09*\n\x09* The far clipping plane must, of course, be further away than the\n\x09* near clipping plane. The default value is 1000.f. The ratio\n\x09* between the near and the far plane should not be too\n\x09* large (between 1000-10000 should be ok) to avoid floating-point\n\x09* inaccuracies which could lead to z-fighting.\n\x09* \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance of the far clipping plane from the camera.\n\nThe far clipping plane must, of course, be further away than the\nnear clipping plane. The default value is 1000.f. The ratio\nbetween the near and the far plane should not be too\nlarge (between 1000-10000 should be ok) to avoid floating-point\ninaccuracies which could lead to z-fighting." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetClipPlaneFar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetClipPlaneFar", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::AICamera_eventGetClipPlaneFar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::AICamera_eventGetClipPlaneFar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetClipPlaneFar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetClipPlaneFar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetClipPlaneFar();
	P_NATIVE_END;
}
// End Class UAICamera Function GetClipPlaneFar

// Begin Class UAICamera Function GetClipPlaneNear
struct Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics
{
	struct AICamera_eventGetClipPlaneNear_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance of the near clipping plane from the camera.\n   *\n   * The value may not be 0.f (for arithmetic reasons to prevent\n   * a division through zero). The default value is 0.1f.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance of the near clipping plane from the camera.\n\nThe value may not be 0.f (for arithmetic reasons to prevent\na division through zero). The default value is 0.1f." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetClipPlaneNear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetClipPlaneNear", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::AICamera_eventGetClipPlaneNear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::AICamera_eventGetClipPlaneNear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetClipPlaneNear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetClipPlaneNear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetClipPlaneNear();
	P_NATIVE_END;
}
// End Class UAICamera Function GetClipPlaneNear

// Begin Class UAICamera Function GetLookAtVector
struct Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics
{
	struct AICamera_eventGetLookAtVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 'LookAt' - vector of the camera coordinate system relative to\n\x09*  the coordinate space defined by the corresponding node.\n\x09*\n\x09*  This is the viewing direction of the user.\n\x09*  The default value is 0|0|1. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "'LookAt' - vector of the camera coordinate system relative to\nthe coordinate space defined by the corresponding node.\n\nThis is the viewing direction of the user.\nThe default value is 0|0|1. The vector\nmay be normalized, but it needn't." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetLookAtVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetLookAtVector", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::AICamera_eventGetLookAtVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::AICamera_eventGetLookAtVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetLookAtVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetLookAtVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLookAtVector();
	P_NATIVE_END;
}
// End Class UAICamera Function GetLookAtVector

// Begin Class UAICamera Function GetPosition
struct Z_Construct_UFunction_UAICamera_GetPosition_Statics
{
	struct AICamera_eventGetPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Position of the camera relative to the coordinate space\n\x09*  defined by the corresponding node.\n\x09*\n\x09*  The default value is 0|0|0.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position of the camera relative to the coordinate space\ndefined by the corresponding node.\n\nThe default value is 0|0|0." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetPosition_Statics::AICamera_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetPosition_Statics::AICamera_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class UAICamera Function GetPosition

// Begin Class UAICamera Function GetUpVector
struct Z_Construct_UFunction_UAICamera_GetUpVector_Statics
{
	struct AICamera_eventGetUpVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 'Up' - vector of the camera coordinate system relative to\n\x09*  the coordinate space defined by the corresponding node.\n\x09*\n\x09*  The 'right' vector of the camera coordinate system is\n\x09*  the cross product of  the up and lookAt vectors.\n\x09*  The default value is 0|1|0. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AICamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "'Up' - vector of the camera coordinate system relative to\nthe coordinate space defined by the corresponding node.\n\nThe 'right' vector of the camera coordinate system is\nthe cross product of  the up and lookAt vectors.\nThe default value is 0|1|0. The vector\nmay be normalized, but it needn't." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICamera_eventGetUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetUpVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetUpVector", nullptr, nullptr, Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::AICamera_eventGetUpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAICamera_GetUpVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::AICamera_eventGetUpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAICamera_GetUpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAICamera_GetUpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAICamera::execGetUpVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetUpVector();
	P_NATIVE_END;
}
// End Class UAICamera Function GetUpVector

// Begin Class UAICamera
void UAICamera::StaticRegisterNativesUAICamera()
{
	UClass* Class = UAICamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAspectRatio", &UAICamera::execGetAspectRatio },
		{ "GetCameraFOV", &UAICamera::execGetCameraFOV },
		{ "GetCameraName", &UAICamera::execGetCameraName },
		{ "GetClipPlaneFar", &UAICamera::execGetClipPlaneFar },
		{ "GetClipPlaneNear", &UAICamera::execGetClipPlaneNear },
		{ "GetLookAtVector", &UAICamera::execGetLookAtVector },
		{ "GetPosition", &UAICamera::execGetPosition },
		{ "GetUpVector", &UAICamera::execGetUpVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAICamera);
UClass* Z_Construct_UClass_UAICamera_NoRegister()
{
	return UAICamera::StaticClass();
}
struct Z_Construct_UClass_UAICamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AICamera.h" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICamera_GetAspectRatio, "GetAspectRatio" }, // 3756189538
		{ &Z_Construct_UFunction_UAICamera_GetCameraFOV, "GetCameraFOV" }, // 4227777065
		{ &Z_Construct_UFunction_UAICamera_GetCameraName, "GetCameraName" }, // 1881886031
		{ &Z_Construct_UFunction_UAICamera_GetClipPlaneFar, "GetClipPlaneFar" }, // 2595511268
		{ &Z_Construct_UFunction_UAICamera_GetClipPlaneNear, "GetClipPlaneNear" }, // 1072418053
		{ &Z_Construct_UFunction_UAICamera_GetLookAtVector, "GetLookAtVector" }, // 2779693971
		{ &Z_Construct_UFunction_UAICamera_GetPosition, "GetPosition" }, // 2746010021
		{ &Z_Construct_UFunction_UAICamera_GetUpVector, "GetUpVector" }, // 2649835300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAICamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAICamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAICamera_Statics::ClassParams = {
	&UAICamera::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAICamera_Statics::Class_MetaDataParams), Z_Construct_UClass_UAICamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAICamera()
{
	if (!Z_Registration_Info_UClass_UAICamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAICamera.OuterSingleton, Z_Construct_UClass_UAICamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAICamera.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAICamera>()
{
	return UAICamera::StaticClass();
}
UAICamera::UAICamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAICamera);
UAICamera::~UAICamera() {}
// End Class UAICamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAICamera, UAICamera::StaticClass, TEXT("UAICamera"), &Z_Registration_Info_UClass_UAICamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAICamera), 2691127785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_2509842195(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
