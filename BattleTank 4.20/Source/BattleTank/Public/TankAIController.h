// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "TankPlayerController.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

private: 
	ATank * GetControlledTank() const;
	ATank * GetPlayerTank() const;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
};
