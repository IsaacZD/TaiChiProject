// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "BVHAsset.generated.h"


/**
* Implements a BVH file asset that contains animation data for Perception Neuron to use.
*/
UCLASS(ClassGroup = PerceptionNeuron, Blueprintable, BlueprintType, MinimalAPI)
class UBVHAsset : public UObject
{
	GENERATED_BODY()

public:
	UBVHAsset(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer),
		bUseRootEffect(false),
		bWithDisplacement(false),
		BoneTotalNumber(-1),
		Frames(-1),
		FrameTime(.0f),
		BVHFilePath(TEXT("")),
		FrameDataOffset(-1),
		bLoaded(false)
	{
	}

	// Begin UObject Interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UBVHAsset, BVHFilePath))
		{
			if (FString(TEXT("")) != BVHFilePath)
			{
				ReLoad();
			}
		}

		Super::PostEditChangeProperty(PropertyChangedEvent);
	}
#endif

	virtual void PostLoad() override
	{
		Super::PostLoad();

		if (!bLoaded)
		{
			Load();
		}
	}

	virtual SIZE_T GetResourceSize(EResourceSizeMode::Type Mode) override
	{
		uint32 ResSize = 0;
		for (const FString& Data : AnimData)
		{
			ResSize += Data.GetAllocatedSize();
		}
		return GetTypeSize() + AnimData.GetAllocatedSize() + ResSize;
	}
	// End UObject Interface

	virtual uint32 GetTypeSize() const
	{
		return sizeof(*this);
	}

	UFUNCTION(BlueprintCallable, Category = "PerceptionNeuron", meta = (DisplayName = "Load"))
	bool Load()
	{
		FString FullBVHFilePath = BVHFilePath;
		if (FPaths::IsRelative(FullBVHFilePath))
		{
			FullBVHFilePath = FPaths::ConvertRelativePathToFull(FPaths::GameContentDir(), BVHFilePath);
		}
		
		if (!FFileHelper::LoadANSITextFileToStrings(*FullBVHFilePath, NULL, AnimData))
		{
			return false;
		}

		if (!PrepareBVHData())
		{
			return false;
		}

		bLoaded = true;
		return bLoaded;
	}

	UFUNCTION(BlueprintCallable, Category = "PerceptionNeuron", meta = (DisplayName = "ReLoad"))
	bool ReLoad()
	{
		Reset();
		return Load();
	}

	UFUNCTION(BlueprintCallable, Category = "PerceptionNeuron", meta = (DisplayName = "Is Loaded"))
	bool IsLoaded()
	{
		return bLoaded;
	}

	UFUNCTION(BlueprintCallable, Category = "PerceptionNeuron", meta = (DisplayName = "Get BVH File Path"))
	FString GetBVHFilePath() const
	{
		return BVHFilePath;
	}


	/** Reference. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bone", meta = (DisplayName = "Use Root Effect"))
	bool bUseRootEffect;

	/** Displacement. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bone", meta = (DisplayName = "With Displacement"))
	bool bWithDisplacement;

	/** Total number of Bones. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bone", meta = (DisplayName = "Bone Total Number"))
	int32 BoneTotalNumber;

	/** Total number of frames. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation", meta = (DisplayName = "Frames"))
	int32 Frames;

	/** Frame step time. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "Frame Time"))
	float FrameTime;

	/** The path of a BVH file locate in. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "File", meta = (DisplayName = "BVH File"))
	FString BVHFilePath;

	UPROPERTY()
	TArray<FString> AnimData;

	UPROPERTY()
	int32 FrameDataOffset;

private:
	bool PrepareBVHData()
	{
		bool bToggle = false;
		bool bJoint = false;
		int32 BoneCount = 0;
		for (int32 i = 0; i < AnimData.Num(); i++)
		{
			AnimData[i].Trim();

			if (AnimData[i].StartsWith(TEXT("JOINT"), ESearchCase::IgnoreCase))
			{
				bJoint = true;
			}
			else if (AnimData[i].StartsWith(TEXT("CHANNELS"), ESearchCase::IgnoreCase))
			{
				if (bJoint && !bToggle)
				{
					TArray<FString> Words;
					if (AnimData[i].ParseIntoArray(Words, TEXT(" "), false) >= 8)
					{
						bWithDisplacement = true;
					}
					else // == 5
					{
						bWithDisplacement = false;
					}
					bToggle = true;
				}

				++BoneCount;
			}
			else if (AnimData[i].StartsWith(TEXT("Frames:"), ESearchCase::IgnoreCase) == true)
			{
				TArray<FString> Words;
				if (AnimData[i].ParseIntoArray(Words, TEXT(" "), false) >= 2)
				{
					Frames = FCString::Atoi(*Words[1]);
				}
			}
			else if (AnimData[i].StartsWith(TEXT("Frame Time:"), ESearchCase::IgnoreCase) == true)
			{
				TArray<FString> Words;
				if (AnimData[i].ParseIntoArray(Words, TEXT(" "), false) >= 2)
				{
					FrameTime = FCString::Atof(*Words[2]);
					if (FrameTime == 0)
					{
						FrameTime = 0.010f;
					}
				}

				FrameDataOffset = i + 1;
				break;
			}
		}
		BoneTotalNumber = BoneCount;

		if ((0 >= BoneTotalNumber) || (0 >= Frames))
		{
			return false;
		}

		return true;
	}

	void Reset()
	{
		bUseRootEffect = false;
		bWithDisplacement = false;
		BoneTotalNumber = -1;
		Frames = -1;
		FrameTime = .0f;
		//BVHFilePath.Empty();
		AnimData.Empty();
		FrameDataOffset = -1;
		bLoaded = false;
	}


	UPROPERTY()
	bool bLoaded;
};
