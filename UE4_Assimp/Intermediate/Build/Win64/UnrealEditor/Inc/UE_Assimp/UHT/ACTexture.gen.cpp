// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/ACTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UACTexture();
UE_ASSIMP_API UClass* Z_Construct_UClass_UACTexture_NoRegister();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel();
UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_ETextureRequestState();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature();
UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Delegate FOnTextureReady
struct Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnTextureReady_Parms
	{
		FName Param;
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnTextureReady_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnTextureReady_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnTextureReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::_Script_UE_Assimp_eventOnTextureReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::_Script_UE_Assimp_eventOnTextureReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureReady_DelegateWrapper(const FMulticastScriptDelegate& OnTextureReady, FName Param, UTexture2D* Texture)
{
	struct _Script_UE_Assimp_eventOnTextureReady_Parms
	{
		FName Param;
		UTexture2D* Texture;
	};
	_Script_UE_Assimp_eventOnTextureReady_Parms Parms;
	Parms.Param=Param;
	Parms.Texture=Texture;
	OnTextureReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextureReady

// Begin Delegate FOnAllTexturesReady
struct Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnAllTexturesReady__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAllTexturesReady_DelegateWrapper(const FMulticastScriptDelegate& OnAllTexturesReady)
{
	OnAllTexturesReady.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAllTexturesReady

// Begin Enum ETextureMemoryPressureLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureMemoryPressureLevel;
static UEnum* ETextureMemoryPressureLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("ETextureMemoryPressureLevel"));
	}
	return Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<ETextureMemoryPressureLevel>()
{
	return ETextureMemoryPressureLevel_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Critical.Name", "ETextureMemoryPressureLevel::Critical" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
		{ "Normal.Name", "ETextureMemoryPressureLevel::Normal" },
		{ "Warning.Name", "ETextureMemoryPressureLevel::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureMemoryPressureLevel::Normal", (int64)ETextureMemoryPressureLevel::Normal },
		{ "ETextureMemoryPressureLevel::Warning", (int64)ETextureMemoryPressureLevel::Warning },
		{ "ETextureMemoryPressureLevel::Critical", (int64)ETextureMemoryPressureLevel::Critical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"ETextureMemoryPressureLevel",
	"ETextureMemoryPressureLevel",
	Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel()
{
	if (!Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.InnerSingleton, Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureMemoryPressureLevel.InnerSingleton;
}
// End Enum ETextureMemoryPressureLevel

// Begin Delegate FOnMemoryPressure
struct Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics
{
	struct _Script_UE_Assimp_eventOnMemoryPressure_Parms
	{
		ETextureMemoryPressureLevel PressureLevel;
		FName Param;
		int32 AvailableMemoryMB;
		int32 ThresholdMemoryMB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PressureLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PressureLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableMemoryMB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThresholdMemoryMB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_PressureLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_PressureLevel = { "PressureLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnMemoryPressure_Parms, PressureLevel), Z_Construct_UEnum_UE_Assimp_ETextureMemoryPressureLevel, METADATA_PARAMS(0, nullptr) }; // 309703244
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnMemoryPressure_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_AvailableMemoryMB = { "AvailableMemoryMB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnMemoryPressure_Parms, AvailableMemoryMB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_ThresholdMemoryMB = { "ThresholdMemoryMB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE_Assimp_eventOnMemoryPressure_Parms, ThresholdMemoryMB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_PressureLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_PressureLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_AvailableMemoryMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::NewProp_ThresholdMemoryMB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp, nullptr, "OnMemoryPressure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::_Script_UE_Assimp_eventOnMemoryPressure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::_Script_UE_Assimp_eventOnMemoryPressure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMemoryPressure_DelegateWrapper(const FMulticastScriptDelegate& OnMemoryPressure, ETextureMemoryPressureLevel PressureLevel, FName Param, int32 AvailableMemoryMB, int32 ThresholdMemoryMB)
{
	struct _Script_UE_Assimp_eventOnMemoryPressure_Parms
	{
		ETextureMemoryPressureLevel PressureLevel;
		FName Param;
		int32 AvailableMemoryMB;
		int32 ThresholdMemoryMB;
	};
	_Script_UE_Assimp_eventOnMemoryPressure_Parms Parms;
	Parms.PressureLevel=PressureLevel;
	Parms.Param=Param;
	Parms.AvailableMemoryMB=AvailableMemoryMB;
	Parms.ThresholdMemoryMB=ThresholdMemoryMB;
	OnMemoryPressure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMemoryPressure

// Begin Enum ETextureRequestState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureRequestState;
static UEnum* ETextureRequestState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureRequestState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureRequestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_ETextureRequestState, (UObject*)Z_Construct_UPackage__Script_UE_Assimp(), TEXT("ETextureRequestState"));
	}
	return Z_Registration_Info_UEnum_ETextureRequestState.OuterSingleton;
}
template<> UE_ASSIMP_API UEnum* StaticEnum<ETextureRequestState>()
{
	return ETextureRequestState_StaticEnum();
}
struct Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Completed.Name", "ETextureRequestState::Completed" },
		{ "Decoded.Name", "ETextureRequestState::Decoded" },
		{ "Decoding.Name", "ETextureRequestState::Decoding" },
		{ "Failed.Name", "ETextureRequestState::Failed" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
		{ "Pending.Name", "ETextureRequestState::Pending" },
		{ "Uploaded.Name", "ETextureRequestState::Uploaded" },
		{ "Uploading.Name", "ETextureRequestState::Uploading" },
		{ "Waiting.Name", "ETextureRequestState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureRequestState::Waiting", (int64)ETextureRequestState::Waiting },
		{ "ETextureRequestState::Pending", (int64)ETextureRequestState::Pending },
		{ "ETextureRequestState::Decoding", (int64)ETextureRequestState::Decoding },
		{ "ETextureRequestState::Decoded", (int64)ETextureRequestState::Decoded },
		{ "ETextureRequestState::Uploading", (int64)ETextureRequestState::Uploading },
		{ "ETextureRequestState::Uploaded", (int64)ETextureRequestState::Uploaded },
		{ "ETextureRequestState::Completed", (int64)ETextureRequestState::Completed },
		{ "ETextureRequestState::Failed", (int64)ETextureRequestState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
	nullptr,
	"ETextureRequestState",
	"ETextureRequestState",
	Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_Assimp_ETextureRequestState()
{
	if (!Z_Registration_Info_UEnum_ETextureRequestState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureRequestState.InnerSingleton, Z_Construct_UEnum_UE_Assimp_ETextureRequestState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureRequestState.InnerSingleton;
}
// End Enum ETextureRequestState

// Begin Class UACTexture Function StartStreaming
struct Z_Construct_UFunction_UACTexture_StartStreaming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Texture" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACTexture_StartStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACTexture, nullptr, "StartStreaming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACTexture_StartStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACTexture_StartStreaming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UACTexture_StartStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACTexture_StartStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACTexture::execStartStreaming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartStreaming();
	P_NATIVE_END;
}
// End Class UACTexture Function StartStreaming

// Begin Class UACTexture Function StopStreaming
struct Z_Construct_UFunction_UACTexture_StopStreaming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Texture" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACTexture_StopStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACTexture, nullptr, "StopStreaming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACTexture_StopStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACTexture_StopStreaming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UACTexture_StopStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACTexture_StopStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACTexture::execStopStreaming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopStreaming();
	P_NATIVE_END;
}
// End Class UACTexture Function StopStreaming

// Begin Class UACTexture Function TryStartDecode
struct Z_Construct_UFunction_UACTexture_TryStartDecode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Texture" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACTexture_TryStartDecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACTexture, nullptr, "TryStartDecode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACTexture_TryStartDecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACTexture_TryStartDecode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UACTexture_TryStartDecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACTexture_TryStartDecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACTexture::execTryStartDecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryStartDecode();
	P_NATIVE_END;
}
// End Class UACTexture Function TryStartDecode

// Begin Class UACTexture
void UACTexture::StaticRegisterNativesUACTexture()
{
	UClass* Class = UACTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartStreaming", &UACTexture::execStartStreaming },
		{ "StopStreaming", &UACTexture::execStopStreaming },
		{ "TryStartDecode", &UACTexture::execTryStartDecode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACTexture);
UClass* Z_Construct_UClass_UACTexture_NoRegister()
{
	return UACTexture::StaticClass();
}
struct Z_Construct_UClass_UACTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ACTexture.h" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextureReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAllTexturesReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMemoryPressure_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDecodeTasks_MetaData[] = {
		{ "Category", "Assimp|Texture|Performance" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTilesPerFrame_MetaData[] = {
		{ "Category", "Assimp|Texture|Performance" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUploadBytesPerFrame_MetaData[] = {
		{ "Category", "Assimp|Texture|Performance" },
		{ "ClampMin", "131072" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
		{ "UIMax", "16777216" },
		{ "UIMin", "1048576" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UploadTileSize_MetaData[] = {
		{ "Category", "Assimp|Texture|Performance" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "64" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartStreaming_MetaData[] = {
		{ "Category", "Assimp|Texture|Flow" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalMemoryThresholdMB_MetaData[] = {
		{ "Category", "Assimp|Texture|Memory" },
		{ "ClampMin", "64" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
		{ "UIMax", "4096" },
		{ "UIMin", "128" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMemoryThresholdMB_MetaData[] = {
		{ "Category", "Assimp|Texture|Memory" },
		{ "ClampMin", "128" },
		{ "ModuleRelativePath", "Public/ACTexture.h" },
		{ "UIMax", "8192" },
		{ "UIMin", "256" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextureReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllTexturesReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemoryPressure;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDecodeTasks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTilesPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUploadBytesPerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UploadTileSize;
	static void NewProp_bAutoStartStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartStreaming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CriticalMemoryThresholdMB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarningMemoryThresholdMB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UACTexture_StartStreaming, "StartStreaming" }, // 3733601765
		{ &Z_Construct_UFunction_UACTexture_StopStreaming, "StopStreaming" }, // 2121770132
		{ &Z_Construct_UFunction_UACTexture_TryStartDecode, "TryStartDecode" }, // 2397303110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_OnTextureReady = { "OnTextureReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, OnTextureReady), Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextureReady_MetaData), NewProp_OnTextureReady_MetaData) }; // 2938240686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_OnAllTexturesReady = { "OnAllTexturesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, OnAllTexturesReady), Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAllTexturesReady_MetaData), NewProp_OnAllTexturesReady_MetaData) }; // 977827100
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_OnMemoryPressure = { "OnMemoryPressure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, OnMemoryPressure), Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMemoryPressure_MetaData), NewProp_OnMemoryPressure_MetaData) }; // 2075761190
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_MaxDecodeTasks = { "MaxDecodeTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, MaxDecodeTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDecodeTasks_MetaData), NewProp_MaxDecodeTasks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_MaxTilesPerFrame = { "MaxTilesPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, MaxTilesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTilesPerFrame_MetaData), NewProp_MaxTilesPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_MaxUploadBytesPerFrame = { "MaxUploadBytesPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, MaxUploadBytesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUploadBytesPerFrame_MetaData), NewProp_MaxUploadBytesPerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_UploadTileSize = { "UploadTileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, UploadTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UploadTileSize_MetaData), NewProp_UploadTileSize_MetaData) };
void Z_Construct_UClass_UACTexture_Statics::NewProp_bAutoStartStreaming_SetBit(void* Obj)
{
	((UACTexture*)Obj)->bAutoStartStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_bAutoStartStreaming = { "bAutoStartStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACTexture), &Z_Construct_UClass_UACTexture_Statics::NewProp_bAutoStartStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartStreaming_MetaData), NewProp_bAutoStartStreaming_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_CriticalMemoryThresholdMB = { "CriticalMemoryThresholdMB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, CriticalMemoryThresholdMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalMemoryThresholdMB_MetaData), NewProp_CriticalMemoryThresholdMB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACTexture_Statics::NewProp_WarningMemoryThresholdMB = { "WarningMemoryThresholdMB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACTexture, WarningMemoryThresholdMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMemoryThresholdMB_MetaData), NewProp_WarningMemoryThresholdMB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_OnTextureReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_OnAllTexturesReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_OnMemoryPressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_MaxDecodeTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_MaxTilesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_MaxUploadBytesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_UploadTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_bAutoStartStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_CriticalMemoryThresholdMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACTexture_Statics::NewProp_WarningMemoryThresholdMB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UACTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UACTexture_Statics::ClassParams = {
	&UACTexture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UACTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UACTexture_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UACTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UACTexture()
{
	if (!Z_Registration_Info_UClass_UACTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACTexture.OuterSingleton, Z_Construct_UClass_UACTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UACTexture.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UACTexture>()
{
	return UACTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UACTexture);
UACTexture::~UACTexture() {}
// End Class UACTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureMemoryPressureLevel_StaticEnum, TEXT("ETextureMemoryPressureLevel"), &Z_Registration_Info_UEnum_ETextureMemoryPressureLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 309703244U) },
		{ ETextureRequestState_StaticEnum, TEXT("ETextureRequestState"), &Z_Registration_Info_UEnum_ETextureRequestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2291340356U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UACTexture, UACTexture::StaticClass, TEXT("UACTexture"), &Z_Registration_Info_UClass_UACTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACTexture), 4117222082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_2064205912(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
