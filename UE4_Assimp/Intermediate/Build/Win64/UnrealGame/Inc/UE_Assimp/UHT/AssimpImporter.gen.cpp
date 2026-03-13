// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/Actions/AssimpImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssimpImporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpImporter();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpImporter_NoRegister();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpImportResult();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Enum EAssimpImportResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssimpImportResult;
static UEnum* EAssimpImportResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssimpImportResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssimpImportResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAssimpImportResult, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAssimpImportResult"));
	}
	return Z_Registration_Info_UEnum_EAssimpImportResult.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpImportResult>()
{
	return EAssimpImportResult_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EAssimpImportResult::Cancelled" },
		{ "Complete.Name", "EAssimpImportResult::Complete" },
		{ "InvalidAIScene.Name", "EAssimpImportResult::InvalidAIScene" },
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
		{ "Success.Name", "EAssimpImportResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAssimpImportResult::Success", (int64)EAssimpImportResult::Success },
		{ "EAssimpImportResult::Cancelled", (int64)EAssimpImportResult::Cancelled },
		{ "EAssimpImportResult::Complete", (int64)EAssimpImportResult::Complete },
		{ "EAssimpImportResult::InvalidAIScene", (int64)EAssimpImportResult::InvalidAIScene },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"EAssimpImportResult",
	"EAssimpImportResult",
	Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpImportResult()
{
	if (!Z_Registration_Info_UEnum_EAssimpImportResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssimpImportResult.InnerSingleton, Z_Construct_UEnum_UE_Assimp_EAssimpImportResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssimpImportResult.InnerSingleton;
}
// End Enum EAssimpImportResult

// Begin Delegate FOnAssimpImportProgress
struct Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnAssimpImportProgress_Parms
	{
		EAssimpImportResult Result;
		UAIScene* AISceneImported;
		float ProgressRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate to track import progress */" },
#endif
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate to track import progress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISceneImported_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISceneImported;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnAssimpImportProgress_Parms, Result), Z_Construct_UEnum_UE_Assimp_EAssimpImportResult, METADATA_PARAMS(0, nullptr) }; // 2564312747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_AISceneImported = { "AISceneImported", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnAssimpImportProgress_Parms, AISceneImported), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISceneImported_MetaData), NewProp_AISceneImported_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_ProgressRatio = { "ProgressRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnAssimpImportProgress_Parms, ProgressRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_AISceneImported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::NewProp_ProgressRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnAssimpImportProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::_Script_UE_Assimp_eventOnAssimpImportProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::_Script_UE_Assimp_eventOnAssimpImportProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssimpImportProgress_DelegateWrapper(const FScriptDelegate& OnAssimpImportProgress, EAssimpImportResult Result, UAIScene* AISceneImported, float ProgressRatio)
{
	struct _Script_UE_Assimp_eventOnAssimpImportProgress_Parms
	{
		EAssimpImportResult Result;
		UAIScene* AISceneImported;
		float ProgressRatio;
	};
	_Script_UE_Assimp_eventOnAssimpImportProgress_Parms Parms;
	Parms.Result=Result;
	Parms.AISceneImported=AISceneImported;
	Parms.ProgressRatio=ProgressRatio;
	OnAssimpImportProgress.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAssimpImportProgress

// Begin Delegate FOnAssimpImportComplete
struct Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnAssimpImportComplete_Parms
	{
		EAssimpImportResult Result;
		UAssimpImporter* Importer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast after the import is complete */" },
#endif
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast after the import is complete" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Importer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnAssimpImportComplete_Parms, Result), Z_Construct_UEnum_UE_Assimp_EAssimpImportResult, METADATA_PARAMS(0, nullptr) }; // 2564312747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Importer = { "Importer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnAssimpImportComplete_Parms, Importer), Z_Construct_UClass_UAssimpImporter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::NewProp_Importer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnAssimpImportComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::_Script_UE_Assimp_eventOnAssimpImportComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::_Script_UE_Assimp_eventOnAssimpImportComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssimpImportComplete_DelegateWrapper(const FScriptDelegate& OnAssimpImportComplete, EAssimpImportResult Result, UAssimpImporter* Importer)
{
	struct _Script_UE_Assimp_eventOnAssimpImportComplete_Parms
	{
		EAssimpImportResult Result;
		UAssimpImporter* Importer;
	};
	_Script_UE_Assimp_eventOnAssimpImportComplete_Parms Parms;
	Parms.Result=Result;
	Parms.Importer=Importer;
	OnAssimpImportComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAssimpImportComplete

// Begin Class UAssimpImporter Function AssimpImportFiles
struct Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics
{
	struct AssimpImporter_eventAssimpImportFiles_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> InFileNames;
		int32 Flags;
		bool bDisableAutoSpaceChange;
		FScriptDelegate OnProgress;
		FScriptDelegate OnComplete;
		UAssimpImporter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Import Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Importing the files\n\x09 * @param WorldContextObject\n\x09 * @param InFileNames The files to import\n\x09 * @param Flags The flags to use. You can use post process nodes and use | (bitwise Or node) between them to create any combination of flags. Also We recommend using preset flags. Flip UV flag is needed for correct unreal engine meshes\n\x09 * @param bDisableAutoSpaceChange\n\x09 * @param OnProgress\n\x09 * @param OnComplete\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Importing the files\n@param WorldContextObject\n@param InFileNames The files to import\n@param Flags The flags to use. You can use post process nodes and use | (bitwise Or node) between them to create any combination of flags. Also We recommend using preset flags. Flip UV flag is needed for correct unreal engine meshes\n@param bDisableAutoSpaceChange\n@param OnProgress\n@param OnComplete" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFileNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoSpaceChange_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Assimp Importer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFileNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_bDisableAutoSpaceChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoSpaceChange;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_InFileNames_Inner = { "InFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_InFileNames = { "InFileNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, InFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFileNames_MetaData), NewProp_InFileNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
void Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_bDisableAutoSpaceChange_SetBit(void* Obj)
{
	((AssimpImporter_eventAssimpImportFiles_Parms*)Obj)->bDisableAutoSpaceChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_bDisableAutoSpaceChange = { "bDisableAutoSpaceChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssimpImporter_eventAssimpImportFiles_Parms), &Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_bDisableAutoSpaceChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableAutoSpaceChange_MetaData), NewProp_bDisableAutoSpaceChange_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, OnProgress), Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 3049054736
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, OnComplete), Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3098617535
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpImporter_eventAssimpImportFiles_Parms, ReturnValue), Z_Construct_UClass_UAssimpImporter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_InFileNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_InFileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_bDisableAutoSpaceChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpImporter, nullptr, "AssimpImportFiles", nullptr, nullptr, Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::AssimpImporter_eventAssimpImportFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::AssimpImporter_eventAssimpImportFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpImporter::execAssimpImportFiles)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFileNames);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_bDisableAutoSpaceChange);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAssimpImporter**)Z_Param__Result=UAssimpImporter::AssimpImportFiles(Z_Param_WorldContextObject,Z_Param_Out_InFileNames,Z_Param_Flags,Z_Param_bDisableAutoSpaceChange,FOnAssimpImportProgress(Z_Param_Out_OnProgress),FOnAssimpImportComplete(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// End Class UAssimpImporter Function AssimpImportFiles

// Begin Class UAssimpImporter Function CancelImport
struct Z_Construct_UFunction_UAssimpImporter_CancelImport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Import Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Canceling the current import\n\x09 * It won't end right away\n\x09 * @link Assimp::ProgressHandler::Update\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Canceling the current import\nIt won't end right away\n@link Assimp::ProgressHandler::Update" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpImporter_CancelImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpImporter, nullptr, "CancelImport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpImporter_CancelImport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpImporter_CancelImport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAssimpImporter_CancelImport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpImporter_CancelImport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpImporter::execCancelImport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelImport();
	P_NATIVE_END;
}
// End Class UAssimpImporter Function CancelImport

// Begin Class UAssimpImporter
void UAssimpImporter::StaticRegisterNativesUAssimpImporter()
{
	UClass* Class = UAssimpImporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssimpImportFiles", &UAssimpImporter::execAssimpImportFiles },
		{ "CancelImport", &UAssimpImporter::execCancelImport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssimpImporter);
UClass* Z_Construct_UClass_UAssimpImporter_NoRegister()
{
	return UAssimpImporter::StaticClass();
}
struct Z_Construct_UClass_UAssimpImporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Asset Import Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAssimpImporter\n */" },
#endif
		{ "IncludePath", "Actions/AssimpImporter.h" },
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAssimpImporter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AssimpImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssimpImporter_AssimpImportFiles, "AssimpImportFiles" }, // 2582618361
		{ &Z_Construct_UFunction_UAssimpImporter_CancelImport, "CancelImport" }, // 3660222302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssimpImporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssimpImporter_Statics::NewProp_WorldPtr = { "WorldPtr", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssimpImporter, WorldPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPtr_MetaData), NewProp_WorldPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssimpImporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssimpImporter_Statics::NewProp_WorldPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpImporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssimpImporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpImporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssimpImporter_Statics::ClassParams = {
	&UAssimpImporter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAssimpImporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpImporter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpImporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssimpImporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssimpImporter()
{
	if (!Z_Registration_Info_UClass_UAssimpImporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssimpImporter.OuterSingleton, Z_Construct_UClass_UAssimpImporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssimpImporter.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAssimpImporter>()
{
	return UAssimpImporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssimpImporter);
// End Class UAssimpImporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssimpImportResult_StaticEnum, TEXT("EAssimpImportResult"), &Z_Registration_Info_UEnum_EAssimpImportResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2564312747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssimpImporter, UAssimpImporter::StaticClass, TEXT("UAssimpImporter"), &Z_Registration_Info_UClass_UAssimpImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssimpImporter), 3851336997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_3314698710(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
