// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ICANFPSGameModeBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ICANFPS_API AICANFPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void SetGravityZ(float NewValue);

	UFUNCTION(BlueprintCallable)
	UWorld* GetWorldObject();
};
