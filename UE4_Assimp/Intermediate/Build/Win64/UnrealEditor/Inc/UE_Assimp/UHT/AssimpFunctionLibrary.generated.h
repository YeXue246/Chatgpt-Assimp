// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssimpFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAIMaterial;
class UAINode;
class UAIScene;
class UAssimpImportContext;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTexture2D;
struct FAIBone;
struct FAIVertexWeight;
#ifdef UE_ASSIMP_AssimpFunctionLibrary_generated_h
#error "AssimpFunctionLibrary.generated.h already included, missing '#pragma once' in AssimpFunctionLibrary.h"
#endif
#define UE_ASSIMP_AssimpFunctionLibrary_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_25_DELEGATE \
UE_ASSIMP_API void FOnProgressUpdated_DelegateWrapper(const FScriptDelegate& OnProgressUpdated, float Progress, UAIScene* Scene);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_30_DELEGATE \
UE_ASSIMP_API void FOnImportSceneComplete_DelegateWrapper(const FScriptDelegate& OnImportSceneComplete, TArray<UAIScene*> const& Scenes);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpImportContext(); \
	friend struct Z_Construct_UClass_UAssimpImportContext_Statics; \
public: \
	DECLARE_CLASS(UAssimpImportContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpImportContext)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpImportContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssimpImportContext(UAssimpImportContext&&); \
	UAssimpImportContext(const UAssimpImportContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpImportContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpImportContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpImportContext) \
	NO_API virtual ~UAssimpImportContext();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_32_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_35_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpImportContext>();

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActorNameDebug); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_MaxQuality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Quality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Fast); \
	DECLARE_FUNCTION(execProcess_ConvertToLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_GenBoundingBoxes); \
	DECLARE_FUNCTION(execPostProcess_DropNormals); \
	DECLARE_FUNCTION(execPostProcess_ForceGenNormals); \
	DECLARE_FUNCTION(execPostProcess_EmbedTextures); \
	DECLARE_FUNCTION(execPostProcess_GlobalScale); \
	DECLARE_FUNCTION(execPostProcess_Debone); \
	DECLARE_FUNCTION(execPostProcess_SplitByBoneCount); \
	DECLARE_FUNCTION(execPostProcess_FlipWindingOrder); \
	DECLARE_FUNCTION(execPostProcess_FlipUVs); \
	DECLARE_FUNCTION(execPostProcess_OptimizeGraph); \
	DECLARE_FUNCTION(execPostProcess_OptimizeMeshes); \
	DECLARE_FUNCTION(execPostProcess_FindInstances); \
	DECLARE_FUNCTION(execPostProcess_TransformUVCoords); \
	DECLARE_FUNCTION(execPostProcess_GenUVCoords); \
	DECLARE_FUNCTION(execPostProcess_FindInvalidData); \
	DECLARE_FUNCTION(execPostProcess_FindDegenerates); \
	DECLARE_FUNCTION(execPostProcess_SortByPType); \
	DECLARE_FUNCTION(execPostProcess_PopulateArmatureData); \
	DECLARE_FUNCTION(execPostProcess_FixInfacingNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveRedundantMaterials); \
	DECLARE_FUNCTION(execPostProcess_ImproveCacheLocality); \
	DECLARE_FUNCTION(execPostProcess_ValidateDataStructure); \
	DECLARE_FUNCTION(execPostProcess_LimitBoneWeights); \
	DECLARE_FUNCTION(execPostProcess_PreTransformVertices); \
	DECLARE_FUNCTION(execPostProcess_GenSmoothNormals); \
	DECLARE_FUNCTION(execAiPostProcess_GenNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveComponent); \
	DECLARE_FUNCTION(execPostProcess_Triangulate); \
	DECLARE_FUNCTION(execPostProcess_MakeLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_JoinIdenticalVertices); \
	DECLARE_FUNCTION(execHasTexture); \
	DECLARE_FUNCTION(execGetTexturePath); \
	DECLARE_FUNCTION(execPostProcess_CalcTangentSpace); \
	DECLARE_FUNCTION(execGetBoneWeights); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetNumOfWeights); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execApplyNormalMapSettingsToTexture); \
	DECLARE_FUNCTION(execCreateScences); \
	DECLARE_FUNCTION(execProcessNodes); \
	DECLARE_FUNCTION(execImportTextureAsync); \
	DECLARE_FUNCTION(execCancelImport); \
	DECLARE_FUNCTION(execImportScenesAsync); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execOpenFileDialogue);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAssimpFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssimpFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpFunctionLibrary)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssimpFunctionLibrary(UAssimpFunctionLibrary&&); \
	UAssimpFunctionLibrary(const UAssimpFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpFunctionLibrary) \
	NO_API virtual ~UAssimpFunctionLibrary();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_65_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
