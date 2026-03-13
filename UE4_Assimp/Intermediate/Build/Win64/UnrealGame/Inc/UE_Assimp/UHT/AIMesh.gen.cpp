// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIMesh.h"
#include "ProceduralMeshComponent/Public/ProceduralMeshComponent.h"
#include "UE_Assimp/Public/AIBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMesh() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIBone();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Class UAIMesh Function GetAllBones
struct Z_Construct_UFunction_UAIMesh_GetAllBones_Statics
{
	struct AIMesh_eventGetAllBones_Parms
	{
		TArray<FAIBone> Bones;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The bones of this mesh.\n  * A bone consists of a name by which it can be found in the\n  * frame hierarchy and a set of vertex weights.\n  */" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bones of this mesh.\nA bone consists of a name by which it can be found in the\nframe hierarchy and a set of vertex weights." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetAllBones_Parms, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2581394147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetAllBones", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::AIMesh_eventGetAllBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::AIMesh_eventGetAllBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetAllBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetAllBones)
{
	P_GET_TARRAY_REF(FAIBone,Z_Param_Out_Bones);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllBones(Z_Param_Out_Bones);
	P_NATIVE_END;
}
// End Class UAIMesh Function GetAllBones

// Begin Class UAIMesh Function GetDynamicMesh
struct Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics
{
	struct AIMesh_eventGetDynamicMesh_Parms
	{
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|AIMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Dynamic Mesh from this mesh\n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Dynamic Mesh from this mesh\n@return" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetDynamicMesh", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::AIMesh_eventGetDynamicMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::AIMesh_eventGetDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetDynamicMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=P_THIS->GetDynamicMesh();
	P_NATIVE_END;
}
// End Class UAIMesh Function GetDynamicMesh

// Begin Class UAIMesh Function GetMaterialIndex
struct Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics
{
	struct AIMesh_eventGetMaterialIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get material for this mesh . use get materials in scene object with this index to get its material.\n\x09 *Materials are property of scene because many meshes can share a single material .\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get material for this mesh . use get materials in scene object with this index to get its material.\n        *Materials are property of scene because many meshes can share a single material ." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::AIMesh_eventGetMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::AIMesh_eventGetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetMaterialIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex();
	P_NATIVE_END;
}
// End Class UAIMesh Function GetMaterialIndex

// Begin Class UAIMesh Function GetMeshDataForProceduralMesh
struct Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics
{
	struct AIMesh_eventGetMeshDataForProceduralMesh_Parms
	{
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FProcMeshTangent> Tangents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get All data needed to create a mesh section in Unreal engine\n" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All data needed to create a mesh section in Unreal engine" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 4106609450
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4106609450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshDataForProceduralMesh", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::AIMesh_eventGetMeshDataForProceduralMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::AIMesh_eventGetMeshDataForProceduralMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetMeshDataForProceduralMesh)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMeshDataForProceduralMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_Tangents);
	P_NATIVE_END;
}
// End Class UAIMesh Function GetMeshDataForProceduralMesh

// Begin Class UAIMesh Function GetMeshName
struct Z_Construct_UFunction_UAIMesh_GetMeshName_Statics
{
	struct AIMesh_eventGetMeshName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the mesh. Meshes can be named, but this is not a\n   *  requirement and leaving this field empty is totally fine.\n   *  There are mainly three uses for mesh names:\n   *   - some formats name nodes and meshes independently.\n   *   - importers tend to split meshes up to meet the\n   *      one-material-per-mesh requirement. Assigning\n   *      the same (dummy) name to each of the result meshes\n   *      aids the caller at recovering the original mesh\n   *      partitioning.\n   *   - Vertex animations refer to meshes by their names.\n   **/" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the mesh. Meshes can be named, but this is not a\nrequirement and leaving this field empty is totally fine.\nThere are mainly three uses for mesh names:\n - some formats name nodes and meshes independently.\n - importers tend to split meshes up to meet the\n    one-material-per-mesh requirement. Assigning\n    the same (dummy) name to each of the result meshes\n    aids the caller at recovering the original mesh\n    partitioning.\n - Vertex animations refer to meshes by their names." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshName", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::AIMesh_eventGetMeshName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::AIMesh_eventGetMeshName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetMeshName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetMeshName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMeshName();
	P_NATIVE_END;
}
// End Class UAIMesh Function GetMeshName

// Begin Class UAIMesh Function GetMeshNormals
struct Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics
{
	struct AIMesh_eventGetMeshNormals_Parms
	{
		TArray<FVector> Normals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex normals.\n\x09* The array contains normalized vectors, nullptr if not present.*/" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex normals.\nThe array contains normalized vectors, nullptr if not present." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshNormals_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshNormals", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::AIMesh_eventGetMeshNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::AIMesh_eventGetMeshNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetMeshNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetMeshNormals)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMeshNormals(Z_Param_Out_Normals);
	P_NATIVE_END;
}
// End Class UAIMesh Function GetMeshNormals

// Begin Class UAIMesh Function GetMeshVertices
struct Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics
{
	struct AIMesh_eventGetMeshVertices_Parms
	{
		TArray<FVector> Vertices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of vertices in this mesh.\n  * This is also the size of all of the per-vertex data arrays.\n  * The maximum value for this member is #AI_MAX_VERTICES.\n  */" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of vertices in this mesh.\nThis is also the size of all of the per-vertex data arrays.\nThe maximum value for this member is #AI_MAX_VERTICES." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetMeshVertices_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshVertices", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::AIMesh_eventGetMeshVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::AIMesh_eventGetMeshVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetMeshVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetMeshVertices)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMeshVertices(Z_Param_Out_Vertices);
	P_NATIVE_END;
}
// End Class UAIMesh Function GetMeshVertices

// Begin Class UAIMesh Function GetNumVertices
struct Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics
{
	struct AIMesh_eventGetNumVertices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Num of vertices array\n" },
#endif
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Num of vertices array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetNumVertices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetNumVertices", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::AIMesh_eventGetNumVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::AIMesh_eventGetNumVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetNumVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetNumVertices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertices();
	P_NATIVE_END;
}
// End Class UAIMesh Function GetNumVertices

// Begin Class UAIMesh Function GetStaticMesh
struct Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics
{
	struct AIMesh_eventGetStaticMesh_Parms
	{
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMesh_eventGetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::AIMesh_eventGetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::AIMesh_eventGetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIMesh_GetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIMesh::execGetStaticMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GetStaticMesh();
	P_NATIVE_END;
}
// End Class UAIMesh Function GetStaticMesh

// Begin Class UAIMesh
void UAIMesh::StaticRegisterNativesUAIMesh()
{
	UClass* Class = UAIMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllBones", &UAIMesh::execGetAllBones },
		{ "GetDynamicMesh", &UAIMesh::execGetDynamicMesh },
		{ "GetMaterialIndex", &UAIMesh::execGetMaterialIndex },
		{ "GetMeshDataForProceduralMesh", &UAIMesh::execGetMeshDataForProceduralMesh },
		{ "GetMeshName", &UAIMesh::execGetMeshName },
		{ "GetMeshNormals", &UAIMesh::execGetMeshNormals },
		{ "GetMeshVertices", &UAIMesh::execGetMeshVertices },
		{ "GetNumVertices", &UAIMesh::execGetNumVertices },
		{ "GetStaticMesh", &UAIMesh::execGetStaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIMesh);
UClass* Z_Construct_UClass_UAIMesh_NoRegister()
{
	return UAIMesh::StaticClass();
}
struct Z_Construct_UClass_UAIMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///wrapper for assimp mesh \n" },
#endif
		{ "IncludePath", "AIMesh.h" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//wrapper for assimp mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMesh_GetAllBones, "GetAllBones" }, // 3077619013
		{ &Z_Construct_UFunction_UAIMesh_GetDynamicMesh, "GetDynamicMesh" }, // 3194606740
		{ &Z_Construct_UFunction_UAIMesh_GetMaterialIndex, "GetMaterialIndex" }, // 3199217840
		{ &Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh, "GetMeshDataForProceduralMesh" }, // 829608004
		{ &Z_Construct_UFunction_UAIMesh_GetMeshName, "GetMeshName" }, // 3476814509
		{ &Z_Construct_UFunction_UAIMesh_GetMeshNormals, "GetMeshNormals" }, // 2204877983
		{ &Z_Construct_UFunction_UAIMesh_GetMeshVertices, "GetMeshVertices" }, // 699016777
		{ &Z_Construct_UFunction_UAIMesh_GetNumVertices, "GetNumVertices" }, // 1356173651
		{ &Z_Construct_UFunction_UAIMesh_GetStaticMesh, "GetStaticMesh" }, // 1030595303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription = { "MeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIMesh, MeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDescription_MetaData), NewProp_MeshDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMesh_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIMesh, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMesh_MetaData), NewProp_DynamicMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMesh_Statics::NewProp_DynamicMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIMesh_Statics::ClassParams = {
	&UAIMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIMesh()
{
	if (!Z_Registration_Info_UClass_UAIMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIMesh.OuterSingleton, Z_Construct_UClass_UAIMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIMesh.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAIMesh>()
{
	return UAIMesh::StaticClass();
}
UAIMesh::UAIMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMesh);
UAIMesh::~UAIMesh() {}
// End Class UAIMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIMesh, UAIMesh::StaticClass, TEXT("UAIMesh"), &Z_Registration_Info_UClass_UAIMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIMesh), 3722665711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_2314311085(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
