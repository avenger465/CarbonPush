// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
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
	FString Level = UGameplayStatics::GetCurrentLevelName(GetWorld(), true);
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
}

void AMainPlayerController::Fire()
{
	
	if (Pawn)
	{
		if (CurrentClip > 0)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), GunSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
			--CurrentClip;
			PlayerHealth -= 10;
			//UE_LOG(LogTemp, Warning, TEXT("Ammo Remaining: %i"), CurrentClip);
			//ABullet* TempBullet = GetWorld()->SpawnActor<ABullet>(Bullet, Pawn->ProjectileSpawnPoint->GetComponentLocation(), Pawn->ProjectileSpawnPoint->GetComponentRotation());
			Pawn->ActionComponent->Fire();
		}
	}
}

void AMainPlayerController::Reload()
{
	
	if (TotalAmmo > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ReloadSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
		PlayerHealth = 100;
		int ReloadAmount = AmmoClip - CurrentClip;
		TotalAmmo -= ReloadAmount;
		CurrentClip = AmmoClip;
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
			UE_LOG(LogTemp, Warning, TEXT("Carbon"));
		}
	}
	else if (LevelName == "Main_Screen")
	{
		if (PlayerInterfaceDisplay != nullptr)
		{
			PlayerInterfaceDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			UE_LOG(LogTemp, Warning, TEXT("Gun"));
		}
	}
	else if (LevelName == "End_Screen")
	{

	}
}

int AMainPlayerController::ReturnCurrentClip()
{
	return CurrentClip;
}

int AMainPlayerController::ReturnTotalAmmo()
{
	return TotalAmmo;
}

float AMainPlayerController::ReturnPlayersHealthPercentage()
{
	//float HealthPercentage = PlayerHealth / PlayerMaxHealth;

	return PlayerHealth / PlayerMaxHealth;
}
