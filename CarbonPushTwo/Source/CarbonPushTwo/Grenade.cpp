// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grenade Mesh"));
	GrenadeMesh->SetupAttachment(RootComponent);
	GrenadeMesh->SetSimulatePhysics(true);
	GrenadeMesh->SetNotifyRigidBodyCollision(true);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->MaxSpeed = MovementSpeed;
	ProjectileMovement->InitialSpeed = MovementSpeed;
	InitialLifeSpan = 10.0f;

}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &AGrenade::OnHit);
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenade::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	/*if (OtherActor->GetClass()->IsChildOf(ASaucer::StaticClass()))
	{
		AActor* ProjectileOwner = GetOwner();
		if (ProjectileOwner == NULL)
			return;
		UGameplayStatics::ApplyDamage(
			OtherActor,
			TeabagDamage,
			ProjectileOwner->GetInstigatorController(),
			this,
			UDamageType::StaticClass()

		);
		Destroy();
		UE_LOG(LogTemp, Warning, TEXT("Collided with Saucer"));
	}*/
}

