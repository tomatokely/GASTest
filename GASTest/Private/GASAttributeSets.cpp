#include "GASAttributeSets.h"

UGASAttributeSets::UGASAttributeSets()
{
}

void UGASAttributeSets::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	UE_LOG(LogTemp,Display,TEXT("UGASAttributeSets::PreAttributeChange(NewValue=%f)"),NewValue);
}

void UGASAttributeSets::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	UE_LOG(LogTemp,Display,TEXT("UGASAttributeSets::PostGameplayEffectExecute"));
}
