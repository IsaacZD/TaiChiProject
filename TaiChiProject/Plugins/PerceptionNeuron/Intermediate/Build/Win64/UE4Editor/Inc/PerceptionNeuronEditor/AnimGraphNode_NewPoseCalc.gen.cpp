// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimGraphNode_NewPoseCalc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_NewPoseCalc() {}
// Cross Module References
	PERCEPTIONNEURONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister();
	PERCEPTIONNEURONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronEditor();
	PERCEPTIONNEURONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
// End Cross Module References
	void UAnimGraphNode_NewPoseCalc::StaticRegisterNativesUAnimGraphNode_NewPoseCalc()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister()
	{
		return UAnimGraphNode_NewPoseCalc::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
				(UObject* (*)())Z_Construct_UPackage__Script_PerceptionNeuronEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AnimGraphNode_NewPoseCalc.h" },
				{ "ModuleRelativePath", "Public/AnimGraphNode_NewPoseCalc.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasInit_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimGraphNode_NewPoseCalc.h" },
			};
#endif
			auto NewProp_bHasInit_SetBit = [](void* Obj){ ((UAnimGraphNode_NewPoseCalc*)Obj)->bHasInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimGraphNode_NewPoseCalc), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasInit_MetaData, ARRAY_COUNT(NewProp_bHasInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimGraphNode_NewPoseCalc.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimGraphNode_NewPoseCalc, Node), Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc, METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimGraphNode_NewPoseCalc>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimGraphNode_NewPoseCalc::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UAnimGraphNode_NewPoseCalc, 3585895196);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_NewPoseCalc(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc, &UAnimGraphNode_NewPoseCalc::StaticClass, TEXT("/Script/PerceptionNeuronEditor"), TEXT("UAnimGraphNode_NewPoseCalc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_NewPoseCalc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
