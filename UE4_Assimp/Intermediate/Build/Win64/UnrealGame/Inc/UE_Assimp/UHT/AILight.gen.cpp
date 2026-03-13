// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AILight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAILight() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight_NoRegister();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpLightType();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Enum EAssimpLightType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssimpLightType;
static UEnum* EAssimpLightType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssimpLightType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssimpLightType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAssimpLightType, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAssimpLightType"));
	}
	return Z_Registration_Info_UEnum_EAssimpLightType.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpLightType>()
{
	return EAssimpLightType_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambient.Comment", "//! The generic light level of the world, including the bounces\n//! of all other light sources.\n//! Typically, there's at most one ambient light in a scene.\n//! This light type doesn't have a valid position, direction, or\n//! other properties, just a color.\n" },
		{ "Ambient.Name", "Ambient" },
		{ "Ambient.ToolTip", "! The generic light level of the world, including the bounces\n! of all other light sources.\n! Typically, there's at most one ambient light in a scene.\n! This light type doesn't have a valid position, direction, or\n! other properties, just a color." },
		{ "Area.Comment", "//! An area light is a rectangle with predefined size that uniformly\n//! emits light from one of its sides. The position is center of the\n//! rectangle and direction is its normal vector.\n" },
		{ "Area.Name", "Area" },
		{ "Area.ToolTip", "! An area light is a rectangle with predefined size that uniformly\n! emits light from one of its sides. The position is center of the\n! rectangle and direction is its normal vector." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Directional.Comment", "/**\n * \n *///! A directional light source has a well-defined direction\n//! but is infinitely far away. That's quite a good\n//! approximation for sun light.\n" },
		{ "Directional.Name", "Directional" },
		{ "Directional.ToolTip", "//! A directional light source has a well-defined direction\n//! but is infinitely far away. That's quite a good\n//! approximation for sun light." },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "PointLight.Comment", "//! A point light source has a well-defined position\n//! in space but no direction - it emits light in all\n//! directions. A normal bulb is a point light.\n" },
		{ "PointLight.Name", "PointLight" },
		{ "PointLight.ToolTip", "! A point light source has a well-defined position\n! in space but no direction - it emits light in all\n! directions. A normal bulb is a point light." },
		{ "Spot.Comment", "//! A spot light source emits light in a specific\n//! angle. It has a position and a direction it is pointing to.\n//! A good example for a spot light is a light spot in\n//! sport arenas.\n" },
		{ "Spot.Name", "Spot" },
		{ "Spot.ToolTip", "! A spot light source emits light in a specific\n! angle. It has a position and a direction it is pointing to.\n! A good example for a spot light is a light spot in\n! sport arenas." },
		{ "UNDEFINED.Comment", "/**\n * \n */" },
		{ "UNDEFINED.Name", "UNDEFINED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UNDEFINED", (int64)UNDEFINED },
		{ "Directional", (int64)Directional },
		{ "PointLight", (int64)PointLight },
		{ "Spot", (int64)Spot },
		{ "Ambient", (int64)Ambient },
		{ "Area", (int64)Area },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAssimpLightType",
	"EAssimpLightType",
	Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpLightType()
{
	if (!Z_Registration_Info_UEnum_EAssimpLightType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssimpLightType.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssimpLightType.InnerSingleton;
}
// End Enum EAssimpLightType

// Begin Class UAILight Function GetAreaLightSize
struct Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics
{
	struct AILight_eventGetAreaLightSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of area light source.(if its one) */" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of area light source.(if its one)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetAreaLightSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAreaLightSize", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::AILight_eventGetAreaLightSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::AILight_eventGetAreaLightSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetAreaLightSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetAreaLightSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetAreaLightSize();
	P_NATIVE_END;
}
// End Class UAILight Function GetAreaLightSize

// Begin Class UAILight Function GetAttenuationConstant
struct Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics
{
	struct AILight_eventGetAttenuationConstant_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Constant light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att0 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constant light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att0 variable in the equation.\nNaturally undefined for directional lights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetAttenuationConstant_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationConstant", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::AILight_eventGetAttenuationConstant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::AILight_eventGetAttenuationConstant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetAttenuationConstant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetAttenuationConstant)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationConstant();
	P_NATIVE_END;
}
// End Class UAILight Function GetAttenuationConstant

// Begin Class UAILight Function GetAttenuationLinear
struct Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics
{
	struct AILight_eventGetAttenuationLinear_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Linear light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att1 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Linear light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att1 variable in the equation.\nNaturally undefined for directional lights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetAttenuationLinear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationLinear", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::AILight_eventGetAttenuationLinear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::AILight_eventGetAttenuationLinear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetAttenuationLinear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetAttenuationLinear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationLinear();
	P_NATIVE_END;
}
// End Class UAILight Function GetAttenuationLinear

// Begin Class UAILight Function GetAttenuationQuadratic
struct Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics
{
	struct AILight_eventGetAttenuationQuadratic_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Quadratic light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att2 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quadratic light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att2 variable in the equation.\nNaturally undefined for directional lights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetAttenuationQuadratic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationQuadratic", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::AILight_eventGetAttenuationQuadratic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::AILight_eventGetAttenuationQuadratic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetAttenuationQuadratic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetAttenuationQuadratic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationQuadratic();
	P_NATIVE_END;
}
// End Class UAILight Function GetAttenuationQuadratic

// Begin Class UAILight Function GetColorAmbient
struct Z_Construct_UFunction_UAILight_GetColorAmbient_Statics
{
	struct AILight_eventGetColorAmbient_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ambient color of the light source\n\x09*\n\x09*  The ambient light color is multiplied with the ambient\n\x09*  material color to obtain the final color that contributes\n\x09*  to the ambient shading term. Most renderers will ignore\n\x09*  this value it, is just a remaining of the fixed-function pipeline\n\x09*  that is still supported by quite many file formats.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ambient color of the light source\n\nThe ambient light color is multiplied with the ambient\nmaterial color to obtain the final color that contributes\nto the ambient shading term. Most renderers will ignore\nthis value it, is just a remaining of the fixed-function pipeline\nthat is still supported by quite many file formats." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetColorAmbient_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorAmbient", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::AILight_eventGetColorAmbient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::AILight_eventGetColorAmbient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetColorAmbient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetColorAmbient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetColorAmbient();
	P_NATIVE_END;
}
// End Class UAILight Function GetColorAmbient

// Begin Class UAILight Function GetColorDiffuse
struct Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics
{
	struct AILight_eventGetColorDiffuse_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Diffuse color of the light source\n\x09*\n\x09*  The diffuse light color is multiplied with the diffuse\n\x09*  material color to obtain the final color that contributes\n\x09*  to the diffuse shading term.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Diffuse color of the light source\n\nThe diffuse light color is multiplied with the diffuse\nmaterial color to obtain the final color that contributes\nto the diffuse shading term." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetColorDiffuse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorDiffuse", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::AILight_eventGetColorDiffuse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::AILight_eventGetColorDiffuse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetColorDiffuse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetColorDiffuse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetColorDiffuse();
	P_NATIVE_END;
}
// End Class UAILight Function GetColorDiffuse

// Begin Class UAILight Function GetColorSpecular
struct Z_Construct_UFunction_UAILight_GetColorSpecular_Statics
{
	struct AILight_eventGetColorSpecular_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specular color of the light source\n\x09*\n\x09*  The specular light color is multiplied with the specular\n\x09*  material color to obtain the final color that contributes\n\x09*  to the specular shading term.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specular color of the light source\n\nThe specular light color is multiplied with the specular\nmaterial color to obtain the final color that contributes\nto the specular shading term." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetColorSpecular_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorSpecular", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::AILight_eventGetColorSpecular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::AILight_eventGetColorSpecular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetColorSpecular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetColorSpecular)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSpecular();
	P_NATIVE_END;
}
// End Class UAILight Function GetColorSpecular

// Begin Class UAILight Function GetConeInnerAngle
struct Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics
{
	struct AILight_eventGetConeInnerAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inner angle of a spot light's light cone.\n\x09*\n\x09*  The spot light has maximum influence on objects inside this\n\x09*  angle. The angle is given in radians. It is 2PI for point\n\x09*  lights and undefined for directional lights.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inner angle of a spot light's light cone.\n\nThe spot light has maximum influence on objects inside this\nangle. The angle is given in radians. It is 2PI for point\nlights and undefined for directional lights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetConeInnerAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetConeInnerAngle", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::AILight_eventGetConeInnerAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::AILight_eventGetConeInnerAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetConeInnerAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetConeInnerAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetConeInnerAngle();
	P_NATIVE_END;
}
// End Class UAILight Function GetConeInnerAngle

// Begin Class UAILight Function GetConeOuterAngle
struct Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics
{
	struct AILight_eventGetConeOuterAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Outer angle of a spot light's light cone.\n\x09*\n\x09*  The spot light does not affect objects outside this angle.\n\x09*  The angle is given in radians. It is 2PI for point lights and\n\x09*  undefined for directional lights. The outer angle must be\n\x09*  greater than or equal to the inner angle.\n\x09*  It is assumed that the application uses a smooth\n\x09*  interpolation between the inner and the outer cone of the\n\x09*  spot light.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outer angle of a spot light's light cone.\n\nThe spot light does not affect objects outside this angle.\nThe angle is given in radians. It is 2PI for point lights and\nundefined for directional lights. The outer angle must be\ngreater than or equal to the inner angle.\nIt is assumed that the application uses a smooth\ninterpolation between the inner and the outer cone of the\nspot light." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetConeOuterAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetConeOuterAngle", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::AILight_eventGetConeOuterAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::AILight_eventGetConeOuterAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetConeOuterAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetConeOuterAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetConeOuterAngle();
	P_NATIVE_END;
}
// End Class UAILight Function GetConeOuterAngle

// Begin Class UAILight Function GetLightDirection
struct Z_Construct_UFunction_UAILight_GetLightDirection_Statics
{
	struct AILight_eventGetLightDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The direction is undefined for point lights. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe direction is undefined for point lights. The vector\nmay be normalized, but it needn't." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetLightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetLightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightDirection", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::AILight_eventGetLightDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetLightDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::AILight_eventGetLightDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetLightDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetLightDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetLightDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLightDirection();
	P_NATIVE_END;
}
// End Class UAILight Function GetLightDirection

// Begin Class UAILight Function GetLightName
struct Z_Construct_UFunction_UAILight_GetLightName_Statics
{
	struct AILight_eventGetLightName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the light source.\n\x09*\n\x09*  There must be a node in the scenegraph with the same name.\n\x09*  This node specifies the position of the light in the scene\n\x09*  hierarchy and can be animated.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the light source.\n\nThere must be a node in the scenegraph with the same name.\nThis node specifies the position of the light in the scene\nhierarchy and can be animated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAILight_GetLightName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetLightName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightName", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetLightName_Statics::AILight_eventGetLightName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetLightName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetLightName_Statics::AILight_eventGetLightName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetLightName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetLightName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetLightName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLightName();
	P_NATIVE_END;
}
// End Class UAILight Function GetLightName

// Begin Class UAILight Function GetLightPosition
struct Z_Construct_UFunction_UAILight_GetLightPosition_Statics
{
	struct AILight_eventGetLightPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Position of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The position is undefined for directional lights.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe position is undefined for directional lights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetLightPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetLightPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightPosition", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::AILight_eventGetLightPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetLightPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::AILight_eventGetLightPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetLightPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetLightPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetLightPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLightPosition();
	P_NATIVE_END;
}
// End Class UAILight Function GetLightPosition

// Begin Class UAILight Function GetLightType
struct Z_Construct_UFunction_UAILight_GetLightType_Statics
{
	struct AILight_eventGetLightType_Parms
	{
		TEnumAsByte<EAssimpLightType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of the light source.\n\x09*\n\x09* aiLightSource_UNDEFINED is not a valid value for this member.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of the light source.\n\naiLightSource_UNDEFINED is not a valid value for this member." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAILight_GetLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetLightType_Parms, ReturnValue), Z_Construct_UEnum_UE_Assimp_EAssimpLightType, METADATA_PARAMS(0, nullptr) }; // 1334787982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightType", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetLightType_Statics::AILight_eventGetLightType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetLightType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetLightType_Statics::AILight_eventGetLightType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetLightType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetLightType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetLightType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EAssimpLightType>*)Z_Param__Result=P_THIS->GetLightType();
	P_NATIVE_END;
}
// End Class UAILight Function GetLightType

// Begin Class UAILight Function GetUpDirection
struct Z_Construct_UFunction_UAILight_GetUpDirection_Statics
{
	struct AILight_eventGetUpDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Up direction of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The direction is undefined for point lights. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AILight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Up direction of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe direction is undefined for point lights. The vector\nmay be normalized, but it needn't." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetUpDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AILight_eventGetUpDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetUpDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetUpDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetUpDirection", nullptr, nullptr, Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::AILight_eventGetUpDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAILight_GetUpDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::AILight_eventGetUpDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAILight_GetUpDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAILight_GetUpDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAILight::execGetUpDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetUpDirection();
	P_NATIVE_END;
}
// End Class UAILight Function GetUpDirection

// Begin Class UAILight
void UAILight::StaticRegisterNativesUAILight()
{
	UClass* Class = UAILight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAreaLightSize", &UAILight::execGetAreaLightSize },
		{ "GetAttenuationConstant", &UAILight::execGetAttenuationConstant },
		{ "GetAttenuationLinear", &UAILight::execGetAttenuationLinear },
		{ "GetAttenuationQuadratic", &UAILight::execGetAttenuationQuadratic },
		{ "GetColorAmbient", &UAILight::execGetColorAmbient },
		{ "GetColorDiffuse", &UAILight::execGetColorDiffuse },
		{ "GetColorSpecular", &UAILight::execGetColorSpecular },
		{ "GetConeInnerAngle", &UAILight::execGetConeInnerAngle },
		{ "GetConeOuterAngle", &UAILight::execGetConeOuterAngle },
		{ "GetLightDirection", &UAILight::execGetLightDirection },
		{ "GetLightName", &UAILight::execGetLightName },
		{ "GetLightPosition", &UAILight::execGetLightPosition },
		{ "GetLightType", &UAILight::execGetLightType },
		{ "GetUpDirection", &UAILight::execGetUpDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAILight);
UClass* Z_Construct_UClass_UAILight_NoRegister()
{
	return UAILight::StaticClass();
}
struct Z_Construct_UClass_UAILight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AILight.h" },
		{ "ModuleRelativePath", "Public/AILight.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAILight_GetAreaLightSize, "GetAreaLightSize" }, // 3201988737
		{ &Z_Construct_UFunction_UAILight_GetAttenuationConstant, "GetAttenuationConstant" }, // 1248553892
		{ &Z_Construct_UFunction_UAILight_GetAttenuationLinear, "GetAttenuationLinear" }, // 1448076990
		{ &Z_Construct_UFunction_UAILight_GetAttenuationQuadratic, "GetAttenuationQuadratic" }, // 3019241467
		{ &Z_Construct_UFunction_UAILight_GetColorAmbient, "GetColorAmbient" }, // 292258436
		{ &Z_Construct_UFunction_UAILight_GetColorDiffuse, "GetColorDiffuse" }, // 2483337406
		{ &Z_Construct_UFunction_UAILight_GetColorSpecular, "GetColorSpecular" }, // 2190153047
		{ &Z_Construct_UFunction_UAILight_GetConeInnerAngle, "GetConeInnerAngle" }, // 1859299138
		{ &Z_Construct_UFunction_UAILight_GetConeOuterAngle, "GetConeOuterAngle" }, // 1064074210
		{ &Z_Construct_UFunction_UAILight_GetLightDirection, "GetLightDirection" }, // 1767897511
		{ &Z_Construct_UFunction_UAILight_GetLightName, "GetLightName" }, // 174438970
		{ &Z_Construct_UFunction_UAILight_GetLightPosition, "GetLightPosition" }, // 3050814062
		{ &Z_Construct_UFunction_UAILight_GetLightType, "GetLightType" }, // 3682357394
		{ &Z_Construct_UFunction_UAILight_GetUpDirection, "GetUpDirection" }, // 2632283506
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAILight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAILight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAILight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAILight_Statics::ClassParams = {
	&UAILight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAILight_Statics::Class_MetaDataParams), Z_Construct_UClass_UAILight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAILight()
{
	if (!Z_Registration_Info_UClass_UAILight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAILight.OuterSingleton, Z_Construct_UClass_UAILight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAILight.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAILight>()
{
	return UAILight::StaticClass();
}
UAILight::UAILight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAILight);
UAILight::~UAILight() {}
// End Class UAILight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssimpLightType_StaticEnum, TEXT("EAssimpLightType"), &Z_Registration_Info_UEnum_EAssimpLightType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1334787982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAILight, UAILight::StaticClass, TEXT("UAILight"), &Z_Registration_Info_UClass_UAILight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAILight), 2381943771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_840198786(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
