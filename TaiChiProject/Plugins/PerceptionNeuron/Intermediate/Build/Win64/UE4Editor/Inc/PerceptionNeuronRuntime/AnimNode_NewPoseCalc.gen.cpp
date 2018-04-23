// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNode_NewPoseCalc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_NewPoseCalc() {}
// Cross Module References
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap();
	PERCEPTIONNEURONRUNTIME_API UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones();
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer();
// End Cross Module References
class UScriptStruct* FAnimationNode_NewPoseCalc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationNode_NewPoseCalc(FAnimationNode_NewPoseCalc::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("AnimationNode_NewPoseCalc"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationNode_NewPoseCalc")),new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositions_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldPositions = { UE4CodeGen_Private::EPropertyClass::Array, "WorldPositions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, WorldPositions), METADATA_PARAMS(NewProp_WorldPositions_MetaData, ARRAY_COUNT(NewProp_WorldPositions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldPositions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotations_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldRotations = { UE4CodeGen_Private::EPropertyClass::Array, "WorldRotations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, WorldRotations), METADATA_PARAMS(NewProp_WorldRotations_MetaData, ARRAY_COUNT(NewProp_WorldRotations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldRotations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHaveInit_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			auto NewProp_bHaveInit_SetBit = [](void* Obj){ ((FAnimationNode_NewPoseCalc*)Obj)->bHaveInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHaveInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bHaveInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationNode_NewPoseCalc), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHaveInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHaveInit_MetaData, ARRAY_COUNT(NewProp_bHaveInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_Copy_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMap_Copy = { UE4CodeGen_Private::EPropertyClass::Array, "BoneMap_Copy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneMap_Copy), METADATA_PARAMS(NewProp_BoneMap_Copy_MetaData, ARRAY_COUNT(NewProp_BoneMap_Copy_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_Copy_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneMap_Copy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName2BoneMapIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneName2BoneMapIndex = { UE4CodeGen_Private::EPropertyClass::Map, "BoneName2BoneMapIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneName2BoneMapIndex), METADATA_PARAMS(NewProp_BoneName2BoneMapIndex_MetaData, ARRAY_COUNT(NewProp_BoneName2BoneMapIndex_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2BoneMapIndex_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName2BoneMapIndex_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneName2BoneMapIndex_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "BoneName2BoneMapIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneID2NameMap_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneID2NameMap = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneID2NameMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneID2NameMap), Z_Construct_UScriptStruct_FPNMultiMap, METADATA_PARAMS(NewProp_BoneID2NameMap_MetaData, ARRAY_COUNT(NewProp_BoneID2NameMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonNamePrefix_MetaData[] = {
				{ "Category", "SkeletonsRetargeting" },
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
				{ "NeverAsPin", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletonNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "SkeletonNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, SkeletonNamePrefix), METADATA_PARAMS(NewProp_SkeletonNamePrefix_MetaData, ARRAY_COUNT(NewProp_SkeletonNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[] = {
				{ "Category", "SkeletonsRetargeting" },
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
				{ "NeverAsPin", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMap = { UE4CodeGen_Private::EPropertyClass::Array, "BoneMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneMap), METADATA_PARAMS(NewProp_BoneMap_MetaData, ARRAY_COUNT(NewProp_BoneMap_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneMappingInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPositions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPositions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldRotations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldRotations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHaveInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMap_Copy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMap_Copy_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName2BoneMapIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName2BoneMapIndex_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName2BoneMapIndex_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneID2NameMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneMap_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationNode_NewPoseCalc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimationNode_NewPoseCalc),
				alignof(FAnimationNode_NewPoseCalc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC() { return 3423175258U; }
class UScriptStruct* FPNMultiMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPNMultiMap, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPNMultiMap(FPNMultiMap::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("PNMultiMap"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PNMultiMap")),new UScriptStruct::TCppStructOps<FPNMultiMap>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap;
	UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPNMultiMap>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterMap_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_InterMap = { UE4CodeGen_Private::EPropertyClass::Map, "InterMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPNMultiMap, InterMap), METADATA_PARAMS(NewProp_InterMap_MetaData, ARRAY_COUNT(NewProp_InterMap_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "InterMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "InterMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FNamesContainer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterMap_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PNMultiMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPNMultiMap),
				alignof(FPNMultiMap),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC() { return 3482233702U; }
class UScriptStruct* FNamesContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamesContainer, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamesContainer(FNamesContainer::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("NamesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamesContainer")),new UScriptStruct::TCppStructOps<FNamesContainer>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamesContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names = { UE4CodeGen_Private::EPropertyClass::Array, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamesContainer, Names), METADATA_PARAMS(NewProp_Names_MetaData, ARRAY_COUNT(NewProp_Names_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamesContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNamesContainer),
				alignof(FNamesContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC() { return 3125805788U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
