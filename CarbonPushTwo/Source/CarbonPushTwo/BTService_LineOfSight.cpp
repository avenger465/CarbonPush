// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_LineOfSight.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void UBTService_LineOfSight::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* EnemyAIController = OwnerComp.GetAIOwner();
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (EnemyAIController->LineOfSightTo(PlayerPawn) && InFrontOf(PlayerPawn, EnemyAIController))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}

bool UBTService_LineOfSight::InFrontOf(AActor* ActorToCheck, AAIController* EnemyController)
{
	APawn* EnemyPawn = EnemyController->GetPawn();
	FVector AIForwardVector = EnemyPawn->GetActorForwardVector();
	FVector PlayerPositionVector = ActorToCheck->GetActorLocation();
	FVector AIPositionVector = EnemyPawn->GetActorLocation();
	FVector AIToPlayerVector = PlayerPositionVector - AIPositionVector;
	AIToPlayerVector.Normalize();

	float DirectionDotProduct = FVector::DotProduct(AIToPlayerVector, AIForwardVector);
	//UE_LOG(LogTemp, Warning, TEXT("dot product is %f"), DirectionDotProduct);
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
