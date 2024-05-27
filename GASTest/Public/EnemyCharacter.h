// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GASTestCharacter.h"
#include "EnemyCharacter.generated.h"

struct FOnAttributeChangeData;
class UGASAbilitySystemComponent;
class UGASAttributeSets;
/**
 * 
 */
UCLASS()
class GASTEST_API AEnemyCharacter : public AGASTestCharacter
{
	GENERATED_BODY()
	
public:
	AEnemyCharacter();
	
protected:
	UGASAbilitySystemComponent* EnemyAbilitySystemComponent;
	UGASAttributeSets* EnemyAttributeSets;

	//Attributes Changed Delegate
	FDelegateHandle HealthChangedDelegateHandle;
	virtual void HealthChanged(const FOnAttributeChangeData& Data);

	//UI
	UPROPERTY()
	class UGASFloatingStatusBarWidget* FloatingStatusBarWidget;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSubclassOf<class UGASFloatingStatusBarWidget> FloatingStatusBarClass;
	
	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	class UWidgetComponent* FloatingStatusBarComponent;
};
