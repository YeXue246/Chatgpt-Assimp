// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssimpMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIMesh;
#ifdef UE_ASSIMP_AssimpMesh_generated_h
#error "AssimpMesh.generated.h already included, missing '#pragma once' in AssimpMesh.h"
#endif
#define UE_ASSIMP_AssimpMesh_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupMesh);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpMesh(); \
	friend struct Z_Construct_UClass_UAssimpMesh_Statics; \
public: \
	DECLARE_CLASS(UAssimpMesh, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpMesh)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssimpMesh(UAssimpMesh&&); \
	UAssimpMesh(const UAssimpMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpMesh) \
	NO_API virtual ~UAssimpMesh();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_15_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
