// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


#include "GameFramework/Character.h"
#include "Base_Character.generated.h"

UCLASS()
class CARBONPUSHTWO_API ABase_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABase_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void MoveForwards(float AxisAmount);
	void strafe(float AxisAmount);
	void LookUp(float AxisAmount);
	void Turn(float AxisAmount);

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;
	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere)
		float SpringArmLength = 500.0f;

};
