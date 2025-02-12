// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Data/StateTag.h"
#include "CB_EquipAbility.generated.h"

class ACB_BaseCharacter;
struct FGameplayTag;

UCLASS()
class COMBAT_API UCB_EquipAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UCB_EquipAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

public:
	void SetValue();

protected:
	UFUNCTION()
	void OnCompleteCallback();

private:
	UPROPERTY()
	TObjectPtr<ACB_BaseCharacter> BaseCharacter;

	UPROPERTY()
	FName SectionName;
};
