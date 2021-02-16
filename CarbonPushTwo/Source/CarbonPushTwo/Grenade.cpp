// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "CardboardBox.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the Subobject and Attachment for the MeshComponent to be seen the interface
	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grenade Mesh"));
	GrenadeMesh->SetupAttachment(RootComponent);
	GrenadeMesh->SetSimulatePhysics(true);
	GrenadeMesh->SetNotifyRigidBodyCollision(true);

	//Create the Subobject and Attachment for the ProjectileComponent to be seen the interface
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->MaxSpeed = MovementSpeed;
	ProjectileMovement->InitialSpeed = MovementSpeed;

	//Set the initial lifespan of the object when spawned
	InitialLifeSpan = 5.0f;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();

	//Creates a Dynamic to be run when AGrenade hits an Actor
	OnActorHit.AddDynamic(this, &AGrenade::OnHit);
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//Function to be called when AGrenade hits an Actor
void AGrenade::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	//Checks if the Actor hit is not empty
	if (OtherActor != nullptr)
	{
		//Checks if the Actor is a child of ACardboardBox and then destroys itself
		if (OtherActor->GetClass()->IsChildOf(ACardboardBox::StaticClass()))
		{
			Destroy();
		}
	}
}

