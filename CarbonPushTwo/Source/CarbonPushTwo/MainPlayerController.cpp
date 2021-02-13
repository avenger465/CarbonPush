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
			PlayerHealth -= 10;
			ABase_Character* character = Cast<ABase_Character>(GetPawn());
			character->Fire();
		}
	}
}

void AMainPlayerController::Reload()
{
	
	if (TotalGunAmmo > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ReloadSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
		PlayerHealth = 100;
		int ReloadAmount = AmmoClip - CurrentClip;
		TotalGunAmmo -= ReloadAmount;
		CurrentClip = AmmoClip;
	}
}

void AMainPlayerController::Throwable()
{
	if (TotalThrowableAmmo > 0)
	{
		ABase_Character* character = Cast<ABase_Character>(GetPawn());
		character->ThrowGrenade();
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
			UE_LOG(LogTemp, Warning, TEXT("Carbon"));
		}
	}
	else if (LevelName == "Main_Screen")
	{
		if (PlayerInterfaceDisplay != nullptr)
		{
			PlayerInterfaceDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("Gun"));
		}
	}
	else if (LevelName == "End_Screen")
	{
		if (EndScreenDisplay != nullptr)
		{
			EndScreenDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("End"));
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

	return PlayerHealth / PlayerMaxHealth;
}
