// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "Base_Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (OwnerComp.GetAIOwner() == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail"));
		return EBTNodeResult::Failed;
	}
	ABase_Character* AICharacter = Cast<ABase_Character>(OwnerComp.GetAIOwner()->GetPawn());
	AICharacter->Fire();

	return EBTNodeResult::Succeeded;
}