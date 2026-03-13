// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/UE_Assimp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Assimp() {}

// Begin Cross Module References
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_ETaskResult();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Enum ETaskResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskResult;
static UEnum* ETaskResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_ETaskResult, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("ETaskResult"));
	}
	return Z_Registration_Info_UEnum_ETaskResult.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<ETaskResult>()
{
	return ETaskResult_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fail.Name", "ETaskResult::Fail" },
		{ "ModuleRelativePath", "Public/UE_Assimp.h" },
		{ "Success.Name", "ETaskResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskResult::Success", (int64)ETaskResult::Success },
		{ "ETaskResult::Fail", (int64)ETaskResult::Fail },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"ETaskResult",
	"ETaskResult",
	Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_ETaskResult()
{
	if (!Z_Registration_Info_UEnum_ETaskResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskResult.InnerSingleton, Z_Construct_UEnum_UE_Assimp_ETaskResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskResult.InnerSingleton;
}
// End Enum ETaskResult

// Begin Enum EAssimpReturn
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssimpReturn;
static UEnum* EAssimpReturn_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssimpReturn.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssimpReturn.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAssimpReturn, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAssimpReturn"));
	}
	return Z_Registration_Info_UEnum_EAssimpReturn.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpReturn>()
{
	return EAssimpReturn_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Standard return type for some library functions.\n* Rarely used, and if, mostly in the C API.\n*/" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UE_Assimp.h" },
		{ "ReturnFail.Comment", "/** Indicates that a function failed */" },
		{ "ReturnFail.Name", "ReturnFail" },
		{ "ReturnFail.ToolTip", "Indicates that a function failed" },
		{ "ReturnOutOfMemory.Comment", "/** Indicates that not enough memory was available\n    * to perform the requested operation\n    */" },
		{ "ReturnOutOfMemory.Name", "ReturnOutOfMemory" },
		{ "ReturnOutOfMemory.ToolTip", "Indicates that not enough memory was available\nto perform the requested operation" },
		{ "ReturnSuccess.Comment", "/** Indicates that a function was successful */" },
		{ "ReturnSuccess.Name", "ReturnSuccess" },
		{ "ReturnSuccess.ToolTip", "Indicates that a function was successful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard return type for some library functions.\nRarely used, and if, mostly in the C API." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ReturnSuccess", (int64)ReturnSuccess },
		{ "ReturnFail", (int64)ReturnFail },
		{ "ReturnOutOfMemory", (int64)ReturnOutOfMemory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAssimpReturn",
	"EAssimpReturn",
	Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn()
{
	if (!Z_Registration_Info_UEnum_EAssimpReturn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssimpReturn.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssimpReturn.InnerSingleton;
}
// End Enum EAssimpReturn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_UE_Assimp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETaskResult_StaticEnum, TEXT("ETaskResult"), &Z_Registration_Info_UEnum_ETaskResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3915881426U) },
		{ EAssimpReturn_StaticEnum, TEXT("EAssimpReturn"), &Z_Registration_Info_UEnum_EAssimpReturn, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4215742789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_UE_Assimp_h_2303131198(TEXT("/Script/UE_Assimp"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_UE_Assimp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_UE_Assimp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
