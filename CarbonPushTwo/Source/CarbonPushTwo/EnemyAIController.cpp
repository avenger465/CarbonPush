// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/TargetPoint.h"

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	APawn* AIPawn = GetPawn();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	if (EnemyBehaviourTree != nullptr)
	{
		RunBehaviorTree(EnemyBehaviourTree);
	}
	GetBlackboardComponent()->SetValueAsVector(TEXT("HomeBase"), AIPawn->GetActorLocation());
	GetBlackboardComponent()->SetValueAsVector(TEXT("LookoutPoint"), Waypoints[0]->GetActorLocation());
}
void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);



	if (LineOfSightTo(PlayerPawn) && InFront(PlayerPawn))
	{
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerPosition"), PlayerPawn->GetActorLocation());
		//UE_LOG(LogTemp, Warning, TEXT("I can See you"));
	}
	else
	{
		GetBlackboardComponent()->ClearValue(TEXT("PlayerPosition"));
		//UE_LOG(LogTemp, Warning, TEXT("I can't see you"));
	}

}

bool AEnemyAIController::InFront(AActor* ActorToCheck)
{
	APawn* AIPawn = GetPawn();
	FVector AIForwardVector = AIPawn->GetActorForwardVector();
	FVector PlayerPositionVector = ActorToCheck->GetActorLocation();
	FVector AIPositionVector = AIPawn->GetActorLocation();
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
}