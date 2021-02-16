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
	//Public functions that can be called from other objects
	UFUNCTION()	
		void GameOver(bool PlayerWon);

	UFUNCTION()
		void PointScored();

	UFUNCTION()
		int GetPoints();

private:
	//TargetPoints variable
	UPROPERTY()
		int targetPoints = 10;

	//PlayerPoints variable
	UPROPERTY()
		int PlayerPoints = 0;

	//point variable
	UPROPERTY()
		int point = 1;

	//levelDuration variable
	UPROPERTY()
		float LevelDuration = 5.0f;
};
