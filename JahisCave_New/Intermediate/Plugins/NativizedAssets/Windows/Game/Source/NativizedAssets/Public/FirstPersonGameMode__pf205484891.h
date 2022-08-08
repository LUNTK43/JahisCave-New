#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class UHeadsUpDisplay_C__pf1489439355;
class APlayerController;
#include "FirstPersonGameMode__pf205484891.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/FirstPersonGameMode.FirstPersonGameMode_C", OverrideNativeName="FirstPersonGameMode_C"))
class AFirstPersonGameMode_C__pf205484891 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyGame", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Heads Up Display Widget", Category="Default", MultiLine="true", OverrideNativeName="HeadsUpDisplayWidget"))
	UHeadsUpDisplay_C__pf1489439355* bpv__HeadsUpDisplayWidget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewPlayer"))
	APlayerController* b0l__K2Node_Event_NewPlayer__pf;
	AFirstPersonGameMode_C__pf205484891(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FirstPersonGameMode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonGameMode__pf_1(int32 bpp__EntryPoint__pf);
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* bpp__NewPlayer__pf) override;
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
