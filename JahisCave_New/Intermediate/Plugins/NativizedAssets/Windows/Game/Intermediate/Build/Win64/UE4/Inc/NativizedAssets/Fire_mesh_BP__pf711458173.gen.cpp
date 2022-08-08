// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Fire_mesh_BP__pf711458173.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire_mesh_BP__pf711458173() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFire_mesh_BP_C__pf711458173();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AFire_mesh_BP_C__pf711458173::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFire_mesh_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFire_mesh_BP_C__pf711458173::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AFire_mesh_BP_C__pf711458173::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf),NULL);
	}
	void AFire_mesh_BP_C__pf711458173::StaticRegisterNativesAFire_mesh_BP_C__pf711458173()
	{
		UClass* Class = AFire_mesh_BP_C__pf711458173::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AFire_mesh_BP_C__pf711458173::execbpf__ReceiveBeginPlay__pf },
			{ "UserConstructionScript", &AFire_mesh_BP_C__pf711458173::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_mesh_BP_C__pf711458173, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_mesh_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_mesh_BP_C__pf711458173, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFire_mesh_BP_C__pf711458173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_NoRegister()
	{
		return AFire_mesh_BP_C__pf711458173::StaticClass();
	}
	struct Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Billboard__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Billboard__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Particlesystem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Particlesystem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__particle_fire__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__particle_fire__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Staticmesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Staticmesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Particle_offset__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Particle_offset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Particle_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Particle_Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Smoke_Emitter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[];
#endif
		static void NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Distortion_Emittter_Enable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3002405225
		{ &Z_Construct_UFunction_AFire_mesh_BP_C__pf711458173_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1177122612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Fire_mesh_BP__pf711458173.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Fire_mesh_BP_C" },
		{ "ReplaceConverted", "/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP.Fire_mesh_BP_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Billboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf = { "Billboard", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Billboard__pf), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Particlesystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf = { "Particlesystem", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Particlesystem__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__particle_fire__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Fire" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "particle_fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__particle_fire__pf = { "particle_fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__particle_fire__pf), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__particle_fire__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__particle_fire__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Staticmesh" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Staticmesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf = { "Staticmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Staticmesh__pf), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_offset__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Offset" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Particle_offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_offset__pf = { "Particle_offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Particle_offset__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_offset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_offset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Particle Scale" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Particle_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf = { "Particle_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, bpv__Particle_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Smoke Emitter Enable" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Smoke_Emitter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_mesh_BP_C__pf711458173*)Obj)->bpv__Smoke_Emitter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf = { "Smoke_Emitter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_mesh_BP_C__pf711458173), &Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData[] = {
		{ "Category", "Fire Settings" },
		{ "DisplayName", "Distortion Emittter Enable" },
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "Distortion_Emittter_Enable" },
	};
#endif
	void Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit(void* Obj)
	{
		((AFire_mesh_BP_C__pf711458173*)Obj)->bpv__Distortion_Emittter_Enable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf = { "Distortion_Emittter_Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_mesh_BP_C__pf711458173), &Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fire_mesh_BP__pf711458173.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_mesh_BP_C__pf711458173, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Billboard__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particlesystem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__particle_fire__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Staticmesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Particle_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Smoke_Emitter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_bpv__Distortion_Emittter_Enable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire_mesh_BP_C__pf711458173>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::ClassParams = {
		&AFire_mesh_BP_C__pf711458173::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire_mesh_BP_C__pf711458173()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Fire_mesh_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_mesh_BP_C__pf711458173_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFire_mesh_BP_C__pf711458173, TEXT("Fire_mesh_BP_C"), 591514132);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFire_mesh_BP_C__pf711458173>()
	{
		return AFire_mesh_BP_C__pf711458173::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire_mesh_BP_C__pf711458173(Z_Construct_UClass_AFire_mesh_BP_C__pf711458173, &AFire_mesh_BP_C__pf711458173::StaticClass, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP"), TEXT("Fire_mesh_BP_C"), true, TEXT("/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP"), TEXT("/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP.Fire_mesh_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire_mesh_BP_C__pf711458173);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
