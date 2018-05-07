// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine.h"
#include "SaveToTxt.generated.h"

/**
 * 
 */
UCLASS()
class  USaveToTxt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Save")
	static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "Save")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	UFUNCTION(BlueprintPure, Category = "Save")
		static FString StringAdd(FString OldString, FString AddString);
	UFUNCTION(BlueprintCallable, Category = "Save")
		static bool CreateDirectory() ;
	UFUNCTION(BlueprintCallable, Category = "Save")
		static FString CopyDirectory(FString oldPath);
};
