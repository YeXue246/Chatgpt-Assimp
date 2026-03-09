// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMesh.h"

#include "KismetProceduralMeshLibrary.h"
#include "StaticMeshDescription.h"
#include "UE_Assimp.h"
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 2
#include "UDynamicMesh.h"
#else
#include "GeometryFramework/Public/UDynamicMesh.h"
#endif
#include "GeometryScript/MeshBasicEditFunctions.h"
#include "GeometryScript/MeshMaterialFunctions.h"
#include "GeometryScript/MeshUVFunctions.h"
#include "StaticMeshAttributes.h"
#include "Engine/StaticMesh.h"
#include "PhysicsEngine/BodySetup.h"



void UAIMesh::GetMeshVertices(TArray<FVector>& Vertices)
{
	if (!this)
	{
		UE_LOG(LogAssimp, Fatal, TEXT("No Mesh"));
		return;
	}
	if (!Mesh)
	{
		UE_LOG(LogAssimp, Error, TEXT("UAIMesh::GetMeshVertices - Mesh is null"));
		Vertices.Reset();
		return;
	}
	EnsureVerticesCached();
	FScopeLock Lock(&CacheCriticalSection);
	Vertices = CachedVertices;
}

void UAIMesh::GetMeshNormals(TArray<FVector>& Normals)
{
	if (!this)
	{
		UE_LOG(LogAssimp, Fatal, TEXT("No Mesh"));
		return;
	}
	if (!Mesh)
	{
		UE_LOG(LogAssimp, Error, TEXT("UAIMesh::GetMeshNormals - Mesh is null"));
		Normals.Reset();
		return;
	}
	EnsureNormalsCached();
	FScopeLock Lock(&CacheCriticalSection);
	Normals = CachedNormals;
}

void UAIMesh::GetMeshDataForProceduralMesh(TArray<FVector>& Vertices, TArray<int32>& Triangles,
                                           TArray<FVector>& Normals, TArray<FVector2D>& UV0,
                                           TArray<FProcMeshTangent>& Tangents)
{
	if (!this)
	{
		UE_LOG(LogAssimp, Fatal, TEXT("No Mesh"));
		return;
	}
	if (!Mesh)
	{
		UE_LOG(LogAssimp, Error, TEXT("UAIMesh::GetMeshDataForProceduralMesh - Mesh is null"));
		Vertices.Reset();
		Triangles.Reset();
		Normals.Reset();
		UV0.Reset();
		Tangents.Reset();
		return;
	}

	EnsureVerticesCached();
	EnsureNormalsCached();
	EnsureUVCached();
	EnsureTangentsCached();
	EnsureTrianglesCached();

	FScopeLock Lock(&CacheCriticalSection);
	Vertices = CachedVertices;
	Normals = CachedNormals;
	UV0 = CachedUV0;
	Triangles = CachedTriangles;
	Tangents = CachedTangents;
}

