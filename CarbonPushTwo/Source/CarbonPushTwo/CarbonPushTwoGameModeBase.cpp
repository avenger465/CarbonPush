// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarbonPushTwoGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerController.h"

void ACarbonPushTwoGameModeBase::BeginPlay()
{
	GetWorld()->GetTimerManager().SetTimer(SwitchLevelTimer, this, &ACarbonPushTwoGameModeBase::ChangeLevel, LevelDuration, false);
}

void ACarbonPushTwoGameModeBase::ChangeLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Title_Screen");
}