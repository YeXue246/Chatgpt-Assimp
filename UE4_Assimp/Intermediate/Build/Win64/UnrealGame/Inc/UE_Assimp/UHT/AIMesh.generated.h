// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UStaticMesh;
struct FAIBone;
struct FProcMeshTangent;
#ifdef UE_ASSIMP_AIMesh_generated_h
#error "AIMesh.generated.h already included, missing '#pragma once' in AIMesh.h"
#endif
#define UE_ASSIMP_AIMesh_generated_h

#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetMeshName); \
	DECLARE_FUNCTION(execGetAllBones); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetDynamicMesh); \
	DECLARE_FUNCTION(execGetStaticMesh); \
	DECLARE_FUNCTION(execGetMeshDataForProceduralMesh); \
	DECLARE_FUNCTION(execGetMeshNormals); \
	DECLARE_FUNCTION(execGetMeshVertices);


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMesh(); \
	friend struct Z_Construct_UClass_UAIMesh_Statics; \
public: \
	DECLARE_CLASS(UAIMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIMesh)


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIMesh(UAIMesh&&); \
	UAIMesh(const UAIMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMesh) \
	NO_API virtual ~UAIMesh();


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_22_PROLOG
#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAIMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
