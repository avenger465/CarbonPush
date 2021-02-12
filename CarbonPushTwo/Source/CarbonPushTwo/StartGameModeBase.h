// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainPlayerController.h"

#include "GameFramework/GameModeBase.h"
#include "StartGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CARBONPUSHTWO_API AStartGameModeBase : public AGameModeBase
{

	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY()
		FTimerHandle SwitchLevelTimer;
	UPROPERTY()
		float LevelDuration = 5.0f;
	UFUNCTION()
		void ChangeLevel();
};
