// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AbilitySystemInterface.h"
#include "GASTestCharacter.generated.h"

class UGASAttributeSets;
class UGASAbilitySystemComponent;
DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AGASTestCharacter : public ACharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGASTestCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable)
	float GetHealth() const;

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const;

protected:
	
	// To add mapping context
	virtual void BeginPlay();

	TWeakObjectPtr<UGASAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UGASAttributeSets> AttributeSets;


};

