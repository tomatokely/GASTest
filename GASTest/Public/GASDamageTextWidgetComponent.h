#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GASDamageTextWidgetComponent.generated.h"

UCLASS()
class UGASDamageTextWidgetComponent: public UWidgetComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetDamageText(float Damage);
};
