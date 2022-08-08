// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_TranslucentWater__pf401702993.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_TranslucentWater__pf401702993() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(ABP_TranslucentWater_C__pf401702993::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_TranslucentWater_C__pf401702993::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_TranslucentWater_C__pf401702993::StaticRegisterNativesABP_TranslucentWater_C__pf401702993()
	{
		UClass* Class = ABP_TranslucentWater_C__pf401702993::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_TranslucentWater_C__pf401702993::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_NoRegister()
	{
		return ABP_TranslucentWater_C__pf401702993::StaticClass();
	}
	struct Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaterSurface__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__WaterSurface__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OceanxMaterial__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OceanxMaterial__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaterxScalexX__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WaterxScalexX__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaterxScalexY__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WaterxScalexY__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavexSpeed__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WavexSpeed__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaterxMaterial__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__WaterxMaterial__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OverallxWaterxScale__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OverallxWaterxScale__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VariationxAmount__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__VariationxAmount__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PrimaryxWaterxColor__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PrimaryxWaterxColor__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SecondaryxWaterxColor__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SecondaryxWaterxColor__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BasexOpacity__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BasexOpacity__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShorexDepth__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ShorexDepth__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DepthxScale__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DepthxScale__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DeepxWaterxColor__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DeepxWaterxColor__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShallowxWaterxColor__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ShallowxWaterxColor__pfTT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_TranslucentWater_C__pf401702993_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1596882576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_TranslucentWater__pf401702993.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_TranslucentWater_C" },
		{ "ReplaceConverted", "/Game/WaterPlane/Translucent/Blueprint/BP_TranslucentWater.BP_TranslucentWater_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterSurface__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "WaterSurface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterSurface__pf = { "WaterSurface", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__WaterSurface__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterSurface__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterSurface__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ocean Material" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Ocean Material" },
		{ "tooltip", "What material is applied to the ocean" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OceanxMaterial__pfT = { "Ocean Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__OceanxMaterial__pfT), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Scale X" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Water Scale X" },
		{ "tooltip", "Sets scale of water plane along local X Axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexX__pfTT = { "Water Scale X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__WaterxScalexX__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Scale Y" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Water Scale Y" },
		{ "tooltip", "Sets scale of water plane along local Y Axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexY__pfTT = { "Water Scale Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__WaterxScalexY__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WavexSpeed__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wave Speed" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Wave Speed" },
		{ "tooltip", "Globally scale the speed of the wave moment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WavexSpeed__pfT = { "Wave Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__WavexSpeed__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WavexSpeed__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WavexSpeed__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Material" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Water Material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxMaterial__pfT = { "Water Material", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__WaterxMaterial__pfT), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Overall Water Scale" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Overall Water Scale" },
		{ "tooltip", "Scales the material on the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OverallxWaterxScale__pfTT = { "Overall Water Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__OverallxWaterxScale__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__VariationxAmount__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Variation Amount" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Variation Amount" },
		{ "tooltip", "Blends in a variation to the waves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__VariationxAmount__pfT = { "Variation Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__VariationxAmount__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__VariationxAmount__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__VariationxAmount__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__PrimaryxWaterxColor__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Primary Water Color" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Primary Water Color" },
		{ "tooltip", "This is the core color for the water shader" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__PrimaryxWaterxColor__pfTT = { "Primary Water Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__PrimaryxWaterxColor__pfTT), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__PrimaryxWaterxColor__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__PrimaryxWaterxColor__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__SecondaryxWaterxColor__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Secondary Water Color" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Secondary Water Color" },
		{ "tooltip", "Water color when viewed from a shallow angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__SecondaryxWaterxColor__pfTT = { "Secondary Water Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__SecondaryxWaterxColor__pfTT), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__SecondaryxWaterxColor__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__SecondaryxWaterxColor__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__BasexOpacity__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Opacity" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Base Opacity" },
		{ "tooltip", "Minimum overall opacity of the water plane" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__BasexOpacity__pfT = { "Base Opacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__BasexOpacity__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__BasexOpacity__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__BasexOpacity__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShorexDepth__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Shore Depth" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Shore Depth" },
		{ "tooltip", "Distance to fade shore edge opacity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShorexDepth__pfT = { "Shore Depth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__ShorexDepth__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShorexDepth__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShorexDepth__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DepthxScale__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Depth Scale" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Depth Scale" },
		{ "tooltip", "Scales the shader depth of the water" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DepthxScale__pfT = { "Depth Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__DepthxScale__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DepthxScale__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DepthxScale__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DeepxWaterxColor__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Deep Water Color" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Deep Water Color" },
		{ "tooltip", "Defines the deepest water color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DeepxWaterxColor__pfTT = { "Deep Water Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__DeepxWaterxColor__pfTT), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DeepxWaterxColor__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DeepxWaterxColor__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShallowxWaterxColor__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Shallow Water Color" },
		{ "ModuleRelativePath", "Public/BP_TranslucentWater__pf401702993.h" },
		{ "OverrideNativeName", "Shallow Water Color" },
		{ "tooltip", "Defines color of water at its highest depth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShallowxWaterxColor__pfTT = { "Shallow Water Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TranslucentWater_C__pf401702993, bpv__ShallowxWaterxColor__pfTT), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShallowxWaterxColor__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShallowxWaterxColor__pfTT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterSurface__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OceanxMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexX__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxScalexY__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WavexSpeed__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__WaterxMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__OverallxWaterxScale__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__VariationxAmount__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__PrimaryxWaterxColor__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__SecondaryxWaterxColor__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__BasexOpacity__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShorexDepth__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DepthxScale__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__DeepxWaterxColor__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::NewProp_bpv__ShallowxWaterxColor__pfTT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_TranslucentWater_C__pf401702993>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::ClassParams = {
		&ABP_TranslucentWater_C__pf401702993::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/WaterPlane/Translucent/Blueprint/BP_TranslucentWater"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_TranslucentWater_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_TranslucentWater_C__pf401702993, TEXT("BP_TranslucentWater_C"), 2428260253);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_TranslucentWater_C__pf401702993>()
	{
		return ABP_TranslucentWater_C__pf401702993::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_TranslucentWater_C__pf401702993(Z_Construct_UClass_ABP_TranslucentWater_C__pf401702993, &ABP_TranslucentWater_C__pf401702993::StaticClass, TEXT("/Game/WaterPlane/Translucent/Blueprint/BP_TranslucentWater"), TEXT("BP_TranslucentWater_C"), true, TEXT("/Game/WaterPlane/Translucent/Blueprint/BP_TranslucentWater"), TEXT("/Game/WaterPlane/Translucent/Blueprint/BP_TranslucentWater.BP_TranslucentWater_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_TranslucentWater_C__pf401702993);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
