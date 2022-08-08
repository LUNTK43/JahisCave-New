// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Fire_PLight_Exp_BP__pf711458173.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire_PLight_Exp_BP__pf711458173() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFire_PLight_Exp_BP_C__pf711458173::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_PLight_Exp_BP_C__pf711458173::execbpf__Timeline_0__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_PLight_Exp_BP_C__pf711458173::execbpf__Timeline_0__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_PLight_Exp_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_PLight_Exp_BP_C__pf711458173::execbpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFire_PLight_Exp_BP_C__pf711458173::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AFire_PLight_Exp_BP_C__pf711458173::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf),NULL);
	}
	void AFire_PLight_Exp_BP_C__pf711458173::StaticRegisterNativesAFire_PLight_Exp_BP_C__pf711458173()
	{
		UClass* Class = AFire_PLight_Exp_BP_C__pf711458173::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Fire_PLight_Exp_BP_1", &AFire_PLight_Exp_BP_C__pf711458173::execbpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1 },
			{ "ReceiveBeginPlay", &AFire_PLight_Exp_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf },
			{ "Timeline_0__FinishedFunc", &AFire_PLight_Exp_BP_C__pf711458173::execbpf__Timeline_0__FinishedFunc__pf },
			{ "Timeline_0__UpdateFunc", &AFire_PLight_Exp_BP_C__pf711458173::execbpf__Timeline_0__UpdateFunc__pf },
			{ "UserConstructionScript", &AFire_PLight_Exp_BP_C__pf711458173::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics
	{
		struct Fire_PLight_Exp_BP_C__pf711458173_eventbpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Fire_PLight_Exp_BP_C__pf711458173_eventbpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Fire_PLight_Exp_BP_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, nullptr, "ExecuteUbergraph_Fire_PLight_Exp_BP_1", nullptr, nullptr, sizeof(Fire_PLight_Exp_BP_C__pf711458173_eventbpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Parms), Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Fire_PLight_Exp_BP_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, nullptr, "Timeline_0__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, nullptr, "Timeline_0__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_NoRegister()
	{
		return AFire_PLight_Exp_BP_C__pf711458173::StaticClass();
	}
	struct Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Explosion_particle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Explosion_particle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PointLight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PointLight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fire_particle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Fire_particle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SkeletalMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SkeletalMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Timeline_0__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__param__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__param__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__param__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Random_Start_angle_max__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Random_Start_angle_max__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Random_Start_angle_min__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Random_Start_angle_min__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Direction__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Direction__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__particle_Fire__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__particle_Fire__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Oscil_Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Oscil_Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__oscillate__pf_MetaData[];
#endif
		static void NewProp_bpv__oscillate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__oscillate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Light_Intensity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Light_Intensity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LightRadius__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LightRadius__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__skel_mesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__skel_mesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Light__pf_MetaData[];
#endif
		static void NewProp_bpv__Light__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Light__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Ani_Seq__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Ani_Seq__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__particle_Exp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__particle_Exp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__skelmesh_scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__skelmesh_scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Explosion_Socket__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__Explosion_Socket__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fire_socket__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__Fire_socket__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Explosion_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Explosion_Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Explosion_start_Delay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Explosion_start_Delay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fire_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Fire_Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Distortion_Emittter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Smoke_Emitter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1, "ExecuteUbergraph_Fire_PLight_Exp_BP_1" }, // 656899732
		{ &Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1317690713
		{ &Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf, "Timeline_0__FinishedFunc" }, // 2951450770
		{ &Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf, "Timeline_0__UpdateFunc" }, // 64193873
		{ &Z_Construct_UFunction_AFire_PLight_Exp_BP_C__pf711458173_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3196952008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Fire_PLight_Exp_BP__pf711458173.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Fire_PLight_Exp_BP_C" },
		{ "ReplaceConverted", "/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP.Fire_PLight_Exp_BP_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_particle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Explosion_particle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_particle__pf = { "Explosion_particle", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Explosion_particle__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_particle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_particle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Arrow__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__PointLight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "PointLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__PointLight__pf = { "PointLight", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__PointLight__pf), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__PointLight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__PointLight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_particle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Fire_particle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_particle__pf = { "Fire_particle", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Fire_particle__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_particle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_particle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "SkeletalMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__SkeletalMesh__pf = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__SkeletalMesh__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__SkeletalMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf = { "Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf = { "Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData[] = {
		{ "Category", "Fire_PLight_Exp_BP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf = { "Timeline_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Timeline_0__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf_Inner = { "bpv__param__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleSysParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Param" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "param" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf = { "param", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__param__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_max__pf_MetaData[] = {
		{ "Category", "Fire_Angle" },
		{ "DisplayName", "Random Start Angle Max" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Random_Start_angle_max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_max__pf = { "Random_Start_angle_max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Random_Start_angle_max__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_max__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_max__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_min__pf_MetaData[] = {
		{ "Category", "Fire_Angle" },
		{ "DisplayName", "Random Start Angle Min" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Random_Start_angle_min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_min__pf = { "Random_Start_angle_min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Random_Start_angle_min__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_min__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_min__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Direction__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Direction" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Direction__pf = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Direction__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Direction__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Direction__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Fire" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "particle_Fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf = { "particle_Fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__particle_Fire__pf), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData[] = {
		{ "Category", "Fire_Oscillator" },
		{ "DisplayName", "Oscil Speed" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Oscil_Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf = { "Oscil_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Oscil_Speed__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData[] = {
		{ "Category", "Fire_Oscillator" },
		{ "DisplayName", "Oscillate" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "oscillate" },
	};
#endif
	void Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_SetBit(void* Obj)
	{
		((AFire_PLight_Exp_BP_C__pf711458173*)Obj)->bpv__oscillate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf = { "oscillate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_PLight_Exp_BP_C__pf711458173), &Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light_Intensity__pf_MetaData[] = {
		{ "Category", "Fire Light" },
		{ "DisplayName", "Light Intensity" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Light_Intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light_Intensity__pf = { "Light_Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Light_Intensity__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light_Intensity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light_Intensity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__LightRadius__pf_MetaData[] = {
		{ "Category", "Fire Light" },
		{ "DisplayName", "Light Radius" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "LightRadius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__LightRadius__pf = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__LightRadius__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__LightRadius__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__LightRadius__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skel_mesh__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Skel Mesh" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "skel_mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skel_mesh__pf = { "skel_mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__skel_mesh__pf), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skel_mesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skel_mesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf_MetaData[] = {
		{ "Category", "Fire Light" },
		{ "DisplayName", "Light" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Light" },
	};
#endif
	void Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf_SetBit(void* Obj)
	{
		((AFire_PLight_Exp_BP_C__pf711458173*)Obj)->bpv__Light__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf = { "Light", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_PLight_Exp_BP_C__pf711458173), &Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Ani_Seq__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Ani Seq" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Ani_Seq" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Ani_Seq__pf = { "Ani_Seq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Ani_Seq__pf), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Ani_Seq__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Ani_Seq__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Exp__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Exp" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "particle_Exp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Exp__pf = { "particle_Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__particle_Exp__pf), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Exp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Exp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skelmesh_scale__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Skelmesh Scale" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "skelmesh_scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skelmesh_scale__pf = { "skelmesh_scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__skelmesh_scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skelmesh_scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skelmesh_scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Socket__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Explosion Socket" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Explosion_Socket" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Socket__pf = { "Explosion_Socket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Explosion_Socket__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Socket__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Socket__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_socket__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Fire Socket" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Fire_socket" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_socket__pf = { "Fire_socket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Fire_socket__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_socket__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_socket__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Scale__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Explosion Scale" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Explosion_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Scale__pf = { "Explosion_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Explosion_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_start_Delay__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Explosion Start Delay" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Explosion_start_Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_start_Delay__pf = { "Explosion_start_Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Explosion_start_Delay__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_start_Delay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_start_Delay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_Scale__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Fire Scale" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Fire_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_Scale__pf = { "Fire_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, bpv__Fire_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Distortion Emittter Enable" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Distortion_Emittter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_PLight_Exp_BP_C__pf711458173*)Obj)->bpv__Distortion_Emittter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf = { "Distortion_Emittter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_PLight_Exp_BP_C__pf711458173), &Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Smoke Emitter Enable" },
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Smoke_Emitter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_PLight_Exp_BP_C__pf711458173*)Obj)->bpv__Smoke_Emitter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf = { "Smoke_Emitter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_PLight_Exp_BP_C__pf711458173), &Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((AFire_PLight_Exp_BP_C__pf711458173*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_PLight_Exp_BP_C__pf711458173), &Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_PLight_Exp_BP__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_PLight_Exp_BP_C__pf711458173, b0l__K2Node_Select_Default__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_particle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__PointLight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_particle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__SkeletalMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__param__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_max__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Random_Start_angle_min__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Direction__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light_Intensity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__LightRadius__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skel_mesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Light__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Ani_Seq__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__particle_Exp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__skelmesh_scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Socket__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_socket__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Explosion_start_Delay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Fire_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire_PLight_Exp_BP_C__pf711458173>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::ClassParams = {
		&AFire_PLight_Exp_BP_C__pf711458173::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Fire_PLight_Exp_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFire_PLight_Exp_BP_C__pf711458173, TEXT("Fire_PLight_Exp_BP_C"), 225270035);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFire_PLight_Exp_BP_C__pf711458173>()
	{
		return AFire_PLight_Exp_BP_C__pf711458173::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire_PLight_Exp_BP_C__pf711458173(Z_Construct_UClass_AFire_PLight_Exp_BP_C__pf711458173, &AFire_PLight_Exp_BP_C__pf711458173::StaticClass, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP"), TEXT("Fire_PLight_Exp_BP_C"), true, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP"), TEXT("/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP.Fire_PLight_Exp_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire_PLight_Exp_BP_C__pf711458173);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
