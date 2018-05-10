// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JudgeActor.generated.h"

UCLASS()
class TAICHIPROJECT_API AJudgeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJudgeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable)
	float DTWDistance(TArray<FVector> A, TArray<FVector> B, int sizeA, int sizeB, int r);
	
};
