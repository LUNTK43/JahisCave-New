#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Interact_Interface__pf205484891.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UMotionControllerComponent;
class UCameraComponent;
class AActor;
class ABP_ItemParent_C__pf476478934;
class UHeadsUpDisplay_C__pf1489439355;
class UWorld;
class AFirstPersonGameMode_C__pf205484891;
#include "FirstPersonCharacter__pf205484891.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C", OverrideNativeName="FirstPersonCharacter_C"))
class AFirstPersonCharacter_C__pf205484891 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ItemGrip"))
	USceneComponent* bpv__ItemGrip__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VR_Gun"))
	USkeletalMeshComponent* bpv__VR_Gun__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VR_Marker"))
	USphereComponent* bpv__VR_Marker__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="R_MotionController"))
	UMotionControllerComponent* bpv__R_MotionController__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="L_MotionController"))
	UMotionControllerComponent* bpv__L_MotionController__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyCharacter", OverrideNativeName="FirstPersonCamera"))
	UCameraComponent* bpv__FirstPersonCamera__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gun Offset", Category="Default", Tooltip="Gun offset from the camera location", OverrideNativeName="GunOffset"))
	FVector bpv__GunOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Turn Rate", Category="Default", OverrideNativeName="BaseTurnRate"))
	float bpv__BaseTurnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Look Up Rate", Category="Default", OverrideNativeName="BaseLookUpRate"))
	float bpv__BaseLookUpRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Using Motion Controllers?", Category="Default", OverrideNativeName="UsingMotionControllers?"))
	bool bpv__UsingMotionControllersx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Finger Index", Category="Default", MultiLine="true", OverrideNativeName="FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> bpv__FingerIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Look at Actor", Category="Default", MultiLine="true", OverrideNativeName="LookAtActor"))
	AActor* bpv__LookAtActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Currently Held Item", Category="Default", MultiLine="true", OverrideNativeName="CurrentlyHeldItem"))
	ABP_ItemParent_C__pf476478934* bpv__CurrentlyHeldItem__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Look at Distance", Category="Default", MultiLine="true", Tooltip="This is the distance at which looked item is checked - the lower the value the closer the character has to get to the item", OverrideNativeName="LookAtDistance"))
	float bpv__LookAtDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HUD", Category="Default", MultiLine="true", OverrideNativeName="HUD"))
	UHeadsUpDisplay_C__pf1489439355* bpv__HUD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Menu", Category="Default", MultiLine="true", OverrideNativeName="MainMenu"))
	TSoftObjectPtr<UWorld> bpv__MainMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b0l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b0l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsInteract_Interface"))
	TScriptInterface<IInteract_Interface_C> b0l__K2Node_DynamicCast_AsInteract_Interface__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckLookAt_LookAtActor"))
	AActor* b0l__CallFunc_CheckLookAt_LookAtActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsInteract_Interface_1"))
	TScriptInterface<IInteract_Interface_C> b0l__K2Node_DynamicCast_AsInteract_Interface_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Game_Mode"))
	AFirstPersonGameMode_C__pf205484891* b0l__K2Node_DynamicCast_AsFirst_Person_Game_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b0l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_1"))
	bool b0l__Temp_bool_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_1"))
	FVector b0l__K2Node_Select_Default_1__pf;
	AFirstPersonCharacter_C__pf205484891(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_157"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_172"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_QuitGame_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_QuitGame_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_MainMenu_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_MainMenu_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Cancel_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Cancel_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ResetVR_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckLookAt"))
	virtual void bpf__CheckLookAt__pf(/*out*/ AActor*& bpp__LookAtActor__pf);
public:
};
