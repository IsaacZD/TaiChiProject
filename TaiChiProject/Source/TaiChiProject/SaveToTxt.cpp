// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveToTxt.h"
#include <string>
//Change the above to YourGameName.h, 
//the same line you see in all your .cpp files

//////////////////////////////////////////////////////////////////////////
// UVictoryBPFunctionLibrary
bool USaveToTxt::FileSaveString(FString SaveTextB, FString FileNameB)
 {
     return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
 }
 
 bool USaveToTxt::FileLoadString(FString FileNameA, FString& SaveTextA)
 {
     return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));

 }
 FString USaveToTxt::StringAdd(FString OldString, FString AddString)
 {
	 
	 std::string lineBreak = "\n";
	 FString temp(lineBreak.c_str());
	 OldString += AddString;
	 return OldString;

 }