// SAI_Chase.cpp
#include "Tasks/SAI_Chase.h"
#include "AIController.h"
#include "AI/SAIAAICharacter.h"
#include "Navigation/PathFollowingComponent.h"


USAI_Chase::USAI_Chase()
{
	NodeName = "Chase Target Location";
}

EBTNodeResult::Type USAI_Chase::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Obtenez le contrôleur d'IA
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	// Obtenez le personnage contrôlé (votre classe d'IA personnalisée)
	ASAIAAICharacter* AICharacter = Cast<ASAIAAICharacter>(AIController->GetPawn());
	if (AICharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	
	if(AICharacter->TargetActor == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	// Récupérez la TargetLocation de l'IA
	FVector TargetLocation = AICharacter->TargetActor->GetActorLocation();
	
	// Déplacez l'IA vers TargetLocation
	AIController->MoveToLocation(TargetLocation);
	
	
	return EBTNodeResult::Succeeded;
}
