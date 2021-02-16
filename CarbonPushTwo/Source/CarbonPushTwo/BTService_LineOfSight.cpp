// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_LineOfSight.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void UBTService_LineOfSight::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	//Gets the Player pawn and the AIController
	AAIController* EnemyAIController = OwnerComp.GetAIOwner();
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	//Calculates whether the player is in front of the AIPawn and has an unobstructed view to the AIPawn
	//And updates the Selected Blackboard key if true
	if (EnemyAIController->LineOfSightTo(PlayerPawn) && InFrontOf(PlayerPawn, EnemyAIController))
	{
		//Sets the Blackboard Key to be true
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
	}
	else
	{
		//Clears the selected Blackboard Key 
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}

//Checks if the player is in front of the AIPawn using DotProduct
bool UBTService_LineOfSight::InFrontOf(AActor* ActorToCheck, AAIController* EnemyController)
{
	//Gets the enemy pawn  and calculates it forward vector 
	APawn* EnemyPawn = EnemyController->GetPawn();
	FVector AIForwardVector = EnemyPawn->GetActorForwardVector();

	//Calculates the players Location
	FVector PlayerPositionVector = ActorToCheck->GetActorLocation();
	FVector AIPositionVector = EnemyPawn->GetActorLocation();
	FVector AIToPlayerVector = PlayerPositionVector - AIPositionVector;

	//Normalises the Vector between the AI and the player
	AIToPlayerVector.Normalize();

	//Calculates the DotProduct between the player and the AIPawn
	float DirectionDotProduct = FVector::DotProduct(AIToPlayerVector, AIForwardVector);

	//Returns true if the Dotproduct is positive and above a certain value
	if (DirectionDotProduct >= 0.65)
	{
		return true;
	}
	else
	{
		return false;
	}

	return false;
}
