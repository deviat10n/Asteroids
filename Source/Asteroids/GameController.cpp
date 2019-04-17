// Fill out your copyright notice in the Description page of Project Settings.

#include "GameController.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"
#include "SpaceshipPawn.h"

// Sets default values
AGameController::AGameController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CountdownTime = 4;
	Temp = false;
	Counter = 0;
}

// Called when the game starts or when spawned
void AGameController::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AGameController::AdvanceTimer, 1.0f, true);

}

// Called every frame
void AGameController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AGameController::AdvanceTimer()
{
	--CountdownTime;
	if (CountdownTime < 1)
	{
		// We're done counting down, so stop running the timer.
		//GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		//Perform any special actions we want to do when the timer ends.
		CountdownHasFinished();
	}
}

void AGameController::CountdownHasFinished()
{
	Temp = false;
	CountdownTime = 4;
	Counter++;
}
