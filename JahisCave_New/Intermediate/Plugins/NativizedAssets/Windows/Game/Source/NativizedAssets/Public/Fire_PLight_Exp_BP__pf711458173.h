#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UParticleSystemComponent;
class UArrowComponent;
class UPointLightComponent;
class UBillboardComponent;
class USkeletalMeshComponent;
class UTimelineComponent;
class UParticleSystem;
class USkeletalMesh;
class UAnimSequenceBase;
#include "Fire_PLight_Exp_BP__pf711458173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/M5VFXVOL2/BluePrints/Fire_PLight_Exp_BP.Fire_PLight_Exp_BP_C", OverrideNativeName="Fire_PLight_Exp_BP_C"))
class AFire_PLight_Exp_BP_C__pf711458173 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Explosion_particle"))
	UParticleSystemComponent* bpv__Explosion_particle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Fire_particle"))
	UParticleSystemComponent* bpv__Fire_particle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9"))
	FVector bpv__Timeline_0_Dir_Vector_06CCF3114B4B244B1BF4A9AB71E85CC9__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_06CCF3114B4B244B1BF4A9AB71E85CC9__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Fire_PLight_Exp_BP", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Param", Category="Default", OverrideNativeName="param"))
	TArray<FParticleSysParam> bpv__param__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Start Angle Max", Category="Fire_Angle", OverrideNativeName="Random_Start_angle_max"))
	float bpv__Random_Start_angle_max__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Start Angle Min", Category="Fire_Angle", OverrideNativeName="Random_Start_angle_min"))
	float bpv__Random_Start_angle_min__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Fire Transform", OverrideNativeName="Direction"))
	FVector bpv__Direction__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Fire", Category="Fire Settings", OverrideNativeName="particle_Fire"))
	UParticleSystem* bpv__particle_Fire__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscil Speed", Category="Fire_Oscillator", OverrideNativeName="Oscil_Speed"))
	float bpv__Oscil_Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Oscillate", Category="Fire_Oscillator", OverrideNativeName="oscillate"))
	bool bpv__oscillate__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Intensity", Category="Fire Light", OverrideNativeName="Light_Intensity"))
	float bpv__Light_Intensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Radius", Category="Fire Light", OverrideNativeName="LightRadius"))
	float bpv__LightRadius__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Skel Mesh", Category="Fire Settings", OverrideNativeName="skel_mesh"))
	USkeletalMesh* bpv__skel_mesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light", Category="Fire Light", OverrideNativeName="Light"))
	bool bpv__Light__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ani Seq", Category="Fire Settings", OverrideNativeName="Ani_Seq"))
	UAnimSequenceBase* bpv__Ani_Seq__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Exp", Category="Fire Settings", OverrideNativeName="particle_Exp"))
	UParticleSystem* bpv__particle_Exp__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Skelmesh Scale", Category="Fire Settings", OverrideNativeName="skelmesh_scale"))
	FVector bpv__skelmesh_scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Explosion Socket", Category="Fire Settings", OverrideNativeName="Explosion_Socket"))
	FName bpv__Explosion_Socket__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fire Socket", Category="Fire Settings", OverrideNativeName="Fire_socket"))
	FName bpv__Fire_socket__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Explosion Scale", Category="Fire Transform", OverrideNativeName="Explosion_Scale"))
	FVector bpv__Explosion_Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Explosion Start Delay", Category="Fire Settings", OverrideNativeName="Explosion_start_Delay"))
	float bpv__Explosion_start_Delay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fire Scale", Category="Fire Transform", OverrideNativeName="Fire_Scale"))
	FVector bpv__Fire_Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distortion Emittter Enable", Category="Fire Settings", OverrideNativeName="Distortion_Emittter_Enable"))
	bool bpv__Distortion_Emittter_Enable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smoke Emitter Enable", Category="Fire Settings", OverrideNativeName="Smoke_Emitter_Enable"))
	bool bpv__Smoke_Emitter_Enable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	AFire_PLight_Exp_BP_C__pf711458173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Fire_PLight_Exp_BP_1"))
	void bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Fire_PLight_Exp_BP__pf_2(int32 bpp__EntryPoint__pf);
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
