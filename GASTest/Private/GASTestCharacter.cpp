// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASTestCharacter.h"
#include "GASAbilitySystemComponent.h"
#include "GASAttributeSets.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AGASTestCharacter

AGASTestCharacter::AGASTestCharacter()
{
	
}

UAbilitySystemComponent* AGASTestCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

float AGASTestCharacter::GetHealth() const
{
	if(AttributeSets.IsValid())
	{
		return AttributeSets->GetHealth();
	}
	return 0.0f;
}

float AGASTestCharacter::GetMaxHealth() const
{
	if(AttributeSets.IsValid())
	{
		return AttributeSets->GetMaxHealth();
	}
	return 0.0f;
}

void AGASTestCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}
