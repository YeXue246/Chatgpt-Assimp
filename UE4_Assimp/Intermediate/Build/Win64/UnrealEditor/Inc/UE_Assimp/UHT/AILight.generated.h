// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AILight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UE_ASSIMP_AILight_generated_h
#error "AILight.generated.h already included, missing '#pragma once' in AILight.h"
#endif
#define UE_ASSIMP_AILight_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAreaLightSize); \
	DECLARE_FUNCTION(execGetConeOuterAngle); \
	DECLARE_FUNCTION(execGetConeInnerAngle); \
	DECLARE_FUNCTION(execGetColorAmbient); \
	DECLARE_FUNCTION(execGetColorSpecular); \
	DECLARE_FUNCTION(execGetColorDiffuse); \
	DECLARE_FUNCTION(execGetAttenuationQuadratic); \
	DECLARE_FUNCTION(execGetAttenuationLinear); \
	DECLARE_FUNCTION(execGetAttenuationConstant); \
	DECLARE_FUNCTION(execGetUpDirection); \
	DECLARE_FUNCTION(execGetLightDirection); \
	DECLARE_FUNCTION(execGetLightPosition); \
	DECLARE_FUNCTION(execGetLightType); \
	DECLARE_FUNCTION(execGetLightName);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAILight(); \
	friend struct Z_Construct_UClass_UAILight_Statics; \
public: \
	DECLARE_CLASS(UAILight, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAILight)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAILight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAILight(UAILight&&); \
	UAILight(const UAILight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAILight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAILight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAILight) \
	NO_API virtual ~UAILight();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_54_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAILight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AILight_h


#define FOREACH_ENUM_EASSIMPLIGHTTYPE(op) \
	op(UNDEFINED) \
	op(Directional) \
	op(PointLight) \
	op(Spot) \
	op(Ambient) \
	op(Area) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
