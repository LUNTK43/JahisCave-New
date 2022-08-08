#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
class USceneComponent;
#include "FirstPersonHUD__pf205484891.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C", OverrideNativeName="FirstPersonHUD_C"))
class AFirstPersonHUD_C__pf205484891 : public AHUD
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyHUD", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HMDEnabled?", Category="Default", OverrideNativeName="HMDEnabled?"))
	bool bpv__HMDEnabledx__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_SizeX"))
	int32 b0l__K2Node_Event_SizeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_SizeY"))
	int32 b0l__K2Node_Event_SizeY__pf;
	AFirstPersonHUD_C__pf205484891(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FirstPersonHUD__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Comment="/** \t *\tHook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class. \t *\tNote:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node).\t */", ToolTip="Hook to allow blueprints to do custom HUD drawing. @see bSuppressNativeHUD to control HUD drawing in base class.Note:  the canvas resource used for drawing is only valid during this event, it will not be valid if drawing functions are called later (e.g. after a Delay node).", CppFromBpEvent, OverrideNativeName="ReceiveDrawHUD"))
	virtual void bpf__ReceiveDrawHUD__pf(int32 bpp__SizeX__pf, int32 bpp__SizeY__pf);
public:
};
