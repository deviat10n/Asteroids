// Fill out your copyright notice in the Description page of Project Settings.

#include "HeadsUpDisplay.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"


// Sets default values
AHeadsUpDisplay::AHeadsUpDisplay()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and attach a static mesh component.
	HeartVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeartMesh"));
	// Set the mesh to the root component.
	RootComponent = HeartVisual;
	// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> HeartAsset(TEXT("StaticMesh'/Game/Models/Heart.Heart'"));
	// If the mesh was found set it and set properties.
	if (HeartAsset.Succeeded())
	{
		HeartVisual->SetStaticMesh(HeartAsset.Object);
		//AsteroidVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -100.0f));
	}
}

// Called when the game starts or when spawned
void AHeadsUpDisplay::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeadsUpDisplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

