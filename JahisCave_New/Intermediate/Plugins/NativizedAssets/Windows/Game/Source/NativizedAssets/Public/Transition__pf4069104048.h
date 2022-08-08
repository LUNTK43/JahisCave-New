#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Interact_Interface__pf205484891.h"
class UBoxComponent;
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class UWorld;
class ABP_ItemParent_C__pf476478934;
class AFirstPersonCharacter_C__pf205484891;
class AActor;
#include "Transition__pf4069104048.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Transition/Transition.Transition_C", OverrideNativeName="Transition_C"))
class ATransition_C__pf4069104048 : public AActor, public IInteract_Interface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DoorCollider"))
	UBoxComponent* bpv__DoorCollider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door"))
	UStaticMeshComponent* bpv__Door__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3"))
	float bpv__DoorPosition_DoorHeight_ECD782D5454C0A60107B9083FD2850B3__pf;
	UPROPERTY(meta=(OverrideNativeName="DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3"))
	TEnumAsByte<ETimelineDirection::Type> bpv__DoorPosition__Direction_ECD782D5454C0A60107B9083FD2850B3__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Transition", OverrideNativeName="DoorPosition"))
	UTimelineComponent* bpv__DoorPosition__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Level", Category="Default", MultiLine="true", OverrideNativeName="Level"))
	TSoftObjectPtr<UWorld> bpv__Level__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Destination Tag", Category="Default", MultiLine="true", OverrideNativeName="DestinationTag"))
	FString bpv__DestinationTag__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Key", Category="Default", MultiLine="true", OverrideNativeName="Key"))
	ABP_ItemParent_C__pf476478934* bpv__Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerCharacter_1"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_Event_PlayerCharacter_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerCharacter"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_Event_PlayerCharacter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FFormatArgumentData> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMessage_IsVisible"))
	bool b0l__CallFunc_UpdateMessage_IsVisible__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Character"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ATransition_C__pf4069104048(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Transition__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Transition__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Transition__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Transition__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Transition__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Transition__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="LookAt"))
	virtual void bpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OpenDoor"))
	virtual void bpf__OpenDoor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="InteractWith"))
	virtual void bpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
	UFUNCTION(meta=(OverrideNativeName="DoorPosition__UpdateFunc"))
	virtual void bpf__DoorPosition__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="DoorPosition__FinishedFunc"))
	virtual void bpf__DoorPosition__FinishedFunc__pf();
public:
};
