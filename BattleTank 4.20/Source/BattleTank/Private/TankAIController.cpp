// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

ATank* ATankAIController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const {
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank) { return nullptr; }
	return Cast<ATank>(PlayerTank);
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

	auto player = GetPlayerTank();
	if (!player) {
		UE_LOG(LogTemp, Warning, TEXT("Player not possessing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Player possessing: %s"), *(player->GetName()));
	}
}



