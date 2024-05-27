#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GASAttributeSets.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GASTEST_API UGASAttributeSets: public UAttributeSet 
{
	GENERATED_BODY()

	UGASAttributeSets();
public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGASAttributeSets,Health);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UGASAttributeSets,MaxHealth);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UGASAttributeSets,CharacterLevel);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Gold;
	ATTRIBUTE_ACCESSORS(UGASAttributeSets,Gold);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData XP;
	ATTRIBUTE_ACCESSORS(UGASAttributeSets,XP);

protected:
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
};
