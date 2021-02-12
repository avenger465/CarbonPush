// Fill out your copyright notice in the Description page of Project Settings.

//#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "StartGameModeBase.h"
#include "MainPlayerController.h"


void AStartGameModeBase::BeginPlay()
{
	GetWorld()->GetTimerManager().SetTimer(SwitchLevelTimer, this, &AStartGameModeBase::ChangeLevel, LevelDuration, false);
}

void AStartGameModeBase::ChangeLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Main_Screen");
}
