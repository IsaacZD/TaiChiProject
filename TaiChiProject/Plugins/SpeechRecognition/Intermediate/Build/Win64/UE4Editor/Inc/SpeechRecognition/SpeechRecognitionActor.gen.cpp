// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpeechRecognition.h"
#include "Public/SpeechRecognitionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionActor() {}
// Cross Module References
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionActor_NoRegister();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableGrammarMode();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableKeywordMode();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableLanguageModel();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_GetCurrentVolume();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_Init();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_SetConfigParam();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_Shutdown();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_StartedSpeaking_method();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_StoppedSpeaking_method();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_UnknownPhrase_method();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_WordsSpoken_method();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, "UnknownPhraseSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature()
	{
		struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
		{
			FRecognisedPhrases Text;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Struct, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms, Text), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, "WordsSpokenSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, "StoppedSpeakingSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, "StartedSpeakingSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void ASpeechRecognitionActor::StaticRegisterNativesASpeechRecognitionActor()
	{
		UClass* Class = ASpeechRecognitionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableGrammarMode", (Native)&ASpeechRecognitionActor::execEnableGrammarMode },
			{ "EnableKeywordMode", (Native)&ASpeechRecognitionActor::execEnableKeywordMode },
			{ "EnableLanguageModel", (Native)&ASpeechRecognitionActor::execEnableLanguageModel },
			{ "GetCurrentVolume", (Native)&ASpeechRecognitionActor::execGetCurrentVolume },
			{ "Init", (Native)&ASpeechRecognitionActor::execInit },
			{ "SetConfigParam", (Native)&ASpeechRecognitionActor::execSetConfigParam },
			{ "Shutdown", (Native)&ASpeechRecognitionActor::execShutdown },
			{ "StartedSpeaking_method", (Native)&ASpeechRecognitionActor::execStartedSpeaking_method },
			{ "StoppedSpeaking_method", (Native)&ASpeechRecognitionActor::execStoppedSpeaking_method },
			{ "UnknownPhrase_method", (Native)&ASpeechRecognitionActor::execUnknownPhrase_method },
			{ "WordsSpoken_method", (Native)&ASpeechRecognitionActor::execWordsSpoken_method },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableGrammarMode()
	{
		struct SpeechRecognitionActor_eventEnableGrammarMode_Parms
		{
			FString grammarName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventEnableGrammarMode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventEnableGrammarMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_grammarName = { UE4CodeGen_Private::EPropertyClass::Str, "grammarName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventEnableGrammarMode_Parms, grammarName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_grammarName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Enable Grammar Mode" },
				{ "Keywords", "Speech Recognition Mode" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "EnableGrammarMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventEnableGrammarMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableKeywordMode()
	{
		struct SpeechRecognitionActor_eventEnableKeywordMode_Parms
		{
			TArray<FRecognitionPhrase> wordList;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventEnableKeywordMode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventEnableKeywordMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_wordList = { UE4CodeGen_Private::EPropertyClass::Array, "wordList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventEnableKeywordMode_Parms, wordList), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_wordList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "wordList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_wordList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_wordList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Enable Keyword Mode" },
				{ "Keywords", "Speech Recognition Mode" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
				{ "ToolTip", "Methods to switch recognition modes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "EnableKeywordMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventEnableKeywordMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_EnableLanguageModel()
	{
		struct SpeechRecognitionActor_eventEnableLanguageModel_Parms
		{
			FString languageModel;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventEnableLanguageModel_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventEnableLanguageModel_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_languageModel = { UE4CodeGen_Private::EPropertyClass::Str, "languageModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventEnableLanguageModel_Parms, languageModel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_languageModel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Enable Language Model Mode" },
				{ "Keywords", "Speech Recognition Mode" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "EnableLanguageModel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventEnableLanguageModel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_GetCurrentVolume()
	{
		struct SpeechRecognitionActor_eventGetCurrentVolume_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventGetCurrentVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "GetCurrentVolume" },
				{ "Keywords", "Speech Recognition Volume" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
				{ "ToolTip", "Basic functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "GetCurrentVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventGetCurrentVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_Init()
	{
		struct SpeechRecognitionActor_eventInit_Parms
		{
			ESpeechRecognitionLanguage language;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventInit_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventInit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_language = { UE4CodeGen_Private::EPropertyClass::Enum, "language", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventInit_Parms, language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_language_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_language,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_language_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Init" },
				{ "Keywords", "Speech Recognition Init" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventInit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_SetConfigParam()
	{
		struct SpeechRecognitionActor_eventSetConfigParam_Parms
		{
			FString param;
			ESpeechRecognitionParamType type;
			FString value;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventSetConfigParam_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventSetConfigParam_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventSetConfigParam_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventSetConfigParam_Parms, type), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_param = { UE4CodeGen_Private::EPropertyClass::Str, "param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventSetConfigParam_Parms, param), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_param,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "SetConfigParam" },
				{ "Keywords", "Speech Recognition Set Config Param" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "SetConfigParam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventSetConfigParam_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_Shutdown()
	{
		struct SpeechRecognitionActor_eventShutdown_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SpeechRecognitionActor_eventShutdown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SpeechRecognitionActor_eventShutdown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Shutdown" },
				{ "Keywords", "Speech Recognition Shutdown" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "Shutdown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpeechRecognitionActor_eventShutdown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_StartedSpeaking_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "StartedSpeaking_method", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_StoppedSpeaking_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "StoppedSpeaking_method", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_UnknownPhrase_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "UnknownPhrase_method", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpeechRecognitionActor_WordsSpoken_method()
	{
		struct SpeechRecognitionActor_eventWordsSpoken_method_Parms
		{
			FRecognisedPhrases phrases;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_phrases = { UE4CodeGen_Private::EPropertyClass::Struct, "phrases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpeechRecognitionActor_eventWordsSpoken_method_Parms, phrases), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_phrases,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
				{ "ToolTip", "Callback events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionActor, "WordsSpoken_method", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SpeechRecognitionActor_eventWordsSpoken_method_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpeechRecognitionActor_NoRegister()
	{
		return ASpeechRecognitionActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpeechRecognitionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_EnableGrammarMode, "EnableGrammarMode" }, // 946942230
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_EnableKeywordMode, "EnableKeywordMode" }, // 3718350510
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_EnableLanguageModel, "EnableLanguageModel" }, // 2220768194
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_GetCurrentVolume, "GetCurrentVolume" }, // 1215000651
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_Init, "Init" }, // 2197702374
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_SetConfigParam, "SetConfigParam" }, // 2187448929
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_Shutdown, "Shutdown" }, // 106048591
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_StartedSpeaking_method, "StartedSpeaking_method" }, // 1354335838
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_StoppedSpeaking_method, "StoppedSpeaking_method" }, // 3561754860
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_UnknownPhrase_method, "UnknownPhrase_method" }, // 3024606507
				{ &Z_Construct_UFunction_ASpeechRecognitionActor_WordsSpoken_method, "WordsSpoken_method" }, // 1666563864
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SpeechRecognitionActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStoppedSpeaking_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoppedSpeaking = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStoppedSpeaking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ASpeechRecognitionActor, OnStoppedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnStoppedSpeaking_MetaData, ARRAY_COUNT(NewProp_OnStoppedSpeaking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartedSpeaking_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedSpeaking = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStartedSpeaking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ASpeechRecognitionActor, OnStartedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnStartedSpeaking_MetaData, ARRAY_COUNT(NewProp_OnStartedSpeaking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnknownPhrase_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnknownPhrase = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUnknownPhrase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ASpeechRecognitionActor, OnUnknownPhrase), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnUnknownPhrase_MetaData, ARRAY_COUNT(NewProp_OnUnknownPhrase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWordsSpoken_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/SpeechRecognitionActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWordsSpoken = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnWordsSpoken", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ASpeechRecognitionActor, OnWordsSpoken), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnWordsSpoken_MetaData, ARRAY_COUNT(NewProp_OnWordsSpoken_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStoppedSpeaking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStartedSpeaking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUnknownPhrase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnWordsSpoken,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpeechRecognitionActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpeechRecognitionActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeechRecognitionActor, 3913068125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeechRecognitionActor(Z_Construct_UClass_ASpeechRecognitionActor, &ASpeechRecognitionActor::StaticClass, TEXT("/Script/SpeechRecognition"), TEXT("ASpeechRecognitionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeechRecognitionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
