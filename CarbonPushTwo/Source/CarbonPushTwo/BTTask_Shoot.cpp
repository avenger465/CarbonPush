// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "Base_Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	//Checks if it is able to get the AIOwner
	if (OwnerComp.GetAIOwner() == nullptr)
	{
		//Returns a Failed result to the blackboard
		UE_LOG(LogTemp, Warning, TEXT("Fail"));
		return EBTNodeResult::Failed;
	}
	//Calls the Fire function from the ABase_Character class
	ABase_Character* AICharacter = Cast<ABase_Character>(OwnerComp.GetAIOwner()->GetPawn());
	AICharacter->Fire();

	//Returns a succeeded result to the blackboard
	return EBTNodeResult::Succeeded;
}