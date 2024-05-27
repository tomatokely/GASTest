// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GASAttributeSets.h"
#include "GASPlayerState.generated.h"

struct FOnAttributeChangeData;
class UGASAbilitySystemComponent;
class UGASAttributeSets;
/**
 * 
 */
UCLASS()
class GASTEST_API AGASPlayerState : public APlayerState,public IAbilitySystemInterface
{
	GENERATED_BODY()

	AGASPlayerState();

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UGASAttributeSets* GetAttributeSets() const;

	UFUNCTION(BlueprintCallable)
	float GetHealth() const;

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable)
	int32 GetPlayerLevel() const;

	UFUNCTION(BlueprintCallable)
	int32 GetGold() const;

	UFUNCTION(BlueprintCallable)
	int32 GetXP() const;

protected:
	UPROPERTY()
	UGASAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY()
	UGASAttributeSets* AttributeSets;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle XPChangedDelegateHandle;
	FDelegateHandle GoldChangedDelegateHandle;
	FDelegateHandle PlayerLevelChangedDelegateHandle;
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void XPChanged(const FOnAttributeChangeData& Data);
	virtual void GoldChanged(const FOnAttributeChangeData& Data);
	virtual void PlayerLevelChanged(const FOnAttributeChangeData& Data);

	virtual void BeginPlay() override;
};
