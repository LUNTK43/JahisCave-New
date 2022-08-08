#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UParticleSystemComponent;
class UArrowComponent;
class USpringArmComponent;
class USphereComponent;
class UBillboardComponent;
class UTimelineComponent;
class UParticleSystem;
class UStaticMesh;
#include "Fire_beam_BP__pf711458173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/M5VFXVOL2/BluePrints/Fire_beam_BP.Fire_beam_BP_C", OverrideNativeName="Fire_beam_BP_C"))
class AFire_beam_BP_C__pf711458173 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Particlesystem"))
	UParticleSystemComponent* bpv__Particlesystem__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow1"))
	UArrowComponent* bpv__Arrow1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0"))
	float bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Fire_beam_BP", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD"))
	FVector bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Fire_beam_BP", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Fire", Category="Fire Settings", OverrideNativeName="particle_Fire"))
	UParticleSystem* bpv__particle_Fire__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Staticmesh", Category="Fire Settings", OverrideNativeName="Staticmesh"))
	UStaticMesh* bpv__Staticmesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Offset", Category="Fire Transform", OverrideNativeName="Start_offset"))
	FVector bpv__Start_offset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale", Category="Fire Transform", OverrideNativeName="Scale"))
	FVector bpv__Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Scale", Category="Fire Transform", OverrideNativeName="Particle_Scale"))
	FVector bpv__Particle_Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Position", Category="Fire Transform", OverrideNativeName="Base_position"))
	FVector bpv__Base_position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="End Offset", Category="Fire Transform", OverrideNativeName="End_offset"))
	FVector bpv__End_offset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscil Speed", Category="Fire Oscillator", OverrideNativeName="Oscil_Speed"))
	float bpv__Oscil_Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Shake Speed Min", Category="Fire Shake", OverrideNativeName="shake_speed_min"))
	float bpv__shake_speed_min__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Shake Speed Max", Category="Fire Shake", OverrideNativeName="shake_speed_max"))
	float bpv__shake_speed_max__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscillate", Category="Fire Oscillator", OverrideNativeName="oscillate"))
	bool bpv__oscillate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Origin Top Position", Category="Fire Transform", OverrideNativeName="origin_top_position"))
	FVector bpv__origin_top_position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscil Scale", Category="Fire Oscillator", OverrideNativeName="oscil_scale"))
	FVector bpv__oscil_scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Beam Width", Category="Fire Settings", OverrideNativeName="beam_width"))
	float bpv__beam_width__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Shake Noise Scale", Category="Fire Shake", OverrideNativeName="shake_noise_scale"))
	float bpv__shake_noise_scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smoke Emitter Enable", Category="Fire Settings", OverrideNativeName="Smoke_Emitter_Enable"))
	bool bpv__Smoke_Emitter_Enable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distortion Emittter Enable", Category="Fire Settings", OverrideNativeName="Distortion_Emittter_Enable"))
	bool bpv__Distortion_Emittter_Enable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	AFire_beam_BP_C__pf711458173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_beam_BP__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