UStaticMesh* UAIMesh::GetStaticMesh()
{
	if (StaticMesh)
		return StaticMesh;

	if (!Mesh)
	{
		UE_LOG(LogAssimp, Error, TEXT("UAIMesh::GetStaticMesh - Mesh is null"));
		return nullptr;
	}

	FScopeLock Lock(&CacheCriticalSection);
	if (StaticMesh) 
		return StaticMesh;

	const unsigned NumVerts = Mesh->mNumVertices;
	const unsigned NumFaces = Mesh->mNumFaces;
	if (NumVerts == 0 || NumFaces == 0)
	{
		UE_LOG(LogAssimp, Warning, TEXT("UAIMesh::GetStaticMesh - empty mesh"));
		return nullptr;
	}

	// --- Local caches to minimize repeated Assimp reads ---
	TArray<FVector> LocalPositions; LocalPositions.SetNumUninitialized(NumVerts);
	TArray<FVector> LocalNormals; LocalNormals.SetNumUninitialized(NumVerts);
	TArray<FVector2D> LocalUV0; LocalUV0.SetNumUninitialized(NumVerts);

	const bool bHasNormals = (Mesh->mNormals != nullptr);
	const bool bHasUVs = Mesh->HasTextureCoords(0) && Mesh->mTextureCoords[0];

	for (unsigned i = 0; i < NumVerts; ++i)
	{
		LocalPositions[i] = aiVector3DToVector(Mesh->mVertices[i]);
		LocalNormals[i] = bHasNormals ? aiVector3DToVector(Mesh->mNormals[i]) : FVector::ZeroVector;
		LocalUV0[i] = bHasUVs ? FVector2D(Mesh->mTextureCoords[0][i].x, Mesh->mTextureCoords[0][i].y) : FVector2D::ZeroVector;
	}

	// --- Build index list (assume triangulated or take first 3 indices per face) ---
	TArray<int32> IndexList;
	IndexList.Reserve(NumFaces * 3);
	for (unsigned f = 0; f < NumFaces; ++f)
	{
		const aiFace& Face = Mesh->mFaces[f];
		if (Face.mNumIndices < 3) continue;
		IndexList.Add(static_cast<int32>(Face.mIndices[0]));
		IndexList.Add(static_cast<int32>(Face.mIndices[1]));
		IndexList.Add(static_cast<int32>(Face.mIndices[2]));
	}

	// --- Generate normals if missing ---
	bool bNormalsAvailable = bHasNormals;
	if (!bNormalsAvailable)
	{
		// accumulate face normals
		for (int32 k = 0; k < (int32)NumVerts; ++k) LocalNormals[k] = FVector::ZeroVector;

		const int32 TriCount = IndexList.Num() / 3;
		for (int32 t = 0; t < TriCount; ++t)
		{
			const int32 i0 = IndexList[t * 3 + 0];
			const int32 i1 = IndexList[t * 3 + 1];
			const int32 i2 = IndexList[t * 3 + 2];

			const FVector& p0 = LocalPositions[i0];
			const FVector& p1 = LocalPositions[i1];
			const FVector& p2 = LocalPositions[i2];

			const FVector FaceNormal = (p1 - p0).Cross(p2 - p0);
			LocalNormals[i0] += FaceNormal;
			LocalNormals[i1] += FaceNormal;
			LocalNormals[i2] += FaceNormal;
		}
		// normalize
		for (int32 k = 0; k < (int32)NumVerts; ++k)
		{
			if (!LocalNormals[k].IsNearlyZero())
			{
				LocalNormals[k].Normalize();
			}
			else
			{
				LocalNormals[k] = FVector::UpVector;
			}
		}
		bNormalsAvailable = true;
		UE_LOG(LogAssimp, Verbose, TEXT("UAIMesh::GetStaticMesh - generated normals"));
	}

	// --- Compute tangents accumulation if possible (we won't write them into MeshDescription on UE5.1) ---
	bool bTangentsAvailable = (Mesh->HasTangentsAndBitangents() && Mesh->mTangents != nullptr);
	if (!bTangentsAvailable && bHasUVs)
	{
		// We compute per-vertex tangent X accumulation for potential use (but allow engine to recompute tangents during Build)
		TArray<FVector> TanX; TanX.SetNumZeroed(NumVerts);
		TArray<FVector> TanY; TanY.SetNumZeroed(NumVerts);

		const int32 TriCount = IndexList.Num() / 3;
		for (int32 t = 0; t < TriCount; ++t)
		{
			const int32 i0 = IndexList[t * 3 + 0];
			const int32 i1 = IndexList[t * 3 + 1];
			const int32 i2 = IndexList[t * 3 + 2];

			const FVector& p0 = LocalPositions[i0];
			const FVector& p1 = LocalPositions[i1];
			const FVector& p2 = LocalPositions[i2];

			const FVector2D& uv0 = LocalUV0[i0];
			const FVector2D& uv1 = LocalUV0[i1];
			const FVector2D& uv2 = LocalUV0[i2];

			const FVector dp1 = p1 - p0;
			const FVector dp2 = p2 - p0;
			const FVector2D duv1 = uv1 - uv0;
			const FVector2D duv2 = uv2 - uv0;

			const float r = (duv1.X * duv2.Y - duv2.X * duv1.Y);
			if (FMath::IsNearlyZero(r))
				continue;

			const float invR = 1.0f / r;
			const FVector Tangent = (dp1 * duv2.Y - dp2 * duv1.Y) * invR;
			const FVector Bitangent = (dp2 * duv1.X - dp1 * duv2.X) * invR;

			TanX[i0] += Tangent; TanX[i1] += Tangent; TanX[i2] += Tangent;
			TanY[i0] += Bitangent; TanY[i1] += Bitangent; TanY[i2] += Bitangent;
		}

		// We could orthonormalize here and set tangents if MeshDescriptionBuilder supports it.
		// For UE5.1 we let the engine compute tangents based on normals+UVs during BuildFromMeshDescriptions.
		bTangentsAvailable = false; // keep false so engine computes tangents
		UE_LOG(LogAssimp, Verbose, TEXT("UAIMesh::GetStaticMesh - computed per-vertex tangent accumulators (engine will compute final tangents)"));
	}

	// --- Build MeshDescription with MeshDescBuilder (suspend indexing for performance) ---
	MeshDescription = UStaticMesh::CreateStaticMeshDescription(this);
	FMeshDescriptionBuilder StaticMeshDescBuilder;
	StaticMeshDescBuilder.SetMeshDescription(&MeshDescription->GetMeshDescription());
	StaticMeshDescBuilder.EnablePolyGroups();

	if (bHasUVs)
	{
		StaticMeshDescBuilder.SetNumUVLayers(1);
		StaticMeshDescBuilder.ReserveNewUVs(NumVerts, 0);
	}

	StaticMeshDescBuilder.ReserveNewVertices(NumVerts);
	StaticMeshDescBuilder.SuspendMeshDescriptionIndexing();

	// Append vertices & instances
	TArray<FVertexInstanceID> VertexInstances;
	VertexInstances.AddUninitialized(NumVerts);

	for (unsigned i = 0; i < NumVerts; ++i)
	{
		const FVertexID NewVertexID = StaticMeshDescBuilder.AppendVertex(LocalPositions[i]);
		const FVertexInstanceID NewInstanceID = StaticMeshDescBuilder.AppendInstance(NewVertexID);
		VertexInstances[i] = NewInstanceID;

		// Set instance normal (we guaranteed LocalNormals are available)
		StaticMeshDescBuilder.SetInstanceNormal(NewInstanceID, LocalNormals[i]);

		// Set UV if available
		if (bHasUVs)
		{
			StaticMeshDescBuilder.SetInstanceUV(NewInstanceID, LocalUV0[i], 0);
		}
	}

	// Single polygon group
	const FPolygonGroupID PolyGroup = StaticMeshDescBuilder.AppendPolygonGroup();

	// Append triangles
	for (unsigned f = 0; f < NumFaces; ++f)
	{
		const aiFace& Face = Mesh->mFaces[f];

		if (Face.mNumIndices < 3)
			continue;

		// Fan triangulation: (0, i-1, i)
		for (unsigned i = 2; i < Face.mNumIndices; ++i)
		{
			int32 i0 = Face.mIndices[0];
			int32 i1 = Face.mIndices[i - 1];
			int32 i2 = Face.mIndices[i];

			if (!VertexInstances.IsValidIndex(i0) ||
				!VertexInstances.IsValidIndex(i1) ||
				!VertexInstances.IsValidIndex(i2))
			{
				UE_LOG(LogAssimp, Warning,
					TEXT("Invalid index in polygon: %d, %d, %d"),
					i0, i1, i2);
				continue;
			}

			StaticMeshDescBuilder.AppendTriangle(
				VertexInstances[i0],
				VertexInstances[i1],
				VertexInstances[i2],
				PolyGroup
			);
		}
	}

	// Resume indexing (costly work performed in batch)
	StaticMeshDescBuilder.ResumeMeshDescriptionIndexing();

	// --- Create UStaticMesh and build from description ---
	StaticMesh = NewObject<UStaticMesh>(this);
	StaticMesh->GetStaticMaterials().Add(FStaticMaterial());

	UStaticMesh::FBuildMeshDescriptionsParams BuildParams;
	BuildParams.bBuildSimpleCollision = true;
	// Do NOT touch other BuildParams fields here to avoid UE5.1 compatibility issues;
	// the engine will compute tangents if they are not provided in MeshDescription.

	TArray<const FMeshDescription*> MeshDescriptions;
	MeshDescriptions.Emplace(&MeshDescription->GetMeshDescription());
	StaticMesh->BuildFromMeshDescriptions(MeshDescriptions, BuildParams);

	return StaticMesh;
}

