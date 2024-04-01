// Fill out your copyright notice in the Description page of Project Settings.

#include "CB_PDA_Input.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"

//TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Data/IMC_Player.IMC_Player'"));

UCB_PDA_Input::UCB_PDA_Input()
{
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> IMCRef(
		TEXT("/Game/Data/IMC_Player.IMC_Player"));	
	if (IMCRef.Succeeded())
		MappingContext = IMCRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> IAMoveRef(
		TEXT("/Game/Data/InputAction/IA_Move.IA_Move"));
	if (IAMoveRef.Succeeded())
		MoveAction = IAMoveRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> IALookRef(
		TEXT("/Game/Data/InputAction/IA_Look.IA_Look"));
	if (IALookRef.Succeeded())
		LookAction = IALookRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> IAJumpRef(
		TEXT("/Game/Data/InputAction/IA_Jump.IA_Jump"));
	if (IAJumpRef.Succeeded())
		JumpAction = IAJumpRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> IAAttackRef(
		TEXT("/Game/Data/InputAction/IA_Attack.IA_Attack"));
	if (IAAttackRef.Succeeded())
		AttackAction = IAAttackRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> IADodgeRef(
		TEXT("/Game/Data/InputAction/IA_Dodge.IA_Dodge"));
	if (IADodgeRef.Succeeded())
		DodgeAction = IADodgeRef.Object;
}
