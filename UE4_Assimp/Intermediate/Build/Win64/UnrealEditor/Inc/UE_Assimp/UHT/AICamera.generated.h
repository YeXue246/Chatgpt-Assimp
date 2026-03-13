// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_ASSIMP_AICamera_generated_h
#error "AICamera.generated.h already included, missing '#pragma once' in AICamera.h"
#endif
#define UE_ASSIMP_AICamera_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLookAtVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetAspectRatio); \
	DECLARE_FUNCTION(execGetClipPlaneFar); \
	DECLARE_FUNCTION(execGetClipPlaneNear); \
	DECLARE_FUNCTION(execGetCameraFOV); \
	DECLARE_FUNCTION(execGetCameraName);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICamera(); \
	friend struct Z_Construct_UClass_UAICamera_Statics; \
public: \
	DECLARE_CLASS(UAICamera, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAICamera)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAICamera(UAICamera&&); \
	UAICamera(const UAICamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICamera) \
	NO_API virtual ~UAICamera();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_15_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAICamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AICamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
