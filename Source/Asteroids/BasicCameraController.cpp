// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicCameraController.h"
#include "Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

// Sets default values
ABasicCameraController::ABasicCameraController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create camera component.
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	
	// Set the camera to the root component.
	RootComponent = CameraComponent;
}

// Called when the game starts or when spawned
void ABasicCameraController::BeginPlay()
{
	Super::BeginPlay();
	
	//Set the position and rotation of the camera.
	FVector MyFVector(0.0f, 0.0f, 1600.0f) ;
	CameraComponent->SetWorldLocation(MyFVector);
	FRotator MyFRotator(-90.0f, 0.0f, 0.0f);
	CameraComponent->SetWorldRotation(MyFRotator);
	// Set this actor's camera as the current view target.
	UWorld* const World = GetWorld();
	if (World != NULL)
	{
		APlayerController* const PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			PlayerController->SetViewTarget(this);
		}
	}
}

// Called every frame
void ABasicCameraController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

