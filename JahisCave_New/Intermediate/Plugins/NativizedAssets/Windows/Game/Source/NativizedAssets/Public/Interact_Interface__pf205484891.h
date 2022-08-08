#pragma once
#include "Blueprint/BlueprintSupport.h"
class AFirstPersonCharacter_C__pf205484891;
#include "Interact_Interface__pf205484891.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/Interact_Interface.Interact_Interface_C", OverrideNativeName="Interact_Interface_C"))
class UInteract_Interface_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IInteract_Interface_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="LookAt"))
	void bpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="InteractWith"))
	void bpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf);
public:
};
