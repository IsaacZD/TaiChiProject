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
	 FString s=  FPaths::Combine(*FPaths::GameSavedDir(), TEXT("Demos/Replay_2018-5-6-20-5/Replay_2018-5-6-20-5.demo"));
	 FString x = FPaths::Combine(AbsoluteDestinationPath, TEXT("/Replay_2018-5-6-20.demo"));
	 PlatformFile.MoveFile(*AbsoluteDestinationPath, *AbsoluteSourcePath);
	 return oldName1;
 }