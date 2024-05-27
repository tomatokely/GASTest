// Fill out your copyright notice in the Description page of Project Settings.
#include "EnemyCharacter.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GASAttributeSets.h"
#include "GASAbilitySystemComponent.h"
#include "Components/WidgetComponent.h"

AEnemyCharacter::AEnemyCharacter()
{
	EnemyAbilitySystemComponent = CreateDefaultSubobject<UGASAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	EnemyAttributeSets = CreateDefaultSubobject<UGASAttributeSets>(TEXT("BaeAttributeSet"));
	//from parent
	AbilitySystemComponent = EnemyAbilitySystemComponent;
	AttributeSets = EnemyAttributeSets;
	//Create UI
	FloatingStatusBarComponent = CreateDefaultSubobject<UWidgetComponent>(FName("FloatingStatusBarComponent"));
	FloatingStatusBarComponent->SetupAttachment(RootComponent);
	FloatingStatusBarComponent->SetRelativeLocation(FVector(0,0,120));
	FloatingStatusBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	FloatingStatusBarComponent->SetDrawSize(FVector2D(500,500));
}
