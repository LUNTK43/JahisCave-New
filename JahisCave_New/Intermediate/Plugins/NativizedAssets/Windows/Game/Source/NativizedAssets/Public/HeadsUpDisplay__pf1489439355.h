#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UBorder;
class UTextBlock;
class AFirstPersonCharacter_C__pf205484891;
#include "HeadsUpDisplay__pf1489439355.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/HeadsUpDisplay.HeadsUpDisplay_C", OverrideNativeName="HeadsUpDisplay_C"))
class UHeadsUpDisplay_C__pf1489439355 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MessageBox", Category="HeadsUpDisplay", OverrideNativeName="MessageBox"))
	UBorder* bpv__MessageBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MessageText", Category="HeadsUpDisplay", OverrideNativeName="MessageText"))
	UTextBlock* bpv__MessageText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Character", Category="Default", MultiLine="true", OverrideNativeName="PlayerCharacter"))
	AFirstPersonCharacter_C__pf205484891* bpv__PlayerCharacter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMessage_IsVisible"))
	bool b0l__CallFunc_UpdateMessage_IsVisible__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Character"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UHeadsUpDisplay_C__pf1489439355(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HeadsUpDisplay__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMessage"))
	virtual void bpf__UpdateMessage__pf(const FText& bpp__TextToDisplay__pf__const, /*out*/ bool& bpp__IsVisible__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
