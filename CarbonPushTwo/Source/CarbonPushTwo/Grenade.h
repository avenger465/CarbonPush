// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "GameFramework/Actor.h"
#include "Grenade.generated.h"

UCLASS()
class CARBONPUSHTWO_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		float MovementSpeed = 1000.0f;
	UPROPERTY(EditAnywhere)
		float Damage = 10.0f;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* GrenadeMesh;
	UPROPERTY(EditAnywhere)
		UProjectileMovementComponent* ProjectileMovement;

	UFUNCTION()
		void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse,
			const FHitResult& Hit);
};
