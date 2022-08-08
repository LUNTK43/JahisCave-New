// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HeadsUpDisplay__pf1489439355.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsUpDisplay__pf1489439355() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeadsUpDisplay_C__pf1489439355::execbpf__UpdateMessage__pf)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_bpp__TextToDisplay__pf__const);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsVisible__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateMessage__pf(Z_Param_Out_bpp__TextToDisplay__pf__const,Z_Param_Out_bpp__IsVisible__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadsUpDisplay_C__pf1489439355::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	static FName NAME_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf = FName(TEXT("Construct"));
	void UHeadsUpDisplay_C__pf1489439355::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf),NULL);
	}
	void UHeadsUpDisplay_C__pf1489439355::StaticRegisterNativesUHeadsUpDisplay_C__pf1489439355()
	{
		UClass* Class = UHeadsUpDisplay_C__pf1489439355::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UHeadsUpDisplay_C__pf1489439355::execbpf__Construct__pf },
			{ "UpdateMessage", &UHeadsUpDisplay_C__pf1489439355::execbpf__UpdateMessage__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics
	{
		struct HeadsUpDisplay_C__pf1489439355_eventbpf__UpdateMessage__pf_Parms
		{
			FText bpp__TextToDisplay__pf__const;
			bool bpp__IsVisible__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__TextToDisplay__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__TextToDisplay__pf__const;
		static void NewProp_bpp__IsVisible__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__IsVisible__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__TextToDisplay__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__TextToDisplay__pf__const = { "bpp__TextToDisplay__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HeadsUpDisplay_C__pf1489439355_eventbpf__UpdateMessage__pf_Parms, bpp__TextToDisplay__pf__const), METADATA_PARAMS(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__TextToDisplay__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__TextToDisplay__pf__const_MetaData)) };
	void Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__IsVisible__pf_SetBit(void* Obj)
	{
		((HeadsUpDisplay_C__pf1489439355_eventbpf__UpdateMessage__pf_Parms*)Obj)->bpp__IsVisible__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__IsVisible__pf = { "bpp__IsVisible__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(HeadsUpDisplay_C__pf1489439355_eventbpf__UpdateMessage__pf_Parms), &Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__IsVisible__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__TextToDisplay__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::NewProp_bpp__IsVisible__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "UpdateMessage" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355, nullptr, "UpdateMessage", nullptr, nullptr, sizeof(HeadsUpDisplay_C__pf1489439355_eventbpf__UpdateMessage__pf_Parms), Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateMessage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister()
	{
		return UHeadsUpDisplay_C__pf1489439355::StaticClass();
	}
	struct Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MessageBox__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MessageBox__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MessageText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MessageText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCharacter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCharacter__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__Construct__pf, "Construct" }, // 962853596
		{ &Z_Construct_UFunction_UHeadsUpDisplay_C__pf1489439355_bpf__UpdateMessage__pf, "UpdateMessage" }, // 451283786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HeadsUpDisplay__pf1489439355.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HeadsUpDisplay_C" },
		{ "ReplaceConverted", "/Game/UI/HeadsUpDisplay.HeadsUpDisplay_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageBox__pf_MetaData[] = {
		{ "Category", "HeadsUpDisplay" },
		{ "DisplayName", "MessageBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "MessageBox" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageBox__pf = { "MessageBox", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay_C__pf1489439355, bpv__MessageBox__pf), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageBox__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageBox__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageText__pf_MetaData[] = {
		{ "Category", "HeadsUpDisplay" },
		{ "DisplayName", "MessageText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "MessageText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageText__pf = { "MessageText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay_C__pf1489439355, bpv__MessageText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__PlayerCharacter__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Player Character" },
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PlayerCharacter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__PlayerCharacter__pf = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay_C__pf1489439355, bpv__PlayerCharacter__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__PlayerCharacter__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__PlayerCharacter__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "CallFunc_UpdateMessage_IsVisible" },
	};
#endif
	void Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit(void* Obj)
	{
		((UHeadsUpDisplay_C__pf1489439355*)Obj)->b0l__CallFunc_UpdateMessage_IsVisible__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf = { "CallFunc_UpdateMessage_IsVisible", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeadsUpDisplay_C__pf1489439355), &Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsFirst_Person_Character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf = { "K2Node_DynamicCast_AsFirst_Person_Character", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadsUpDisplay_C__pf1489439355, b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf), Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeadsUpDisplay__pf1489439355.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UHeadsUpDisplay_C__pf1489439355*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeadsUpDisplay_C__pf1489439355), &Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageBox__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__MessageText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_bpv__PlayerCharacter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__CallFunc_UpdateMessage_IsVisible__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadsUpDisplay_C__pf1489439355>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::ClassParams = {
		&UHeadsUpDisplay_C__pf1489439355::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/HeadsUpDisplay"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HeadsUpDisplay_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UHeadsUpDisplay_C__pf1489439355, TEXT("HeadsUpDisplay_C"), 1841506895);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UHeadsUpDisplay_C__pf1489439355>()
	{
		return UHeadsUpDisplay_C__pf1489439355::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadsUpDisplay_C__pf1489439355(Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355, &UHeadsUpDisplay_C__pf1489439355::StaticClass, TEXT("/Game/UI/HeadsUpDisplay"), TEXT("HeadsUpDisplay_C"), true, TEXT("/Game/UI/HeadsUpDisplay"), TEXT("/Game/UI/HeadsUpDisplay.HeadsUpDisplay_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadsUpDisplay_C__pf1489439355);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
