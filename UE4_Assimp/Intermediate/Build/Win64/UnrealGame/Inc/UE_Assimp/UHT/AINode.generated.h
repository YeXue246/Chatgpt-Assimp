// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AINode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIMesh;
class UAINode;
class UAIScene;
#ifdef UE_ASSIMP_AINode_generated_h
#error "AINode.generated.h already included, missing '#pragma once' in AINode.h"
#endif
#define UE_ASSIMP_AINode_generated_h

#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScene); \
	DECLARE_FUNCTION(execGetNodeMeshes); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execGetNodeTransform); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetNodeName);


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAINode(); \
	friend struct Z_Construct_UClass_UAINode_Statics; \
public: \
	DECLARE_CLASS(UAINode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAINode)


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAINode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAINode(UAINode&&); \
	UAINode(const UAINode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAINode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAINode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAINode) \
	NO_API virtual ~UAINode();


#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_21_PROLOG
#define FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAINode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
