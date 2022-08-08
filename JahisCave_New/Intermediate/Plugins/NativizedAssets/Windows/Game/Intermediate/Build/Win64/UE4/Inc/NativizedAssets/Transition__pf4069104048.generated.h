// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFirstPersonCharacter_C__pf205484891;
class AActor;
#ifdef NATIVIZEDASSETS_Transition__pf4069104048_generated_h
#error "Transition__pf4069104048.generated.h already included, missing '#pragma once' in Transition__pf4069104048.h"
#endif
#define NATIVIZEDASSETS_Transition__pf4069104048_generated_h

#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_SPARSE_DATA
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__DoorPosition__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__DoorPosition__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__InteractWith__pf); \
	DECLARE_FUNCTION(execbpf__OpenDoor__pf); \
	DECLARE_FUNCTION(execbpf__LookAt__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveActorBeginOverlap__pf);


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__DoorPosition__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__DoorPosition__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__InteractWith__pf); \
	DECLARE_FUNCTION(execbpf__OpenDoor__pf); \
	DECLARE_FUNCTION(execbpf__LookAt__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveActorBeginOverlap__pf);


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_EVENT_PARMS \
	struct Transition_C__pf4069104048_eventbpf__InteractWith__pf_Parms \
	{ \
		AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf; \
	}; \
	struct Transition_C__pf4069104048_eventbpf__LookAt__pf_Parms \
	{ \
		AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf; \
	}; \
	struct Transition_C__pf4069104048_eventbpf__ReceiveActorBeginOverlap__pf_Parms \
	{ \
		AActor* bpp__OtherActor__pf; \
	};


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_CALLBACK_WRAPPERS \
	void eventbpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
 \
	void eventbpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
 \
	void eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf); \



#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATransition_C__pf4069104048(); \
	friend struct Z_Construct_UClass_ATransition_C__pf4069104048_Statics; \
public: \
	DECLARE_CLASS(ATransition_C__pf4069104048, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Transition/Transition"), NO_API) \
	DECLARE_SERIALIZER(ATransition_C__pf4069104048) \
	virtual UObject* _getUObject() const override { return const_cast<ATransition_C__pf4069104048*>(this); }


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATransition_C__pf4069104048(); \
	friend struct Z_Construct_UClass_ATransition_C__pf4069104048_Statics; \
public: \
	DECLARE_CLASS(ATransition_C__pf4069104048, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Transition/Transition"), NO_API) \
	DECLARE_SERIALIZER(ATransition_C__pf4069104048) \
	virtual UObject* _getUObject() const override { return const_cast<ATransition_C__pf4069104048*>(this); }


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATransition_C__pf4069104048(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATransition_C__pf4069104048) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransition_C__pf4069104048); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransition_C__pf4069104048); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransition_C__pf4069104048(ATransition_C__pf4069104048&&); \
	NO_API ATransition_C__pf4069104048(const ATransition_C__pf4069104048&); \
public:


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransition_C__pf4069104048(ATransition_C__pf4069104048&&); \
	NO_API ATransition_C__pf4069104048(const ATransition_C__pf4069104048&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransition_C__pf4069104048); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransition_C__pf4069104048); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATransition_C__pf4069104048)


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_PRIVATE_PROPERTY_OFFSET
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_17_PROLOG \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_EVENT_PARMS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_PRIVATE_PROPERTY_OFFSET \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_SPARSE_DATA \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_RPC_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_CALLBACK_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_INCLASS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_PRIVATE_PROPERTY_OFFSET \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_SPARSE_DATA \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_CALLBACK_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_INCLASS_NO_PURE_DECLS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ATransition_C__pf4069104048>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Transition__pf4069104048_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
