// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BVHAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBVHAsset() {}
// Cross Module References
	PERCEPTIONNEURONRUNTIME_API UClass* Z_Construct_UClass_UBVHAsset_NoRegister();
	PERCEPTIONNEURONRUNTIME_API UClass* Z_Construct_UClass_UBVHAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	PERCEPTIONNEURONRUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath();
	PERCEPTIONNEURONRUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded();
	PERCEPTIONNEURONRUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_Load();
	PERCEPTIONNEURONRUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad();
// End Cross Module References
	void UBVHAsset::StaticRegisterNativesUBVHAsset()
	{
		UClass* Class = UBVHAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBVHFilePath", (Native)&UBVHAsset::execGetBVHFilePath },
			{ "IsLoaded", (Native)&UBVHAsset::execIsLoaded },
			{ "Load", (Native)&UBVHAsset::execLoad },
			{ "ReLoad", (Native)&UBVHAsset::execReLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath()
	{
		struct BVHAsset_eventGetBVHFilePath_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BVHAsset_eventGetBVHFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PerceptionNeuron" },
				{ "DisplayName", "Get BVH File Path" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, "GetBVHFilePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BVHAsset_eventGetBVHFilePath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded()
	{
		struct BVHAsset_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BVHAsset_eventIsLoaded_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BVHAsset_eventIsLoaded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PerceptionNeuron" },
				{ "DisplayName", "Is Loaded" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, "IsLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BVHAsset_eventIsLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_Load()
	{
		struct BVHAsset_eventLoad_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BVHAsset_eventLoad_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BVHAsset_eventLoad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PerceptionNeuron" },
				{ "DisplayName", "Load" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, "Load", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BVHAsset_eventLoad_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad()
	{
		struct BVHAsset_eventReLoad_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BVHAsset_eventReLoad_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BVHAsset_eventReLoad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PerceptionNeuron" },
				{ "DisplayName", "ReLoad" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, "ReLoad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BVHAsset_eventReLoad_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBVHAsset_NoRegister()
	{
		return UBVHAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UBVHAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBVHAsset_GetBVHFilePath, "GetBVHFilePath" }, // 176510660
				{ &Z_Construct_UFunction_UBVHAsset_IsLoaded, "IsLoaded" }, // 3981453937
				{ &Z_Construct_UFunction_UBVHAsset_Load, "Load" }, // 2881096914
				{ &Z_Construct_UFunction_UBVHAsset_ReLoad, "ReLoad" }, // 395088428
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "PerceptionNeuron" },
				{ "IncludePath", "BVHAsset.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Implements a BVH file asset that contains animation data for Perception Neuron to use." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoaded_MetaData[] = {
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			auto NewProp_bLoaded_SetBit = [](void* Obj){ ((UBVHAsset*)Obj)->bLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBVHAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoaded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoaded_MetaData, ARRAY_COUNT(NewProp_bLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDataOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameDataOffset = { UE4CodeGen_Private::EPropertyClass::Int, "FrameDataOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBVHAsset, FrameDataOffset), METADATA_PARAMS(NewProp_FrameDataOffset_MetaData, ARRAY_COUNT(NewProp_FrameDataOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[] = {
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimData = { UE4CodeGen_Private::EPropertyClass::Array, "AnimData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBVHAsset, AnimData), METADATA_PARAMS(NewProp_AnimData_MetaData, ARRAY_COUNT(NewProp_AnimData_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimData_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AnimData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BVHFilePath_MetaData[] = {
				{ "Category", "File" },
				{ "DisplayName", "BVH File" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "The path of a BVH file locate in." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BVHFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "BVHFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBVHAsset, BVHFilePath), METADATA_PARAMS(NewProp_BVHFilePath_MetaData, ARRAY_COUNT(NewProp_BVHFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTime_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "Frame Time" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "Frame step time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameTime = { UE4CodeGen_Private::EPropertyClass::Float, "FrameTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBVHAsset, FrameTime), METADATA_PARAMS(NewProp_FrameTime_MetaData, ARRAY_COUNT(NewProp_FrameTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
				{ "Category", "Animation" },
				{ "DisplayName", "Frames" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "Total number of frames." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frames = { UE4CodeGen_Private::EPropertyClass::Int, "Frames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UBVHAsset, Frames), METADATA_PARAMS(NewProp_Frames_MetaData, ARRAY_COUNT(NewProp_Frames_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTotalNumber_MetaData[] = {
				{ "Category", "Bone" },
				{ "DisplayName", "Bone Total Number" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "Total number of Bones." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneTotalNumber = { UE4CodeGen_Private::EPropertyClass::Int, "BoneTotalNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UBVHAsset, BoneTotalNumber), METADATA_PARAMS(NewProp_BoneTotalNumber_MetaData, ARRAY_COUNT(NewProp_BoneTotalNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithDisplacement_MetaData[] = {
				{ "Category", "Bone" },
				{ "DisplayName", "With Displacement" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "Displacement." },
			};
#endif
			auto NewProp_bWithDisplacement_SetBit = [](void* Obj){ ((UBVHAsset*)Obj)->bWithDisplacement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithDisplacement = { UE4CodeGen_Private::EPropertyClass::Bool, "bWithDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBVHAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWithDisplacement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWithDisplacement_MetaData, ARRAY_COUNT(NewProp_bWithDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRootEffect_MetaData[] = {
				{ "Category", "Bone" },
				{ "DisplayName", "Use Root Effect" },
				{ "ModuleRelativePath", "Public/BVHAsset.h" },
				{ "ToolTip", "Reference." },
			};
#endif
			auto NewProp_bUseRootEffect_SetBit = [](void* Obj){ ((UBVHAsset*)Obj)->bUseRootEffect = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRootEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRootEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBVHAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRootEffect_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRootEffect_MetaData, ARRAY_COUNT(NewProp_bUseRootEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameDataOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BVHFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTotalNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWithDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRootEffect,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBVHAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBVHAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UBVHAsset, 1859975129);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBVHAsset(Z_Construct_UClass_UBVHAsset, &UBVHAsset::StaticClass, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("UBVHAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBVHAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
