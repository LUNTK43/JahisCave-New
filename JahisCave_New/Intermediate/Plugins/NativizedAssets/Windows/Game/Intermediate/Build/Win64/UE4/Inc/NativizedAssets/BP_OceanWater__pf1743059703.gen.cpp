// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_OceanWater__pf1743059703.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_OceanWater__pf1743059703() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_OceanWater_C__pf1743059703();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_OceanWater_C__pf1743059703::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_OceanWater_C__pf1743059703::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_OceanWater_C__pf1743059703::StaticRegisterNativesABP_OceanWater_C__pf1743059703()
	{
		UClass* Class = ABP_OceanWater_C__pf1743059703::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_OceanWater_C__pf1743059703::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_OceanWater_C__pf1743059703, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_OceanWater_C__pf1743059703();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_NoRegister()
	{
		return ABP_OceanWater_C__pf1743059703::StaticClass();
	}
	struct Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaterxMaterial__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__WaterxMaterial__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OverallxWaterxScale__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OverallxWaterxScale__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Displacement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Displacement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TesselationxFactor__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TesselationxFactor__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OverallxWaterxSpeed__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OverallxWaterxSpeed__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AmplifyxLargexNormals__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AmplifyxLargexNormals__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AmplifyxSmallxNormals__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AmplifyxSmallxNormals__pfTT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_OceanWater_C__pf1743059703_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 426708186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_OceanWater__pf1743059703.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_OceanWater_C" },
		{ "ReplaceConverted", "/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater.BP_OceanWater_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterSurface__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "WaterSurface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterSurface__pf = { "WaterSurface", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__WaterSurface__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterSurface__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterSurface__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ocean Material" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Ocean Material" },
		{ "tooltip", "What material is applied to the ocean" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OceanxMaterial__pfT = { "Ocean Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__OceanxMaterial__pfT), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OceanxMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Scale X" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Water Scale X" },
		{ "tooltip", "Sets scale of water plane along local X Axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexX__pfTT = { "Water Scale X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__WaterxScalexX__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexX__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Scale Y" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Water Scale Y" },
		{ "tooltip", "Sets scale of water plane along local Y Axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexY__pfTT = { "Water Scale Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__WaterxScalexY__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexY__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Water Material" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Water Material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxMaterial__pfT = { "Water Material", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__WaterxMaterial__pfT), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxMaterial__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Overall Water Scale" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Overall Water Scale" },
		{ "tooltip", "Scales the material on the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxScale__pfTT = { "Overall Water Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__OverallxWaterxScale__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxScale__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__Displacement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Displacement" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Displacement" },
		{ "tooltip", "How much the material's displacement value affects the surface" },
		{ "UIMax", "500" },
		{ "UIMin", "-500" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__Displacement__pf = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__Displacement__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__Displacement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__Displacement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__TesselationxFactor__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tesselation Factor" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Tesselation Factor" },
		{ "tooltip", "Controls the amount of GPU tesselation applied to the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__TesselationxFactor__pfT = { "Tesselation Factor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__TesselationxFactor__pfT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__TesselationxFactor__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__TesselationxFactor__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxSpeed__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Overall Water Speed" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Overall Water Speed" },
		{ "tooltip", "Overall adjustment for the wave speeds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxSpeed__pfTT = { "Overall Water Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__OverallxWaterxSpeed__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxSpeed__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxSpeed__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxLargexNormals__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Amplify Large Normals" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Amplify Large Normals" },
		{ "tooltip", "Adjust the strength of wave normals" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxLargexNormals__pfTT = { "Amplify Large Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__AmplifyxLargexNormals__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxLargexNormals__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxLargexNormals__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxSmallxNormals__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Amplify Small Normals" },
		{ "ModuleRelativePath", "Public/BP_OceanWater__pf1743059703.h" },
		{ "OverrideNativeName", "Amplify Small Normals" },
		{ "tooltip", "Adjust the strength of wavelet normals" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxSmallxNormals__pfTT = { "Amplify Small Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_OceanWater_C__pf1743059703, bpv__AmplifyxSmallxNormals__pfTT), METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxSmallxNormals__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxSmallxNormals__pfTT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterSurface__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OceanxMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexX__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxScalexY__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__WaterxMaterial__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxScale__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__Displacement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__TesselationxFactor__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__OverallxWaterxSpeed__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxLargexNormals__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::NewProp_bpv__AmplifyxSmallxNormals__pfTT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_OceanWater_C__pf1743059703>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::ClassParams = {
		&ABP_OceanWater_C__pf1743059703::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_OceanWater_C__pf1743059703()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_OceanWater_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_OceanWater_C__pf1743059703_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_OceanWater_C__pf1743059703, TEXT("BP_OceanWater_C"), 162997464);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_OceanWater_C__pf1743059703>()
	{
		return ABP_OceanWater_C__pf1743059703::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_OceanWater_C__pf1743059703(Z_Construct_UClass_ABP_OceanWater_C__pf1743059703, &ABP_OceanWater_C__pf1743059703::StaticClass, TEXT("/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater"), TEXT("BP_OceanWater_C"), true, TEXT("/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater"), TEXT("/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater.BP_OceanWater_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_OceanWater_C__pf1743059703);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
