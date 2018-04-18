// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneMappingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneMappingInfo() {}
// Cross Module References
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	PERCEPTIONNEURONRUNTIME_API UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones();
// End Cross Module References
class UScriptStruct* FBoneMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMappingInfo, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMappingInfo(FBoneMappingInfo::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("BoneMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMappingInfo")),new UScriptStruct::TCppStructOps<FBoneMappingInfo>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMappingInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CTName_MetaData[] = {
				{ "Category", "PerceptionNeuron" },
				{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CTName = { UE4CodeGen_Private::EPropertyClass::Name, "CTName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBoneMappingInfo, CTName), METADATA_PARAMS(NewProp_CTName_MetaData, ARRAY_COUNT(NewProp_CTName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PNID_MetaData[] = {
				{ "Category", "PerceptionNeuron" },
				{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PNID = { UE4CodeGen_Private::EPropertyClass::Byte, "PNID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBoneMappingInfo, PNID), Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones, METADATA_PARAMS(NewProp_PNID_MetaData, ARRAY_COUNT(NewProp_PNID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CTName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PNID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneMappingInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBoneMappingInfo),
				alignof(FBoneMappingInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC() { return 571174475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
