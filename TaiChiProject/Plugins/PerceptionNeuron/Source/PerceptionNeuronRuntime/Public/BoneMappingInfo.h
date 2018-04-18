// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "BoneLists.h"
#include "BoneMappingInfo.generated.h"


USTRUCT(BlueprintType)
struct PERCEPTIONNEURONRUNTIME_API FBoneMappingInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PerceptionNeuron")
	TEnumAsByte<EPNBones::Type> PNID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PerceptionNeuron")
	FName CTName;

	FBoneMappingInfo();

	FBoneMappingInfo(EPNBones::Type InPNID, const FName& InCTName);

};


FORCEINLINE bool operator==(const FBoneMappingInfo& Left, const FBoneMappingInfo& Right)
{
	return (Left.PNID == Right.PNID) && (Left.CTName == Right.CTName);
}

FORCEINLINE bool operator!=(const FBoneMappingInfo& Left, const FBoneMappingInfo& Right)
{
	return !(Left == Right);
}
