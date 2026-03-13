// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssimpSpawnManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIScene;
class UAssimpImportContext;
class UObject;
#ifdef UE_ASSIMP_AssimpSpawnManager_generated_h
#error "AssimpSpawnManager.generated.h already included, missing '#pragma once' in AssimpSpawnManager.h"
#endif
#define UE_ASSIMP_AssimpSpawnManager_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_23_DELEGATE \
UE_ASSIMP_API void FOnTextureStageFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTextureStageFinished);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssimpMeshTask_Statics; \
	UE_ASSIMP_API static class UScriptStruct* StaticStruct();


template<> UE_ASSIMP_API UScriptStruct* StaticStruct<struct FAssimpMeshTask>();

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSceneMaterialBucket_Statics; \
	UE_ASSIMP_API static class UScriptStruct* StaticStruct();


template<> UE_ASSIMP_API UScriptStruct* StaticStruct<struct FSceneMaterialBucket>();

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_81_DELEGATE \
static void FOnAllScenesFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAllScenesFinished);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_86_DELEGATE \
static void FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, int32 Current, int32 Total);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAllSceneMaterialFinished); \
	DECLARE_FUNCTION(execImportScenesAsync); \
	DECLARE_FUNCTION(execInitializeAndStart); \
	DECLARE_FUNCTION(execApplyRecommendedPerformanceSettings);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssimpSpawnManager(); \
	friend struct Z_Construct_UClass_AAssimpSpawnManager_Statics; \
public: \
	DECLARE_CLASS(AAssimpSpawnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(AAssimpSpawnManager)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAssimpSpawnManager(AAssimpSpawnManager&&); \
	AAssimpSpawnManager(const AAssimpSpawnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssimpSpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssimpSpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssimpSpawnManager) \
	NO_API virtual ~AAssimpSpawnManager();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_55_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class AAssimpSpawnManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpSpawnManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
