// Fill out your copyright notice in the Description page of Project Settings.


#include "GASPlayerState.h"
#include "GASAbilitySystemComponent.h"
#include "GASAttributeSets.h"

AGASPlayerState::AGASPlayerState()
{
}

UAbilitySystemComponent* AGASPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UGASAttributeSets* AGASPlayerState::GetAttributeSets() const
{
	return AttributeSets;
}

float AGASPlayerState::GetHealth() const
{
	return AttributeSets->GetHealth();
}

float AGASPlayerState::GetMaxHealth() const
{
	return AttributeSets->GetMaxHealth();
}

int32 AGASPlayerState::GetPlayerLevel() const
{
	return AttributeSets->GetCharacterLevel();
}

int32 AGASPlayerState::GetGold() const
{
	return AttributeSets->GetGold();
}

int32 AGASPlayerState::GetXP() const
{
	return AttributeSets->GetXP();
}

void AGASPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
}

void AGASPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
}

void AGASPlayerState::XPChanged(const FOnAttributeChangeData& Data)
{
}

void AGASPlayerState::GoldChanged(const FOnAttributeChangeData& Data)
{
}

void AGASPlayerState::PlayerLevelChanged(const FOnAttributeChangeData& Data)
{
}

void AGASPlayerState::BeginPlay()
{
	Super::BeginPlay();
	if(AbilitySystemComponent)
	{
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSets->GetHealthAttribute()).AddUObject(this,&AGASPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSets->GetMaxHealthAttribute()).AddUObject(this,&AGASPlayerState::MaxHealthChanged);
		XPChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSets->GetXPAttribute()).AddUObject(this,&AGASPlayerState::XPChanged);
		GoldChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSets->GetGoldAttribute()).AddUObject(this,&AGASPlayerState::GoldChanged);
		PlayerLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSets->GetCharacterLevelAttribute()).AddUObject(this,&AGASPlayerState::PlayerLevelChanged);
	}
}
