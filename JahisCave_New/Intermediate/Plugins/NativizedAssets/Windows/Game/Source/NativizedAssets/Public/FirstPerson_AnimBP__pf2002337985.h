#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "FirstPerson_AnimBP__pf2002337985.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C", OverrideNativeName="FirstPerson_AnimBP_C"))
class UFirstPerson_AnimBP_C__pf2002337985 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_5"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_4"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_4"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Moving", Category="Default", OverrideNativeName="IsMoving"))
	bool bpv__IsMoving__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is In Air", Category="Default", OverrideNativeName="bIsInAir"))
	bool bpv__bIsInAir__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UFirstPerson_AnimBP_C__pf2002337985(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_6();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_4();
	void __InitAnimNode__AnimGraphNode_StateResult_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_Slot();
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPerson_AnimBP__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_2C413F41496E16A9E28BB6886E13325E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_2C413F41496E16A9E28BB6886E13325E__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DA3192DC415202A934CDF598A41EFCDE"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DA3192DC415202A934CDF598A41EFCDE__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_A3E5D0514472C54EE7856B9AD4BDD068"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_A3E5D0514472C54EE7856B9AD4BDD068__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
