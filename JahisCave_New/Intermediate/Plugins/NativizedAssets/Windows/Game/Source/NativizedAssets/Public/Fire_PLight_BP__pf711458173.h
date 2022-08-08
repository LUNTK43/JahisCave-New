#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UArrowComponent;
class UPointLightComponent;
class UBillboardComponent;
class UParticleSystemComponent;
class UTimelineComponent;
class UParticleSystem;
class AEmitter;
class UClass;
#include "Fire_PLight_BP__pf711458173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/M5VFXVOL2/BluePrints/Fire_PLight_BP.Fire_PLight_BP_C", OverrideNativeName="Fire_PLight_BP_C"))
class AFire_PLight_BP_C__pf711458173 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Dir_Vector_04C7D3A84AA2EC346CAB4BA394068296"))
	FVector bpv__Timeline_0_Dir_Vector_04C7D3A84AA2EC346CAB4BA394068296__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_04C7D3A84AA2EC346CAB4BA394068296"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_04C7D3A84AA2EC346CAB4BA394068296__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Fire_PLight_BP", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Start Angle Max", Category="Fire Angle", OverrideNativeName="Random_Start_angle_max"))
	float bpv__Random_Start_angle_max__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Start Angle Min", Category="Fire Angle", OverrideNativeName="Random_Start_angle_min"))
	float bpv__Random_Start_angle_min__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Fire", Category="Fire Settings", OverrideNativeName="particle_fire"))
	UParticleSystem* bpv__particle_fire__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscil Speed", Category="Fire Oscillator", OverrideNativeName="Oscil_Speed"))
	float bpv__Oscil_Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Fire Transform", OverrideNativeName="Direction"))
	FVector bpv__Direction__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscillate", Category="Fire Oscillator", OverrideNativeName="oscillate"))
	bool bpv__oscillate__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light", Category="Fire Light", OverrideNativeName="Light"))
	bool bpv__Light__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Intensity", Category="Fire Light", OverrideNativeName="Light_Intensity"))
	float bpv__Light_Intensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Radius", Category="Fire Light", OverrideNativeName="LightRadius"))
	float bpv__LightRadius__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distortion Emittter Enable", Category="Fire Settings", OverrideNativeName="Distortion_Emittter_Enable"))
	bool bpv__Distortion_Emittter_Enable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smoke Emitter Enable", Category="Fire Settings", OverrideNativeName="Smoke_Emitter_Enable"))
	bool bpv__Smoke_Emitter_Enable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	AEmitter* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", OverrideNativeName="NewVar_1"))
	UClass* bpv__NewVar_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	AFire_PLight_BP_C__pf711458173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Fire_PLight_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_PLight_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_PLight_BP__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
