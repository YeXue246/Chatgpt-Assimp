// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial_NoRegister();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiShadingMode();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapping();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureOp();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureType();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Enum EAiTextureOp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAiTextureOp;
static UEnum* EAiTextureOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAiTextureOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAiTextureOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureOp, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureOp"));
	}
	return Z_Registration_Info_UEnum_EAiTextureOp.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureOp>()
{
	return EAiTextureOp_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AiTextureOp_Add.Comment", "/** T = T1 + T2 */" },
		{ "AiTextureOp_Add.Name", "AiTextureOp_Add" },
		{ "AiTextureOp_Add.ToolTip", "T = T1 + T2" },
		{ "AiTextureOp_Divide.Comment", "/** T = T1 / T2 */" },
		{ "AiTextureOp_Divide.Name", "AiTextureOp_Divide" },
		{ "AiTextureOp_Divide.ToolTip", "T = T1 / T2" },
		{ "AiTextureOp_Multiply.Comment", "/** T = T1 * T2 */" },
		{ "AiTextureOp_Multiply.Name", "AiTextureOp_Multiply" },
		{ "AiTextureOp_Multiply.ToolTip", "T = T1 * T2" },
		{ "AiTextureOp_SignedAdd.Comment", "/** T = T1 + (T2-0.5) */" },
		{ "AiTextureOp_SignedAdd.Name", "AiTextureOp_SignedAdd" },
		{ "AiTextureOp_SignedAdd.ToolTip", "T = T1 + (T2-0.5)" },
		{ "AiTextureOp_SmoothAdd.Comment", "/** T = (T1 + T2) - (T1 * T2) */" },
		{ "AiTextureOp_SmoothAdd.Name", "AiTextureOp_SmoothAdd" },
		{ "AiTextureOp_SmoothAdd.ToolTip", "T = (T1 + T2) - (T1 * T2)" },
		{ "AiTextureOp_Subtract.Comment", "/** T = T1 - T2 */" },
		{ "AiTextureOp_Subtract.Name", "AiTextureOp_Subtract" },
		{ "AiTextureOp_Subtract.ToolTip", "T = T1 - T2" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Defines how the Nth texture of a specific type is combined with\n*  the result of all previous layers.\n*\n*  Example (left: key, right: value): <br>\n*  @code\n*  DiffColor0     - gray\n*  DiffTextureOp0 - aiTextureOpMultiply\n*  DiffTexture0   - tex1.png\n*  DiffTextureOp0 - aiTextureOpAdd\n*  DiffTexture1   - tex2.png\n*  @endcode\n*  Written as equation, the final diffuse term for a specific pixel would be:\n*  @code\n*  diffFinal = DiffColor0 * sampleTex(DiffTexture0,UV0) +\n*     sampleTex(DiffTexture1,UV0) * diffContrib;\n*  @endcode\n*  where 'diffContrib' is the intensity of the incoming light for that pixel.\n*/" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines how the Nth texture of a specific type is combined with\nthe result of all previous layers.\n\nExample (left: key, right: value): <br>\n@code\nDiffColor0     - gray\nDiffTextureOp0 - aiTextureOpMultiply\nDiffTexture0   - tex1.png\nDiffTextureOp0 - aiTextureOpAdd\nDiffTexture1   - tex2.png\n@endcode\nWritten as equation, the final diffuse term for a specific pixel would be:\n@code\ndiffFinal = DiffColor0 * sampleTex(DiffTexture0,UV0) +\n   sampleTex(DiffTexture1,UV0) * diffContrib;\n@endcode\nwhere 'diffContrib' is the intensity of the incoming light for that pixel." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AiTextureOp_Multiply", (int64)AiTextureOp_Multiply },
		{ "AiTextureOp_Add", (int64)AiTextureOp_Add },
		{ "AiTextureOp_Subtract", (int64)AiTextureOp_Subtract },
		{ "AiTextureOp_Divide", (int64)AiTextureOp_Divide },
		{ "AiTextureOp_SmoothAdd", (int64)AiTextureOp_SmoothAdd },
		{ "AiTextureOp_SignedAdd", (int64)AiTextureOp_SignedAdd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAiTextureOp",
	"EAiTextureOp",
	Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureOp()
{
	if (!Z_Registration_Info_UEnum_EAiTextureOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAiTextureOp.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAiTextureOp.InnerSingleton;
}
// End Enum EAiTextureOp

// Begin Enum EAiTextureMapMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAiTextureMapMode;
static UEnum* EAiTextureMapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAiTextureMapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAiTextureMapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureMapMode"));
	}
	return Z_Registration_Info_UEnum_EAiTextureMapMode.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureMapMode>()
{
	return EAiTextureMapMode_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AiTextureMapMode_Clamp.Comment", "/** Texture coordinates outside [0...1]\n\x09*  are clamped to the nearest valid value.\n\x09*/" },
		{ "AiTextureMapMode_Clamp.Name", "AiTextureMapMode_Clamp" },
		{ "AiTextureMapMode_Clamp.ToolTip", "Texture coordinates outside [0...1]\nare clamped to the nearest valid value." },
		{ "AiTextureMapMode_Decal.Comment", "/** If the texture coordinates for a pixel are outside [0...1]\n\x09*  the texture is not applied to that pixel\n\x09*/" },
		{ "AiTextureMapMode_Decal.Name", "AiTextureMapMode_Decal" },
		{ "AiTextureMapMode_Decal.ToolTip", "If the texture coordinates for a pixel are outside [0...1]\nthe texture is not applied to that pixel" },
		{ "AiTextureMapMode_Mirror.Comment", "/** A texture coordinate u|v becomes u%1|v%1 if (u-(u%1))%2 is zero and\n\x09*  1-(u%1)|1-(v%1) otherwise\n\x09*/" },
		{ "AiTextureMapMode_Mirror.Name", "AiTextureMapMode_Mirror" },
		{ "AiTextureMapMode_Mirror.ToolTip", "A texture coordinate u|v becomes u%1|v%1 if (u-(u%1))%2 is zero and\n1-(u%1)|1-(v%1) otherwise" },
		{ "AiTextureMapMode_Wrap.Comment", "/** A texture coordinate u|v is translated to u%1|v%1\n\x09*/" },
		{ "AiTextureMapMode_Wrap.Name", "AiTextureMapMode_Wrap" },
		{ "AiTextureMapMode_Wrap.ToolTip", "A texture coordinate u|v is translated to u%1|v%1" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Defines how UV coordinates outside the [0...1] range are handled.\n*\n*  Commonly referred to as 'wrapping mode'.\n*/" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines how UV coordinates outside the [0...1] range are handled.\n\nCommonly referred to as 'wrapping mode'." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AiTextureMapMode_Wrap", (int64)AiTextureMapMode_Wrap },
		{ "AiTextureMapMode_Clamp", (int64)AiTextureMapMode_Clamp },
		{ "AiTextureMapMode_Decal", (int64)AiTextureMapMode_Decal },
		{ "AiTextureMapMode_Mirror", (int64)AiTextureMapMode_Mirror },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAiTextureMapMode",
	"EAiTextureMapMode",
	Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode()
{
	if (!Z_Registration_Info_UEnum_EAiTextureMapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAiTextureMapMode.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAiTextureMapMode.InnerSingleton;
}
// End Enum EAiTextureMapMode

// Begin Enum EAiTextureMapping
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAiTextureMapping;
static UEnum* EAiTextureMapping_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAiTextureMapping.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAiTextureMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureMapping, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureMapping"));
	}
	return Z_Registration_Info_UEnum_EAiTextureMapping.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureMapping>()
{
	return EAiTextureMapping_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AiTextureMapping_BOX.Comment", "/** Cubic mapping */" },
		{ "AiTextureMapping_BOX.Name", "AiTextureMapping_BOX" },
		{ "AiTextureMapping_BOX.ToolTip", "Cubic mapping" },
		{ "AiTextureMapping_CYLINDER.Comment", "/** Cylindrical mapping */" },
		{ "AiTextureMapping_CYLINDER.Name", "AiTextureMapping_CYLINDER" },
		{ "AiTextureMapping_CYLINDER.ToolTip", "Cylindrical mapping" },
		{ "AiTextureMapping_OTHER.Comment", "/** Undefined mapping. Have fun. */" },
		{ "AiTextureMapping_OTHER.Name", "AiTextureMapping_OTHER" },
		{ "AiTextureMapping_OTHER.ToolTip", "Undefined mapping. Have fun." },
		{ "AiTextureMapping_PLANE.Comment", "/** Planar mapping */" },
		{ "AiTextureMapping_PLANE.Name", "AiTextureMapping_PLANE" },
		{ "AiTextureMapping_PLANE.ToolTip", "Planar mapping" },
		{ "AiTextureMapping_SPHERE.Comment", "/** Spherical mapping */" },
		{ "AiTextureMapping_SPHERE.Name", "AiTextureMapping_SPHERE" },
		{ "AiTextureMapping_SPHERE.ToolTip", "Spherical mapping" },
		{ "AiTextureMapping_UV.Comment", "/** The mapping coordinates are taken from an UV channel.\n\x09*\n\x09*  #AI_MATKEY_UVWSRC property specifies from which UV channel\n\x09*  the texture coordinates are to be taken from (remember,\n\x09*  meshes can have more than one UV channel).\n\x09*/" },
		{ "AiTextureMapping_UV.Name", "AiTextureMapping_UV" },
		{ "AiTextureMapping_UV.ToolTip", "The mapping coordinates are taken from an UV channel.\n\n#AI_MATKEY_UVWSRC property specifies from which UV channel\nthe texture coordinates are to be taken from (remember,\nmeshes can have more than one UV channel)." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Defines how the mapping coords for a texture are generated.\n*\n*  Real-time applications typically require full UV coordinates, so the use of\n*  the aiProcess_GenUVCoords step is highly recommended. It generates proper\n*  UV channels for non-UV mapped objects, as long as an accurate description\n*  how the mapping should look like (e.g spherical) is given.\n*  See the #AI_MATKEY_MAPPING property for more details.\n*/" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines how the mapping coords for a texture are generated.\n\nReal-time applications typically require full UV coordinates, so the use of\nthe aiProcess_GenUVCoords step is highly recommended. It generates proper\nUV channels for non-UV mapped objects, as long as an accurate description\nhow the mapping should look like (e.g spherical) is given.\nSee the #AI_MATKEY_MAPPING property for more details." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AiTextureMapping_UV", (int64)AiTextureMapping_UV },
		{ "AiTextureMapping_SPHERE", (int64)AiTextureMapping_SPHERE },
		{ "AiTextureMapping_CYLINDER", (int64)AiTextureMapping_CYLINDER },
		{ "AiTextureMapping_BOX", (int64)AiTextureMapping_BOX },
		{ "AiTextureMapping_PLANE", (int64)AiTextureMapping_PLANE },
		{ "AiTextureMapping_OTHER", (int64)AiTextureMapping_OTHER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAiTextureMapping",
	"EAiTextureMapping",
	Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapping()
{
	if (!Z_Registration_Info_UEnum_EAiTextureMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAiTextureMapping.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAiTextureMapping.InnerSingleton;
}
// End Enum EAiTextureMapping

// Begin Enum EAiTextureType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAiTextureType;
static UEnum* EAiTextureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAiTextureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAiTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureType, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureType"));
	}
	return Z_Registration_Info_UEnum_EAiTextureType.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureType>()
{
	return EAiTextureType_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AiTextureType_AMBIENT.Comment", "/** The texture is combined with the result of the ambient\n\x09 *  lighting equation.\n\x09 */" },
		{ "AiTextureType_AMBIENT.Name", "AiTextureType_AMBIENT" },
		{ "AiTextureType_AMBIENT.ToolTip", "The texture is combined with the result of the ambient\nlighting equation." },
		{ "AiTextureType_AMBIENT_OCCLUSION.Name", "AiTextureType_AMBIENT_OCCLUSION" },
		{ "AiTextureType_BASE_COLOR.Comment", "/** PBR Materials\n\x09 * PBR definitions from maya and other modelling packages now use this standard.\n\x09 * This was originally introduced around 2012.\n\x09 * Support for this is in game engines like Godot, Unreal or Unity3D.\n\x09 * Modelling packages which use this are very common now.\n\x09 */" },
		{ "AiTextureType_BASE_COLOR.Name", "AiTextureType_BASE_COLOR" },
		{ "AiTextureType_BASE_COLOR.ToolTip", "PBR Materials\nPBR definitions from maya and other modelling packages now use this standard.\nThis was originally introduced around 2012.\nSupport for this is in game engines like Godot, Unreal or Unity3D.\nModelling packages which use this are very common now." },
		{ "AiTextureType_CLEARCOAT.Comment", "/** Clearcoat\n\x09* Simulates a layer of 'polish' or 'laquer' layered on top of a PBR substrate\n\x09* https://autodesk.github.io/standard-surface/#closures/coating\n\x09* https://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_clearcoat\n\x09*/" },
		{ "AiTextureType_CLEARCOAT.Name", "AiTextureType_CLEARCOAT" },
		{ "AiTextureType_CLEARCOAT.ToolTip", "Clearcoat\nSimulates a layer of 'polish' or 'laquer' layered on top of a PBR substrate\nhttps://autodesk.github.io/standard-surface/#closures/coating\nhttps://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_clearcoat" },
		{ "AiTextureType_DIFFUSE.Comment", "/** The texture is combined with the result of the diffuse\n\x09 *  lighting equation.\n\x09 *  OR\n\x09 *  PBR Specular/Glossiness\n\x09 */" },
		{ "AiTextureType_DIFFUSE.Name", "AiTextureType_DIFFUSE" },
		{ "AiTextureType_DIFFUSE.ToolTip", "The texture is combined with the result of the diffuse\nlighting equation.\nOR\nPBR Specular/Glossiness" },
		{ "AiTextureType_DIFFUSE_ROUGHNESS.Name", "AiTextureType_DIFFUSE_ROUGHNESS" },
		{ "AiTextureType_DISPLACEMENT.Comment", "/** Displacement texture\n\x09 *\n\x09 *  The exact purpose and format is application-dependent.\n\x09 *  Higher color values stand for higher vertex displacements.\n\x09*/" },
		{ "AiTextureType_DISPLACEMENT.Name", "AiTextureType_DISPLACEMENT" },
		{ "AiTextureType_DISPLACEMENT.ToolTip", "Displacement texture\n\nThe exact purpose and format is application-dependent.\nHigher color values stand for higher vertex displacements." },
		{ "AiTextureType_EMISSION_COLOR.Name", "AiTextureType_EMISSION_COLOR" },
		{ "AiTextureType_EMISSIVE.Comment", "/** The texture is added to the result of the lighting\n\x09 *  calculation. It isn't influenced by incoming light.\n\x09 */" },
		{ "AiTextureType_EMISSIVE.Name", "AiTextureType_EMISSIVE" },
		{ "AiTextureType_EMISSIVE.ToolTip", "The texture is added to the result of the lighting\ncalculation. It isn't influenced by incoming light." },
		{ "AiTextureType_HEIGHT.Comment", "/** The texture is a height map.\n\x09 *\n\x09 *  By convention, higher gray-scale values stand for\n\x09 *  higher elevations from the base height.\n\x09 */" },
		{ "AiTextureType_HEIGHT.Name", "AiTextureType_HEIGHT" },
		{ "AiTextureType_HEIGHT.ToolTip", "The texture is a height map.\n\nBy convention, higher gray-scale values stand for\nhigher elevations from the base height." },
		{ "AiTextureType_LIGHTMAP.Comment", "/** Lightmap texture (aka Ambient Occlusion)\n\x09 *\n\x09 *  Both 'Lightmaps' and dedicated 'ambient occlusion maps' are\n\x09 *  covered by this material property. The texture contains a\n\x09 *  scaling value for the final color value of a pixel. Its\n\x09 *  intensity is not affected by incoming light.\n\x09*/" },
		{ "AiTextureType_LIGHTMAP.Name", "AiTextureType_LIGHTMAP" },
		{ "AiTextureType_LIGHTMAP.ToolTip", "Lightmap texture (aka Ambient Occlusion)\n\nBoth 'Lightmaps' and dedicated 'ambient occlusion maps' are\ncovered by this material property. The texture contains a\nscaling value for the final color value of a pixel. Its\nintensity is not affected by incoming light." },
		{ "AiTextureType_METALNESS.Name", "AiTextureType_METALNESS" },
		{ "AiTextureType_NONE.Comment", "/** Dummy value.\n\x09 *\n\x09 *  No texture, but the value to be used as 'texture semantic'\n\x09 *  (#aiMaterialProperty::mSemantic) for all material properties\n\x09 *  *not* related to textures.\n\x09 */" },
		{ "AiTextureType_NONE.Name", "AiTextureType_NONE" },
		{ "AiTextureType_NONE.ToolTip", "Dummy value.\n\nNo texture, but the value to be used as 'texture semantic'\n(#aiMaterialProperty::mSemantic) for all material properties\n*not* related to textures." },
		{ "AiTextureType_NORMAL_CAMERA.Name", "AiTextureType_NORMAL_CAMERA" },
		{ "AiTextureType_NORMALS.Comment", "/** The texture is a (tangent space) normal-map.\n\x09 *\n\x09 *  Again, there are several conventions for tangent-space\n\x09 *  normal maps. Assimp does (intentionally) not\n\x09 *  distinguish here.\n\x09 */" },
		{ "AiTextureType_NORMALS.Name", "AiTextureType_NORMALS" },
		{ "AiTextureType_NORMALS.ToolTip", "The texture is a (tangent space) normal-map.\n\nAgain, there are several conventions for tangent-space\nnormal maps. Assimp does (intentionally) not\ndistinguish here." },
		{ "AiTextureType_OPACITY.Comment", "/** The texture defines per-pixel opacity.\n\x09 *\n\x09 *  Usually 'white' means opaque and 'black' means\n\x09 *  'transparency'. Or quite the opposite. Have fun.\n\x09*/" },
		{ "AiTextureType_OPACITY.Name", "AiTextureType_OPACITY" },
		{ "AiTextureType_OPACITY.ToolTip", "The texture defines per-pixel opacity.\n\nUsually 'white' means opaque and 'black' means\n'transparency'. Or quite the opposite. Have fun." },
		{ "AiTextureType_REFLECTION.Comment", "/** Reflection texture\n\x09 *\n\x09 * Contains the color of a perfect mirror reflection.\n\x09 * Rarely used, almost never for real-time applications.\n\x09*/" },
		{ "AiTextureType_REFLECTION.Name", "AiTextureType_REFLECTION" },
		{ "AiTextureType_REFLECTION.ToolTip", "Reflection texture\n\nContains the color of a perfect mirror reflection.\nRarely used, almost never for real-time applications." },
		{ "AiTextureType_SHEEN.Comment", "/** Sheen\n\x09* Generally used to simulate textiles that are covered in a layer of microfibers\n\x09* eg velvet\n\x09* https://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_sheen\n\x09*/" },
		{ "AiTextureType_SHEEN.Name", "AiTextureType_SHEEN" },
		{ "AiTextureType_SHEEN.ToolTip", "Sheen\nGenerally used to simulate textiles that are covered in a layer of microfibers\neg velvet\nhttps://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_sheen" },
		{ "AiTextureType_SHININESS.Comment", "/** The texture defines the glossiness of the material.\n\x09 *\n\x09 *  The glossiness is in fact the exponent of the specular\n\x09 *  (phong) lighting equation. Usually there is a conversion\n\x09 *  function defined to map the linear color values in the\n\x09 *  texture to a suitable exponent. Have fun.\n\x09*/" },
		{ "AiTextureType_SHININESS.Name", "AiTextureType_SHININESS" },
		{ "AiTextureType_SHININESS.ToolTip", "The texture defines the glossiness of the material.\n\nThe glossiness is in fact the exponent of the specular\n(phong) lighting equation. Usually there is a conversion\nfunction defined to map the linear color values in the\ntexture to a suitable exponent. Have fun." },
		{ "AiTextureType_SPECULAR.Comment", "/** The texture is combined with the result of the specular\n\x09 *  lighting equation.\n\x09 *  OR\n\x09 *  PBR Specular/Glossiness\n\x09 */" },
		{ "AiTextureType_SPECULAR.Name", "AiTextureType_SPECULAR" },
		{ "AiTextureType_SPECULAR.ToolTip", "The texture is combined with the result of the specular\nlighting equation.\nOR\nPBR Specular/Glossiness" },
		{ "AiTextureType_TRANSMISSION.Comment", "/** Transmission\n\x09* Simulates transmission through the surface\n\x09* May include further information such as wall thickness\n\x09*/" },
		{ "AiTextureType_TRANSMISSION.Name", "AiTextureType_TRANSMISSION" },
		{ "AiTextureType_TRANSMISSION.ToolTip", "Transmission\nSimulates transmission through the surface\nMay include further information such as wall thickness" },
		{ "AiTextureType_UNKNOWN.Comment", "/** Unknown texture\n\x09 *\n\x09 *  A texture reference that does not match any of the definitions\n\x09 *  above is considered to be 'unknown'. It is still imported,\n\x09 *  but is excluded from any further post-processing.\n\x09*/" },
		{ "AiTextureType_UNKNOWN.Name", "AiTextureType_UNKNOWN" },
		{ "AiTextureType_UNKNOWN.ToolTip", "Unknown texture\n\nA texture reference that does not match any of the definitions\nabove is considered to be 'unknown'. It is still imported,\nbut is excluded from any further post-processing." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Defines the purpose of a texture\n *\n *  This is a very difficult topic. Different 3D packages support different\n *  kinds of textures. For very common texture types, such as bumpmaps, the\n *  rendering results depend on implementation details in the rendering\n *  pipelines of these applications. Assimp loads all texture references from\n *  the model file and tries to determine which of the predefined texture\n *  types below is the best choice to match the original use of the texture\n *  as closely as possible.<br>\n *\n *  In content pipelines you'll usually define how textures have to be handled,\n *  and the artists working on models have to conform to this specification,\n *  regardless which 3D tool they're using.\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines the purpose of a texture\n\nThis is a very difficult topic. Different 3D packages support different\nkinds of textures. For very common texture types, such as bumpmaps, the\nrendering results depend on implementation details in the rendering\npipelines of these applications. Assimp loads all texture references from\nthe model file and tries to determine which of the predefined texture\ntypes below is the best choice to match the original use of the texture\nas closely as possible.<br>\n\nIn content pipelines you'll usually define how textures have to be handled,\nand the artists working on models have to conform to this specification,\nregardless which 3D tool they're using." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AiTextureType_NONE", (int64)AiTextureType_NONE },
		{ "AiTextureType_DIFFUSE", (int64)AiTextureType_DIFFUSE },
		{ "AiTextureType_SPECULAR", (int64)AiTextureType_SPECULAR },
		{ "AiTextureType_AMBIENT", (int64)AiTextureType_AMBIENT },
		{ "AiTextureType_EMISSIVE", (int64)AiTextureType_EMISSIVE },
		{ "AiTextureType_HEIGHT", (int64)AiTextureType_HEIGHT },
		{ "AiTextureType_NORMALS", (int64)AiTextureType_NORMALS },
		{ "AiTextureType_SHININESS", (int64)AiTextureType_SHININESS },
		{ "AiTextureType_OPACITY", (int64)AiTextureType_OPACITY },
		{ "AiTextureType_DISPLACEMENT", (int64)AiTextureType_DISPLACEMENT },
		{ "AiTextureType_LIGHTMAP", (int64)AiTextureType_LIGHTMAP },
		{ "AiTextureType_REFLECTION", (int64)AiTextureType_REFLECTION },
		{ "AiTextureType_BASE_COLOR", (int64)AiTextureType_BASE_COLOR },
		{ "AiTextureType_NORMAL_CAMERA", (int64)AiTextureType_NORMAL_CAMERA },
		{ "AiTextureType_EMISSION_COLOR", (int64)AiTextureType_EMISSION_COLOR },
		{ "AiTextureType_METALNESS", (int64)AiTextureType_METALNESS },
		{ "AiTextureType_DIFFUSE_ROUGHNESS", (int64)AiTextureType_DIFFUSE_ROUGHNESS },
		{ "AiTextureType_AMBIENT_OCCLUSION", (int64)AiTextureType_AMBIENT_OCCLUSION },
		{ "AiTextureType_SHEEN", (int64)AiTextureType_SHEEN },
		{ "AiTextureType_CLEARCOAT", (int64)AiTextureType_CLEARCOAT },
		{ "AiTextureType_TRANSMISSION", (int64)AiTextureType_TRANSMISSION },
		{ "AiTextureType_UNKNOWN", (int64)AiTextureType_UNKNOWN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAiTextureType",
	"EAiTextureType",
	Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureType()
{
	if (!Z_Registration_Info_UEnum_EAiTextureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAiTextureType.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAiTextureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAiTextureType.InnerSingleton;
}
// End Enum EAiTextureType

// Begin Enum EAiShadingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAiShadingMode;
static UEnum* EAiShadingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAiShadingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAiShadingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiShadingMode, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiShadingMode"));
	}
	return Z_Registration_Info_UEnum_EAiShadingMode.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAiShadingMode>()
{
	return EAiShadingMode_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AiShadingMode_Blinn.Comment", "/** Phong-Blinn-Shading\n\x09 */" },
		{ "AiShadingMode_Blinn.Name", "AiShadingMode_Blinn" },
		{ "AiShadingMode_Blinn.ToolTip", "Phong-Blinn-Shading" },
		{ "AiShadingMode_CookTorrance.Comment", "/** CookTorrance-Shading per pixel\n\x09 *\n\x09 *  Special shader for metallic surfaces.\n\x09 */" },
		{ "AiShadingMode_CookTorrance.Name", "AiShadingMode_CookTorrance" },
		{ "AiShadingMode_CookTorrance.ToolTip", "CookTorrance-Shading per pixel\n\nSpecial shader for metallic surfaces." },
		{ "AiShadingMode_Flat.Comment", "/** Flat shading. Shading is done on per-face base,\n\x09 *  diffuse only. Also known as 'faceted shading'.\n\x09 */" },
		{ "AiShadingMode_Flat.Name", "AiShadingMode_Flat" },
		{ "AiShadingMode_Flat.ToolTip", "Flat shading. Shading is done on per-face base,\ndiffuse only. Also known as 'faceted shading'." },
		{ "AiShadingMode_Fresnel.Comment", "/** Fresnel shading\n\x09 */" },
		{ "AiShadingMode_Fresnel.Name", "AiShadingMode_Fresnel" },
		{ "AiShadingMode_Fresnel.ToolTip", "Fresnel shading" },
		{ "AiShadingMode_Gouraud.Comment", "/** Simple Gouraud shading.\n\x09 */" },
		{ "AiShadingMode_Gouraud.Name", "AiShadingMode_Gouraud" },
		{ "AiShadingMode_Gouraud.ToolTip", "Simple Gouraud shading." },
		{ "AiShadingMode_Minnaert.Comment", "/** Minnaert-Shading per pixel\n\x09 *\n\x09 *  Extension to standard Lambertian shading, taking the\n\x09 *  \"darkness\" of the material into account\n\x09 */" },
		{ "AiShadingMode_Minnaert.Name", "AiShadingMode_Minnaert" },
		{ "AiShadingMode_Minnaert.ToolTip", "Minnaert-Shading per pixel\n\nExtension to standard Lambertian shading, taking the\n\"darkness\" of the material into account" },
		{ "AiShadingMode_NoShading.Comment", "/** No shading at all. Constant light influence of 1.0.\n\x09* Also known as \"Unlit\"\n\x09*/" },
		{ "AiShadingMode_NoShading.Name", "AiShadingMode_NoShading" },
		{ "AiShadingMode_NoShading.ToolTip", "No shading at all. Constant light influence of 1.0.\nAlso known as \"Unlit\"" },
		{ "AiShadingMode_OrenNayar.Comment", "/** OrenNayar-Shading per pixel\n\x09 *\n\x09 *  Extension to standard Lambertian shading, taking the\n\x09 *  roughness of the material into account\n\x09 */" },
		{ "AiShadingMode_OrenNayar.Name", "AiShadingMode_OrenNayar" },
		{ "AiShadingMode_OrenNayar.ToolTip", "OrenNayar-Shading per pixel\n\nExtension to standard Lambertian shading, taking the\nroughness of the material into account" },
		{ "AiShadingMode_PBR_BRDF.Comment", "/** Physically-Based Rendering (PBR) shading using\n\x09* Bidirectional scattering/reflectance distribution function (BSDF/BRDF)\n\x09* There are multiple methods under this banner, and model files may provide\n\x09* data for more than one PBR-BRDF method.\n\x09* Applications should use the set of provided properties to determine which\n\x09* of their preferred PBR rendering methods are likely to be available\n\x09* eg:\n\x09* - If AI_MATKEY_METALLIC_FACTOR is set, then a Metallic/Roughness is available\n\x09* - If AI_MATKEY_GLOSSINESS_FACTOR is set, then a Specular/Glossiness is available\n\x09* Note that some PBR methods allow layering of techniques\n\x09*/" },
		{ "AiShadingMode_PBR_BRDF.Name", "AiShadingMode_PBR_BRDF" },
		{ "AiShadingMode_PBR_BRDF.ToolTip", "Physically-Based Rendering (PBR) shading using\nBidirectional scattering/reflectance distribution function (BSDF/BRDF)\nThere are multiple methods under this banner, and model files may provide\ndata for more than one PBR-BRDF method.\nApplications should use the set of provided properties to determine which\nof their preferred PBR rendering methods are likely to be available\neg:\n- If AI_MATKEY_METALLIC_FACTOR is set, then a Metallic/Roughness is available\n- If AI_MATKEY_GLOSSINESS_FACTOR is set, then a Specular/Glossiness is available\nNote that some PBR methods allow layering of techniques" },
		{ "AiShadingMode_Phong.Comment", "/** Phong-Shading -\n\x09 */" },
		{ "AiShadingMode_Phong.Name", "AiShadingMode_Phong" },
		{ "AiShadingMode_Phong.ToolTip", "Phong-Shading -" },
		{ "AiShadingMode_Toon.Comment", "/** Toon-Shading per pixel\n\x09 *\n\x09 *  Also known as 'comic' shader.\n\x09 */" },
		{ "AiShadingMode_Toon.Name", "AiShadingMode_Toon" },
		{ "AiShadingMode_Toon.ToolTip", "Toon-Shading per pixel\n\nAlso known as 'comic' shader." },
		{ "AiShadingMode_Unlit.Name", "AiShadingMode_Unlit" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Defines all shading models supported by the library\n *\n *  Property: #AI_MATKEY_SHADING_MODEL\n *\n *  The list of shading modes has been taken from Blender.\n *  See Blender documentation for more information. The API does\n *  not distinguish between \"specular\" and \"diffuse\" shaders (thus the\n *  specular term for diffuse shading models like Oren-Nayar remains\n *  undefined). <br>\n *  Again, this value is just a hint. Assimp tries to select the shader whose\n *  most common implementation matches the original rendering results of the\n *  3D modeler which wrote a particular model as closely as possible.\n *\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
		{ "Null.Name", "Null" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines all shading models supported by the library\n\nProperty: #AI_MATKEY_SHADING_MODEL\n\nThe list of shading modes has been taken from Blender.\nSee Blender documentation for more information. The API does\nnot distinguish between \"specular\" and \"diffuse\" shaders (thus the\nspecular term for diffuse shading models like Oren-Nayar remains\nundefined). <br>\nAgain, this value is just a hint. Assimp tries to select the shader whose\nmost common implementation matches the original rendering results of the\n3D modeler which wrote a particular model as closely as possible." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Null", (int64)Null },
		{ "AiShadingMode_Flat", (int64)AiShadingMode_Flat },
		{ "AiShadingMode_Gouraud", (int64)AiShadingMode_Gouraud },
		{ "AiShadingMode_Phong", (int64)AiShadingMode_Phong },
		{ "AiShadingMode_Blinn", (int64)AiShadingMode_Blinn },
		{ "AiShadingMode_Toon", (int64)AiShadingMode_Toon },
		{ "AiShadingMode_OrenNayar", (int64)AiShadingMode_OrenNayar },
		{ "AiShadingMode_Minnaert", (int64)AiShadingMode_Minnaert },
		{ "AiShadingMode_CookTorrance", (int64)AiShadingMode_CookTorrance },
		{ "AiShadingMode_NoShading", (int64)AiShadingMode_NoShading },
		{ "AiShadingMode_Unlit", (int64)AiShadingMode_Unlit },
		{ "AiShadingMode_Fresnel", (int64)AiShadingMode_Fresnel },
		{ "AiShadingMode_PBR_BRDF", (int64)AiShadingMode_PBR_BRDF },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAiShadingMode",
	"EAiShadingMode",
	Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAiShadingMode()
{
	if (!Z_Registration_Info_UEnum_EAiShadingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAiShadingMode.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAiShadingMode.InnerSingleton;
}
// End Enum EAiShadingMode

// Begin Class UAIMaterial Function GetMaterialBaseColor
struct Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics
{
	struct AIMaterial_eventGetMaterialBaseColor_Parms
	{
		FLinearColor BaseColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialBaseColor_Parms, BaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::NewProp_BaseColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialBaseColor", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::AIMaterial_eventGetMaterialBaseColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::AIMaterial_eventGetMaterialBaseColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execGetMaterialBaseColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_BaseColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMaterialBaseColor(Z_Param_Out_BaseColor);
	P_NATIVE_END;
}
// End Class UAIMaterial Function GetMaterialBaseColor

// Begin Class UAIMaterial Function GetMaterialName
struct Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics
{
	struct AIMaterial_eventGetMaterialName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialName", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::AIMaterial_eventGetMaterialName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::AIMaterial_eventGetMaterialName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execGetMaterialName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMaterialName();
	P_NATIVE_END;
}
// End Class UAIMaterial Function GetMaterialName

// Begin Class UAIMaterial Function GetMaterialOpacity
struct Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics
{
	struct AIMaterial_eventGetMaterialOpacity_Parms
	{
		float Opacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialOpacity_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialOpacity", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::AIMaterial_eventGetMaterialOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::AIMaterial_eventGetMaterialOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execGetMaterialOpacity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Opacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMaterialOpacity(Z_Param_Out_Opacity);
	P_NATIVE_END;
}
// End Class UAIMaterial Function GetMaterialOpacity

// Begin Class UAIMaterial Function GetMaterialTexture
struct Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics
{
	struct AIMaterial_eventGetMaterialTexture_Parms
	{
		TEnumAsByte<EAiTextureType> Type;
		FVector2D UVScale;
		uint8 Index;
		FString Path;
		TEnumAsByte<EAiTextureMapping> Mapping;
		TEnumAsByte<EAssimpReturn> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mapping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Type), Z_Construct_UEnum_UE_Assimp_EAiTextureType, METADATA_PARAMS(0, nullptr) }; // 2376152309
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Index), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Mapping), Z_Construct_UEnum_UE_Assimp_EAiTextureMapping, METADATA_PARAMS(0, nullptr) }; // 9227245
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, ReturnValue), Z_Construct_UEnum_UE_Assimp_EAssimpReturn, METADATA_PARAMS(0, nullptr) }; // 4215742789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Mapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialTexture", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::AIMaterial_eventGetMaterialTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::AIMaterial_eventGetMaterialTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execGetMaterialTexture)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Type);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UVScale);
	P_GET_PROPERTY(FByteProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Path);
	P_GET_PROPERTY(FByteProperty,Z_Param_Mapping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EAssimpReturn>*)Z_Param__Result=P_THIS->GetMaterialTexture(EAiTextureType(Z_Param_Type),Z_Param_Out_UVScale,Z_Param_Index,Z_Param_Out_Path,EAiTextureMapping(Z_Param_Mapping));
	P_NATIVE_END;
}
// End Class UAIMaterial Function GetMaterialTexture

// Begin Class UAIMaterial Function GetTexturePath
struct Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics
{
	struct AIMaterial_eventGetTexturePath_Parms
	{
		TEnumAsByte<EAiTextureType> TextureType;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetTexturePath_Parms, TextureType), Z_Construct_UEnum_UE_Assimp_EAiTextureType, METADATA_PARAMS(0, nullptr) }; // 2376152309
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventGetTexturePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::NewProp_TextureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetTexturePath", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::AIMaterial_eventGetTexturePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::AIMaterial_eventGetTexturePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_GetTexturePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetTexturePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execGetTexturePath)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TextureType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTexturePath(EAiTextureType(Z_Param_TextureType));
	P_NATIVE_END;
}
// End Class UAIMaterial Function GetTexturePath

// Begin Class UAIMaterial Function HasTexture
struct Z_Construct_UFunction_UAIMaterial_HasTexture_Statics
{
	struct AIMaterial_eventHasTexture_Parms
	{
		TEnumAsByte<EAiTextureType> TextureType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMaterial_eventHasTexture_Parms, TextureType), Z_Construct_UEnum_UE_Assimp_EAiTextureType, METADATA_PARAMS(0, nullptr) }; // 2376152309
void Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIMaterial_eventHasTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIMaterial_eventHasTexture_Parms), &Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_TextureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "HasTexture", nullptr, nullptr, Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::AIMaterial_eventHasTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::AIMaterial_eventHasTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMaterial_HasTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMaterial_HasTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMaterial::execHasTexture)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TextureType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTexture(EAiTextureType(Z_Param_TextureType));
	P_NATIVE_END;
}
// End Class UAIMaterial Function HasTexture

// Begin Class UAIMaterial
void UAIMaterial::StaticRegisterNativesUAIMaterial()
{
	UClass* Class = UAIMaterial::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterialBaseColor", &UAIMaterial::execGetMaterialBaseColor },
		{ "GetMaterialName", &UAIMaterial::execGetMaterialName },
		{ "GetMaterialOpacity", &UAIMaterial::execGetMaterialOpacity },
		{ "GetMaterialTexture", &UAIMaterial::execGetMaterialTexture },
		{ "GetTexturePath", &UAIMaterial::execGetTexturePath },
		{ "HasTexture", &UAIMaterial::execHasTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIMaterial);
UClass* Z_Construct_UClass_UAIMaterial_NoRegister()
{
	return UAIMaterial::StaticClass();
}
struct Z_Construct_UClass_UAIMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AIMaterial.h" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor, "GetMaterialBaseColor" }, // 1341667891
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialName, "GetMaterialName" }, // 1329615728
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity, "GetMaterialOpacity" }, // 1927983496
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialTexture, "GetMaterialTexture" }, // 1953242943
		{ &Z_Construct_UFunction_UAIMaterial_GetTexturePath, "GetTexturePath" }, // 268243925
		{ &Z_Construct_UFunction_UAIMaterial_HasTexture, "HasTexture" }, // 3763516800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIMaterial_Statics::ClassParams = {
	&UAIMaterial::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIMaterial()
{
	if (!Z_Registration_Info_UClass_UAIMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIMaterial.OuterSingleton, Z_Construct_UClass_UAIMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIMaterial.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAIMaterial>()
{
	return UAIMaterial::StaticClass();
}
UAIMaterial::UAIMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMaterial);
UAIMaterial::~UAIMaterial() {}
// End Class UAIMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAiTextureOp_StaticEnum, TEXT("EAiTextureOp"), &Z_Registration_Info_UEnum_EAiTextureOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 542182314U) },
		{ EAiTextureMapMode_StaticEnum, TEXT("EAiTextureMapMode"), &Z_Registration_Info_UEnum_EAiTextureMapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4041618663U) },
		{ EAiTextureMapping_StaticEnum, TEXT("EAiTextureMapping"), &Z_Registration_Info_UEnum_EAiTextureMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9227245U) },
		{ EAiTextureType_StaticEnum, TEXT("EAiTextureType"), &Z_Registration_Info_UEnum_EAiTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2376152309U) },
		{ EAiShadingMode_StaticEnum, TEXT("EAiShadingMode"), &Z_Registration_Info_UEnum_EAiShadingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1642822531U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIMaterial, UAIMaterial::StaticClass, TEXT("UAIMaterial"), &Z_Registration_Info_UClass_UAIMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIMaterial), 3594735826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_2038098451(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
