// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AIBone.h"
#include "AIScene.h"
#include "assimp/mesh.h"
#include "MeshDescription.h"
#include "MeshDescriptionBuilder.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralMeshComponent.h"
#include "HAL/CriticalSection.h"
#include "AIMesh.generated.h"

class UDynamicMesh;

UENUM()
enum class EAIMeshBuildState : uint8
{
	None,
	Enqueued,
	RawReady,
	BuildVertices,
	BuildTriangles,
	Finalize_Prepare,
	Finalize_Init,
	Finalize_Collision,
	Ready,
};

struct FTempNode
{
	aiNode* Node;
	aiMatrix4x4 GlobalTransform;
	int ParentIndex;
	TArray<int> Children;
};

struct FTempNodeTree
{
	TArray<FTempNode> Nodes;
};

DECLARE_MULTICAST_DELEGATE(FOnStaticMeshReady);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAIMeshRawReady, UAIMesh*);

/**
 * 
 */

//wrapper for assimp mesh 
UCLASS(BlueprintType)
class UE_ASSIMP_API UAIMesh : public UObject
{
	GENERATED_BODY()
	friend UAIScene;

public:
	/** The number of vertices in this mesh.
  * This is also the size of all of the per-vertex data arrays.
  * The maximum value for this member is #AI_MAX_VERTICES.
  */
	UFUNCTION(BlueprintCallable)
	void GetMeshVertices(TArray<FVector>& Vertices );
	/** Vertex normals.
	* The array contains normalized vectors, nullptr if not present.*/
	UFUNCTION(BlueprintCallable)
	void GetMeshNormals(TArray<FVector>& Normals );
	//Get All data needed to create a mesh section in Unreal engine
	UFUNCTION(BlueprintCallable)
	void GetMeshDataForProceduralMesh(TArray<FVector>&Vertices,TArray<int32>& Triangles,TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FProcMeshTangent>& Tangents);
	UFUNCTION(BlueprintCallable)
	UStaticMesh* GetStaticMesh();
	/**
	 * Get Dynamic Mesh from this mesh
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category="Assimp|AIMesh")
	UDynamicMesh* GetDynamicMesh();
	
	//Num of vertices array
	UFUNCTION(BlueprintCallable,BlueprintPure)
	int GetNumVertices();
	/** The bones of this mesh.
  * A bone consists of a name by which it can be found in the
  * frame hierarchy and a set of vertex weights.
  */
	UFUNCTION(BlueprintCallable,BlueprintPure)
	void  GetAllBones(TArray<FAIBone>& Bones);

	/** Name of the mesh. Meshes can be named, but this is not a
   *  requirement and leaving this field empty is totally fine.
   *  There are mainly three uses for mesh names:
   *   - some formats name nodes and meshes independently.
   *   - importers tend to split meshes up to meet the
   *      one-material-per-mesh requirement. Assigning
   *      the same (dummy) name to each of the result meshes
   *      aids the caller at recovering the original mesh
   *      partitioning.
   *   - Vertex animations refer to meshes by their names.
   **/
	UFUNCTION(BlueprintCallable,BlueprintPure)
	FString GetMeshName() const;

	/*Get material for this mesh . use get materials in scene object with this index to get its material.
	 *Materials are property of scene because many meshes can share a single material .
	 **/
	
	UFUNCTION(BlueprintCallable,BlueprintPure)
	int GetMaterialIndex();

	UFUNCTION(BlueprintCallable, Category = "Assimp|AIMesh")
	void InvalidateCache();

	void EnqueueBuildRaw();
	void BeginBuildStaticMesh_GT();
	bool TickBuildVertices_GT(int32 Batch);
	bool TickBuildTriangles_GT(int32 Batch);
	void FinalizeBuild_Build_GT();
	void FinalizeBuild_Init_GT();
	void FinalizeBuild_Collision_GT();
	void BuildRawMeshData();


	bool IsReady() const { return BuildState == EAIMeshBuildState::Ready; }
	bool IsStaticMeshReady() const
	{
		return BuildState == EAIMeshBuildState::Ready && StaticMesh;
	}

	UStaticMesh* GetStaticMesh_NoBuild() const { return StaticMesh; }

	UPROPERTY()
	UStaticMeshDescription* MeshDescription = nullptr;
	UPROPERTY()
	UStaticMesh* StaticMesh = nullptr;
	aiMesh* Mesh;

	FOnStaticMeshReady OnStaticMeshReady;
	FOnAIMeshRawReady OnRawMeshReady;

	EAIMeshBuildState BuildState = EAIMeshBuildState::None;

	UPROPERTY()
	UDynamicMesh* DynamicMesh = nullptr;

	FMeshDescription MeshDesc;
	FMeshDescriptionBuilder MeshDescBuilder;
	TArray<FVertexInstanceID> InstanceQueue;
	FPolygonGroupID PG;

	int32 VertexIndex = 0;
	int32 TriangleIndex = 0;



private:


	TArray<FVector> CachedVertices;
	TArray<FVector> CachedNormals;
	TArray<FVector2D> CachedUV0;
	TArray<int32> CachedTriangles;
	TArray<FProcMeshTangent> CachedTangents;


	bool bCachedVertices = false;
	bool bCachedNormals = false;
	bool bCachedUV0 = false;
	bool bCachedTriangles = false;
	bool bCachedTangents = false;


	mutable FCriticalSection CacheCriticalSection;


	void EnsureVerticesCached();
	void EnsureNormalsCached();
	void EnsureUVCached();
	void EnsureTrianglesCached();
	void EnsureTangentsCached();
};
