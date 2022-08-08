#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
#include "BP_LakeWater__pf1878835236.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/WaterPlane/Lake/Blueprint/BP_LakeWater.BP_LakeWater_C", OverrideNativeName="BP_LakeWater_C"))
class ABP_LakeWater_C__pf1878835236 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WaterSurface"))
	UStaticMeshComponent* bpv__WaterSurface__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ocean Material", Category="Default", tooltip="What material is applied to the ocean", OverrideNativeName="Ocean Material"))
	UMaterialInterface* bpv__OceanxMaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Scale X", Category="Default", tooltip="Sets scale of water plane along local X Axis", OverrideNativeName="Water Scale X"))
	float bpv__WaterxScalexX__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Scale Y", Category="Default", tooltip="Sets scale of water plane along local Y Axis", OverrideNativeName="Water Scale Y"))
	float bpv__WaterxScalexY__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wave Speed", Category="Default", tooltip="Global scale for wave movement speed", OverrideNativeName="Wave Speed"))
	float bpv__WavexSpeed__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Water Material", Category="Default", OverrideNativeName="Water Material"))
	UMaterialInstanceDynamic* bpv__WaterxMaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Water Scale", Category="Default", tooltip="Scales the material on the water surface", OverrideNativeName="Overall Water Scale"))
	float bpv__OverallxWaterxScale__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Variation Amount", Category="Default", tooltip="Blends in a variation to the waves", OverrideNativeName="Variation Amount"))
	float bpv__VariationxAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Primary Water Color", Category="Default", tooltip="This is the core color for the water shader", OverrideNativeName="Primary Water Color"))
	FLinearColor bpv__PrimaryxWaterxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Secondary Water Color", Category="Default", tooltip="Water color when viewed from a shallow angle", OverrideNativeName="Secondary Water Color"))
	FLinearColor bpv__SecondaryxWaterxColor__pfTT;
	ABP_LakeWater_C__pf1878835236(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
