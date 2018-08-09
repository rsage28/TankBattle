// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle) {
	//UE_LOG(LogTemp, Warning, TEXT("%f: throttle"), Throttle);

	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	UE_LOG(LogTemp, Warning, TEXT("%s: throttle"), *ForceApplied.ToString());
	auto ForceLocation = GetComponentLocation();
	UE_LOG(LogTemp, Warning, TEXT("%s: location"), *ForceLocation.ToString());
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}