UDynamicMesh* UAIMesh::GetDynamicMesh()
{
	if (DynamicMesh)
		return DynamicMesh;

	if (!Mesh)
	{
		UE_LOG(LogAssimp, Error, TEXT("UAIMesh::GetDynamicMesh - Mesh is null"));
		return nullptr;
	}

	FScopeLock Lock(&CacheCriticalSection);
	if (DynamicMesh)
		return DynamicMesh;

	DynamicMesh = NewObject<UDynamicMesh>();

	// Add vertices
	for (unsigned i = 0; i < Mesh->mNumVertices; ++i)
	{
		const FVector Vertex = aiVector3DToVector(Mesh->mVertices[i]);
		int NewVertexIndex = INDEX_NONE;
		UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(DynamicMesh, Vertex, NewVertexIndex);
	}

	// Add triangles and UVs
	for (unsigned f = 0; f < Mesh->mNumFaces; ++f)
	{
		const aiFace& Face = Mesh->mFaces[f];
		if (Face.mNumIndices > 2)
		{
			const FIntVector NewTri(Face.mIndices[0], Face.mIndices[1], Face.mIndices[2]);
			int NewTriIndex = INDEX_NONE;
			UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(DynamicMesh, NewTri, NewTriIndex);

			if (Mesh->HasTextureCoords(0) && Mesh->mTextureCoords[0])
			{
				FGeometryScriptUVTriangle UVTriangle;
				UVTriangle.UV0 = FVector2D(Mesh->mTextureCoords[0][NewTri.X].x, Mesh->mTextureCoords[0][NewTri.X].y);
				UVTriangle.UV1 = FVector2D(Mesh->mTextureCoords[0][NewTri.Y].x, Mesh->mTextureCoords[0][NewTri.Y].y);
				UVTriangle.UV2 = FVector2D(Mesh->mTextureCoords[0][NewTri.Z].x, Mesh->mTextureCoords[0][NewTri.Z].y);
				bool bIsValidTriangle = false;
				UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(DynamicMesh, 0, NewTriIndex, UVTriangle, bIsValidTriangle);
			}
		}
	}

	// Enable and set material ID
	UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(DynamicMesh);
	UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(DynamicMesh, 0, GetMaterialIndex());

	// TODO: compute normals or import them if available

	return DynamicMesh;
}


