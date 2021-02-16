// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CarbonPushTwo/CarbonPushTwoGameModeBase.h"
#include "Grenade.h"
#include "Components/SceneCaptureComponent2D.h"

#include "GameFramework/Character.h"
#include "Base_Character.generated.h"

UCLASS()
class CARBONPUSHTWO_API ABase_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABase_Character();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Public functions that can be called from other objects
	UFUNCTION()
		void Fire();

	UFUNCTION()
		void ThrowGrenade();

	UFUNCTION()
		void ReturnPlayerStats(float& Health);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//Private functions that only apply to this class
	void MoveForwards(float AxisAmount);

	void strafe(float AxisAmount);

	void LookUp(float AxisAmount);

	void Turn(float AxisAmount);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;

		
	//Camera Component
	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	//SpringArm Component
	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;

	//SpringArm Component
	UPROPERTY(EditAnywhere)
		USpringArmComponent* MiniMapArm;

	//Scene Component
	UPROPERTY(EditAnywhere)
		USceneComponent* ProjectileSpawnPoint;

	//SceneCapture Component2D
	UPROPERTY(EditAnywhere)
		USceneCaptureComponent2D* MiniMapCamera;

	//Impulse force variable
	UPROPERTY(EditAnywhere)
		float ImpulseForce = 100.0f;

	//SpringArm Length variable
	UPROPERTY(EditAnywhere)
		float SpringArmLength = 500.0f;

	//Creates a Grenade object of type AGrenade
	UPROPERTY(EditAnywhere)
		TSubclassOf<AGrenade> Grenade;

	//Players health variable
	UPROPERTY(EditAnywhere)
		float PlayerHealth = 100.0f;

	//Damage variable
	UPROPERTY(EditAnywhere)
		float Damage = 25.0f;

	//Cast Range variable
	UPROPERTY(EditAnywhere)
		float CastRange = 5000.0f;

	//Reference to the ACarbonPushTwoGameModeBase class
	UPROPERTY()
		ACarbonPushTwoGameModeBase* GameModeReference;
};
