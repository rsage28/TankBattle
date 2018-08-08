// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max down speed, +1 is max up speed
	void Elevate(float RelativeSpeed);	

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 10; // make any of these variables private to reproduce bug
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegrees = 40;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegrees = 0;
};
