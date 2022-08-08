#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "MainMenu__pf608494304.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Scenes/Gate_2_Levels/MainMenu.MainMenu_C", OverrideNativeName="MainMenu_C"))
class UMainMenu_C__pf608494304 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Credits", Category="MainMenu", OverrideNativeName="Credits"))
	UButton* bpv__Credits__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play", Category="MainMenu", OverrideNativeName="Play"))
	UButton* bpv__Play__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quit", Category="MainMenu", OverrideNativeName="Quit"))
	UButton* bpv__Quit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Titlescreen", Category="MainMenu", OverrideNativeName="Titlescreen"))
	UImage* bpv__Titlescreen__pf;
	UMainMenu_C__pf608494304(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_2(int32 bpp__EntryPoint__pf);
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
