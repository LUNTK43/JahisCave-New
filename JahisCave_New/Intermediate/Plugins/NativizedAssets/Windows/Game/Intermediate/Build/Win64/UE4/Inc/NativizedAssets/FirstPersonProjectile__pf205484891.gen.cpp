// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FirstPersonProjectile__pf205484891.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonProjectile__pf205484891() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonProjectile_C__pf205484891::execbpf__ReceiveHit__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__MyComp__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__Other__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_UBOOL(Z_Param_bpp__bSelfMoved__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitLocation__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitNormal__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveHit__pf(Z_Param_bpp__MyComp__pf,Z_Param_bpp__Other__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__bSelfMoved__pf,Z_Param_bpp__HitLocation__pf,Z_Param_bpp__HitNormal__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf = FName(TEXT("ReceiveHit"));
	void AFirstPersonProjectile_C__pf205484891::eventbpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const)
	{
		FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms Parms;
		Parms.bpp__MyComp__pf=bpp__MyComp__pf;
		Parms.bpp__Other__pf=bpp__Other__pf;
		Parms.bpp__OtherComp__pf=bpp__OtherComp__pf;
		Parms.bpp__bSelfMoved__pf=bpp__bSelfMoved__pf ? true : false;
		Parms.bpp__HitLocation__pf=bpp__HitLocation__pf;
		Parms.bpp__HitNormal__pf=bpp__HitNormal__pf;
		Parms.bpp__NormalImpulse__pf=bpp__NormalImpulse__pf;
		Parms.bpp__Hit__pf__const=bpp__Hit__pf__const;
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf),&Parms);
	}
	void AFirstPersonProjectile_C__pf205484891::StaticRegisterNativesAFirstPersonProjectile_C__pf205484891()
	{
		UClass* Class = AFirstPersonProjectile_C__pf205484891::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveHit", &AFirstPersonProjectile_C__pf205484891::execbpf__ReceiveHit__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MyComp__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static void NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bSelfMoved__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitLocation__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitNormal__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Hit__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Hit__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf = { "bpp__MyComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf = { "bpp__Other__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	void Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj)
	{
		((FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms*)Obj)->bpp__bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf = { "bpp__bSelfMoved__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms), &Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf = { "bpp__HitLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf = { "bpp__HitNormal__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.t * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.t * For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.t *t * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.t * @note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal't * will be adjusted to indicate force from the other object against this object.t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Hit" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "ReceiveHit" },
		{ "ToolTip", "Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.@note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891, nullptr, "ReceiveHit", nullptr, nullptr, sizeof(FirstPersonProjectile_C__pf205484891_eventbpf__ReceiveHit__pf_Parms), Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveHit" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_NoRegister()
	{
		return AFirstPersonProjectile_C__pf205484891::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Projectile__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Projectile__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CollisionComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CollisionComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_MyComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Other__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_bSelfMoved__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Hit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_Hit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonProjectile_C__pf205484891_bpf__ReceiveHit__pf, "ReceiveHit" }, // 1056433043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirstPersonProjectile__pf205484891.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FirstPersonProjectile_C" },
		{ "ReplaceConverted", "/Game/FirstPersonBP/Blueprints/FirstPersonProjectile.FirstPersonProjectile_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Projectile__pf_MetaData[] = {
		{ "Category", "MyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "Projectile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Projectile__pf = { "Projectile", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, bpv__Projectile__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Projectile__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Projectile__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "MyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, bpv__Sphere__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__CollisionComponent__pf_MetaData[] = {
		{ "Category", "MyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "CollisionComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__CollisionComponent__pf = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, bpv__CollisionComponent__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__CollisionComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__CollisionComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_MyComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_MyComp__pf = { "K2Node_Event_MyComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_Other" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Other__pf = { "K2Node_Event_Other", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf = { "K2Node_Event_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_bSelfMoved" },
	};
#endif
	void Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj)
	{
		((AFirstPersonProjectile_C__pf205484891*)Obj)->b0l__K2Node_Event_bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf = { "K2Node_Event_bSelfMoved", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirstPersonProjectile_C__pf205484891), &Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_HitLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf = { "K2Node_Event_HitLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_HitNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf = { "K2Node_Event_HitNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf = { "K2Node_Event_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonProjectile__pf205484891.h" },
		{ "OverrideNativeName", "K2Node_Event_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Hit__pf = { "K2Node_Event_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonProjectile_C__pf205484891, b0l__K2Node_Event_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Projectile__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_bpv__CollisionComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_MyComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::NewProp_b0l__K2Node_Event_Hit__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonProjectile_C__pf205484891>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::ClassParams = {
		&AFirstPersonProjectile_C__pf205484891::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonProjectile"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FirstPersonProjectile_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFirstPersonProjectile_C__pf205484891, TEXT("FirstPersonProjectile_C"), 4230633824);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFirstPersonProjectile_C__pf205484891>()
	{
		return AFirstPersonProjectile_C__pf205484891::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonProjectile_C__pf205484891(Z_Construct_UClass_AFirstPersonProjectile_C__pf205484891, &AFirstPersonProjectile_C__pf205484891::StaticClass, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonProjectile"), TEXT("FirstPersonProjectile_C"), true, TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonProjectile"), TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonProjectile.FirstPersonProjectile_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonProjectile_C__pf205484891);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
