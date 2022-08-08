// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Fire_beam_BP__pf711458173.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire_beam_BP__pf711458173() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_beam_BP_C__pf711458173_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__Timeline_0__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__Timeline_0__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__Timeline_1__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_1__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__Timeline_1__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_1__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_beam_BP_C__pf711458173::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFire_beam_BP_C__pf711458173::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AFire_beam_BP_C__pf711458173::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Fire_beam_BP_C__pf711458173_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AFire_beam_BP_C__pf711458173::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf),NULL);
	}
	void AFire_beam_BP_C__pf711458173::StaticRegisterNativesAFire_beam_BP_C__pf711458173()
	{
		UClass* Class = AFire_beam_BP_C__pf711458173::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AFire_beam_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AFire_beam_BP_C__pf711458173::execbpf__ReceiveTick__pf },
			{ "Timeline_0__FinishedFunc", &AFire_beam_BP_C__pf711458173::execbpf__Timeline_0__FinishedFunc__pf },
			{ "Timeline_0__UpdateFunc", &AFire_beam_BP_C__pf711458173::execbpf__Timeline_0__UpdateFunc__pf },
			{ "Timeline_1__FinishedFunc", &AFire_beam_BP_C__pf711458173::execbpf__Timeline_1__FinishedFunc__pf },
			{ "Timeline_1__UpdateFunc", &AFire_beam_BP_C__pf711458173::execbpf__Timeline_1__UpdateFunc__pf },
			{ "UserConstructionScript", &AFire_beam_BP_C__pf711458173::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Fire_beam_BP_C__pf711458173_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Fire_beam_BP_C__pf711458173_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "Timeline_0__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "Timeline_0__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_1__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "Timeline_1__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_1__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_1__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "Timeline_1__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_1__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_beam_BP_C__pf711458173, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_beam_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFire_beam_BP_C__pf711458173_NoRegister()
	{
		return AFire_beam_BP_C__pf711458173::StaticClass();
	}
	struct Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Particlesystem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Particlesystem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpringArm__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpringArm__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Timeline_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Timeline_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__particle_Fire__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__particle_Fire__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Staticmesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Staticmesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Start_offset__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Start_offset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Particle_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Particle_Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Base_position__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Base_position__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__End_offset__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__End_offset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Oscil_Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Oscil_Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__shake_speed_min__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__shake_speed_min__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__shake_speed_max__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__shake_speed_max__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__oscillate__pf_MetaData[];
#endif
		static void NewProp_bpv__oscillate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__oscillate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__origin_top_position__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__origin_top_position__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__oscil_scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__oscil_scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__beam_width__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__beam_width__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__shake_noise_scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__shake_noise_scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Smoke_Emitter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Distortion_Emittter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2448827374
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__ReceiveTick__pf, "ReceiveTick" }, // 186788607
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__FinishedFunc__pf, "Timeline_0__FinishedFunc" }, // 519790887
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_0__UpdateFunc__pf, "Timeline_0__UpdateFunc" }, // 1099451878
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__FinishedFunc__pf, "Timeline_1__FinishedFunc" }, // 2330036544
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__Timeline_1__UpdateFunc__pf, "Timeline_1__UpdateFunc" }, // 3898206060
		{ &Z_Construct_UFunction_AFire_beam_BP_C__pf711458173_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 543749100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Fire_beam_BP__pf711458173.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Fire_beam_BP_C" },
		{ "ReplaceConverted", "/Game/M5VFXVOL2/BluePrints/Fire_beam_BP.Fire_beam_BP_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Particlesystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf = { "Particlesystem", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Particlesystem__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Arrow1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow1__pf = { "Arrow1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Arrow1__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__SpringArm__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "SpringArm" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__SpringArm__pf = { "SpringArm", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__SpringArm__pf), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__SpringArm__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__SpringArm__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Arrow__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Sphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf = { "Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf = { "Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__pf_MetaData[] = {
		{ "Category", "Fire_beam_BP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__pf = { "Timeline_1", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_1__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf = { "Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf = { "Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData[] = {
		{ "Category", "Fire_beam_BP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Timeline_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf = { "Timeline_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Timeline_0__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Fire" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "particle_Fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf = { "particle_Fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__particle_Fire__pf), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Staticmesh" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Staticmesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf = { "Staticmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Staticmesh__pf), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Start_offset__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Start Offset" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Start_offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Start_offset__pf = { "Start_offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Start_offset__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Start_offset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Start_offset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Particle Scale" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Particle_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf = { "Particle_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Particle_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Base_position__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Base Position" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Base_position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Base_position__pf = { "Base_position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Base_position__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Base_position__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Base_position__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__End_offset__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "End Offset" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "End_offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__End_offset__pf = { "End_offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__End_offset__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__End_offset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__End_offset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData[] = {
		{ "Category", "Fire Oscillator" },
		{ "DisplayName", "Oscil Speed" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Oscil_Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf = { "Oscil_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__Oscil_Speed__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_min__pf_MetaData[] = {
		{ "Category", "Fire Shake" },
		{ "DisplayName", "Shake Speed Min" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "shake_speed_min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_min__pf = { "shake_speed_min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__shake_speed_min__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_min__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_min__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_max__pf_MetaData[] = {
		{ "Category", "Fire Shake" },
		{ "DisplayName", "Shake Speed Max" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "shake_speed_max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_max__pf = { "shake_speed_max", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__shake_speed_max__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_max__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_max__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData[] = {
		{ "Category", "Fire Oscillator" },
		{ "DisplayName", "Oscillate" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "oscillate" },
	};
#endif
	void Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_SetBit(void* Obj)
	{
		((AFire_beam_BP_C__pf711458173*)Obj)->bpv__oscillate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf = { "oscillate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_beam_BP_C__pf711458173), &Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__origin_top_position__pf_MetaData[] = {
		{ "Category", "Fire Transform" },
		{ "DisplayName", "Origin Top Position" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "origin_top_position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__origin_top_position__pf = { "origin_top_position", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__origin_top_position__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__origin_top_position__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__origin_top_position__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscil_scale__pf_MetaData[] = {
		{ "Category", "Fire Oscillator" },
		{ "DisplayName", "Oscil Scale" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "oscil_scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscil_scale__pf = { "oscil_scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__oscil_scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscil_scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscil_scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__beam_width__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Beam Width" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "beam_width" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__beam_width__pf = { "beam_width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__beam_width__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__beam_width__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__beam_width__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_noise_scale__pf_MetaData[] = {
		{ "Category", "Fire Shake" },
		{ "DisplayName", "Shake Noise Scale" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "shake_noise_scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_noise_scale__pf = { "shake_noise_scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, bpv__shake_noise_scale__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_noise_scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_noise_scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Smoke Emitter Enable" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Smoke_Emitter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_beam_BP_C__pf711458173*)Obj)->bpv__Smoke_Emitter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf = { "Smoke_Emitter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_beam_BP_C__pf711458173), &Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Distortion Emittter Enable" },
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Distortion_Emittter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_beam_BP_C__pf711458173*)Obj)->bpv__Distortion_Emittter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf = { "Distortion_Emittter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_beam_BP_C__pf711458173), &Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((AFire_beam_BP_C__pf711458173*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_beam_BP_C__pf711458173), &Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, b0l__K2Node_Select_Default__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_beam_BP__pf711458173.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_beam_BP_C__pf711458173, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__SpringArm__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Timeline_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__particle_Fire__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Start_offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Base_position__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__End_offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Oscil_Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_min__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_speed_max__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscillate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__origin_top_position__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__oscil_scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__beam_width__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__shake_noise_scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire_beam_BP_C__pf711458173>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::ClassParams = {
		&AFire_beam_BP_C__pf711458173::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire_beam_BP_C__pf711458173()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/M5VFXVOL2/BluePrints/Fire_beam_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Fire_beam_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_beam_BP_C__pf711458173_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFire_beam_BP_C__pf711458173, TEXT("Fire_beam_BP_C"), 173620550);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFire_beam_BP_C__pf711458173>()
	{
		return AFire_beam_BP_C__pf711458173::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire_beam_BP_C__pf711458173(Z_Construct_UClass_AFire_beam_BP_C__pf711458173, &AFire_beam_BP_C__pf711458173::StaticClass, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_beam_BP"), TEXT("Fire_beam_BP_C"), true, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_beam_BP"), TEXT("/Game/M5VFXVOL2/BluePrints/Fire_beam_BP.Fire_beam_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire_beam_BP_C__pf711458173);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
