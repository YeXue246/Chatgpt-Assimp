// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "assimp/scene.h"
#include "AIScene.generated.h"


/**
 * 
 */
class UAIMesh;
class UAINode;
class UAICamera;
class UAILight;
class UAIMaterial;
class UTexture2D;
class UMeshComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FAISceneBuildFinished, UAIScene*);

UENUM()
enum class EAISceneBuildPhase : uint8
{
	None,
	Meshes,
	Cameras,
	Lights,
	Materials,
	Nodes,
	Finished
};

struct FAINodeBuildItem
{
	aiNode* AssimpNode = nullptr;
	UAINode* UNode = nullptr;
	aiMatrix4x4 ParentTransform;
};



//wrapper for scene
UCLASS(BlueprintType, DefaultToInstanced)
class UE_ASSIMP_API UAIScene : public UObject
{
	GENERATED_BODY()

	//TODO Get Meta data 
public:
	static UAIScene* InternalConstructNewScene(const aiScene* Scene, const bool DisableAutoSpaceChange);

	static UAIScene* InternalConstructNewScene_A(UObject* WorldContextObject, const aiScene* Scene, const bool DisableAutoSpaceChange, 
		int32 MaxMeshesVal = 1, int32 MaxCamerasVal = 1, int32 MaxLightsVal = 1, int32 MaxMaterialsVal = 1, int32 MaxNodesVal = 1, float HandleTime = 1.0f / 60.0f);


	void StartTimer();


	/*WIP Function:
	WIll spawn all meshes in most optimised fashion 
	*/
	UFUNCTION(BlueprintCallable, Category="Assimp|Scene")
	TArray<UMeshComponent*> SpawnAllMeshes(FTransform Transform, TSubclassOf<AActor> ClassToSpawn);
	/*Get All meshes stored in this scene
	* note that each material section is considered a  separate mesh 
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	const TArray<UAIMesh*>& GetAllMeshes() const;


	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	const TArray<UAIMaterial*>& GetAllMaterials() const;
	/** The root node of the hierarchy.
	*
	* There will always be at least the root node if the import
	* was successful (and no special flags have been set).
	* Presence of further nodes depends on the format and content
	* of the imported file.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	UAINode* GetRootNode();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	UAIMesh* GetMeshAtIndex(int Index);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	const TArray<UAICamera*>& GetAllCameras() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	const TArray<UAILight*>& GetAllLights() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	float GetUnitScaleFactor();

	void SetBuildVal(int32 MaxMeshes,int32 MaxCameras,int32 MaxLights,int32 MaxMaterials,int32 MaxNodes,float HandleTime);

	//Texture
	//! Returns an embedded texture. if null then check path or texture is not embedded and must be imported using unreal default import texture function
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Assimp|Scene")
	UTexture2D* GetEmbeddedTexture(FString FilePath, bool bIsNormalMap);
	UPROPERTY(BlueprintReadOnly)
	FString FullFilePath;
	UFUNCTION(BlueprintCallable,BlueprintPure)
	float GetSceneScale();

	void TickBuild();

	static EPixelFormat GetPixelFormat(const aiTexture* Texture);

protected:
	virtual void BeginDestroy() override;

private:

	UWorld* OwnerWorld = nullptr;

	float SceneScale = 1.0f;

	TArray<aiNode*> PendingAssimpNodes;
	TArray<UAINode*> PendingUANodes;

	aiMatrix4x4 AdjustmentXfm;

	FTimerHandle BuildTimer;

	bool bNodesPhaseInitialized = false;

	bool bBuildFinished = false;

public:
	//For Object Creation
	UPROPERTY(Transient)
	TArray<UAIMesh*> OwnedMeshes;
	UPROPERTY(Transient)
	UAINode* OwnedRootNode = nullptr;
	UPROPERTY(Transient)
	TArray<UAICamera*> OwnedCameras;
	UPROPERTY(Transient)
	TArray<UAILight*> OwnedLights;
	UPROPERTY(Transient)
	TArray<UAIMaterial*> OwnedMaterials;
	aiScene* scene = nullptr;

	const aiScene* SourceScene = nullptr;

	UPROPERTY()
	EAISceneBuildPhase BuildPhase = EAISceneBuildPhase::None;

	UPROPERTY()
	uint32  BuildIndex = 0;

	UPROPERTY(EditAnywhere)
	int32 BuildBatchSize = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	int32 MaxMeshesPerFrame = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	int32 MaxCamerasPerFrame = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	int32 MaxLightsPerFrame = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	int32 MaxMaterialsPerFrame = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	int32 MaxNodesPerFrame = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build")
	float LoopBuildHandleTime = 1.0f / 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assimp Build", meta = (ClampMin = "0.1", UIMin = "0.1", UIMax = "8.0"))
	float MaxBuildTimeMsPerTick = 2.0f;

	TArray<FAINodeBuildItem> PendingNodeBuildQueue;

	FAISceneBuildFinished OnBuildFinished;

	void NotifyBuildFinished();

private:
	bool StepBuildMeshes();
	bool StepBuildCameras();
	bool StepBuildLights();
	bool StepBuildMaterials();
	void BeginBuildNodeTree(aiNode* RootNode, const aiMatrix4x4& RootTransform);
	void InitNodesPhase();
	bool StepBuildNodes();

	void FinishBuild();


};


