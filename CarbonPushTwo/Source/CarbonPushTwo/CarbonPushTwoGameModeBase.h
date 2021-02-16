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

public:
	UFUNCTION()	
		void GameOver(bool PlayerWon);
	UFUNCTION()
		void PointScored();


private:
	UPROPERTY()
		int targetPoints = 7;
	UPROPERTY()
		int userPoints = 1;
	UPROPERTY()
		int point = 1;
	UPROPERTY()
		float LevelDuration = 5.0f;

};
