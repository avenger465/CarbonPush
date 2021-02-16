// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarbonPushTwoGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void ACarbonPushTwoGameModeBase::BeginPlay()
{
}

//Function to check if the player has won the game or if the game has ended before that occurs
void ACarbonPushTwoGameModeBase::GameOver(bool PlayerWon)
{
	//Checks if the player has won the game and then opens the appropriate level
	if (PlayerWon)
	{
		UGameplayStatics::OpenLevel(GetWorld(), "End_Screen");
	}
}

//Function to add a point to the userPoints when the player scores a point
void ACarbonPushTwoGameModeBase::PointScored()
{
	//Increments the players points by the specified amount
	PlayerPoints += point;

	//Checks if the player has enough points 
	//and calls the GameOver function if true
	if (PlayerPoints >= targetPoints)
	{
		GameOver(true);
	}
}

//Returns the players points
int ACarbonPushTwoGameModeBase::GetPoints()
{
	return PlayerPoints;
}
