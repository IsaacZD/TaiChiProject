// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneLists.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneLists() {}
// Cross Module References
	PERCEPTIONNEURONRUNTIME_API UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones();
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
// End Cross Module References
	static UEnum* EPNBones_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("EPNBones"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPNBones(EPNBones_StaticEnum, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("EPNBones"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones_CRC() { return 2268264557U; }
	UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPNBones"), 0, Get_Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPNBones::Hips", (int64)EPNBones::Hips },
				{ "EPNBones::RightUpLeg", (int64)EPNBones::RightUpLeg },
				{ "EPNBones::RightLeg", (int64)EPNBones::RightLeg },
				{ "EPNBones::RightFoot", (int64)EPNBones::RightFoot },
				{ "EPNBones::LeftUpLeg", (int64)EPNBones::LeftUpLeg },
				{ "EPNBones::LeftLeg", (int64)EPNBones::LeftLeg },
				{ "EPNBones::LeftFoot", (int64)EPNBones::LeftFoot },
				{ "EPNBones::Spine", (int64)EPNBones::Spine },
				{ "EPNBones::Spine1", (int64)EPNBones::Spine1 },
				{ "EPNBones::Spine2", (int64)EPNBones::Spine2 },
				{ "EPNBones::Spine3", (int64)EPNBones::Spine3 },
				{ "EPNBones::Neck", (int64)EPNBones::Neck },
				{ "EPNBones::Head", (int64)EPNBones::Head },
				{ "EPNBones::RightShoulder", (int64)EPNBones::RightShoulder },
				{ "EPNBones::RightArm", (int64)EPNBones::RightArm },
				{ "EPNBones::RightForeArm", (int64)EPNBones::RightForeArm },
				{ "EPNBones::RightHand", (int64)EPNBones::RightHand },
				{ "EPNBones::RightHandThumb1", (int64)EPNBones::RightHandThumb1 },
				{ "EPNBones::RightHandThumb2", (int64)EPNBones::RightHandThumb2 },
				{ "EPNBones::RightHandThumb3", (int64)EPNBones::RightHandThumb3 },
				{ "EPNBones::RightInHandIndex", (int64)EPNBones::RightInHandIndex },
				{ "EPNBones::RightHandIndex1", (int64)EPNBones::RightHandIndex1 },
				{ "EPNBones::RightHandIndex2", (int64)EPNBones::RightHandIndex2 },
				{ "EPNBones::RightHandIndex3", (int64)EPNBones::RightHandIndex3 },
				{ "EPNBones::RightInHandMiddle", (int64)EPNBones::RightInHandMiddle },
				{ "EPNBones::RightHandMiddle1", (int64)EPNBones::RightHandMiddle1 },
				{ "EPNBones::RightHandMiddle2", (int64)EPNBones::RightHandMiddle2 },
				{ "EPNBones::RightHandMiddle3", (int64)EPNBones::RightHandMiddle3 },
				{ "EPNBones::RightInHandRing", (int64)EPNBones::RightInHandRing },
				{ "EPNBones::RightHandRing1", (int64)EPNBones::RightHandRing1 },
				{ "EPNBones::RightHandRing2", (int64)EPNBones::RightHandRing2 },
				{ "EPNBones::RightHandRing3", (int64)EPNBones::RightHandRing3 },
				{ "EPNBones::RightInHandPinky", (int64)EPNBones::RightInHandPinky },
				{ "EPNBones::RightHandPinky1", (int64)EPNBones::RightHandPinky1 },
				{ "EPNBones::RightHandPinky2", (int64)EPNBones::RightHandPinky2 },
				{ "EPNBones::RightHandPinky3", (int64)EPNBones::RightHandPinky3 },
				{ "EPNBones::LeftShoulder", (int64)EPNBones::LeftShoulder },
				{ "EPNBones::LeftArm", (int64)EPNBones::LeftArm },
				{ "EPNBones::LeftForeArm", (int64)EPNBones::LeftForeArm },
				{ "EPNBones::LeftHand", (int64)EPNBones::LeftHand },
				{ "EPNBones::LeftHandThumb1", (int64)EPNBones::LeftHandThumb1 },
				{ "EPNBones::LeftHandThumb2", (int64)EPNBones::LeftHandThumb2 },
				{ "EPNBones::LeftHandThumb3", (int64)EPNBones::LeftHandThumb3 },
				{ "EPNBones::LeftInHandIndex", (int64)EPNBones::LeftInHandIndex },
				{ "EPNBones::LeftHandIndex1", (int64)EPNBones::LeftHandIndex1 },
				{ "EPNBones::LeftHandIndex2", (int64)EPNBones::LeftHandIndex2 },
				{ "EPNBones::LeftHandIndex3", (int64)EPNBones::LeftHandIndex3 },
				{ "EPNBones::LeftInHandMiddle", (int64)EPNBones::LeftInHandMiddle },
				{ "EPNBones::LeftHandMiddle1", (int64)EPNBones::LeftHandMiddle1 },
				{ "EPNBones::LeftHandMiddle2", (int64)EPNBones::LeftHandMiddle2 },
				{ "EPNBones::LeftHandMiddle3", (int64)EPNBones::LeftHandMiddle3 },
				{ "EPNBones::LeftInHandRing", (int64)EPNBones::LeftInHandRing },
				{ "EPNBones::LeftHandRing1", (int64)EPNBones::LeftHandRing1 },
				{ "EPNBones::LeftHandRing2", (int64)EPNBones::LeftHandRing2 },
				{ "EPNBones::LeftHandRing3", (int64)EPNBones::LeftHandRing3 },
				{ "EPNBones::LeftInHandPinky", (int64)EPNBones::LeftInHandPinky },
				{ "EPNBones::LeftHandPinky1", (int64)EPNBones::LeftHandPinky1 },
				{ "EPNBones::LeftHandPinky2", (int64)EPNBones::LeftHandPinky2 },
				{ "EPNBones::LeftHandPinky3", (int64)EPNBones::LeftHandPinky3 },
				{ "EPNBones::Invalid", (int64)EPNBones::Invalid },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneLists.h" },
				{ "RightUpLeg.ToolTip", "Hips must be 0, never can be changed" },
				{ "ToolTip", "The order is important" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPNBones",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPNBones::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