int UAIMesh::GetNumVertices()
{
	if (!Mesh)
	{
		UE_LOG(LogAssimp, Warning, TEXT("UAIMesh::GetNumVertices called but Mesh is null"));
		return 0;
	}
	return static_cast<int>(Mesh->mNumVertices);
}

void UAIMesh::GetAllBones(TArray<FAIBone>& Bones)
{
	Bones.Reset();
	if (!Mesh)
	{
		UE_LOG(LogAssimp, Warning, TEXT("UAIMesh::GetAllBones - Mesh is null"));
		return;
	}

	for (unsigned i = 0; i < Mesh->mNumBones; ++i)
	{
		Bones.Add(FAIBone(Mesh->mBones[i]));
	}
}

FString UAIMesh::GetMeshName() const
{
	if (!Mesh)
		return FString();
	return UTF8_TO_TCHAR(Mesh->mName.C_Str());
}

int UAIMesh::GetMaterialIndex()
{
	if (!Mesh)
		return 0;
	return Mesh->mMaterialIndex;
}

void UAIMesh::InvalidateCache()
{
	FScopeLock Lock(&CacheCriticalSection);
	CachedVertices.Reset();
	CachedNormals.Reset();
	CachedUV0.Reset();
	CachedTriangles.Reset();
	CachedTangents.Reset();

	bCachedVertices = bCachedNormals = bCachedUV0 = bCachedTriangles = bCachedTangents = false;


	StaticMesh = nullptr;
	MeshDescription = nullptr;
	DynamicMesh = nullptr;
}

