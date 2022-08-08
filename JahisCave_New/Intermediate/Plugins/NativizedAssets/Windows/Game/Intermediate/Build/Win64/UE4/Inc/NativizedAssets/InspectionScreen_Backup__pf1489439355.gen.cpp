// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/InspectionScreen_Backup__pf1489439355.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInspectionScreen_Backup__pf1489439355() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInspectionScreen_Backup_C__pf1489439355::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInspectionScreen_Backup_C__pf1489439355::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInspectionScreen_Backup_C__pf1489439355::execbpf__StartScroll__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StartScroll__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInspectionScreen_Backup_C__pf1489439355::execbpf__StopScroll__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StopScroll__pf();
		P_NATIVE_END;
	}
	static FName NAME_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf = FName(TEXT("Construct"));
	void UInspectionScreen_Backup_C__pf1489439355::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf),NULL);
	}
	static FName NAME_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf = FName(TEXT("Tick"));
	void UInspectionScreen_Backup_C__pf1489439355::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		InspectionScreen_Backup_C__pf1489439355_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf),&Parms);
	}
	void UInspectionScreen_Backup_C__pf1489439355::StaticRegisterNativesUInspectionScreen_Backup_C__pf1489439355()
	{
		UClass* Class = UInspectionScreen_Backup_C__pf1489439355::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UInspectionScreen_Backup_C__pf1489439355::execbpf__Construct__pf },
			{ "StartScroll", &UInspectionScreen_Backup_C__pf1489439355::execbpf__StartScroll__pf },
			{ "StopScroll", &UInspectionScreen_Backup_C__pf1489439355::execbpf__StopScroll__pf },
			{ "Tick", &UInspectionScreen_Backup_C__pf1489439355::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "StartScroll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355, nullptr, "StartScroll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "StartScroll" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "StopScroll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355, nullptr, "StopScroll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "StopScroll" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InspectionScreen_Backup_C__pf1489439355_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InspectionScreen_Backup_C__pf1489439355_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355, nullptr, "Tick", nullptr, nullptr, sizeof(InspectionScreen_Backup_C__pf1489439355_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_NoRegister()
	{
		return UInspectionScreen_Backup_C__pf1489439355::StaticClass();
	}
	struct Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_151__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_151__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_153__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_153__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemDescriptionText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ItemDescriptionText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemDescription__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__ItemDescription__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ScrollValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ResetTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ResetTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Construct__pf, "Construct" }, // 3458591756
		{ &Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StartScroll__pf, "StartScroll" }, // 3533416020
		{ &Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__StopScroll__pf, "StopScroll" }, // 3408350308
		{ &Z_Construct_UFunction_UInspectionScreen_Backup_C__pf1489439355_bpf__Tick__pf, "Tick" }, // 877691096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InspectionScreen_Backup__pf1489439355.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "InspectionScreen_Backup_C" },
		{ "ReplaceConverted", "/Game/UI/InspectionScreen_Backup.InspectionScreen_Backup_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_151__pf_MetaData[] = {
		{ "Category", "InspectionScreen_Backup" },
		{ "DisplayName", "Image_151" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Image_151" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_151__pf = { "Image_151", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__Image_151__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_151__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_151__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_153__pf_MetaData[] = {
		{ "Category", "InspectionScreen_Backup" },
		{ "DisplayName", "Image_153" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Image_153" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_153__pf = { "Image_153", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__Image_153__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_153__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_153__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescriptionText__pf_MetaData[] = {
		{ "Category", "InspectionScreen_Backup" },
		{ "DisplayName", "ItemDescriptionText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "ItemDescriptionText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescriptionText__pf = { "ItemDescriptionText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__ItemDescriptionText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescriptionText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescriptionText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollB__pf_MetaData[] = {
		{ "Category", "InspectionScreen_Backup" },
		{ "DisplayName", "ScrollB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "ScrollB" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollB__pf = { "ScrollB", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__ScrollB__pf), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescription__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Item Description" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ItemDescription" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescription__pf = { "ItemDescription", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__ItemDescription__pf), METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescription__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescription__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollValue__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scroll Value" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ScrollValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollValue__pf = { "ScrollValue", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__ScrollValue__pf), METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ResetTime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Reset Time" },
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ResetTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ResetTime__pf = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, bpv__ResetTime__pf), METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ResetTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ResetTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable" },
	};
#endif
	void Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit(void* Obj)
	{
		((UInspectionScreen_Backup_C__pf1489439355*)Obj)->b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = { "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInspectionScreen_Backup_C__pf1489439355), &Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((UInspectionScreen_Backup_C__pf1489439355*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInspectionScreen_Backup_C__pf1489439355), &Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((UInspectionScreen_Backup_C__pf1489439355*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInspectionScreen_Backup_C__pf1489439355), &Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectionScreen_Backup__pf1489439355.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionScreen_Backup_C__pf1489439355, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_151__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__Image_153__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescriptionText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ItemDescription__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ScrollValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_bpv__ResetTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInspectionScreen_Backup_C__pf1489439355>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::ClassParams = {
		&UInspectionScreen_Backup_C__pf1489439355::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/InspectionScreen_Backup"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("InspectionScreen_Backup_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UInspectionScreen_Backup_C__pf1489439355, TEXT("InspectionScreen_Backup_C"), 2197510192);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UInspectionScreen_Backup_C__pf1489439355>()
	{
		return UInspectionScreen_Backup_C__pf1489439355::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInspectionScreen_Backup_C__pf1489439355(Z_Construct_UClass_UInspectionScreen_Backup_C__pf1489439355, &UInspectionScreen_Backup_C__pf1489439355::StaticClass, TEXT("/Game/UI/InspectionScreen_Backup"), TEXT("InspectionScreen_Backup_C"), true, TEXT("/Game/UI/InspectionScreen_Backup"), TEXT("/Game/UI/InspectionScreen_Backup.InspectionScreen_Backup_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInspectionScreen_Backup_C__pf1489439355);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
