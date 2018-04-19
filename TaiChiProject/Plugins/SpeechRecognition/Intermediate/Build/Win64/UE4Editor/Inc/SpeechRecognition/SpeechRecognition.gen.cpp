// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SpeechRecognition.h"
#include "Public/SpeechRecognition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition() {}
// Cross Module References
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
// End Cross Module References
	static UEnum* EPhraseRecognitionTolerance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("EPhraseRecognitionTolerance"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhraseRecognitionTolerance(EPhraseRecognitionTolerance_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("EPhraseRecognitionTolerance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_CRC() { return 384343557U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhraseRecognitionTolerance"), 0, Get_Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhraseRecognitionTolerance::VE_1", (int64)EPhraseRecognitionTolerance::VE_1 },
				{ "EPhraseRecognitionTolerance::VE_2", (int64)EPhraseRecognitionTolerance::VE_2 },
				{ "EPhraseRecognitionTolerance::VE_3", (int64)EPhraseRecognitionTolerance::VE_3 },
				{ "EPhraseRecognitionTolerance::VE_4", (int64)EPhraseRecognitionTolerance::VE_4 },
				{ "EPhraseRecognitionTolerance::VE_5", (int64)EPhraseRecognitionTolerance::VE_5 },
				{ "EPhraseRecognitionTolerance::VE_6", (int64)EPhraseRecognitionTolerance::VE_6 },
				{ "EPhraseRecognitionTolerance::VE_7", (int64)EPhraseRecognitionTolerance::VE_7 },
				{ "EPhraseRecognitionTolerance::VE_8", (int64)EPhraseRecognitionTolerance::VE_8 },
				{ "EPhraseRecognitionTolerance::VE_9", (int64)EPhraseRecognitionTolerance::VE_9 },
				{ "EPhraseRecognitionTolerance::VE_10", (int64)EPhraseRecognitionTolerance::VE_10 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_1.DisplayName", "V1" },
				{ "VE_10.DisplayName", "V10" },
				{ "VE_2.DisplayName", "V2" },
				{ "VE_3.DisplayName", "V3" },
				{ "VE_4.DisplayName", "V4" },
				{ "VE_5.DisplayName", "V5" },
				{ "VE_6.DisplayName", "V6" },
				{ "VE_7.DisplayName", "V7" },
				{ "VE_8.DisplayName", "V8" },
				{ "VE_9.DisplayName", "V9" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPhraseRecognitionTolerance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPhraseRecognitionTolerance",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionLanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionLanguage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionLanguage(ESpeechRecognitionLanguage_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionLanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_CRC() { return 483797282U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionLanguage"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionLanguage::VE_English", (int64)ESpeechRecognitionLanguage::VE_English },
				{ "ESpeechRecognitionLanguage::VE_Chinese", (int64)ESpeechRecognitionLanguage::VE_Chinese },
				{ "ESpeechRecognitionLanguage::VE_French", (int64)ESpeechRecognitionLanguage::VE_French },
				{ "ESpeechRecognitionLanguage::VE_Spanish", (int64)ESpeechRecognitionLanguage::VE_Spanish },
				{ "ESpeechRecognitionLanguage::VE_Russian", (int64)ESpeechRecognitionLanguage::VE_Russian },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_Chinese.DisplayName", "Chinese" },
				{ "VE_English.DisplayName", "English" },
				{ "VE_French.DisplayName", "French" },
				{ "VE_Russian.DisplayName", "Russian" },
				{ "VE_Spanish.DisplayName", "Spanish" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeechRecognitionLanguage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpeechRecognitionLanguage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionParamType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionParamType(ESpeechRecognitionParamType_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_CRC() { return 3088839001U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionParamType"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionParamType::VE_FLOAT", (int64)ESpeechRecognitionParamType::VE_FLOAT },
				{ "ESpeechRecognitionParamType::VE_BOOLEAN", (int64)ESpeechRecognitionParamType::VE_BOOLEAN },
				{ "ESpeechRecognitionParamType::VE_STRING", (int64)ESpeechRecognitionParamType::VE_STRING },
				{ "ESpeechRecognitionParamType::VE_INTEGER", (int64)ESpeechRecognitionParamType::VE_INTEGER },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_BOOLEAN.DisplayName", "Boolean" },
				{ "VE_FLOAT.DisplayName", "Float" },
				{ "VE_INTEGER.DisplayName", "Integer" },
				{ "VE_STRING.DisplayName", "String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeechRecognitionParamType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpeechRecognitionParamType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionMode(ESpeechRecognitionMode_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_CRC() { return 583328586U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionMode"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionMode::VE_KEYWORD", (int64)ESpeechRecognitionMode::VE_KEYWORD },
				{ "ESpeechRecognitionMode::VE_GRAMMAR", (int64)ESpeechRecognitionMode::VE_GRAMMAR },
				{ "ESpeechRecognitionMode::VE_LANGUAGE_MODEL", (int64)ESpeechRecognitionMode::VE_LANGUAGE_MODEL },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_GRAMMAR.DisplayName", "Grammar" },
				{ "VE_KEYWORD.DisplayName", "Keyword Spotting" },
				{ "VE_LANGUAGE_MODEL.DisplayName", "Language Model" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeechRecognitionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpeechRecognitionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRecognitionPhrase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPEECHRECOGNITION_API uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognitionPhrase, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognitionPhrase"), sizeof(FRecognitionPhrase), Get_Z_Construct_UScriptStruct_FRecognitionPhrase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecognitionPhrase(FRecognitionPhrase::StaticStruct, TEXT("/Script/SpeechRecognition"), TEXT("RecognitionPhrase"), false, nullptr, nullptr);
static struct FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase
{
	FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecognitionPhrase")),new UScriptStruct::TCppStructOps<FRecognitionPhrase>);
	}
} ScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase;
	UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecognitionPhrase"), sizeof(FRecognitionPhrase), Get_Z_Construct_UScriptStruct_FRecognitionPhrase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognitionPhrase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tolerance_MetaData[] = {
				{ "Category", "RecognitionPhrase" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tolerance = { UE4CodeGen_Private::EPropertyClass::Enum, "tolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FRecognitionPhrase, tolerance), Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, METADATA_PARAMS(NewProp_tolerance_MetaData, ARRAY_COUNT(NewProp_tolerance_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_tolerance_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phrase_MetaData[] = {
				{ "Category", "RecognitionPhrase" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_phrase = { UE4CodeGen_Private::EPropertyClass::Str, "phrase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FRecognitionPhrase, phrase), METADATA_PARAMS(NewProp_phrase_MetaData, ARRAY_COUNT(NewProp_phrase_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tolerance_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_phrase,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RecognitionPhrase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRecognitionPhrase),
				alignof(FRecognitionPhrase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_CRC() { return 2147914267U; }
class UScriptStruct* FRecognisedPhrases::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPEECHRECOGNITION_API uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognisedPhrases, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognisedPhrases"), sizeof(FRecognisedPhrases), Get_Z_Construct_UScriptStruct_FRecognisedPhrases_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecognisedPhrases(FRecognisedPhrases::StaticStruct, TEXT("/Script/SpeechRecognition"), TEXT("RecognisedPhrases"), false, nullptr, nullptr);
static struct FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases
{
	FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecognisedPhrases")),new UScriptStruct::TCppStructOps<FRecognisedPhrases>);
	}
} ScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases;
	UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecognisedPhrases"), sizeof(FRecognisedPhrases), Get_Z_Construct_UScriptStruct_FRecognisedPhrases_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "ToolTip", "Common structures and enumerations" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognisedPhrases>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phrases_MetaData[] = {
				{ "Category", "RecognisedPhrases" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_phrases = { UE4CodeGen_Private::EPropertyClass::Array, "phrases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FRecognisedPhrases, phrases), METADATA_PARAMS(NewProp_phrases_MetaData, ARRAY_COUNT(NewProp_phrases_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_phrases_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "phrases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_phrases,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_phrases_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RecognisedPhrases",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRecognisedPhrases),
				alignof(FRecognisedPhrases),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_CRC() { return 740302262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
