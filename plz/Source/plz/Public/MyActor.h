#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PLZ_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void Move();
    void Turn();
    bool TriggerEvent();

    int32 MoveCount = 0;
    bool bIsFinished = false;
    float Timer = 0.0f;

    float TotalDistance = 0.0f;
    int32 EventCount = 0;      
    FVector PreviousLocation;  

};