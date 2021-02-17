// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Character.h"
#include "MoveableObjects.h"
#include "DestructibleActors.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABase_Character::ABase_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the Subobject and Attachment for the SpringArm Component to be seen in the interface
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(-100.0f, 10.0f, 350.0f));
	SpringArm->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));

	//Setting up the properties of the SpringArm component
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = SpringArmLength;
	SpringArm->bUsePawnControlRotation = true;

	//Create the Subobject and Attachment for the Camera Component to be seen in the interface
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	//Create the Subobject and Attachment for the MiniMapArm Component to be seen in the interface
	MiniMapArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Mini Map Arm"));
	MiniMapArm->SetupAttachment(RootComponent);
	MiniMapArm->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	MiniMapArm->TargetArmLength = SpringArmLength;

	//Create the Subobject and Attachment for the MiniMapCamera Component to be seen in the interface
	MiniMapCamera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Mini Map Camera"));
	MiniMapCamera->SetupAttachment(MiniMapArm);

	//Create the Subobject and Attachment for the ProjectileSpawnPoint Component to be seen in the interface
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawnpoint"));
	ProjectileSpawnPoint->SetupAttachment(RootComponent);
	ProjectileSpawnPoint->SetRelativeLocation(FVector(0.0f, 30.0f, 100.0f));
	ProjectileSpawnPoint->SetRelativeRotation(FRotator(0.0f, 0.0, 70.0f));

	//Allows the character to be possessed by the player automatically 
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABase_Character::BeginPlay()
{
	Super::BeginPlay();
	//Creates a object reference to the GameModeBase
	GameModeReference = Cast<ACarbonPushTwoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
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

	//Binds input keys/buttons to functions in the character class
	PlayerInputComponent->BindAxis(TEXT("Move Forward"), this, &ABase_Character::MoveForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &ABase_Character::strafe);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABase_Character::Turn);
	PlayerInputComponent->BindAxis(TEXT("Look Up"), this, &ABase_Character::LookUp);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
}

//Allows the player to move the character forwards and backwards
void ABase_Character::MoveForwards(float AxisAmount)
{
	AddMovementInput(GetActorForwardVector() * AxisAmount);
}

//Allows the player to move the character left and right
void ABase_Character::strafe(float AxisAmount)
{
	AddMovementInput(GetActorRightVector() * AxisAmount);
}

//Allows the player to rotate the character up and down
void ABase_Character::LookUp(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

//Allows the player to rotate the character left and right
void ABase_Character::Turn(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

//Applies damage to the character
float ABase_Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), PlayerHealth);
	//Checks if the Pawns health is below zero
	if (PlayerHealth <= 10.0f)
	{ 
		//Checks if the Pawn Owner is not empty and then destroys it
		if (GetOwner() != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Don't Switch"));
			GetOwner()->Destroy();
		}
	}
	else
	{
		//Updates the players health to the correct value
		PlayerHealth -= DamageAmount;
	}
	return DamageAmount;
}

//Creates a temporary AGrenade object and spawns this object
void ABase_Character::ThrowGrenade()
{
	FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
	FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();
	AGrenade* TempGrenade = GetWorld()->SpawnActor<AGrenade>(Grenade, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
	TempGrenade->SetOwner(this);
}

//Returns the characters health to the MainPlayerController
void ABase_Character::ReturnPlayerStats(float& Health)
{
	Health = PlayerHealth;
}

//Performs a raycast and applies damage if this raycast hits an objects
void ABase_Character::Fire()
{
	//Gets the Pawns Controller
	AController* ControllerReference = GetController();

	//Setting up variables to be used later
	FVector Location;
	FRotator Rotation;
	FVector End;
	FHitResult Hit;

	//Creates Parameters to be passed into the Collision function
	FCollisionQueryParams CollisionParameters;

	//Sets the Collision function to ignore itself
	CollisionParameters.AddIgnoredActor(this);

	//Gets the ViewPoint from the Pawns Camera
	ControllerReference->GetPlayerViewPoint(Location, Rotation);

	//Calculates the end point to be used in the Collision function
	End = Location + Rotation.Vector() * CastRange;

	//Creates a boolean to get the result from the Collision function/Linetracing
	bool bDidHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECC_Visibility, CollisionParameters);

	//Checks if the Actor hit is not empty
	if (bDidHit && Hit.GetActor() != nullptr)
	{
		//Checks if the Actor hit is of type ABase_Character
		if (Cast<ABase_Character>(Hit.GetActor()))
		{
			//Calls the ApplyDamage() function to deal damage to the Actor hit
			UGameplayStatics::ApplyDamage( Hit.GetActor(), Damage, GetOwner()->GetInstigatorController(), this, UDamageType::StaticClass());	
		}
		//Checks if the Actor hit is of type AMoveableObjects
		else if (Cast<AMoveableObjects>(Hit.GetActor()))
		{
			//Creates a PrimitiveComponent to add an Impulse force to the Actor hit
			UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(Hit.GetActor()->GetRootComponent());
			PrimitiveComponent->AddImpulse(Rotation.Vector() * ImpulseForce * PrimitiveComponent->GetMass());
		}
		//Checks if the Actor hit is of type ADestructibleActors
		else if ((Cast<ADestructibleActors>(Hit.GetActor())))
		{
			//Creates an object of type ADestructibleActors to call the ApplyradiusDamage() function on the Actor hit
			ADestructibleActors* DestructibleActorHit = (Cast<ADestructibleActors>(Hit.GetActor()));
			DestructibleActorHit->GetDestructibleComponent()->ApplyRadiusDamage(5.0f, Hit.GetActor()->GetActorLocation(), 300.0f, 1000.0f, true);

			//Increments the players score
			GameModeReference->PointScored();
		}
	}
}

