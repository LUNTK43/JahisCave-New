#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Interact_Interface__pf205484891.h"
class UStaticMeshComponent;
class AFirstPersonCharacter_C__pf205484891;
class UInspectionScreen_C__pf1489439355;
#include "BP_ItemParent__pf476478934.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Items/BP_ItemParent.BP_ItemParent_C", OverrideNativeName="BP_ItemParent_C"))
class ABP_ItemParent_C__pf476478934 : public AActor, public IInteract_Interface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player", Category="Default", MultiLine="true", OverrideNativeName="Player"))
	AFirstPersonCharacter_C__pf205484891* bpv__Player__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Rotating", Category="Default", MultiLine="true", OverrideNativeName="isRotating"))
	bool bpv__isRotating__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Level", Category="Default", MultiLine="true", OverrideNativeName="ZoomLevel"))
	int32 bpv__ZoomLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Name", Category="Default", MultiLine="true", OverrideNativeName="ItemName"))
	FText bpv__ItemName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Description", Category="Default", MultiLine="true", OverrideNativeName="ItemDescription"))
	FText bpv__ItemDescription__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Min Value", Category="Default", MultiLine="true", OverrideNativeName="ZoomMinValue"))
	int32 bpv__ZoomMinValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Max Value", Category="Default", MultiLine="true", OverrideNativeName="ZoomMaxValue"))
	int32 bpv__ZoomMaxValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Add", Category="Default", MultiLine="true", OverrideNativeName="ZoomAdd"))
	int32 bpv__ZoomAdd__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mouse Rotation Value", Category="Default", MultiLine="true", OverrideNativeName="MouseRotationValue"))
	float bpv__MouseRotationValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Speed", Category="Default", MultiLine="true", OverrideNativeName="ZoomSpeed"))
	float bpv__ZoomSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inspection Distance", Category="Default", MultiLine="true", OverrideNativeName="InspectionDistance"))
	float bpv__InspectionDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inspection UI", Category="Default", MultiLine="true", OverrideNativeName="InspectionUI"))
	UInspectionScreen_C__pf1489439355* bpv__InspectionUI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_3"))
	FKey b0l__K2Node_InputKeyEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerCharacter_1"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_Event_PlayerCharacter_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerCharacter"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_Event_PlayerCharacter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FFormatArgumentData> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMessage_IsVisible"))
	bool b0l__CallFunc_UpdateMessage_IsVisible__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
	ABP_ItemParent_C__pf476478934(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ItemParent__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="LookAt"))
	virtual void bpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="InteractWith"))
	virtual void bpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1"))
	virtual void bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"))
	virtual void bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PickUpItem"))
	virtual void bpf__PickUpItem__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartInspect"))
	virtual void bpf__StartInspect__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DropItem"))
	virtual void bpf__DropItem__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopInspect"))
	virtual void bpf__StopInspect__pf();
public:
};
