// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FirstPersonGameMode__pf205484891.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGameMode__pf205484891() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonGameMode_C__pf205484891::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFirstPersonGameMode_C__pf205484891::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AFirstPersonGameMode_C__pf205484891::StaticRegisterNativesAFirstPersonGameMode_C__pf205484891()
	{
		UClass* Class = AFirstPersonGameMode_C__pf205484891::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AFirstPersonGameMode_C__pf205484891::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/FirstPersonGameMode__pf205484891.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_NoRegister()
	{
		return AFirstPersonGameMode_C__pf205484891::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HeadsUpDisplayWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HeadsUpDisplayWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_NewPlayer__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonGameMode_C__pf205484891_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1431064016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstPersonGameMode__pf205484891.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonGameMode__pf205484891.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FirstPersonGameMode_C" },
		{ "ReplaceConverted", "/Game/FirstPersonBP/Blueprints/FirstPersonGameMode.FirstPersonGameMode_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "MyGame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonGameMode__pf205484891.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonGameMode_C__pf205484891, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__HeadsUpDisplayWidget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Heads Up Display Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonGameMode__pf205484891.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HeadsUpDisplayWidget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__HeadsUpDisplayWidget__pf = { "HeadsUpDisplayWidget", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonGameMode_C__pf205484891, bpv__HeadsUpDisplayWidget__pf), Z_Construct_UClass_UHeadsUpDisplay_C__pf1489439355_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__HeadsUpDisplayWidget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__HeadsUpDisplayWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonGameMode__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_NewPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NewPlayer__pf = { "K2Node_Event_NewPlayer", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonGameMode_C__pf205484891, b0l__K2Node_Event_NewPlayer__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_bpv__HeadsUpDisplayWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NewPlayer__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameMode_C__pf205484891>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::ClassParams = {
		&AFirstPersonGameMode_C__pf205484891::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonGameMode"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FirstPersonGameMode_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFirstPersonGameMode_C__pf205484891, TEXT("FirstPersonGameMode_C"), 3191675438);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFirstPersonGameMode_C__pf205484891>()
	{
		return AFirstPersonGameMode_C__pf205484891::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonGameMode_C__pf205484891(Z_Construct_UClass_AFirstPersonGameMode_C__pf205484891, &AFirstPersonGameMode_C__pf205484891::StaticClass, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonGameMode"), TEXT("FirstPersonGameMode_C"), true, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonGameMode"), TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonGameMode.FirstPersonGameMode_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGameMode_C__pf205484891);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
