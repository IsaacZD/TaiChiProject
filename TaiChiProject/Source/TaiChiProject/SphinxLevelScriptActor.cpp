// Fill out your copyright notice in the Description page of Project Settings.

#include "SphinxLevelScriptActor.h"
#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Cyan, text)

ASphinxLevelScriptActor::ASphinxLevelScriptActor():
	ALevelScriptActor(),
	speechActor(nullptr)
{ 
	PrimaryActorTick.bCanEverTick = true;
}


void ASphinxLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	FVector location(0.f, 0.f, 0.f);
	FRotator rotation(0.f, 0.f, 0.f);
	FActorSpawnParameters spawnInfo;
	speechActor = GetWorld()->SpawnActor<ASpeechRecognitionActor>(location, rotation, spawnInfo);

	speechActor->OnWordsSpoken.AddDynamic(this, &ASphinxLevelScriptActor::OnWordSpoken);

	bool result = speechActor->Init(ESpeechRecognitionLanguage::VE_Chinese);
	if (result)
	{
		print("ASphinxLevelScriptActor:Init success");

		speechActor->SetConfigParam("-vad_prespeech", ESpeechRecognitionParamType::VE_INTEGER, "10");
		speechActor->SetConfigParam("-vad_postspeech", ESpeechRecognitionParamType::VE_INTEGER, "10");
		speechActor->SetConfigParam("-agc", ESpeechRecognitionParamType::VE_STRING, "noise");
		speechActor->SetConfigParam("-beam", ESpeechRecognitionParamType::VE_FLOAT, "1e-60");

		InitWordList();
	}
	else
	{
		print("ASphinxLevelScripActor:Init failure");
	}
}

void ASphinxLevelScriptActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	speechActor->Shutdown();
}

void ASphinxLevelScriptActor::OnWordSpoken(FRecognisedPhrases phrases)
{
	OnWordSpokenImpl(phrases);
}
