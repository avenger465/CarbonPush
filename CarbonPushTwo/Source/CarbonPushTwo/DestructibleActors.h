// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "DestructibleComponent.h"
#include "DestructibleActor.h"
#include "DestructibleActors.generated.h"

UCLASS()
class CARBONPUSHTWO_API ADestructibleActors : public ADestructibleActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADestructibleActors();

private:
	//RadialForce Component
	UPROPERTY(EditAnywhere)
		URadialForceComponent* RadialForceComponent;
};
