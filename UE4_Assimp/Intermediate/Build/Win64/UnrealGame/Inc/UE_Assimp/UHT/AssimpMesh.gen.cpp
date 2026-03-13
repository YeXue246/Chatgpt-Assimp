// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AssimpMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssimpMesh() {}

// Begin Cross Module References
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpMesh();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Class UAssimpMesh Function SetupMesh
struct Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics
{
	struct AssimpMesh_eventSetupMesh_Parms
	{
		UAIMesh* InMeshData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::NewProp_InMeshData = { "InMeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssimpMesh_eventSetupMesh_Parms, InMeshData), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::NewProp_InMeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpMesh, nullptr, "SetupMesh", nullptr, nullptr, Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::AssimpMesh_eventSetupMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::AssimpMesh_eventSetupMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssimpMesh_SetupMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssimpMesh::execSetupMesh)
{
	P_GET_OBJECT(UAIMesh,Z_Param_InMeshData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupMesh(Z_Param_InMeshData);
	P_NATIVE_END;
}
// End Class UAssimpMesh Function SetupMesh

// Begin Class UAssimpMesh
void UAssimpMesh::StaticRegisterNativesUAssimpMesh()
{
	UClass* Class = UAssimpMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupMesh", &UAssimpMesh::execSetupMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssimpMesh);
UClass* Z_Construct_UClass_UAssimpMesh_NoRegister()
{
	return UAssimpMesh::StaticClass();
}
struct Z_Construct_UClass_UAssimpMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "AssimpMesh.h" },
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssimpMesh_SetupMesh, "SetupMesh" }, // 3849131192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssimpMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssimpMesh, MeshData), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshData_MetaData), NewProp_MeshData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssimpMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssimpMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssimpMesh_Statics::ClassParams = {
	&UAssimpMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAssimpMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssimpMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssimpMesh()
{
	if (!Z_Registration_Info_UClass_UAssimpMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssimpMesh.OuterSingleton, Z_Construct_UClass_UAssimpMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssimpMesh.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAssimpMesh>()
{
	return UAssimpMesh::StaticClass();
}
UAssimpMesh::UAssimpMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssimpMesh);
UAssimpMesh::~UAssimpMesh() {}
// End Class UAssimpMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssimpMesh, UAssimpMesh::StaticClass, TEXT("UAssimpMesh"), &Z_Registration_Info_UClass_UAssimpMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssimpMesh), 3241625529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_1513442037(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