void UAIMesh::EnsureVerticesCached()
{
	if (bCachedVertices || !Mesh)
		return;

	FScopeLock Lock(&CacheCriticalSection);
	if (bCachedVertices) 
		return;

	const unsigned NumVerts = Mesh->mNumVertices;
	CachedVertices.SetNumUninitialized(NumVerts);

	for (unsigned i = 0; i < NumVerts; ++i)
	{
		CachedVertices[i] = aiVector3DToVector(Mesh->mVertices[i]);
	}

	bCachedVertices = true;
}

void UAIMesh::EnsureNormalsCached()
{
	if (bCachedNormals || !Mesh)
		return;

	FScopeLock Lock(&CacheCriticalSection);
	if (bCachedNormals)
		return;

	const unsigned NumVerts = Mesh->mNumVertices;
	CachedNormals.SetNumUninitialized(NumVerts);

	if (Mesh->mNormals)
	{
		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedNormals[i] = aiVector3DToVector(Mesh->mNormals[i]);
		}
	}
	else
	{
		
		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedNormals[i] = FVector::ZeroVector;
		}
		UE_LOG(LogAssimp, Warning, TEXT("UAIMesh::EnsureNormalsCached - mesh has no normals"));
	}

	bCachedNormals = true;
}

void UAIMesh::EnsureUVCached()
{
	if (bCachedUV0 || !Mesh)
		return;

	FScopeLock Lock(&CacheCriticalSection);
	if (bCachedUV0)
		return;

	const unsigned NumVerts = Mesh->mNumVertices;
	CachedUV0.SetNumUninitialized(NumVerts);

	if (Mesh->HasTextureCoords(0) && Mesh->mTextureCoords[0])
	{
		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedUV0[i].X = Mesh->mTextureCoords[0][i].x;
			CachedUV0[i].Y = Mesh->mTextureCoords[0][i].y;
		}
	}
	else
	{
		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedUV0[i] = FVector2D::ZeroVector;
		}
	}

	bCachedUV0 = true;
}

void UAIMesh::EnsureTrianglesCached()
{
	if (bCachedTangents || !Mesh)
		return;

	FScopeLock Lock(&CacheCriticalSection);
	if (bCachedTangents)
		return;

	const unsigned NumVerts = Mesh->mNumVertices;
	CachedTangents.SetNumUninitialized(NumVerts);

	if (Mesh->HasTangentsAndBitangents() && Mesh->mTangents)
	{
		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedTangents[i].TangentX = aiVector3DToVector(Mesh->mTangents[i]);
			
		}
	}
	else
	{

		for (unsigned i = 0; i < NumVerts; ++i)
		{
			CachedTangents[i] = FProcMeshTangent();
		}
	}

	bCachedTangents = true;
}

void UAIMesh::EnsureTangentsCached()
{
	if (bCachedTriangles || !Mesh)
		return;

	FScopeLock Lock(&CacheCriticalSection);
	if (bCachedTriangles)
		return;

	SIZE_T TotalIndices = 0;
	for (unsigned f = 0; f < Mesh->mNumFaces; ++f)
	{
		TotalIndices += Mesh->mFaces[f].mNumIndices;
	}

	CachedTriangles.Reset();
	CachedTriangles.Reserve(TotalIndices);

	for (unsigned f = 0; f < Mesh->mNumFaces; ++f)
	{
		const aiFace& Face = Mesh->mFaces[f];
		for (unsigned idx = 0; idx < Face.mNumIndices; ++idx)
		{
			CachedTriangles.Add(static_cast<int32>(Face.mIndices[idx]));
		}
	}

	bCachedTriangles = true;
}

static bool HasValidNonDegenerateUV(const TArray<FVector2D>& UVs)
{
	if (UVs.Num() < 3)
	{
		return false;
	}

	const FVector2D First = UVs[0];
	for (int32 i = 1; i < UVs.Num(); ++i)
	{
		if (!UVs[i].Equals(First, KINDA_SMALL_NUMBER))
		{
			return true; 
		}
	}
	return false;
}

