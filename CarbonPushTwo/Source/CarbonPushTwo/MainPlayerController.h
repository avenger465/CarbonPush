// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base_Character.h"
#include "CarbonPushTwoGameModeBase.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

UCLASS()
class CARBONPUSHTWO_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	//Sets default values for this character's properties
	AMainPlayerController();

	//Public functions that can be called from other objects
	virtual void SetupInputComponent();

	virtual void Fire();

	virtual void Reload();

	virtual void Throwable();

	virtual void WidgetLoader(FString LevelName);

	//Reference to the ABase_Character class
	ABase_Character* Pawn;

	//Reference to the ACarbonPushTwoGameModeBase class
	ACarbonPushTwoGameModeBase* GameModeReference;

private:
	//Creates a StartWidget object of type UUserWidget
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> StartWidget;

	//Creates a PlayerInterfaceWidget object of type UUserWidget
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> PlayerInterfaceWidget;

	//Creates a EndScreenWidget object of type UUserWidget
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> EndScreenWidget;

	//Creates a RulesScreenWidget object of type UUserWidget
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> RulesScreenWidget;

	//UserWidget Component
	UPROPERTY()
		UUserWidget* StartDisplay;

	//UserWidget Component
	UPROPERTY()
		UUserWidget* PlayerInterfaceDisplay;

	//UserWidget Component
	UPROPERTY()
		UUserWidget* EndScreenDisplay;

	//UserWidget Component
	UPROPERTY()
		UUserWidget* RulesScreenDisplay;

	//SoundBase component
	UPROPERTY(EditAnywhere)
		USoundBase* GunSound;

	//SoundBase component
	UPROPERTY(EditAnywhere)
		USoundBase* ReloadSound;
	//PlayerMaxHealth variable
	UPROPERTY(EditAnywhere)
		float PlayerMaxHealth = 100.0f;

	//AmmoClip variable
	UPROPERTY(EditAnywhere)
		int AmmoClip = 20;

	//CurrentClip variable
	UPROPERTY(EditAnywhere)
		int CurrentClip = AmmoClip;

	//TotalGunAmmo variable
	UPROPERTY(EditAnywhere)
		int TotalGunAmmo = 120;

	//TotalThrowableAmmo variable
	UPROPERTY(EditAnywhere)
		int TotalThrowableAmmo = 13;

	//Level variable
	UPROPERTY()
		FString Level;

	//Private functions that only apply to this class
	UFUNCTION(BlueprintPure)
		int ReturnCurrentClip();

	UFUNCTION(BlueprintPure)
		int ReturnTotalAmmo();

	UFUNCTION(BlueprintPure)
		float ReturnPlayersHealthPercentage();

	UFUNCTION(BlueprintPure)
		int ReturnPoints();

	UFUNCTION(BlueprintPure)
		int ReturnTotalGrenades();	
};