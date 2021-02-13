// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"
#include "CarbonPushTwoGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CARBONPUSHTWO_API ACarbonPushTwoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;


private:
	/*UPROPERTY()
		FTimerHandle SwitchLevelTimer;
	UPROPERTY()
		float LevelDuration = 5.0f;*/
	UFUNCTION()
		void ChangeLevel();
};
