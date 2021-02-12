// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base_Character.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CARBONPUSHTWO_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	AMainPlayerController();
	virtual void SetupInputComponent();
	virtual void Fire();
	virtual void Reload();
	virtual void WidgetLoader(FString LevelName);
	ABase_Character* Pawn;

private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> StartWidget;
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> PlayerInterfaceWidget;

	UPROPERTY()
		UUserWidget* StartDisplay;
	UPROPERTY()
		UUserWidget* PlayerInterfaceDisplay;

	UPROPERTY(EditAnywhere)
		float PlayerMaxHealth = 100.0f;
	UPROPERTY(EditAnywhere)
		float PlayerHealth = 100.0f;

	UPROPERTY(EditAnywhere)
		int AmmoClip = 20;
	UPROPERTY(EditAnywhere)
		int CurrentClip = AmmoClip;
	UPROPERTY(EditAnywhere)
		int TotalAmmo = 120;
	UPROPERTY(EditAnywhere)
		USoundBase* GunSound;
	UPROPERTY(EditAnywhere)
		USoundBase* ReloadSound;

	UFUNCTION(BlueprintPure)
		int ReturnCurrentClip();
	UFUNCTION(BlueprintPure)
		int ReturnTotalAmmo();
	UFUNCTION(BlueprintPure)
		float ReturnPlayersHealthPercentage();
};