void UAIMesh::EnqueueBuildRaw()
{
	if (BuildState != EAIMeshBuildState::None) return;
	BuildState = EAIMeshBuildState::Enqueued;
}

void UAIMesh::BeginBuildStaticMesh_GT()
{
	check(IsInGameThread());
	if (BuildState != EAIMeshBuildState::RawReady)
		return;

	BuildState = EAIMeshBuildState::BuildVertices;
	VertexIndex = 0;
	TriangleIndex = 0;

	MeshDesc = FMeshDescription();
	FStaticMeshAttributes Attrs(MeshDesc);
	Attrs.Register();

	MeshDescBuilder.SetMeshDescription(&MeshDesc);
	MeshDescBuilder.EnablePolyGroups();
	const bool bEnableUV = CachedUV0.Num() == CachedVertices.Num() && HasValidNonDegenerateUV(CachedUV0);
	if (bEnableUV)
	{
		MeshDescBuilder.SetNumUVLayers(1);
	}

	InstanceQueue.Reset(CachedVertices.Num());
	PG = MeshDescBuilder.AppendPolygonGroup();
}

bool UAIMesh::TickBuildVertices_GT(int32 Batch)
{
	check(IsInGameThread());
	if (BuildState != EAIMeshBuildState::BuildVertices)
		return false;

	const int32 NumVerts = CachedVertices.Num();
	if (NumVerts == 0)
		return true;

	const bool bEnableUV = CachedUV0.Num() == NumVerts && HasValidNonDegenerateUV(CachedUV0);


	for (int32 Count = 0; Count < Batch && VertexIndex < NumVerts; ++Count, ++VertexIndex)
	{
		const FVertexID V = MeshDescBuilder.AppendVertex(CachedVertices[VertexIndex]);
		const FVertexInstanceID VI = MeshDescBuilder.AppendInstance(V);

		const FVector Normal = CachedNormals.IsValidIndex(VertexIndex) && !CachedNormals[VertexIndex].IsNearlyZero()
			? CachedNormals[VertexIndex].GetSafeNormal()
			: FVector::UpVector;
			MeshDescBuilder.SetInstanceNormal(VI, Normal);

			if (bEnableUV)
			{
				MeshDescBuilder.SetInstanceUV(VI, CachedUV0[VertexIndex], 0);
			}

			InstanceQueue.Add(VI);
	}

	return VertexIndex >= NumVerts;
}

bool UAIMesh::TickBuildTriangles_GT(int32 Batch)
{
	check(IsInGameThread());
	if (BuildState != EAIMeshBuildState::BuildTriangles)
		return false;

	const int32 TriCount = CachedTriangles.Num() / 3;
	for (int32 Count = 0; Count < Batch && TriangleIndex < TriCount; ++Count, ++TriangleIndex)
	{
		const int32 i0 = CachedTriangles[TriangleIndex * 3 + 0];
		const int32 i1 = CachedTriangles[TriangleIndex * 3 + 1];
		const int32 i2 = CachedTriangles[TriangleIndex * 3 + 2];

		if (!InstanceQueue.IsValidIndex(i0) ||
			!InstanceQueue.IsValidIndex(i1) ||
			!InstanceQueue.IsValidIndex(i2))
		{
			continue;
		}

		MeshDescBuilder.AppendTriangle(InstanceQueue[i0], InstanceQueue[i1], InstanceQueue[i2], PG);
	}

	return TriangleIndex >= TriCount;
}

