// Fill out your copyright notice in the Description page of Project Settings.

#include "Asteroid.h"
#include "UFO.h"
#include "SpaceshipProjectile.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine.h"
#include "MyPlayerState.h"

// Sets default values
AAsteroid::AAsteroid()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create and attach a static mesh component.
	AsteroidVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AsteroidMesh"));
	// Set the mesh to the root component.
	RootComponent = AsteroidVisual;
	// Set the mesh for the static mesh component.
	ConstructorHelpers::FObjectFinder<UStaticMesh> AsteroidAsset(TEXT("StaticMesh'/Game/ExampleContent/Landscapes/Meshes/SM_Rock.SM_Rock'"));
	// If the mesh was found set it and set properties.
	if (AsteroidAsset.Succeeded())
	{
		AsteroidVisual->SetStaticMesh(AsteroidAsset.Object);
		//AsteroidVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -100.0f));
	}
	// set up a notification for when this component hits something
	AsteroidVisual->OnComponentHit.AddDynamic(this, &AAsteroid::OnHit);

	// Set the edge of the world flag.
	edgeOfWorld = false;

	//Set the default countdown time
	CountdownTime = 20;

	//Set temp value
	Temp = true;

	//Set destroyTemp value
	destroyTemp = true;
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();

	//Find the player
	Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	//Start the timer
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AAsteroid::AdvanceTimer, 1.0f, true);

}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Get the actors current location.
	actorLoc = this->GetActorLocation();

	//Check the actor is on screen
	if (actorLoc.X < -888.0f)
	{
		actorLoc.X = 912.0f;
		edgeOfWorld = true;
	}
	if (actorLoc.X > 912.0f)
	{
		actorLoc.X = -888.0f;
		edgeOfWorld = true;
	}
	if (actorLoc.Y < -1564.0f)
	{
		actorLoc.Y = 1547.0f;
		edgeOfWorld = true;
	}
	if (actorLoc.Y > 1547.0f)
	{
		actorLoc.Y = -1564.0f;
		edgeOfWorld = true;
	}
	// Move the actor.
	if (edgeOfWorld == true)
	{
		//Disable sweep
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), false);
	}
	else
	{
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), true);
	}
}

void AAsteroid::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Prevent actors from destroying each other:
	if ((OtherActor->IsA(AAsteroid::StaticClass())) || (OtherActor->IsA(AUFO::StaticClass())))
	{
		// Ignore collisions with other actor asteroids.
		AsteroidVisual->MoveIgnoreActors.Add(OtherActor);

		//Don't destroy the actor
		destroyTemp = false;
	}

	// First, check found the player pawn
	if ((Player) && (destroyTemp == true))
	{
		if (OtherActor->GetUniqueID() != Player->GetUniqueID())
		{
			// Temp rotation.
			FRotator SpawnRotation = this->GetActorRotation();

			// Temp spawn location.
			FVector SpawnLocation = GetActorLocation();

			// Temp spawn location
			FVector ActorScale = this->GetActorScale3D();
			ActorScale.X = ActorScale.X * 0.8f;
			ActorScale.Y = ActorScale.Y * 0.8f;
			ActorScale.Z = ActorScale.Z * 0.8f;

			//Only allow asteroids of a certain size
			if (ActorScale.X > 1.6f)
			{
				//get world
				UWorld* const World = GetWorld();
				if (World != NULL)
				{
					// Update the spawn location for the smaller rock.
					SpawnLocation.X = SpawnLocation.X + 20;

					//Spawn a new asteroid
					AAsteroid* NewActor = World->SpawnActor<AAsteroid>(SpawnLocation, SpawnRotation);
					NewActor->SetActorScale3D(ActorScale);

					// Generate random number for movement
					float moveDirection = FMath::FRandRange(-600.0f, 600.0f);
					NewActor->movementDirection.X = moveDirection;
					moveDirection = FMath::FRandRange(-600.0f, 600.0f);

					// Set the movement direction of new actor
					NewActor->movementDirection.Y = moveDirection;

					// Update the spawn location for the smaller rock
					SpawnLocation.X = SpawnLocation.X - 40;

					//Spawn a new asteroid
					NewActor = World->SpawnActor<AAsteroid>(SpawnLocation, SpawnRotation);
					NewActor->SetActorScale3D(ActorScale);

					//Set movement of second asteroid
					moveDirection = -FMath::FRandRange(-600.0f, 600.0f);
					NewActor->movementDirection.X = moveDirection;
					moveDirection = -FMath::FRandRange(-600.0f, 600.0f);
					NewActor->movementDirection.Y = moveDirection;
				}
			}
			// Safely destroy this object
			Destroy();
		}
	}
	//Reset destroyTemp
	destroyTemp = true;
}

void AAsteroid::AdvanceTimer()
{
	//Count down
	--CountdownTime;

	//If timer expires
	if (CountdownTime < 1)
	{
		//Spawn new asteroid
		float LocationX = FMath::FRandRange(-888.0f, 912.0f);
		float LocationY = FMath::FRandRange(-1564.0f, 1547.0f);
		FVector Location(LocationX, LocationY, 120.0f);
		FRotator Rotation(0.0f, 0.0f, 0.0f);
		FVector ActorScale(3.0f, 3.0f, 3.0f);
		FActorSpawnParameters SpawnInfo;
		AAsteroid* NewActor = GetWorld()->SpawnActor<AAsteroid>(Location, Rotation, SpawnInfo);
		NewActor->SetActorScale3D(ActorScale);
		float moveDirection = FMath::FRandRange(-600.0f, 600.0f);
		NewActor->movementDirection.X = moveDirection;
		moveDirection = FMath::FRandRange(-600.0f, 600.0f);
		NewActor->movementDirection.Y = moveDirection;

		//Reset countdown
		CountdownTime = 20;
	}
}