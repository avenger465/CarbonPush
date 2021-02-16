// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

UCLASS()
class CARBONPUSHTWO_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	// Called every frame	
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

private:
	//BehaviourTree Component
	UPROPERTY(EditAnywhere)
		UBehaviorTree* EnemyBehaviourTree;
};
