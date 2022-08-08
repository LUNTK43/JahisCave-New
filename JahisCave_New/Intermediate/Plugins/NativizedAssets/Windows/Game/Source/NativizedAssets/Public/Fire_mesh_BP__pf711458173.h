#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UBillboardComponent;
class UParticleSystemComponent;
class UParticleSystem;
class UStaticMesh;
#include "Fire_mesh_BP__pf711458173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/M5VFXVOL2/BluePrints/Fire_mesh_BP.Fire_mesh_BP_C", OverrideNativeName="Fire_mesh_BP_C"))
class AFire_mesh_BP_C__pf711458173 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Particlesystem"))
	UParticleSystemComponent* bpv__Particlesystem__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Fire", Category="Fire Settings", OverrideNativeName="particle_fire"))
	UParticleSystem* bpv__particle_fire__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Staticmesh", Category="Fire Settings", OverrideNativeName="Staticmesh"))
	UStaticMesh* bpv__Staticmesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Offset", Category="Fire Settings", OverrideNativeName="Particle_offset"))
	FVector bpv__Particle_offset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale", Category="Fire Settings", OverrideNativeName="Scale"))
	FVector bpv__Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Particle Scale", Category="Fire Settings", OverrideNativeName="Particle_Scale"))
	FVector bpv__Particle_Scale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smoke Emitter Enable", Category="Fire Settings", OverrideNativeName="Smoke_Emitter_Enable"))
	bool bpv__Smoke_Emitter_Enable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distortion Emittter Enable", Category="Fire Settings", OverrideNativeName="Distortion_Emittter_Enable"))
	bool bpv__Distortion_Emittter_Enable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	AFire_mesh_BP_C__pf711458173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Fire_mesh_BP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
