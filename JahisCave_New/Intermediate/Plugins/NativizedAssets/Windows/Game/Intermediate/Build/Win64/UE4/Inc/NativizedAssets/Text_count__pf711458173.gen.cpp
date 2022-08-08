// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Text_count__pf711458173.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText_count__pf711458173() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UText_count_C__pf711458173_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UText_count_C__pf711458173();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UText_count_C__pf711458173::execbpf__GetText_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__GetText_0__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText_count_C__pf711458173::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText_count_C__pf711458173::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText_count_C__pf711458173::execbpf__ExecuteUbergraph_Text_count__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Text_count__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_UText_count_C__pf711458173_bpf__Construct__pf = FName(TEXT("Construct"));
	void UText_count_C__pf711458173::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UText_count_C__pf711458173_bpf__Construct__pf),NULL);
	}
	static FName NAME_UText_count_C__pf711458173_bpf__Tick__pf = FName(TEXT("Tick"));
	void UText_count_C__pf711458173::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		Text_count_C__pf711458173_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UText_count_C__pf711458173_bpf__Tick__pf),&Parms);
	}
	void UText_count_C__pf711458173::StaticRegisterNativesUText_count_C__pf711458173()
	{
		UClass* Class = UText_count_C__pf711458173::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UText_count_C__pf711458173::execbpf__Construct__pf },
			{ "ExecuteUbergraph_Text_count_1", &UText_count_C__pf711458173::execbpf__ExecuteUbergraph_Text_count__pf_1 },
			{ "GetText_0", &UText_count_C__pf711458173::execbpf__GetText_0__pf },
			{ "Tick", &UText_count_C__pf711458173::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText_count_C__pf711458173, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UText_count_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics
	{
		struct Text_count_C__pf711458173_eventbpf__ExecuteUbergraph_Text_count__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_count_C__pf711458173_eventbpf__ExecuteUbergraph_Text_count__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Text_count_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText_count_C__pf711458173, nullptr, "ExecuteUbergraph_Text_count_1", nullptr, nullptr, sizeof(Text_count_C__pf711458173_eventbpf__ExecuteUbergraph_Text_count__pf_1_Parms), Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_UText_count_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Text_count_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics
	{
		struct Text_count_C__pf711458173_eventbpf__GetText_0__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_count_C__pf711458173_eventbpf__GetText_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "GetText_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText_count_C__pf711458173, nullptr, "GetText_0", nullptr, nullptr, sizeof(Text_count_C__pf711458173_eventbpf__GetText_0__pf_Parms), Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UText_count_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetText_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_count_C__pf711458173_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_count_C__pf711458173_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText_count_C__pf711458173, nullptr, "Tick", nullptr, nullptr, sizeof(Text_count_C__pf711458173_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UText_count_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UText_count_C__pf711458173_NoRegister()
	{
		return UText_count_C__pf711458173::StaticClass();
	}
	struct Z_Construct_UClass_UText_count_C__pf711458173_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_171__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_171__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FloatxDamage__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__FloatxDamage__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Actorxref__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Actorxref__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Alocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Alocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_1__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_Select_Default__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UText_count_C__pf711458173_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UText_count_C__pf711458173_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Construct__pf, "Construct" }, // 4124576463
		{ &Z_Construct_UFunction_UText_count_C__pf711458173_bpf__ExecuteUbergraph_Text_count__pf_1, "ExecuteUbergraph_Text_count_1" }, // 3890613936
		{ &Z_Construct_UFunction_UText_count_C__pf711458173_bpf__GetText_0__pf, "GetText_0" }, // 621085915
		{ &Z_Construct_UFunction_UText_count_C__pf711458173_bpf__Tick__pf, "Tick" }, // 2512893871
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Text_count__pf711458173.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Text_count_C" },
		{ "ReplaceConverted", "/Game/M5VFXVOL2/BluePrints/Text_count.Text_count_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__TextBlock_171__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_171" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "TextBlock_171" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__TextBlock_171__pf = { "TextBlock_171", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, bpv__TextBlock_171__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__TextBlock_171__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__TextBlock_171__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__FloatxDamage__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Float Damage" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Float Damage" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__FloatxDamage__pfT = { "Float Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, bpv__FloatxDamage__pfT), METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__FloatxDamage__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__FloatxDamage__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Actorxref__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Actor Ref" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Actor ref" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Actorxref__pfT = { "Actor ref", nullptr, (EPropertyFlags)0x0011000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, bpv__Actorxref__pfT), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Actorxref__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Actorxref__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Alocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Alocation" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Alocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Alocation__pf = { "Alocation", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, bpv__Alocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Alocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Alocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((UText_count_C__pf711458173*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UText_count_C__pf711458173), &Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Temp_byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf = { "Temp_byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__Temp_byte_Variable__pf), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf = { "Temp_byte_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__Temp_byte_Variable_1__pf), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "CallFunc_ProjectWorldLocationToScreen_ScreenLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf = { "CallFunc_ProjectWorldLocationToScreen_ScreenLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_count__pf711458173.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UText_count_C__pf711458173, b0l__K2Node_Select_Default__pf), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UText_count_C__pf711458173_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__TextBlock_171__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__FloatxDamage__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Actorxref__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_bpv__Alocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__Temp_byte_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText_count_C__pf711458173_Statics::NewProp_b0l__K2Node_Select_Default__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UText_count_C__pf711458173_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UText_count_C__pf711458173>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UText_count_C__pf711458173_Statics::ClassParams = {
		&UText_count_C__pf711458173::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UText_count_C__pf711458173_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UText_count_C__pf711458173_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UText_count_C__pf711458173_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UText_count_C__pf711458173()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/M5VFXVOL2/BluePrints/Text_count"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Text_count_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UText_count_C__pf711458173_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UText_count_C__pf711458173, TEXT("Text_count_C"), 3675878991);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UText_count_C__pf711458173>()
	{
		return UText_count_C__pf711458173::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UText_count_C__pf711458173(Z_Construct_UClass_UText_count_C__pf711458173, &UText_count_C__pf711458173::StaticClass, TEXT("/Game/M5VFXVOL2/BluePrints/Text_count"), TEXT("Text_count_C"), true, TEXT("/Game/M5VFXVOL2/BluePrints/Text_count"), TEXT("/Game/M5VFXVOL2/BluePrints/Text_count.Text_count_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UText_count_C__pf711458173);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
