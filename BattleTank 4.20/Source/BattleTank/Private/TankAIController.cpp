// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

ATank* ATankAIController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() {
	Super::BeginPlay();
	auto possessed = GetControlledTank();
	if (!possessed) {
		UE_LOG(LogTemp, Warning, TEXT("AIController not possessing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIController possessing: %s"), *(possessed->GetName()));
	}
}



