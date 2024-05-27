#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GASHUDWidget.generated.h"

UCLASS()
class GASTEST_API UGASHUDWidget: public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetPlayerLevel(int32 PlayerLevel);

	UFUNCTION(BlueprintImplementableEvent)
	void SetGold(int32 Gold);

	UFUNCTION(BlueprintImplementableEvent)
	void SetExperience(int32 Experience);
	
	UFUNCTION(BlueprintImplementableEvent)
	void SetMaxHealth(float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrentHealth(float CurrentHealth);

	UFUNCTION(BlueprintImplementableEvent)
	void SetHealthPercentage(float HealthPercentage);

	
};