void UAIMesh::FinalizeBuild_Build_GT()
{
	check(IsInGameThread());
	if (BuildState != EAIMeshBuildState::Finalize_Prepare)
		return;

	StaticMesh = NewObject<UStaticMesh>(this);
	StaticMesh->NeverStream = true;
	StaticMesh->SetIsBuiltAtRuntime(true);
	StaticMesh->bAllowCPUAccess = false;
	StaticMesh->bSupportRayTracing = false;
	StaticMesh->GetStaticMaterials().Add(FStaticMaterial());

	StaticMesh->SetNumSourceModels(1);

	const bool bEnableUV = CachedUV0.Num() == CachedVertices.Num() && HasValidNonDegenerateUV(CachedUV0);

	FStaticMeshSourceModel& SrcModel = StaticMesh->GetSourceModel(0);
	SrcModel.BuildSettings.bRecomputeNormals = false;
	SrcModel.BuildSettings.bRecomputeTangents = bEnableUV;
	SrcModel.BuildSettings.bUseMikkTSpace = bEnableUV;
	SrcModel.BuildSettings.bGenerateLightmapUVs = false;
	SrcModel.BuildSettings.bRemoveDegenerates = true;


	TArray<const FMeshDescription*> Meshes;
	Meshes.Add(&MeshDesc);


	UStaticMesh::FBuildMeshDescriptionsParams Params;
	Params.bFastBuild = true;
	Params.bBuildSimpleCollision = false;
	Params.bAllowCpuAccess = false;
	Params.bCommitMeshDescription = false;



	StaticMesh->BuildFromMeshDescriptions(Meshes, Params);

	BuildState = EAIMeshBuildState::Finalize_Init;
}

void UAIMesh::FinalizeBuild_Init_GT()
{
	check(IsInGameThread());
	if (BuildState != EAIMeshBuildState::Finalize_Init)
		return;

	FBox Bounds(ForceInit);
	for (const FVector& V : CachedVertices)
	{
		Bounds += V;
	}
	StaticMesh->SetExtendedBounds(FBoxSphereBounds(Bounds));

	StaticMesh->InitResources();

	BuildState = EAIMeshBuildState::Finalize_Collision;
}

void UAIMesh::FinalizeBuild_Collision_GT()
{
	check(IsInGameThread());
	check(BuildState == EAIMeshBuildState::Finalize_Collision);

	if (!StaticMesh->GetBodySetup())
	{
		StaticMesh->CreateBodySetup();
	}

	UBodySetup* BodySetup = StaticMesh->GetBodySetup();
	BodySetup->CollisionTraceFlag = CTF_UseComplexAsSimple;
	BodySetup->bDoubleSidedGeometry = true;

	BodySetup->InvalidatePhysicsData();
	BodySetup->CreatePhysicsMeshes();

	BuildState = EAIMeshBuildState::Ready;
	OnStaticMeshReady.Broadcast();


}


void UAIMesh::BuildRawMeshData()
{
	if (!Mesh) return;

	const unsigned NumVerts = Mesh->mNumVertices;
	const unsigned NumFaces = Mesh->mNumFaces;
	if (NumVerts == 0 || NumFaces == 0) return;

	CachedVertices.SetNumUninitialized(NumVerts);
	CachedNormals.SetNumUninitialized(NumVerts);
	CachedUV0.SetNumUninitialized(NumVerts);

	const bool bHasNormals = Mesh->mNormals != nullptr;
	const bool bHasUVs = Mesh->HasTextureCoords(0) && Mesh->mTextureCoords[0];

	for (unsigned i = 0; i < NumVerts; ++i)
	{
		CachedVertices[i] = FVector(Mesh->mVertices[i].x, Mesh->mVertices[i].y, Mesh->mVertices[i].z);
		CachedNormals[i] = bHasNormals ? FVector(Mesh->mNormals[i].x, Mesh->mNormals[i].y, Mesh->mNormals[i].z) : FVector::UpVector;
		CachedUV0[i] = bHasUVs ? FVector2D(Mesh->mTextureCoords[0][i].x, Mesh->mTextureCoords[0][i].y) : FVector2D::ZeroVector;
	}

	CachedTriangles.Reserve(NumFaces * 3);
	for (unsigned f = 0; f < NumFaces; ++f)
	{
		const aiFace& Face = Mesh->mFaces[f];
		if (Face.mNumIndices < 3) continue;
		CachedTriangles.Add(Face.mIndices[0]);
		CachedTriangles.Add(Face.mIndices[1]);
		CachedTriangles.Add(Face.mIndices[2]);
	}

	AsyncTask(ENamedThreads::GameThread, [WeakThis = TWeakObjectPtr<UAIMesh>(this)]()
		{
			if (!WeakThis.IsValid()) return;

			WeakThis->BuildState = EAIMeshBuildState::RawReady;
			WeakThis->OnRawMeshReady.Broadcast(WeakThis.Get());
		});

}

