// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAICamera;
class UAILight;
class UAIMaterial;
class UAIMesh;
class UAINode;
class UMeshComponent;
class UTexture2D;
#ifdef UE_ASSIMP_AIScene_generated_h
#error "AIScene.generated.h already included, missing '#pragma once' in AIScene.h"
#endif
#define UE_ASSIMP_AIScene_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSceneScale); \
	DECLARE_FUNCTION(execGetEmbeddedTexture); \
	DECLARE_FUNCTION(execGetUnitScaleFactor); \
	DECLARE_FUNCTION(execGetAllLights); \
	DECLARE_FUNCTION(execGetAllCameras); \
	DECLARE_FUNCTION(execGetMeshAtIndex); \
	DECLARE_FUNCTION(execGetRootNode); \
	DECLARE_FUNCTION(execGetAllMaterials); \
	DECLARE_FUNCTION(execGetAllMeshes); \
	DECLARE_FUNCTION(execSpawnAllMeshes);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIScene(); \
	friend struct Z_Construct_UClass_UAIScene_Statics; \
public: \
	DECLARE_CLASS(UAIScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIScene)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIScene(UAIScene&&); \
	UAIScene(const UAIScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIScene) \
	NO_API virtual ~UAIScene();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_46_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAIScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h


#define FOREACH_ENUM_EAISCENEBUILDPHASE(op) \
	op(EAISceneBuildPhase::None) \
	op(EAISceneBuildPhase::Meshes) \
	op(EAISceneBuildPhase::Cameras) \
	op(EAISceneBuildPhase::Lights) \
	op(EAISceneBuildPhase::Materials) \
	op(EAISceneBuildPhase::Nodes) \
	op(EAISceneBuildPhase::Finished) 

enum class EAISceneBuildPhase : uint8;
template<> struct TIsUEnumClass<EAISceneBuildPhase> { enum { Value = true }; };
template<> UE_ASSIMP_API UEnum* StaticEnum<EAISceneBuildPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
