// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Character.h"

// Sets default values
ABase_Character::ABase_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(-400.0f, 0.0f, 350.0f));
	SpringArm->SetRelativeRotation(FRotator(-20.0f, 0.0f, 0.0f));
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = SpringArmLength;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABase_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABase_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Move Forward"), this, &ABase_Character::MoveForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &ABase_Character::strafe);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABase_Character::Turn);
	PlayerInputComponent->BindAxis(TEXT("Look Up"), this, &ABase_Character::LookUp);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
}

void ABase_Character::MoveForwards(float AxisAmount)
{
	AddMovementInput(GetActorForwardVector() * AxisAmount);
}

void ABase_Character::strafe(float AxisAmount)
{
	AddMovementInput(GetActorRightVector() * AxisAmount);
}

void ABase_Character::LookUp(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

void ABase_Character::Turn(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

