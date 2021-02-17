// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_GetRandomLocation.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_GetRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	//Checks if it is able to get the AI Controller 
	//And returns a Failed result if there is no AI Controller
	if (OwnerComp.GetAIOwner() == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	//Get reference to AI Pawn from the AIController
	AActor* AIActor = OwnerComp.GetAIOwner()->GetPawn();

	//Set a random radius value
	float RandomRadius = 2000.0f;
	FNavLocation RandomLocation;

	//Creates an object of type UNavigationSystem to be able to move around the Pawn in the game space
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	//Gets a reachable point in a certain radius around the Pawn
	NavSys->GetRandomReachablePointInRadius(AIActor->GetActorLocation(), RandomRadius, RandomLocation);

	//Updates the selected Blackboard Key to this random point
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("RandomLocation"), RandomLocation);

	//Returns a Succeeded result
	return EBTNodeResult::Succeeded;
}
