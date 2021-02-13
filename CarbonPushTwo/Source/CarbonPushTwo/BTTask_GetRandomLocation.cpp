// Fill out your copyright notice in the Description page of Project Settings.

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTTask_GetRandomLocation.h"

EBTNodeResult::Type UBTTask_GetRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	if (OwnerComp.GetAIOwner() == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	//Get reference to AI Pawn from the AIController
	AActor* AIActor = OwnerComp.GetAIOwner()->GetPawn();

	//Set a random radius value
	float RandomRadius = 2000.0f;
	FNavLocation RandomLocation;

	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
	NavSys->GetRandomReachablePointInRadius(AIActor->GetActorLocation(), RandomRadius, RandomLocation);
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("RandomLocation"), RandomLocation);

	return EBTNodeResult::Succeeded;
}
