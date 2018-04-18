// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "BoneMappingInfo.h"

#include "AnimNode_NewPoseCalc.generated.h"


USTRUCT()
struct FNamesContainer
{
	GENERATED_USTRUCT_BODY()

	FORCEINLINE FNamesContainer() {}
	FORCEINLINE FNamesContainer(FNamesContainer&& Other) : Names(MoveTemp(Other.Names)) {}
	FORCEINLINE FNamesContainer(const FNamesContainer& Other) : Names(Other.Names) {}
	FORCEINLINE FNamesContainer& operator=(FNamesContainer&& Other) { Names = MoveTemp(Other.Names); return *this; }
	FORCEINLINE FNamesContainer& operator=(const FNamesContainer& Other) { Names = Other.Names; return *this; }

	UPROPERTY()
	TArray<FName> Names;
};

USTRUCT()
struct FPNMultiMap
{
	GENERATED_USTRUCT_BODY()

public:
	FORCEINLINE FPNMultiMap() {}
	FORCEINLINE FPNMultiMap(FPNMultiMap&& Other) : InterMap(MoveTemp(Other.InterMap)) {}
	FORCEINLINE FPNMultiMap(const FPNMultiMap& Other) : InterMap(Other.InterMap) {}
	FORCEINLINE FPNMultiMap& operator=(FPNMultiMap&& Other) { InterMap = MoveTemp(Other.InterMap); return *this; }
	FORCEINLINE FPNMultiMap& operator=(const FPNMultiMap& Other) { InterMap = Other.InterMap; return *this; }

	FORCEINLINE void Empty(int32 ExpectedNumElements = 0)
	{
		InterMap.Empty(ExpectedNumElements);
	}

	FORCEINLINE bool Contains(TEnumAsByte<EPNBones::Type> InKey) const
	{
		return InterMap.Contains(InKey);
	}

	FORCEINLINE void AddUnique(const TEnumAsByte<EPNBones::Type>& InKey, const FName& InValue)
	{
		InterMap.FindOrAdd(InKey).Names.AddUnique(InValue);
	}

	FORCEINLINE void MultiFind(TEnumAsByte<EPNBones::Type> InKey, TArray<FName>& OutValues) const
	{
		if (!InterMap.Contains(InKey))
		{
			return;
		}
		OutValues = InterMap[InKey].Names;
	}

	FORCEINLINE int32 Remove(TEnumAsByte<EPNBones::Type> InKey, const FName& InValue)
	{
		if (InterMap.Contains(InKey))
		{
			TArray<FName>& Names = InterMap[InKey].Names;
			int32 RemNum = Names.Remove(InValue);
			if (0 == Names.Num())
			{
				InterMap.Remove(InKey);
			}
			return RemNum;
		}
		return 0;
	}

	FORCEINLINE int32 Num(TEnumAsByte<EPNBones::Type> InKey) const
	{
		if (InterMap.Contains(InKey))
		{
			return InterMap[InKey].Names.Num();
		}
		return 0;
	}

	FORCEINLINE int32 Num() const
	{
		return InterMap.Num();
	}

private:
	UPROPERTY()
	TMap<TEnumAsByte<EPNBones::Type>, FNamesContainer> InterMap;
};


USTRUCT(BlueprintType)
struct PERCEPTIONNEURONRUNTIME_API FAnimationNode_NewPoseCalc : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

public:
	FAnimationNode_NewPoseCalc();

	// FAnimNode_Base interface
	virtual void Initialize(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones(const FAnimationCacheBonesContext& Context) override;
	virtual void Update(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate(FPoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

#if WITH_EDITOR
	bool InitBoneMap();
	void SetTargetSkeleton(const USkeleton* Skeleton);
	void ValueSet_Name(int32 ChangeAtIndex);
	void ValueSet_ID(int32 ChangeAtIndex);
	void Add_BoneMap(int32 AddAtIndex);
	void Del_BoneMap();
	void Revert_BoneMap();
#endif

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkeletonsRetargeting", meta = (NeverAsPin))
		TArray<FBoneMappingInfo> BoneMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkeletonsRetargeting", meta = (NeverAsPin))
		FString SkeletonNamePrefix;
protected:
	UPROPERTY()
	FPNMultiMap BoneID2NameMap;

	UPROPERTY()
	TMap<FName, int32> BoneName2BoneMapIndex;

	UPROPERTY()
	TArray<FBoneMappingInfo> BoneMap_Copy;

	UPROPERTY()
	bool bHaveInit = false;

	UPROPERTY()
	TArray<FQuat> WorldRotations;

	UPROPERTY()
	TArray<FVector> WorldPositions;

protected:
	double BVHFramePointer = 0.0;
	const USkeleton* TargetSkeleton = nullptr;

	static FQuat StandardAxis;
};
