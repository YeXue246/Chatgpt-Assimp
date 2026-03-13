// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Assimp_init() {}
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature();
	UE_ASSIMP_API UFunction* Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE_Assimp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE_Assimp()
	{
		if (!Z_Registration_Info_UPackage__Script_UE_Assimp.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnAllScenesFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AAssimpSpawnManager_OnProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnAllTexturesReady__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnAssimpImportProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnImportSceneComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnMemoryPressure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnProgressUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnTextureReady__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE_Assimp_OnTextureStageFinished__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE_Assimp",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBD7A9879,
				0xA087972F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE_Assimp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE_Assimp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE_Assimp(Z_Construct_UPackage__Script_UE_Assimp, TEXT("/Script/UE_Assimp"), Z_Registration_Info_UPackage__Script_UE_Assimp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBD7A9879, 0xA087972F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
