#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "Credits__pf608494304.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Scenes/Gate_2_Levels/Credits.Credits_C", OverrideNativeName="Credits_C"))
class UCredits_C__pf608494304 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="Credits", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_1", Category="Credits", OverrideNativeName="Button_1"))
	UButton* bpv__Button_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_2", Category="Credits", OverrideNativeName="Button_2"))
	UButton* bpv__Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_3", Category="Credits", OverrideNativeName="Button_3"))
	UButton* bpv__Button_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_4", Category="Credits", OverrideNativeName="Button_4"))
	UButton* bpv__Button_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_5", Category="Credits", OverrideNativeName="Button_5"))
	UButton* bpv__Button_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_66", Category="Credits", OverrideNativeName="Button_66"))
	UButton* bpv__Button_66__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Credits", Category="Credits", OverrideNativeName="Credits"))
	UButton* bpv__Credits__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play", Category="Credits", OverrideNativeName="Play"))
	UButton* bpv__Play__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quit", Category="Credits", OverrideNativeName="Quit"))
	UButton* bpv__Quit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Titlescreen", Category="Credits", OverrideNativeName="Titlescreen"))
	UImage* bpv__Titlescreen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Art Station Jan Link", Category="Default", MultiLine="true", OverrideNativeName="ArtStation Jan Link"))
	FString bpv__ArtStationxJanxLink__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	FString bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", MultiLine="true", OverrideNativeName="NewVar_1"))
	FString bpv__NewVar_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 2", Category="Default", MultiLine="true", OverrideNativeName="NewVar_2"))
	FString bpv__NewVar_2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 3", Category="Default", MultiLine="true", OverrideNativeName="NewVar_3"))
	FString bpv__NewVar_3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 4", Category="Default", MultiLine="true", OverrideNativeName="NewVar_4"))
	FString bpv__NewVar_4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 5", Category="Default", MultiLine="true", OverrideNativeName="NewVar_5"))
	FString bpv__NewVar_5__pf;
	UCredits_C__pf608494304(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Credits__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Credits__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Credits_Button_66_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Credits_Button_66_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Play_ToolTipText_0"))
	virtual FText  bpf__Get_Play_ToolTipText_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
