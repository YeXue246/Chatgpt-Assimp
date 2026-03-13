// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ETextureMemoryPressureLevel : uint8;
#ifdef UE_ASSIMP_ACTexture_generated_h
#error "ACTexture.generated.h already included, missing '#pragma once' in ACTexture.h"
#endif
#define UE_ASSIMP_ACTexture_generated_h

#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_13_DELEGATE \
UE_ASSIMP_API void FOnTextureReady_DelegateWrapper(const FMulticastScriptDelegate& OnTextureReady, FName Param, UTexture2D* Texture);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_14_DELEGATE \
UE_ASSIMP_API void FOnAllTexturesReady_DelegateWrapper(const FMulticastScriptDelegate& OnAllTexturesReady);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_24_DELEGATE \
UE_ASSIMP_API void FOnMemoryPressure_DelegateWrapper(const FMulticastScriptDelegate& OnMemoryPressure, ETextureMemoryPressureLevel PressureLevel, FName Param, int32 AvailableMemoryMB, int32 ThresholdMemoryMB);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopStreaming); \
	DECLARE_FUNCTION(execStartStreaming); \
	DECLARE_FUNCTION(execTryStartDecode);


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACTexture(); \
	friend struct Z_Construct_UClass_UACTexture_Statics; \
public: \
	DECLARE_CLASS(UACTexture, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UACTexture)


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UACTexture(UACTexture&&); \
	UACTexture(const UACTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACTexture) \
	NO_API virtual ~UACTexture();


#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_101_PROLOG
#define FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_INCLASS_NO_PURE_DECLS \
	FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UACTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_ACTexture_h


#define FOREACH_ENUM_ETEXTUREMEMORYPRESSURELEVEL(op) \
	op(ETextureMemoryPressureLevel::Normal) \
	op(ETextureMemoryPressureLevel::Warning) \
	op(ETextureMemoryPressureLevel::Critical) 

enum class ETextureMemoryPressureLevel : uint8;
template<> struct TIsUEnumClass<ETextureMemoryPressureLevel> { enum { Value = true }; };
template<> UE_ASSIMP_API UEnum* StaticEnum<ETextureMemoryPressureLevel>();

#define FOREACH_ENUM_ETEXTUREREQUESTSTATE(op) \
	op(ETextureRequestState::Waiting) \
	op(ETextureRequestState::Pending) \
	op(ETextureRequestState::Decoding) \
	op(ETextureRequestState::Decoded) \
	op(ETextureRequestState::Uploading) \
	op(ETextureRequestState::Uploaded) \
	op(ETextureRequestState::Completed) \
	op(ETextureRequestState::Failed) 

enum class ETextureRequestState : uint8;
template<> struct TIsUEnumClass<ETextureRequestState> { enum { Value = true }; };
template<> UE_ASSIMP_API UEnum* StaticEnum<ETextureRequestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
