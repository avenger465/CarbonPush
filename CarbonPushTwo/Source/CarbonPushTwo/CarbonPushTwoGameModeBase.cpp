// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarbonPushTwoGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void ACarbonPushTwoGameModeBase::BeginPlay()
{
	//GetWorld()->GetTimerManager().SetTimer(SwitchLevelTimer, this, &ACarbonPushTwoGameModeBase::ChangeLevel, LevelDuration, false);
}

void ACarbonPushTwoGameModeBase::GameOver(bool PlayerWon)
{
	if (PlayerWon)
	{
		UE_LOG(LogTemp, Warning, TEXT("End"));
		UGameplayStatics::OpenLevel(GetWorld(), "End_Screen");
	}
	else
	{
		UGameplayStatics::OpenLevel(GetWorld(), "End_Screen");
	}
}

void ACarbonPushTwoGameModeBase::PointScored()
{
	if (userPoints >= targetPoints)
	{
		GameOver(true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Point"));
		userPoints += point;
	}
}
