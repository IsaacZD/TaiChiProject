// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERCEPTIONNEURONRUNTIME_BVHAsset_generated_h
#error "BVHAsset.generated.h already included, missing '#pragma once' in BVHAsset.h"
#endif
#define PERCEPTIONNEURONRUNTIME_BVHAsset_generated_h

#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBVHFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetBVHFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReLoad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Load(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBVHFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetBVHFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReLoad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Load(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBVHAsset(); \
	friend PERCEPTIONNEURONRUNTIME_API class UClass* Z_Construct_UClass_UBVHAsset(); \
public: \
	DECLARE_CLASS(UBVHAsset, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PerceptionNeuronRuntime"), PERCEPTIONNEURONRUNTIME_API) \
	DECLARE_SERIALIZER(UBVHAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBVHAsset(); \
	friend PERCEPTIONNEURONRUNTIME_API class UClass* Z_Construct_UClass_UBVHAsset(); \
public: \
	DECLARE_CLASS(UBVHAsset, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PerceptionNeuronRuntime"), PERCEPTIONNEURONRUNTIME_API) \
	DECLARE_SERIALIZER(UBVHAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERCEPTIONNEURONRUNTIME_API UBVHAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBVHAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERCEPTIONNEURONRUNTIME_API, UBVHAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBVHAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PERCEPTIONNEURONRUNTIME_API UBVHAsset(UBVHAsset&&); \
	PERCEPTIONNEURONRUNTIME_API UBVHAsset(const UBVHAsset&); \
public:


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PERCEPTIONNEURONRUNTIME_API UBVHAsset(UBVHAsset&&); \
	PERCEPTIONNEURONRUNTIME_API UBVHAsset(const UBVHAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERCEPTIONNEURONRUNTIME_API, UBVHAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBVHAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBVHAsset)


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLoaded() { return STRUCT_OFFSET(UBVHAsset, bLoaded); }


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_11_PROLOG
#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_RPC_WRAPPERS \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_INCLASS \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PerceptionNeuron_Source_PerceptionNeuronRuntime_Public_BVHAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
