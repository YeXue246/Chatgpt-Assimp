// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBone() {}

// Begin Cross Module References
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIBone();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIVertexWeight();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin ScriptStruct FAIBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIBone;
class UScriptStruct* FAIBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIBone, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("AIBone"));
	}
	return Z_Registration_Info_UScriptStruct_AIBone.OuterSingleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FAIBone>()
{
	return FAIBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	&NewStructOps,
	"AIBone",
	nullptr,
	0,
	sizeof(FAIBone),
	alignof(FAIBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIBone()
{
	if (!Z_Registration_Info_UScriptStruct_AIBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIBone.InnerSingleton, Z_Construct_UScriptStruct_FAIBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIBone.InnerSingleton;
}
// End ScriptStruct FAIBone

// Begin ScriptStruct FAIVertexWeight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIVertexWeight;
class UScriptStruct* FAIVertexWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIVertexWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIVertexWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIVertexWeight, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("AIVertexWeight"));
	}
	return Z_Registration_Info_UScriptStruct_AIVertexWeight.OuterSingleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FAIVertexWeight>()
{
	return FAIVertexWeight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIVertexWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[] = {
		{ "Category", "AIVertexWeight" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "AIVertexWeight" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIVertexWeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIVertexWeight, VertexID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexID_MetaData), NewProp_VertexID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIVertexWeight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	&NewStructOps,
	"AIVertexWeight",
	Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers),
	sizeof(FAIVertexWeight),
	alignof(FAIVertexWeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIVertexWeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIVertexWeight()
{
	if (!Z_Registration_Info_UScriptStruct_AIVertexWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIVertexWeight.InnerSingleton, Z_Construct_UScriptStruct_FAIVertexWeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIVertexWeight.InnerSingleton;
}
// End ScriptStruct FAIVertexWeight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIBone::StaticStruct, Z_Construct_UScriptStruct_FAIBone_Statics::NewStructOps, TEXT("AIBone"), &Z_Registration_Info_UScriptStruct_AIBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIBone), 2581394147U) },
		{ FAIVertexWeight::StaticStruct, Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewStructOps, TEXT("AIVertexWeight"), &Z_Registration_Info_UScriptStruct_AIVertexWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIVertexWeight), 1642256888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIBone_h_4066701119(TEXT("/Script/UE_Assimp"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
