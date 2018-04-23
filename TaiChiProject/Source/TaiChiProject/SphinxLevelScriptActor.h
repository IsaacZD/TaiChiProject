// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpeechRecognition.h"
#include "SpeechRecognitionActor.h"
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SphinxLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class TAICHIPROJECT_API ASphinxLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:
	ASphinxLevelScriptActor();

public:
	UPROPERTY(BlueprintReadOnly)
	class ASpeechRecognitionActor* speechActor;
	
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

	UFUNCTION()
	void OnWordSpoken(FRecognisedPhrases phrases);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Word Spoken"))
	void OnWordSpokenImpl(const FRecognisedPhrases &phrases);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Init Word List"))
	void InitWordList();

};
