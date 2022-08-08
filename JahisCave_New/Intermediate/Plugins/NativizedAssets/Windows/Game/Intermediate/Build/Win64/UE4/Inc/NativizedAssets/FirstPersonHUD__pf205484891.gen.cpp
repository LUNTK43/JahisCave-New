// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FirstPersonHUD__pf205484891.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonHUD__pf205484891() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonHUD_C__pf205484891::execbpf__ReceiveDrawHUD__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__SizeX__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__SizeY__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveDrawHUD__pf(Z_Param_bpp__SizeX__pf,Z_Param_bpp__SizeY__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf = FName(TEXT("ReceiveDrawHUD"));
	void AFirstPersonHUD_C__pf205484891::eventbpf__ReceiveDrawHUD__pf(int32 bpp__SizeX__pf, int32 bpp__SizeY__pf)
	{
		FirstPersonHUD_C__pf205484891_eventbpf__ReceiveDrawHUD__pf_Parms Parms;
		Parms.bpp__SizeX__pf=bpp__SizeX__pf;
		Parms.bpp__SizeY__pf=bpp__SizeY__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf),&Parms);
	}
	void AFirstPersonHUD_C__pf205484891::StaticRegisterNativesAFirstPersonHUD_C__pf205484891()
	{
		UClass* Class = AFirstPersonHUD_C__pf205484891::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveDrawHUD", &AFirstPersonHUD_C__pf205484891::execbpf__ReceiveDrawHUD__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SizeX__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SizeY__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::NewProp_bpp__SizeX__pf = { "bpp__SizeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonHUD_C__pf205484891_eventbpf__ReceiveDrawHUD__pf_Parms, bpp__SizeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::NewProp_bpp__SizeY__pf = { "bpp__SizeY__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonHUD_C__pf205484891_eventbpf__ReceiveDrawHUD__pf_Parms, bpp__SizeY__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::NewProp_bpp__SizeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::NewProp_bpp__SizeY__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** t *tHook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class. t *tNote:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node).t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "OverrideNativeName", "ReceiveDrawHUD" },
		{ "ToolTip", "Hook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class.Note:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonHUD_C__pf205484891, nullptr, "ReceiveDrawHUD", nullptr, nullptr, sizeof(FirstPersonHUD_C__pf205484891_eventbpf__ReceiveDrawHUD__pf_Parms), Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonHUD_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveDrawHUD" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_NoRegister()
	{
		return AFirstPersonHUD_C__pf205484891::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HMDEnabledx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__HMDEnabledx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HMDEnabledx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_SizeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_SizeX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_SizeY__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_SizeY__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonHUD_C__pf205484891_bpf__ReceiveDrawHUD__pf, "ReceiveDrawHUD" }, // 1515952227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FirstPersonHUD__pf205484891.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FirstPersonHUD_C" },
		{ "ReplaceConverted", "/Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonHUD_C__pf205484891, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "HMDEnabled?" },
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "OverrideNativeName", "HMDEnabled?" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy_SetBit(void* Obj)
	{
		((AFirstPersonHUD_C__pf205484891*)Obj)->bpv__HMDEnabledx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy = { "HMDEnabled?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonHUD_C__pf205484891), &Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_SizeX" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeX__pf = { "K2Node_Event_SizeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonHUD_C__pf205484891, b0l__K2Node_Event_SizeX__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeY__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonHUD__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_SizeY" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeY__pf = { "K2Node_Event_SizeY", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonHUD_C__pf205484891, b0l__K2Node_Event_SizeY__pf), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeY__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeY__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_bpv__HMDEnabledx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_SizeY__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonHUD_C__pf205484891>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::ClassParams = {
		&AFirstPersonHUD_C__pf205484891::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonHUD"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FirstPersonHUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonHUD_C__pf205484891_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFirstPersonHUD_C__pf205484891, TEXT("FirstPersonHUD_C"), 3071857600);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFirstPersonHUD_C__pf205484891>()
	{
		return AFirstPersonHUD_C__pf205484891::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonHUD_C__pf205484891(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891, &AFirstPersonHUD_C__pf205484891::StaticClass, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonHUD"), TEXT("FirstPersonHUD_C"), true, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonHUD"), TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonHUD_C__pf205484891);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
