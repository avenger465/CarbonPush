// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Base_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

//Constructor
AMainPlayerController::AMainPlayerController()
{
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//Creates UserWidgets for each UUserWidgetComponents
	StartDisplay = CreateWidget(this, StartWidget);	
	PlayerInterfaceDisplay = CreateWidget(this, PlayerInterfaceWidget);
	EndScreenDisplay = CreateWidget(this, EndScreenWidget);
	RulesScreenDisplay = CreateWidget(this, RulesScreenWidget);

	//Get current level and pass it through to the WidgetLoader function
	Level = UGameplayStatics::GetCurrentLevelName(GetWorld(), true);
	WidgetLoader(Level);

	//Cast the playercontrollers Pawn to ABase_Character
	Pawn = Cast<ABase_Character>(GetPawn());

	//Creates a object reference to the GameModeBase
	GameModeReference = Cast<ACarbonPushTwoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called to bind functionality to input
void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Checks if the inputComponent is empty
	check(InputComponent);

	//Binds input keys/buttons to functions in the character class
	InputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &AMainPlayerController::Fire);
	InputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &AMainPlayerController::Reload);
	InputComponent->BindAction("Throwable", EInputEvent::IE_Pressed, this, &AMainPlayerController::Throwable);
}

//Checks if the player has enough ammo and then calls the Fire function from the ABase_Character class
void AMainPlayerController::Fire()
{
	//Allows for the fire function to be called when in the game/main screen
	if (Pawn && Level == "Main_Screen")
	{
		if (CurrentClip > 0)
		{
			//Plays a sound at the players location
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), GunSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);
			--CurrentClip;
			Pawn->Fire();
		}
	}
}

//takes ammo out of the total ammo amount and adds it to the current clip
void AMainPlayerController::Reload()
{
	if (TotalGunAmmo > 0)
	{
		//Plays a sound at the players location
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ReloadSound, Pawn->GetActorLocation(), 1.0f, 1.0f, 0.0f);

		//Calculates the current ammo in the clip and the total ammo overall
		int ReloadAmount = AmmoClip - CurrentClip;
		TotalGunAmmo -= ReloadAmount;
		if (TotalGunAmmo < 0)	TotalGunAmmo = 0;
		CurrentClip = AmmoClip;
	}
}

//calls the function from ABase_Character to throw a projectile from the projectile component
void AMainPlayerController::Throwable()
{
	if (TotalThrowableAmmo > 0)
	{
		Pawn->ThrowGrenade();
		--TotalThrowableAmmo;
	}
}

//Loads the User Widgets to the players viewport depending on what level the player is currently on
void AMainPlayerController::WidgetLoader(FString LevelName)
{
	//Checks if the level name is Title_Screen and then adds the correct User Widget to the viewport while removing the rest
	if (LevelName == "Title_Screen")
	{
		if (StartDisplay != nullptr)
		{
			StartDisplay->AddToViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();

			//Displays the mouse cursor and only allows player input into the UI
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
	//Checks if the level name is Main)Screen and then adds the correct User Widget to the viewport while removing the rest
	else if (LevelName == "Main_Screen")
	{
		if (PlayerInterfaceDisplay != nullptr)
		{
			PlayerInterfaceDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();

			//Removes the mouse cursor and only allows player input into the Gamespace
			SetInputMode(FInputModeGameOnly());
			bShowMouseCursor = false;
		}
	}
	//Checks if the level name is End_Screen and then adds the correct User Widget to the viewport while removing the rest
	else if (LevelName == "End_Screen")
	{
		if (EndScreenDisplay != nullptr)
		{
			EndScreenDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			RulesScreenDisplay->RemoveFromViewport();

			//Displays the mouse cursor and only allows player input into the UI
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
	//Checks if the level name is Rules_Screen and then adds the correct User Widget to the viewport while removing the rest
	else if (LevelName == "Rules_Screen")
	{
		if (RulesScreenDisplay != nullptr)
		{
			RulesScreenDisplay->AddToViewport();
			StartDisplay->RemoveFromViewport();
			PlayerInterfaceDisplay->RemoveFromViewport();
			EndScreenDisplay->RemoveFromViewport();

			//Displays the mouse cursor and only allows player input into the UI
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
		}
	}
}

//Returns the currentClip to be displayed in a User Widget
int AMainPlayerController::ReturnCurrentClip()
{
	return CurrentClip;
}

//Returns the TotalGunAmmo to be displayed in a User Widget
int AMainPlayerController::ReturnTotalAmmo()
{
	return TotalGunAmmo;
}

//Calculates the Players health as a percentage and then returns it to be displayed in a User Widget
float AMainPlayerController::ReturnPlayersHealthPercentage()
{
	float PlayersHealth = 0.0f;
	Pawn->ReturnPlayerStats(PlayersHealth);

	return PlayersHealth / PlayerMaxHealth;
}

//Returns the Players points to be displayed in a User Widget
int AMainPlayerController::ReturnPoints()
{
	int UserPointsAmount = GameModeReference->GetPoints();
	return UserPointsAmount;
}

//Returns the TotalGrenades to be displayed in a User Widget
int AMainPlayerController::ReturnTotalGrenades()
{
	return TotalThrowableAmmo;
}
