// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AINode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAINode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode_NoRegister();
UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Assimp();
// End Cross Module References

// Begin Class UAINode Function GetChildNodes
struct Z_Construct_UFunction_UAINode_GetChildNodes_Statics
{
	struct AINode_eventGetChildNodes_Parms
	{
		TArray<UAINode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The child nodes of this node. */" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The child nodes of this node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetChildNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetChildNodes", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::AINode_eventGetChildNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetChildNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::AINode_eventGetChildNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetChildNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetChildNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetChildNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAINode*>*)Z_Param__Result=P_THIS->GetChildNodes();
	P_NATIVE_END;
}
// End Class UAINode Function GetChildNodes

// Begin Class UAINode Function GetNodeMeshes
struct Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics
{
	struct AINode_eventGetNodeMeshes_Parms
	{
		TArray<UAIMesh*> Meshes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//false if empty\n" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "false if empty" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetNodeMeshes_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AINode_eventGetNodeMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AINode_eventGetNodeMeshes_Parms), &Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeMeshes", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::AINode_eventGetNodeMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::AINode_eventGetNodeMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetNodeMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetNodeMeshes)
{
	P_GET_TARRAY_REF(UAIMesh*,Z_Param_Out_Meshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeMeshes(Z_Param_Out_Meshes);
	P_NATIVE_END;
}
// End Class UAINode Function GetNodeMeshes

// Begin Class UAINode Function GetNodeName
struct Z_Construct_UFunction_UAINode_GetNodeName_Statics
{
	struct AINode_eventGetNodeName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the node.\n\x09*\n\x09* The name might be empty (length of zero) but all nodes which\n\x09* need to be referenced by either bones or animations are named.\n\x09* Multiple nodes may have the same name, except for nodes which are referenced\n\x09* by bones (see #aiBone and #aiMesh::mBones). Their names *must* be unique.\n\x09*\n\x09* Cameras and lights reference a specific node by name - if there\n\x09* are multiple nodes with this name, they are assigned to each of them.\n\x09* <br>\n\x09* There are no limitations with regard to the characters contained in\n\x09* the name string as it is usually taken directly from the source file.\n\x09*\n\x09* Implementations should be able to handle tokens such as whitespace, tabs,\n\x09* line feeds, quotation marks, ampersands etc.\n\x09*\n\x09* Sometimes assimp introduces new nodes not present in the source file\n\x09* into the hierarchy (usually out of necessity because sometimes the\n\x09* source hierarchy format is simply not compatible). Their names are\n\x09* surrounded by @verbatim <> @endverbatim e.g.\n\x09*  @verbatim<DummyRootNode> @endverbatim.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the node.\n\nThe name might be empty (length of zero) but all nodes which\nneed to be referenced by either bones or animations are named.\nMultiple nodes may have the same name, except for nodes which are referenced\nby bones (see #aiBone and #aiMesh::mBones). Their names *must* be unique.\n\nCameras and lights reference a specific node by name - if there\nare multiple nodes with this name, they are assigned to each of them.\n<br>\nThere are no limitations with regard to the characters contained in\nthe name string as it is usually taken directly from the source file.\n\nImplementations should be able to handle tokens such as whitespace, tabs,\nline feeds, quotation marks, ampersands etc.\n\nSometimes assimp introduces new nodes not present in the source file\ninto the hierarchy (usually out of necessity because sometimes the\nsource hierarchy format is simply not compatible). Their names are\nsurrounded by @verbatim <> @endverbatim e.g.\n@verbatim<DummyRootNode> @endverbatim." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAINode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeName", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetNodeName_Statics::AINode_eventGetNodeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetNodeName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetNodeName_Statics::AINode_eventGetNodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetNodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetNodeName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNodeName();
	P_NATIVE_END;
}
// End Class UAINode Function GetNodeName

// Begin Class UAINode Function GetNodeTransform
struct Z_Construct_UFunction_UAINode_GetNodeTransform_Statics
{
	struct AINode_eventGetNodeTransform_Parms
	{
		FTransform Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The transformation relative to the node's parent. */" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transformation relative to the node's parent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetNodeTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeTransform", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::AINode_eventGetNodeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::AINode_eventGetNodeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetNodeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetNodeTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeTransform(Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UAINode Function GetNodeTransform

// Begin Class UAINode Function GetParentNode
struct Z_Construct_UFunction_UAINode_GetParentNode_Statics
{
	struct AINode_eventGetParentNode_Parms
	{
		bool Success;
		UAINode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parent node. nullptr if this node is the root node. */" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent node. nullptr if this node is the root node." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success_SetBit(void* Obj)
{
	((AINode_eventGetParentNode_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AINode_eventGetParentNode_Parms), &Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetParentNode_Parms, ReturnValue), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetParentNode", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetParentNode_Statics::AINode_eventGetParentNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetParentNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetParentNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetParentNode_Statics::AINode_eventGetParentNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetParentNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetParentNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetParentNode)
{
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAINode**)Z_Param__Result=P_THIS->GetParentNode(Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UAINode Function GetParentNode

// Begin Class UAINode Function GetRootTransform
struct Z_Construct_UFunction_UAINode_GetRootTransform_Statics
{
	struct AINode_eventGetRootTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The transformation relative to Root */" },
#endif
		{ "ModuleRelativePath", "Public/AINode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transformation relative to Root" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAINode_GetRootTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetRootTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetRootTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetRootTransform", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::AINode_eventGetRootTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetRootTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::AINode_eventGetRootTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetRootTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetRootTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetRootTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRootTransform();
	P_NATIVE_END;
}
// End Class UAINode Function GetRootTransform

// Begin Class UAINode Function GetScene
struct Z_Construct_UFunction_UAINode_GetScene_Statics
{
	struct AINode_eventGetScene_Parms
	{
		UAIScene* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINode_eventGetScene_Parms, ReturnValue), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetScene", nullptr, nullptr, Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAINode_GetScene_Statics::AINode_eventGetScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAINode_GetScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAINode_GetScene_Statics::AINode_eventGetScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAINode_GetScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAINode_GetScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAINode::execGetScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIScene**)Z_Param__Result=P_THIS->GetScene();
	P_NATIVE_END;
}
// End Class UAINode Function GetScene

// Begin Class UAINode
void UAINode::StaticRegisterNativesUAINode()
{
	UClass* Class = UAINode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChildNodes", &UAINode::execGetChildNodes },
		{ "GetNodeMeshes", &UAINode::execGetNodeMeshes },
		{ "GetNodeName", &UAINode::execGetNodeName },
		{ "GetNodeTransform", &UAINode::execGetNodeTransform },
		{ "GetParentNode", &UAINode::execGetParentNode },
		{ "GetRootTransform", &UAINode::execGetRootTransform },
		{ "GetScene", &UAINode::execGetScene },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAINode);
UClass* Z_Construct_UClass_UAINode_NoRegister()
{
	return UAINode::StaticClass();
}
struct Z_Construct_UClass_UAINode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AINode.h" },
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAINode_GetChildNodes, "GetChildNodes" }, // 3073081190
		{ &Z_Construct_UFunction_UAINode_GetNodeMeshes, "GetNodeMeshes" }, // 2337991677
		{ &Z_Construct_UFunction_UAINode_GetNodeName, "GetNodeName" }, // 1437703313
		{ &Z_Construct_UFunction_UAINode_GetNodeTransform, "GetNodeTransform" }, // 2171785778
		{ &Z_Construct_UFunction_UAINode_GetParentNode, "GetParentNode" }, // 670497924
		{ &Z_Construct_UFunction_UAINode_GetRootTransform, "GetRootTransform" }, // 3534132443
		{ &Z_Construct_UFunction_UAINode_GetScene, "GetScene" }, // 4062743325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAINode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAINode_Statics::NewProp_OwnedNodes_Inner = { "OwnedNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAINode_Statics::NewProp_OwnedNodes = { "OwnedNodes", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAINode, OwnedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedNodes_MetaData), NewProp_OwnedNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAINode_Statics::NewProp_CachedScene = { "CachedScene", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAINode, CachedScene), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedScene_MetaData), NewProp_CachedScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAINode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINode_Statics::NewProp_OwnedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINode_Statics::NewProp_OwnedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINode_Statics::NewProp_CachedScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAINode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAINode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAINode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAINode_Statics::ClassParams = {
	&UAINode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAINode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAINode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAINode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAINode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAINode()
{
	if (!Z_Registration_Info_UClass_UAINode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAINode.OuterSingleton, Z_Construct_UClass_UAINode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAINode.OuterSingleton;
}
template<> UE_ASSIMP_API UClass* StaticClass<UAINode>()
{
	return UAINode::StaticClass();
}
UAINode::UAINode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAINode);
UAINode::~UAINode() {}
// End Class UAINode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAINode, UAINode::StaticClass, TEXT("UAINode"), &Z_Registration_Info_UClass_UAINode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAINode), 3708896686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_3064944548(TEXT("/Script/UE_Assimp"),
	Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_AssimpHolder_AssimpHolder_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
