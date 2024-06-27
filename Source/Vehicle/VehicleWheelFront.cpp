// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UVehicleWheelFront::UVehicleWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}