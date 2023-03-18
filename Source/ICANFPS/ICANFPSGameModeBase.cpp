// Copyright Epic Games, Inc. All Rights Reserved.


#include "ICANFPSGameModeBase.h"

void AICANFPSGameModeBase::SetGravityZ(float NewValue)
{
	AWorldSettings* MyWorldSetting = GetWorldSettings();
	MyWorldSetting->bGlobalGravitySet = true;
	MyWorldSetting->GlobalGravityZ = NewValue;
}

UWorld* AICANFPSGameModeBase::GetWorldObject()
{
	return GetWorld();
}
