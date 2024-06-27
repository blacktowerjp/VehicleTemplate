// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleGameMode.h"
#include "VehiclePlayerController.h"

AVehicleGameMode::AVehicleGameMode()
{
	PlayerControllerClass = AVehiclePlayerController::StaticClass();
}
