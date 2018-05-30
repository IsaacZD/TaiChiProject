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
 bool USaveToTxt::CreateDirectory() 
 {
	 FString Dir = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay"));
	 IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	 if (!PlatformFile.DirectoryExists(*Dir))
	 {
		 PlatformFile.CreateDirectory(*Dir);

		 if (!PlatformFile.DirectoryExists(*Dir))
		 {
			 return false;
			 //~~~~~~~~~~~~~~
		 }
	 }
	 return true;
 }
 FString USaveToTxt::CopyDirectory(FString oldPath)
 {
	 FString AbsoluteSourcePath = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/"));
	 AbsoluteSourcePath = FPaths::Combine(AbsoluteSourcePath, oldPath);
	 FString AbsoluteDestinationPath = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay"));
	 /*if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*AbsoluteSourcePath))
	 {
		 
		 return;
	 }

	 if (!FPlatformFileManager::Get().GetPlatformFile().MoveFile(*AbsoluteDestinationPath, *AbsoluteSourcePath))
	 {
		
	 }*/
	 IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	 PlatformFile.CopyDirectoryTree(*AbsoluteDestinationPath, *AbsoluteSourcePath, true);
	 FString oldName = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/"));
	 oldName = FPaths::Combine(oldName, oldPath);
	 FString temp = oldPath + ".demo";
	 FString oldName1 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/"), temp);
	 temp = oldPath + ".header";
	 FString oldName2 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/"), temp);
	 temp = oldPath + ".replayinfo";
	 FString oldName3 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/"), temp);
	 temp = oldPath + ".final";
	 FString oldName4 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/"), temp);

	 FString newName = FPaths::Combine(AbsoluteDestinationPath, TEXT("/newReplay"));
	 FString newName1 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/newReplay.demo"));
	 FString newName2 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/newReplay.header"));
	 FString newName3 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/newReplay.replayinfo"));
	 FString newName4 = FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/newReplay/newReplay.final"));
	 
	 PlatformFile.MoveFile(*newName1, *oldName1);
	 PlatformFile.MoveFile(*newName2, *oldName2);
	 PlatformFile.MoveFile(*newName3, *oldName3);
	 PlatformFile.MoveFile(*newName4, *oldName4);
	 PlatformFile.MoveFile(*AbsoluteDestinationPath, *AbsoluteSourcePath);
	 return oldName1;
 }

TArray<FVector> USaveToTxt::LoadRecordData(FString name)
{
	TArray<uint8> binaryArray;
	TArray<FVector> rv;
	if (!FFileHelper::LoadFileToArray(binaryArray, *(FPaths::ProjectContentDir() + name)))
	{
		FString str = FString::Printf(TEXT("--- LoadFileToArray Fail"));
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, str);
		return rv;
	}

	FString str = FString::Printf(TEXT("--- Loaded File Size:%d"), binaryArray.Num());
	GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, str);

	if (binaryArray.Num() <= 0)
		return rv;

	FMemoryReader fromBinary = FMemoryReader(binaryArray, true);
	fromBinary.Seek(0);

	fromBinary << rv;

	fromBinary.FlushCache();
	fromBinary.Close();
	return rv;
}

bool USaveToTxt::DumpRecordData(FString name, TArray<FVector> data)
{
	FBufferArchive toBinary;
	toBinary << data;

	FString str;

	if (toBinary.Num() <= 0)
	{
		str = FString::Printf(TEXT("--- num < 0"));
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, str);

		return false;
	}

	if (FFileHelper::SaveArrayToFile(toBinary, *(FPaths::ProjectContentDir() + name)))
	{
		toBinary.FlushCache();
		toBinary.Empty();

		//str = FString::Printf(TEXT("--- save success"));
		//GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, str);
		return true;
	}

	str = FString::Printf(TEXT("--- save fail"));
	GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, str);
	toBinary.FlushCache();
	toBinary.Empty();
	return false;
}
