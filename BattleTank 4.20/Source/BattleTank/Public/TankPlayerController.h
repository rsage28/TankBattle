// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "TankPlayerController.generated.h"

class ATank;

UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public: 
	ATank * GetControlledTank() const;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly, Category=CrossHair)
	float CrossHairXLocation = 0.5f;
	UPROPERTY(EditDefaultsOnly, Category = CrossHair)
	float CrossHairYLocation = 0.33333f;
	UPROPERTY(EditDefaultsOnly, Category = Range)
	float LineTraceRange = 1000000.0f;

	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector& HitLocation, FVector LookDirection) const;
};
