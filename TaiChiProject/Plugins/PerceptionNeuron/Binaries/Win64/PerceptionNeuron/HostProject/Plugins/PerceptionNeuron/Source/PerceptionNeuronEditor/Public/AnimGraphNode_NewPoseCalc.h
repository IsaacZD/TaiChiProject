// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "AnimGraphNode_Base.h"
#include "AnimNode_NewPoseCalc.h"

#include "AnimGraphNode_NewPoseCalc.generated.h"


UCLASS(MinimalAPI)
class UAnimGraphNode_NewPoseCalc : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category=Settings)
	FAnimationNode_NewPoseCalc Node;

	// Begin UEdGraphNode interface.
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	// End UEdGraphNode interface.

	// UAnimGraphNode_Base interface
	virtual FString GetNodeCategory() const override;
	virtual void PreloadRequiredAssets() override;
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// End of UAnimGraphNode_Base interface

	// Begin UObject Interface
	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent) override;
	// End UObject Interface

private:
	UPROPERTY()
	bool bHasInit = false;

	USkeleton* TargetSkeleton = nullptr;
};
