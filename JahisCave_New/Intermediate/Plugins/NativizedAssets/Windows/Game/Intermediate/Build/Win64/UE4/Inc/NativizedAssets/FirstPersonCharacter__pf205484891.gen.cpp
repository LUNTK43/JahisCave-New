// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FirstPersonCharacter__pf205484891.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter__pf205484891() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ItemParent_C__pf476478934_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInteract_Interface_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__CheckLookAt__pf)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__LookAtActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CheckLookAt__pf(Z_Param_Out_bpp__LookAtActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFirstPersonCharacter_C__pf205484891::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AFirstPersonCharacter_C__pf205484891::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		FirstPersonCharacter_C__pf205484891_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf),&Parms);
	}
	void AFirstPersonCharacter_C__pf205484891::StaticRegisterNativesAFirstPersonCharacter_C__pf205484891()
	{
		UClass* Class = AFirstPersonCharacter_C__pf205484891::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLookAt", &AFirstPersonCharacter_C__pf205484891::execbpf__CheckLookAt__pf },
			{ "InpActEvt_Cancel_K2Node_InputActionEvent_2", &AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_Interact_K2Node_InputActionEvent_3", &AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf },
			{ "InpActEvt_MainMenu_K2Node_InputActionEvent_1", &AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_QuitGame_K2Node_InputActionEvent_0", &AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_ResetVR_K2Node_InputActionEvent_4", &AFirstPersonCharacter_C__pf205484891::execbpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf },
			{ "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf },
			{ "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf },
			{ "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf },
			{ "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf },
			{ "InpAxisEvt_Turn_K2Node_InputAxisEvent_157", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf },
			{ "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34", &AFirstPersonCharacter_C__pf205484891::execbpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf },
			{ "ReceiveBeginPlay", &AFirstPersonCharacter_C__pf205484891::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AFirstPersonCharacter_C__pf205484891::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__CheckLookAt__pf_Parms
		{
			AActor* bpp__LookAtActor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LookAtActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::NewProp_bpp__LookAtActor__pf = { "bpp__LookAtActor__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__CheckLookAt__pf_Parms, bpp__LookAtActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::NewProp_bpp__LookAtActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "CheckLookAt" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "CheckLookAt", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__CheckLookAt__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CheckLookAt" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpActEvt_Cancel_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpActEvt_Cancel_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_Cancel_K2Node_InputActionEvent_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpActEvt_Interact_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpActEvt_Interact_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_Interact_K2Node_InputActionEvent_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpActEvt_MainMenu_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpActEvt_MainMenu_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_MainMenu_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpActEvt_QuitGame_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpActEvt_QuitGame_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_QuitGame_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpActEvt_ResetVR_K2Node_InputActionEvent_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpActEvt_ResetVR_K2Node_InputActionEvent_4", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_ResetVR_K2Node_InputActionEvent_4" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_Turn_K2Node_InputAxisEvent_157" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_Turn_K2Node_InputAxisEvent_157", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_Turn_K2Node_InputAxisEvent_157" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics
	{
		struct FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonCharacter_C__pf205484891_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(FirstPersonCharacter_C__pf205484891_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister()
	{
		return AFirstPersonCharacter_C__pf205484891::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemGrip__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ItemGrip__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VR_Gun__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VR_Gun__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VR_Marker__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VR_Marker__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__R_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__R_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__L_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__L_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FirstPersonCamera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FirstPersonCamera__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GunOffset__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__GunOffset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseTurnRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BaseTurnRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseLookUpRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BaseLookUpRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UsingMotionControllersx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__UsingMotionControllersx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UsingMotionControllersx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FingerIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__FingerIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LookAtActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LookAtActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentlyHeldItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CurrentlyHeldItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LookAtDistance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LookAtDistance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HUD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HUD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainMenu__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_bpv__MainMenu__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__CheckLookAt__pf, "CheckLookAt" }, // 3975051259
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf, "InpActEvt_Cancel_K2Node_InputActionEvent_2" }, // 109376012
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf, "InpActEvt_Interact_K2Node_InputActionEvent_3" }, // 1103672994
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf, "InpActEvt_MainMenu_K2Node_InputActionEvent_1" }, // 1289768128
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf, "InpActEvt_QuitGame_K2Node_InputActionEvent_0" }, // 136552170
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf, "InpActEvt_ResetVR_K2Node_InputActionEvent_4" }, // 2390762867
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf, "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172" }, // 4242203996
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf, "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62" }, // 1120327022
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf, "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181" }, // 1654525642
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf, "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192" }, // 2430505906
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf, "InpAxisEvt_Turn_K2Node_InputAxisEvent_157" }, // 256924405
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf, "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34" }, // 4234690103
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2515719053
		{ &Z_Construct_UFunction_AFirstPersonCharacter_C__pf205484891_bpf__ReceiveTick__pf, "ReceiveTick" }, // 4198488872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacter__pf205484891.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FirstPersonCharacter_C" },
		{ "ReplaceConverted", "/Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__ItemGrip__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "ItemGrip" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__ItemGrip__pf = { "ItemGrip", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__ItemGrip__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__ItemGrip__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__ItemGrip__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Gun__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "VR_Gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Gun__pf = { "VR_Gun", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__VR_Gun__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Gun__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Gun__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Marker__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "VR_Marker" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Marker__pf = { "VR_Marker", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__VR_Marker__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Marker__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Marker__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__R_MotionController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "R_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__R_MotionController__pf = { "R_MotionController", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__R_MotionController__pf), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__R_MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__R_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__L_MotionController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "L_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__L_MotionController__pf = { "L_MotionController", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__L_MotionController__pf), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__L_MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__L_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FirstPersonCamera__pf_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "FirstPersonCamera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FirstPersonCamera__pf = { "FirstPersonCamera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__FirstPersonCamera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FirstPersonCamera__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FirstPersonCamera__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__GunOffset__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Gun Offset" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "GunOffset" },
		{ "Tooltip", "Gun offset from the camera location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__GunOffset__pf = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__GunOffset__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__GunOffset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__GunOffset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Turn Rate" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "BaseTurnRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseTurnRate__pf = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__BaseTurnRate__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseTurnRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Look Up Rate" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "BaseLookUpRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseLookUpRate__pf = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__BaseLookUpRate__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseLookUpRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Using Motion Controllers?" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "UsingMotionControllers?" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->bpv__UsingMotionControllersx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy = { "UsingMotionControllers?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FingerIndex__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Finger Index" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FingerIndex" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FingerIndex__pf = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__FingerIndex__pf), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FingerIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FingerIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtActor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Look at Actor" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LookAtActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtActor__pf = { "LookAtActor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__LookAtActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__CurrentlyHeldItem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Currently Held Item" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CurrentlyHeldItem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__CurrentlyHeldItem__pf = { "CurrentlyHeldItem", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__CurrentlyHeldItem__pf), Z_Construct_UClass_ABP_ItemParent_C__pf476478934_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__CurrentlyHeldItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__CurrentlyHeldItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtDistance__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Look at Distance" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LookAtDistance" },
		{ "Tooltip", "This is the distance at which looked item is checked - the lower the value the closer the character has to get to the item" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtDistance__pf = { "LookAtDistance", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__LookAtDistance__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtDistance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtDistance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__HUD__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HUD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__HUD__pf = { "HUD", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__HUD__pf), Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__HUD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__HUD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__MainMenu__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Main Menu" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MainMenu" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__MainMenu__pf = { "MainMenu", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, bpv__MainMenu__pf), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__MainMenu__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__MainMenu__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf = { "K2Node_InputAxisEvent_AxisValue_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue_5__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_4" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf = { "K2Node_InputAxisEvent_AxisValue_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue_4__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsInteract_Interface" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf = { "K2Node_DynamicCast_AsInteract_Interface", nullptr, (EPropertyFlags)0x0014000000202000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_DynamicCast_AsInteract_Interface__pf), Z_Construct_UClass_UInteract_Interface_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "CallFunc_CheckLookAt_LookAtActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf = { "CallFunc_CheckLookAt_LookAtActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__CallFunc_CheckLookAt_LookAtActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf = { "K2Node_InputActionEvent_Key_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputActionEvent_Key_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_Select_Default__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsInteract_Interface_1" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf = { "K2Node_DynamicCast_AsInteract_Interface_1", nullptr, (EPropertyFlags)0x0014000000202000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf), Z_Construct_UClass_UInteract_Interface_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsFirst_Person_Game_Mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf = { "K2Node_DynamicCast_AsFirst_Person_Game_Mode", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf), Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf = { "K2Node_InputAxisEvent_AxisValue_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue_3__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf = { "K2Node_InputAxisEvent_AxisValue_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue_2__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf = { "K2Node_InputAxisEvent_AxisValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue_1__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = { "K2Node_InputAxisEvent_AxisValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_InputAxisEvent_AxisValue__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_1" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj)
	{
		((AFirstPersonCharacter_C__pf205484891*)Obj)->b0l__Temp_bool_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf = { "Temp_bool_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonCharacter_C__pf205484891), &Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default_1__pf = { "K2Node_Select_Default_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter_C__pf205484891, b0l__K2Node_Select_Default_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__ItemGrip__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Gun__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__VR_Marker__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__R_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__L_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FirstPersonCamera__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__GunOffset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseTurnRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__BaseLookUpRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__UsingMotionControllersx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__FingerIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__CurrentlyHeldItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__LookAtDistance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__HUD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_bpv__MainMenu__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__CallFunc_CheckLookAt_LookAtActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__Temp_bool_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::NewProp_b0l__K2Node_Select_Default_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter_C__pf205484891>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::ClassParams = {
		&AFirstPersonCharacter_C__pf205484891::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FirstPersonCharacter_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFirstPersonCharacter_C__pf205484891, TEXT("FirstPersonCharacter_C"), 2416990418);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFirstPersonCharacter_C__pf205484891>()
	{
		return AFirstPersonCharacter_C__pf205484891::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonCharacter_C__pf205484891(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891, &AFirstPersonCharacter_C__pf205484891::StaticClass, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"), TEXT("FirstPersonCharacter_C"), true, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"), TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter_C__pf205484891);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
