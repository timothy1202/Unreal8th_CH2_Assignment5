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

    float TotalDistance = 0.0f;    // 총 이동 거리 누적
    int32 EventCount = 0;          // 이벤트 발생 횟수 누적
    FVector PreviousLocation;      // 거리 계산을 위한 이전 위치 저장

};