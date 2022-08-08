// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Transition__pf4069104048.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransition__pf4069104048() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATransition_C__pf4069104048_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATransition_C__pf4069104048();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ItemParent_C__pf476478934_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInteract_Interface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__DoorPosition__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DoorPosition__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__DoorPosition__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DoorPosition__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__InteractWith__pf)
	{
		P_GET_OBJECT(AFirstPersonCharacter_C__pf205484891,Z_Param_bpp__PlayerCharacter__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InteractWith__pf(Z_Param_bpp__PlayerCharacter__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__OpenDoor__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OpenDoor__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__LookAt__pf)
	{
		P_GET_OBJECT(AFirstPersonCharacter_C__pf205484891,Z_Param_bpp__PlayerCharacter__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LookAt__pf(Z_Param_bpp__PlayerCharacter__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransition_C__pf4069104048::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_ATransition_C__pf4069104048_bpf__InteractWith__pf = FName(TEXT("InteractWith"));
	void ATransition_C__pf4069104048::eventbpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf)
	{
		Transition_C__pf4069104048_eventbpf__InteractWith__pf_Parms Parms;
		Parms.bpp__PlayerCharacter__pf=bpp__PlayerCharacter__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATransition_C__pf4069104048_bpf__InteractWith__pf),&Parms);
	}
	static FName NAME_ATransition_C__pf4069104048_bpf__LookAt__pf = FName(TEXT("LookAt"));
	void ATransition_C__pf4069104048::eventbpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf)
	{
		Transition_C__pf4069104048_eventbpf__LookAt__pf_Parms Parms;
		Parms.bpp__PlayerCharacter__pf=bpp__PlayerCharacter__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATransition_C__pf4069104048_bpf__LookAt__pf),&Parms);
	}
	static FName NAME_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void ATransition_C__pf4069104048::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		Transition_C__pf4069104048_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	void ATransition_C__pf4069104048::StaticRegisterNativesATransition_C__pf4069104048()
	{
		UClass* Class = ATransition_C__pf4069104048::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoorPosition__FinishedFunc", &ATransition_C__pf4069104048::execbpf__DoorPosition__FinishedFunc__pf },
			{ "DoorPosition__UpdateFunc", &ATransition_C__pf4069104048::execbpf__DoorPosition__UpdateFunc__pf },
			{ "InteractWith", &ATransition_C__pf4069104048::execbpf__InteractWith__pf },
			{ "LookAt", &ATransition_C__pf4069104048::execbpf__LookAt__pf },
			{ "OpenDoor", &ATransition_C__pf4069104048::execbpf__OpenDoor__pf },
			{ "ReceiveActorBeginOverlap", &ATransition_C__pf4069104048::execbpf__ReceiveActorBeginOverlap__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorPosition__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "DoorPosition__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DoorPosition__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorPosition__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "DoorPosition__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DoorPosition__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerCharacter__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::NewProp_bpp__PlayerCharacter__pf = { "bpp__PlayerCharacter__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Transition_C__pf4069104048_eventbpf__InteractWith__pf_Parms, bpp__PlayerCharacter__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::NewProp_bpp__PlayerCharacter__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "InteractWith" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "InteractWith", nullptr, nullptr, sizeof(Transition_C__pf4069104048_eventbpf__InteractWith__pf_Parms), Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InteractWith" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerCharacter__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::NewProp_bpp__PlayerCharacter__pf = { "bpp__PlayerCharacter__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Transition_C__pf4069104048_eventbpf__LookAt__pf_Parms, bpp__PlayerCharacter__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::NewProp_bpp__PlayerCharacter__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "LookAt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "LookAt", nullptr, nullptr, sizeof(Transition_C__pf4069104048_eventbpf__LookAt__pf_Parms), Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LookAt" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "OpenDoor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OpenDoor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Transition_C__pf4069104048_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransition_C__pf4069104048, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(Transition_C__pf4069104048_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATransition_C__pf4069104048();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATransition_C__pf4069104048_NoRegister()
	{
		return ATransition_C__pf4069104048::StaticClass();
	}
	struct Z_Construct_UClass_ATransition_C__pf4069104048_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DoorCollider__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DoorCollider__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Door__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Door__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DoorPosition__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DoorPosition__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Level__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_bpv__Level__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DestinationTag__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__DestinationTag__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_PlayerCharacter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_PlayerCharacter__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATransition_C__pf4069104048_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATransition_C__pf4069104048_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__FinishedFunc__pf, "DoorPosition__FinishedFunc" }, // 3256273252
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__DoorPosition__UpdateFunc__pf, "DoorPosition__UpdateFunc" }, // 950284001
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__InteractWith__pf, "InteractWith" }, // 1317667193
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__LookAt__pf, "LookAt" }, // 470152686
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__OpenDoor__pf, "OpenDoor" }, // 3796307873
		{ &Z_Construct_UFunction_ATransition_C__pf4069104048_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 3502873395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Transition__pf4069104048.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Transition_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Transition/Transition.Transition_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorCollider__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorCollider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorCollider__pf = { "DoorCollider", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DoorCollider__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorCollider__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorCollider__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Door__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "Door" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Door__pf = { "Door", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__Door__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Door__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Door__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf = { "DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf), METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf = { "DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__pf_MetaData[] = {
		{ "Category", "Transition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "DoorPosition" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__pf = { "DoorPosition", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DoorPosition__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Level__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Level" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Level__pf = { "Level", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__Level__pf), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Level__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Level__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DestinationTag__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Destination Tag" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DestinationTag" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DestinationTag__pf = { "DestinationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__DestinationTag__pf), METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DestinationTag__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DestinationTag__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Key__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Key" },
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Key" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Key__pf = { "Key", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, bpv__Key__pf), Z_Construct_UClass_ABP_ItemParent_C__pf476478934_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_Event_PlayerCharacter_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf = { "K2Node_Event_PlayerCharacter_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_Event_PlayerCharacter_1__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf = { "K2Node_MakeStruct_FormatArgumentData", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_MakeStruct_FormatArgumentData__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_Event_PlayerCharacter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter__pf = { "K2Node_Event_PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_Event_PlayerCharacter__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner = { "b0l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "CallFunc_UpdateMessage_IsVisible" },
	};
#endif
	void Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit(void* Obj)
	{
		((ATransition_C__pf4069104048*)Obj)->b0l__CallFunc_UpdateMessage_IsVisible__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf = { "CallFunc_UpdateMessage_IsVisible", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransition_C__pf4069104048), &Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsFirst_Person_Character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf = { "K2Node_DynamicCast_AsFirst_Person_Character", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransition_C__pf4069104048, b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transition__pf4069104048.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ATransition_C__pf4069104048*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransition_C__pf4069104048), &Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransition_C__pf4069104048_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorCollider__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Door__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DoorPosition__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Level__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__DestinationTag__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_bpv__Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_PlayerCharacter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransition_C__pf4069104048_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteract_Interface_C_NoRegister, (int32)VTABLE_OFFSET(ATransition_C__pf4069104048, IInteract_Interface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransition_C__pf4069104048_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransition_C__pf4069104048>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATransition_C__pf4069104048_Statics::ClassParams = {
		&ATransition_C__pf4069104048::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATransition_C__pf4069104048_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATransition_C__pf4069104048_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATransition_C__pf4069104048()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Transition/Transition"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Transition_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATransition_C__pf4069104048_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATransition_C__pf4069104048, TEXT("Transition_C"), 1519433929);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATransition_C__pf4069104048>()
	{
		return ATransition_C__pf4069104048::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATransition_C__pf4069104048(Z_Construct_UClass_ATransition_C__pf4069104048, &ATransition_C__pf4069104048::StaticClass, TEXT("/Game/Blueprints/Transition/Transition"), TEXT("Transition_C"), true, TEXT("/Game/Blueprints/Transition/Transition"), TEXT("/Game/Blueprints/Transition/Transition.Transition_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransition_C__pf4069104048);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
