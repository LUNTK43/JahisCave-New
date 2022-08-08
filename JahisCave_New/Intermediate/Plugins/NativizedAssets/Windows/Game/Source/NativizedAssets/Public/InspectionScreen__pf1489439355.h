#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UScrollBox;
#include "InspectionScreen__pf1489439355.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/InspectionScreen.InspectionScreen_C", OverrideNativeName="InspectionScreen_C"))
class UInspectionScreen_C__pf1489439355 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_151", Category="InspectionScreen", OverrideNativeName="Image_151"))
	UImage* bpv__Image_151__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_153", Category="InspectionScreen", OverrideNativeName="Image_153"))
	UImage* bpv__Image_153__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ItemDescriptionText", Category="InspectionScreen", OverrideNativeName="ItemDescriptionText"))
	UTextBlock* bpv__ItemDescriptionText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollB", Category="InspectionScreen", OverrideNativeName="ScrollB"))
	UScrollBox* bpv__ScrollB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Item Description", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="ItemDescription"))
	FText bpv__ItemDescription__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Scroll Value", Category="Default", MultiLine="true", OverrideNativeName="ScrollValue"))
	float bpv__ScrollValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reset Time", Category="Default", MultiLine="true", OverrideNativeName="ResetTime"))
	float bpv__ResetTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UInspectionScreen_C__pf1489439355(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InspectionScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InspectionScreen__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopScroll"))
	virtual void bpf__StopScroll__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartScroll"))
	virtual void bpf__StartScroll__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
