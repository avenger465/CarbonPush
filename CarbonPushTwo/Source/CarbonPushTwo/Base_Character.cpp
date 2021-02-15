// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Character.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABase_Character::ABase_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(-100.0f, 10.0f, 350.0f));
	SpringArm->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = SpringArmLength;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);


	MiniMapArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Mini Map Arm"));
	MiniMapArm->SetupAttachment(RootComponent);
	MiniMapArm->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	MiniMapArm->TargetArmLength = SpringArmLength;

	MiniMapCamera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Mini Map Camera"));
	MiniMapCamera->SetupAttachment(MiniMapArm);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawnpoint"));
	ProjectileSpawnPoint->SetupAttachment(RootComponent);
	ProjectileSpawnPoint->SetRelativeLocation(FVector(0.0f, 30.0f, 100.0f));
	ProjectileSpawnPoint->SetRelativeRotation(FRotator(0.0f, 0.0, 70.0f));

	ActionComponent = CreateDefaultSubobject<UCustomMovementComponent>(TEXT("Action Component"));

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABase_Character::BeginPlay()
{
	Super::BeginPlay();
	GameModeRef = Cast<ACarbonPushTwoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
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

float ABase_Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (PlayerHealth < 0.5f)
	{ 
		if (GetOwner() != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Does Exist "));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Doesn't Exist "));
		}
		//Destroy();
		//GetWorld()->ForceGarbageCollection(true);
		//UE_LOG(LogTemp, Warning, TEXT("Destroyed "));
		//GameModeRef->GameOver(true);
	}
	else
	{
		PlayerHealth -= DamageAmount;
		UE_LOG(LogTemp, Warning, TEXT("Actor Health: %f "), PlayerHealth);

	}
	return DamageAmount;
}

void ABase_Character::ThrowGrenade()
{
	FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
	FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();
	AGrenade* TempGrenade = GetWorld()->SpawnActor<AGrenade>(Grenade, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
	TempGrenade->SetOwner(this);
}

void ABase_Character::ReturnPlayerStats(float& Health)
{
	Health = PlayerHealth;
}

void ABase_Character::Fire()
{
	AController* ControllerRef = GetController();
	FVector Location;
	FRotator Rotation;
	ControllerRef->GetPlayerViewPoint(Location, Rotation);
			
	float CastRange = 5000.0f;
	FVector End = Location + Rotation.Vector() * CastRange;

	FHitResult Hit;
	bool bDidHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECC_Visibility);
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit != nullptr)
	{
		if ((bDidHit && ActorHit->GetClass()->IsChildOf((ABase_Character::StaticClass()))) || bDidHit)
		{
			UGameplayStatics::ApplyDamage(ActorHit, 50, GetOwner()->GetInstigatorController(), this, UDamageType::StaticClass());
			UE_LOG(LogTemp, Warning, TEXT("Hit %s"), *Hit.GetActor()->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Miss: %s"), *Hit.GetActor()->GetName());
		}
	}
}

