// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UVehicleWheelRear::UVehicleWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}