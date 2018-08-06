// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankPlayerController.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

private: 
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
};
