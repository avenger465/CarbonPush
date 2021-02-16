// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/TargetPoint.h"

// Called when the game starts or when spawned
void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	//Creates a object reference to the Pawn
	APawn* AIPawn = GetPawn();

	//Checks if the BehaviourTree is empty and Runs the BehaviourTree
	//if it is not empty
	if (EnemyBehaviourTree != nullptr)
	{
		RunBehaviorTree(EnemyBehaviourTree);
	}
}

// Called every frame
void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
