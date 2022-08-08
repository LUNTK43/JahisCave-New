// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MainMenu__pf608494304.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu__pf608494304() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMainMenu_C__pf608494304_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMainMenu_C__pf608494304();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu_C__pf608494304::execbpf__Get_Play_ToolTipText_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__Get_Play_ToolTipText_0__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
		P_NATIVE_END;
	}
	void UMainMenu_C__pf608494304::StaticRegisterNativesUMainMenu_C__pf608494304()
	{
		UClass* Class = UMainMenu_C__pf608494304::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature", &UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf },
			{ "BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature", &UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf },
			{ "BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature", &UMainMenu_C__pf608494304::execbpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf },
			{ "Get_Play_ToolTipText_0", &UMainMenu_C__pf608494304::execbpf__Get_Play_ToolTipText_0__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_C__pf608494304, nullptr, "BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMainMenu_C__pf608494304();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_C__pf608494304, nullptr, "BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMainMenu_C__pf608494304();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_C__pf608494304, nullptr, "BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMainMenu_C__pf608494304();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics
	{
		struct MainMenu_C__pf608494304_eventbpf__Get_Play_ToolTipText_0__pf_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MainMenu_C__pf608494304_eventbpf__Get_Play_ToolTipText_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "Get_Play_ToolTipText_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_C__pf608494304, nullptr, "Get_Play_ToolTipText_0", nullptr, nullptr, sizeof(MainMenu_C__pf608494304_eventbpf__Get_Play_ToolTipText_0__pf_Parms), Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMainMenu_C__pf608494304();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get_Play_ToolTipText_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_C__pf608494304_NoRegister()
	{
		return UMainMenu_C__pf608494304::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_C__pf608494304_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Credits__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Credits__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Play__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Play__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Quit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Quit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Titlescreen__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Titlescreen__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf, "BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature" }, // 197745385
		{ &Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf, "BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" }, // 2147408590
		{ &Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf, "BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature" }, // 685590081
		{ &Z_Construct_UFunction_UMainMenu_C__pf608494304_bpf__Get_Play_ToolTipText_0__pf, "Get_Play_ToolTipText_0" }, // 2727502165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MainMenu__pf608494304.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MainMenu_C" },
		{ "ReplaceConverted", "/Game/Scenes/Gate_2_Levels/MainMenu.MainMenu_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Credits__pf_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "DisplayName", "Credits" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "Credits" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Credits__pf = { "Credits", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_C__pf608494304, bpv__Credits__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Credits__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Credits__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Play__pf_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "DisplayName", "Play" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "Play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Play__pf = { "Play", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_C__pf608494304, bpv__Play__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Play__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Play__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Quit__pf_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "DisplayName", "Quit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "Quit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Quit__pf = { "Quit", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_C__pf608494304, bpv__Quit__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Quit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Quit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Titlescreen__pf_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "DisplayName", "Titlescreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu__pf608494304.h" },
		{ "OverrideNativeName", "Titlescreen" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Titlescreen__pf = { "Titlescreen", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_C__pf608494304, bpv__Titlescreen__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Titlescreen__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Titlescreen__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Credits__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Play__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Quit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::NewProp_bpv__Titlescreen__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu_C__pf608494304>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::ClassParams = {
		&UMainMenu_C__pf608494304::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu_C__pf608494304()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Scenes/Gate_2_Levels/MainMenu"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MainMenu_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenu_C__pf608494304_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UMainMenu_C__pf608494304, TEXT("MainMenu_C"), 1040355406);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UMainMenu_C__pf608494304>()
	{
		return UMainMenu_C__pf608494304::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu_C__pf608494304(Z_Construct_UClass_UMainMenu_C__pf608494304, &UMainMenu_C__pf608494304::StaticClass, TEXT("/Game/Scenes/Gate_2_Levels/MainMenu"), TEXT("MainMenu_C"), true, TEXT("/Game/Scenes/Gate_2_Levels/MainMenu"), TEXT("/Game/Scenes/Gate_2_Levels/MainMenu.MainMenu_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu_C__pf608494304);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
