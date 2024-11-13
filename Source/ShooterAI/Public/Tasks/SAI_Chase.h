// SAI_Chase.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SAI_Chase.generated.h"

UCLASS()
class SHOOTERAI_API USAI_Chase : public UBTTaskNode
{
	GENERATED_BODY()

public:
	USAI_Chase();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
