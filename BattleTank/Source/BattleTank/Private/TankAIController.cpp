// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller Begin Play"));

	ATank* t_controlledTank = GetControlledTank();

	if (!t_controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller not possing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller possing a tank: %s"), *t_controlledTank->GetName());
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


