// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AssimpImporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIScene;
class UAssimpImporter;
class UObject;
enum class EAssimpImportResult : uint8;
#ifdef UE_ASSIMP_AssimpImporter_generated_h
#error "AssimpImporter.generated.h already included, missing '#pragma once' in AssimpImporter.h"
#endif
#define UE_ASSIMP_AssimpImporter_generated_h

#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_21_DELEGATE \
UE_ASSIMP_API void FOnAssimpImportProgress_DelegateWrapper(const FScriptDelegate& OnAssimpImportProgress, EAssimpImportResult Result, UAIScene* AISceneImported, float ProgressRatio);


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_24_DELEGATE \
UE_ASSIMP_API void FOnAssimpImportComplete_DelegateWrapper(const FScriptDelegate& OnAssimpImportComplete, EAssimpImportResult Result, UAssimpImporter* Importer);


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelImport); \
	DECLARE_FUNCTION(execAssimpImportFiles);


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpImporter(); \
	friend struct Z_Construct_UClass_UAssimpImporter_Statics; \
public: \
	DECLARE_CLASS(UAssimpImporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpImporter)


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssimpImporter(UAssimpImporter&&); \
	UAssimpImporter(const UAssimpImporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpImporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpImporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssimpImporter)


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_31_PROLOG
#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpImporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_Actions_AssimpImporter_h


#define FOREACH_ENUM_EASSIMPIMPORTRESULT(op) \
	op(EAssimpImportResult::Success) \
	op(EAssimpImportResult::Cancelled) \
	op(EAssimpImportResult::Complete) \
	op(EAssimpImportResult::InvalidAIScene) 

enum class EAssimpImportResult : uint8;
template<> struct TIsUEnumClass<EAssimpImportResult> { enum { Value = true }; };
template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpImportResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
