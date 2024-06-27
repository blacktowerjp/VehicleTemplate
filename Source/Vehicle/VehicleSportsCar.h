// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "VehiclePawn.h"
#include "VehicleSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class VEHICLE_API AVehicleSportsCar : public AVehiclePawn
{
	GENERATED_BODY()
	
public:

	AVehicleSportsCar();
};
