// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UE_Assimp.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_ASSIMP_UE_Assimp_generated_h
#error "UE_Assimp.generated.h already included, missing '#pragma once' in UE_Assimp.h"
#endif
#define UE_ASSIMP_UE_Assimp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_UE_Assimp_h


#define FOREACH_ENUM_ETASKRESULT(op) \
	op(ETaskResult::Success) \
	op(ETaskResult::Fail) 

enum class ETaskResult : uint8;
template<> struct TIsUEnumClass<ETaskResult> { enum { Value = true }; };
template<> UE_ASSIMP_API UEnum* StaticEnum<ETaskResult>();

#define FOREACH_ENUM_EASSIMPRETURN(op) \
	op(ReturnSuccess) \
	op(ReturnFail) \
	op(ReturnOutOfMemory) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