//void UAIMesh::BuildStaticMesh_GameThread()
//{
//	check(IsInGameThread());
//	//if (BuildState != EAIMeshBuildState::RawReady && BuildState != EAIMeshBuildState::Enqueued) return;
//
//	//BuildState = EAIMeshBuildState::Building;
//
//	const int32 NumVerts = CachedVertices.Num();
//	if (NumVerts == 0 || CachedTriangles.Num() < 3)
//	{
//		BuildState = EAIMeshBuildState::Ready;
//		return;
//	}
//
//	const bool bHasValidUV = CachedUV0.Num() == CachedVertices.Num() && HasNonDegenerateUV(CachedUV0);
//
//	FMeshDescription MeshDesc;
//	FStaticMeshAttributes Attrs(MeshDesc);
//	Attrs.Register();
//
//	FMeshDescriptionBuilder Builder;
//	Builder.SetMeshDescription(&MeshDesc);
//	Builder.EnablePolyGroups();
//	if (bHasValidUV)
//	{
//		Builder.SetNumUVLayers(1);
//	}
//
//	TArray<FVertexInstanceID> Instances;
//	Instances.SetNumUninitialized(NumVerts);
//
//	for (int32 i = 0; i < NumVerts; ++i)
//	{
//		const FVertexID V = Builder.AppendVertex(CachedVertices[i]);
//		const FVertexInstanceID VI = Builder.AppendInstance(V);
//
//		const FVector Normal = CachedNormals[i].IsNearlyZero()
//			? FVector::UpVector
//			: CachedNormals[i];
//
//		Builder.SetInstanceNormal(VI, Normal);
//
//		if (bHasValidUV)
//		{
//			Builder.SetInstanceUV(VI, CachedUV0[i], 0);
//		}
//
//		Instances[i] = VI;
//	}
//
//	const FPolygonGroupID PG = Builder.AppendPolygonGroup();
//
//	const int32 TriCount = CachedTriangles.Num() / 3;
//	for (int32 t = 0; t < TriCount; ++t)
//	{
//		const int32 i0 = CachedTriangles[t * 3 + 0];
//		const int32 i1 = CachedTriangles[t * 3 + 1];
//		const int32 i2 = CachedTriangles[t * 3 + 2];
//
//		if (!Instances.IsValidIndex(i0) ||
//			!Instances.IsValidIndex(i1) ||
//			!Instances.IsValidIndex(i2))
//		{
//			continue;
//		}
//
//		Builder.AppendTriangle(
//			Instances[i0],
//			Instances[i1],
//			Instances[i2],
//			PG
//		);
//	}
//
//	StaticMesh = NewObject<UStaticMesh>(this);
//	StaticMesh->GetStaticMaterials().Add(FStaticMaterial());
//
//	TArray<const FMeshDescription*> Meshes;
//	Meshes.Add(&MeshDesc);
//
//	UStaticMesh::FBuildMeshDescriptionsParams Params;
//	Params.bBuildSimpleCollision = false;
//
//	StaticMesh->BuildFromMeshDescriptions(Meshes, Params);
//
//	FStaticMeshSourceModel& SrcModel = StaticMesh->GetSourceModel(0);
//
//	SrcModel.BuildSettings.bRecomputeNormals = false;
//	SrcModel.BuildSettings.bRecomputeTangents = bHasValidUV;
//	SrcModel.BuildSettings.bUseMikkTSpace = bHasValidUV;
//	SrcModel.BuildSettings.bRemoveDegenerates = true;
//
//	StaticMesh->CommitMeshDescription(0);
//	StaticMesh->Build(false);
//
//
//	BuildState = EAIMeshBuildState::Ready;
//	OnStaticMeshReady.Broadcast();
//}

