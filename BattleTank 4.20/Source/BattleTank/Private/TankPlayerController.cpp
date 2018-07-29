// Fill out your copyright notice in the Description page of Project Settings.

//#include "TankPlayerController.h"
#include "../Public/TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	auto possessed = GetControlledTank();
	if (!possessed) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing: %s"), *(possessed->GetName()));
	}
}
