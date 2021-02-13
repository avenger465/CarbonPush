// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class CARBONPUSHTWO_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
	//void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay();
private:
	UPROPERTY()
		TArray<AActor*> Waypoints;
	UPROPERTY(EditAnywhere)
		UBehaviorTree* EnemyBehaviourTree;
	//UPROPERTY
	/*UFUNCTION()
		AActor* ChooseWaypoint();
	UFUNCTION()
		void RandomPatrol();*/

	bool InFront(AActor* ActorToCheck);
};
