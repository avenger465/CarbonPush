// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Base_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
AMainPlayerController::AMainPlayerController()
{
}
void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();
	StartDisplay = CreateWidget(this, StartWidget);	
	PlayerInterfaceDisplay = CreateWidget(this, PlayerInterfaceWidget);
	EndScreenDisplay = CreateWidget(this, EndScreenWidget);
	RulesScreenDisplay = CreateWidget(this, RulesScreenWidget);
	Level = UGameplayStatics::GetCurrentLevelName(GetWorld(), true);
	UE_LOG(LogTemp, Warning, TEXT("Map: %s"), *FString(Level));
	WidgetLoader(Level);
	Pawn = Cast<ABase_Character>(GetPawn());

}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	check(InputComponent);
	InputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &AMainPlayerController::Fire);
	InputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &AMainPlayerController::Reload);
	InputComponent->BindAction("Throwable", EInputEvent::IE_Pressed, this, &AMainPlayerController::Throwable);
}

void AMainPlayerController::Fire()
{
	if (Pawn && Level == "Main_Screen")
	{
		if (CurrentClip > 0 && TotalGunAmmo > 0)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), GunSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
			--CurrentClip;
			//ABase_Character* character = Cast<ABase_Character>(GetPawn());
			Pawn->Fire();
		}
	}
}

void AMainPlayerController::Reload()
{
	
	if (TotalGunAmmo > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ReloadSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
		int ReloadAmount = AmmoClip - CurrentClip;
		TotalGunAmmo -= ReloadAmount;
		CurrentClip = AmmoClip;
	}
}

void AMainPlayerController::Throwable()
{
	if (TotalThrowableAmmo > 0)
	{
		Pawn->ThrowGrenade();
	}
}

void AMainPlayerController::WidgetLoader(FString LevelName)
{
	if (LevelName == "Title_Screen")
	{
		if (StartDisplay != nullptr)
		{
			StartDisplay->AddToViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("Carbon"));
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
	else if (LevelName == "Main_Screen")
	{
		if (PlayerInterfaceDisplay != nullptr)
		{
			PlayerInterfaceDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("Gun"));
			SetInputMode(FInputModeGameOnly());
			bShowMouseCursor = false;
		}
	}
	else if (LevelName == "End_Screen")
	{
		if (EndScreenDisplay != nullptr)
		{
			EndScreenDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("End"));
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
	else if (LevelName == "Rules_Screen")
	{
		if (RulesScreenDisplay != nullptr)
		{
			RulesScreenDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("Rules"));
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
}

int AMainPlayerController::ReturnCurrentClip()
{

	return CurrentClip;
}

int AMainPlayerController::ReturnTotalAmmo()
{
	return TotalGunAmmo;
}

float AMainPlayerController::ReturnPlayersHealthPercentage()
{
	//float HealthPercentage = PlayerHealth / PlayerMaxHealth;
	//ABase_Character* character = Cast<ABase_Character>(GetPawn());
	float PlayersHealth = 0.0f;
	Pawn->ReturnPlayerStats(PlayersHealth);

	return PlayersHealth / PlayerMaxHealth;
}
