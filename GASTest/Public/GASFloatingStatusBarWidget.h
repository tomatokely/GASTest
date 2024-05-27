#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GASFloatingStatusBarWidget.generated.h"

UCLASS()
class GASTEST_API UGASFloatingStatusBarWidget: public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetHealthPercentage(float HealthPercentage);
};
