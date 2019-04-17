// Fill out your copyright notice in the Description page of Project Settings.

#include "UFO.h"
#include "Asteroid.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"

// Sets default values
AUFO::AUFO()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and attach a static mesh component.
	UFOVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UFOMesh"));
	// Set the mesh to the root component.
	RootComponent = UFOVisual;
	// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> UFOAsset(TEXT("StaticMesh'/Game/ExampleContent/Input_Examples/Meshes/SM_Pixel_Enemy_1.SM_Pixel_Enemy_1'"));
	// If the mesh was found set it and set properties.
	if (UFOAsset.Succeeded())
	{
		UFOVisual->SetStaticMesh(UFOAsset.Object);
		//UFOVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -100.0f));
	}
	// set up a notification for when this component hits something
	//UFOVisual->OnComponentHit.AddDynamic(this, &UFO::OnHit);
	// Set the edge of the world flag.
	edgeOfWorld = false;

	CountdownTime = 30;

	Temp = true;

	destroyTemp = true;
}

// Called when the game starts or when spawned
void AUFO::BeginPlay()
{
	Super::BeginPlay();
	Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AUFO::AdvanceTimer, 1.0f, true);
}

// Called every frame
void AUFO::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Get the actors current location.
	actorLoc = this->GetActorLocation();
	/* Check if the actor has moved off the edge of the world (or screen).
	In this example we are using the floor in the Default map to represent
	the edge of the world.
	This is a toroidal environment... Mmmmmmmmmm toroidal. */
	if (actorLoc.Y > 1547.0f)
	{
		Destroy();
	}
	// Move the actor.
	if (edgeOfWorld == true)
	{
		/* If we are jumping to the other side of the world we need to
		switch the sweep off. */
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), false);
	}
	else
	{
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), true);
	}

}

void AUFO::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	// Another way of doing this. This is probably the best way:
	if (OtherActor->IsA(AAsteroid::StaticClass()))
	{
		// Ignore collisions with other actor asteroids.
		UFOVisual->MoveIgnoreActors.Add(OtherActor);
		destroyTemp = false;
		// A debug message
		if (GEngine)
		{
		}

	}
	if (destroyTemp == true) {
		Destroy();
	}
	destroyTemp = true;
}

void AUFO::AdvanceTimer()
{
	--CountdownTime;
	if (CountdownTime < 1)
	{
		// We're done counting down, so stop running the timer.
		//GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		//Perform any special actions we want to do when the timer ends.
		CountdownTime = 30;
		FVector Location(600.0f, -1564.0f, 120.0f);
		FRotator Rotation(0.0f, 90.0f, -90.0f);
		FVector ActorScale(3.0f, 3.0f, 3.0f);
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AUFO* NewActor = GetWorld()->SpawnActor<AUFO>(Location, Rotation, SpawnInfo);
		NewActor->SetActorScale3D(ActorScale);
		// Set the movement direction of new actor
		NewActor->movementDirection.Y = 800.0f;
	}
}