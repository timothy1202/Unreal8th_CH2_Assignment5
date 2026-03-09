#include "MyActor.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true; 
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    PreviousLocation = GetActorLocation(); 
    UE_LOG(LogTemp, Warning, TEXT("Start Game!"));
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!bIsFinished)
    {
        Timer += DeltaTime;

        if (Timer >= 1.0f)
        {
            FVector StartPos = GetActorLocation();

            Move();
            Turn();

            FVector EndPos = GetActorLocation();

            float MoveDistance = FVector::Dist(StartPos, EndPos);
            TotalDistance += MoveDistance;
   
            UE_LOG(LogTemp, Warning, TEXT("EndPos: %s"), *EndPos.ToString());

            bool bIsEvent = TriggerEvent();
            if (bIsEvent)
            {
                EventCount++;
            }

            FString StepMsg = FString::Printf(TEXT("Step: %d | Dist: %.2f | Event: %s"),MoveCount + 1, MoveDistance, bIsEvent ? TEXT("Yes") : TEXT("No"));
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, StepMsg);

            MoveCount++;
            Timer = 0.0f;

            if (MoveCount >= 10)
            {
                bIsFinished = true;
                FString FinalReport = FString::Printf(TEXT("--- 최종 리포트 --- 총 거리: %.2f | 총 이벤트: %d"),TotalDistance, EventCount);
                GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Magenta, FinalReport);
            }
        }
    }
}

void AMyActor::Move()
{
    float RandX = FMath::FRandRange(-200.0f, 200.0f);
    float RandY = FMath::FRandRange(-200.0f, 200.0f);
    FVector NewLocation = GetActorLocation() + FVector(RandX, RandY, 0.0f);
    SetActorLocation(NewLocation);
}

void AMyActor::Turn()
{
    float RandYaw = FMath::FRandRange(-45.0f, 45.0f);
    AddActorWorldRotation(FRotator(0.0f, RandYaw, 0.0f));
}

bool AMyActor::TriggerEvent()
{
    if (FMath::FRand() < 0.5f)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("이벤트 발생!"));
        return true; 
    }
    return false; 
}