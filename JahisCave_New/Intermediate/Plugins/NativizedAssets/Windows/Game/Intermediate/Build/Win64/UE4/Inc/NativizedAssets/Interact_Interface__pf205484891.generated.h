// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFirstPersonCharacter_C__pf205484891;
#ifdef NATIVIZEDASSETS_Interact_Interface__pf205484891_generated_h
#error "Interact_Interface__pf205484891.generated.h already included, missing '#pragma once' in Interact_Interface__pf205484891.h"
#endif
#define NATIVIZEDASSETS_Interact_Interface__pf205484891_generated_h

#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_SPARSE_DATA
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_RPC_WRAPPERS
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_EVENT_PARMS \
	struct Interact_Interface_C_eventbpf__InteractWith__pf_Parms \
	{ \
		AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf; \
	}; \
	struct Interact_Interface_C_eventbpf__LookAt__pf_Parms \
	{ \
		AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf; \
	};


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_CALLBACK_WRAPPERS
#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteract_Interface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract_Interface_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteract_Interface_C); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract_Interface_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteract_Interface_C(UInteract_Interface_C&&); \
	NO_API UInteract_Interface_C(const UInteract_Interface_C&); \
public:


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteract_Interface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteract_Interface_C(UInteract_Interface_C&&); \
	NO_API UInteract_Interface_C(const UInteract_Interface_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteract_Interface_C); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract_Interface_C); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract_Interface_C)


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteract_Interface_C(); \
	friend struct Z_Construct_UClass_UInteract_Interface_C_Statics; \
public: \
	DECLARE_CLASS(UInteract_Interface_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/FirstPersonBP/Blueprints/Interact_Interface"), NO_API) \
	DECLARE_SERIALIZER(UInteract_Interface_C)


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_GENERATED_UINTERFACE_BODY() \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_GENERATED_UINTERFACE_BODY() \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteract_Interface_C() {} \
public: \
	typedef UInteract_Interface_C UClassType; \
	typedef IInteract_Interface_C ThisClass; \
	static void Execute_bpf__InteractWith__pf(UObject* O, AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
	static void Execute_bpf__LookAt__pf(UObject* O, AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteract_Interface_C() {} \
public: \
	typedef UInteract_Interface_C UClassType; \
	typedef IInteract_Interface_C ThisClass; \
	static void Execute_bpf__InteractWith__pf(UObject* O, AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
	static void Execute_bpf__LookAt__pf(UObject* O, AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_5_PROLOG \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_EVENT_PARMS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_SPARSE_DATA \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_RPC_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_CALLBACK_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_SPARSE_DATA \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_CALLBACK_WRAPPERS \
	JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UInteract_Interface_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JahisCave_New_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Interact_Interface__pf205484891_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
