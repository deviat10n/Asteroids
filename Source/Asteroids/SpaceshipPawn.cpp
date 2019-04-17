// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceshipPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "SpaceshipProjectile.h"
#include "Asteroid.h"
#include "MyPlayerState.h"

// Sets default values
ASpaceshipPawn::ASpaceshipPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create the mesh component.
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	// Get the ship mesh.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/ExampleContent/Input_Examples/Meshes/SM_UFO_Main.SM_UFO_Main'"));
	// If the mesh was found set it and set properties.
	if (ShipMesh.Succeeded())
	{
		ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	}
	CurrentForwardSpeed = 0.0f;
	CurrentRotationSpeed = 0.0f;
	CurrentFireValue = 0.0f;
	// Set fire flag, fire rate and offset.
	CanFire = true;
	FireRate = 0.25f;
	GunOffset = 70.0f;
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/TwinStick/Audio/TwinStickFire.TwinStickFire'"));
	if (FireAudio.Succeeded())
	{
		FireSound = FireAudio.Object;
	}

	CountdownTime = 2;

	Score = 0;

	Lives = 3;

	Counter = 0;

	ShipMeshComponent->OnComponentHit.AddDynamic(this, &ASpaceshipPawn::OnHit);
}

// Called when the game starts or when spawned
void ASpaceshipPawn::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ASpaceshipPawn::AdvanceTimer, 1.0f, true);

}

// Called every frame
void ASpaceshipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Move Forward and back.
	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.f, 0.f);
	// Move forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);
	// Calculate change in rotation this frame
	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Yaw = CurrentRotationSpeed * DeltaTime;
	// Rotate spaceship
	AddActorLocalRotation(DeltaRotation);
	// Fire.
	if (CurrentFireValue == 1.0f)
	{
		if (CanFire)
		{
			// Temp spawn rotation
			FRotator SpawnRotation = this->GetActorRotation();
			// Temp spawn location
			FVector SpawnLocation = GetActorLocation();
			FVector ForwardVector = GetActorForwardVector();
			ForwardVector = ForwardVector * GunOffset;
			// Update spawn location to relect to offset
			SpawnLocation = SpawnLocation + ForwardVector;
			UWorld* const World = GetWorld();
			if (World != NULL)
			{
				// Spawn the projectile
				ASpaceshipProjectile* NewActor = World->SpawnActor<ASpaceshipProjectile>(SpawnLocation, SpawnRotation);
				// Try and play the sound
				if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ASpaceshipPawn::ShotTimerExpired, FireRate);
				CanFire = false;
			}
		}
	}

	// Get the actors current location.
	actorLoc = this->GetActorLocation();
	/* Check if the actor has moved off the edge of the world (or screen).
	In this example we are using the floor in the Default map to represent
	the edge of the world.
	This is a toroidal environment... Mmmmmmmmmm toroidal. */
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
		/* If we are jumping to the other side of the world we need to
		switch the sweep off. */
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), false);
	}
	else
	{
		this->SetActorLocation((actorLoc + movementDirection * DeltaTime), true);
	}
}

// Called to bind functionality to input
void ASpaceshipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Bind movement to callback functions.
	InputComponent->BindAxis("MoveForward", this, &ASpaceshipPawn::MoveForwardInput);
	InputComponent->BindAxis("MoveRight", this, &ASpaceshipPawn::MoveRightInput);
	InputComponent->BindAxis("FireForward", this, &ASpaceshipPawn::FireForwardInput);
}
// Called when a move forward or backward event occurs.
void ASpaceshipPawn::MoveForwardInput(float Val)
{
	// Is there no input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
	if (bHasInput)
	{
		CurrentForwardSpeed = Val * 250.0f;
	}
	else
	{
		CurrentForwardSpeed = 0;
	}
}
// Called when a rotate left or right event occurs.
void ASpaceshipPawn::MoveRightInput(float Val)
{
	// Is there no input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
	if (bHasInput)
	{
		CurrentRotationSpeed = Val * 20.0f;
	}
	else
	{
		CurrentRotationSpeed = 0;
	}
}
// Called when fire is pressed.
void ASpaceshipPawn::FireForwardInput(float Val)
{
	CurrentFireValue = Val;
}
// Sets shot flag to true. Used by a timer event
void ASpaceshipPawn::ShotTimerExpired()
{
	CanFire = true;
}


void ASpaceshipPawn::AdvanceTimer()
{

	--CountdownTime;
	Counter++;
	if (CountdownTime < 1)
	{
		Score++;
		AMyPlayerState* CurrentState = Cast<AMyPlayerState>(this->PlayerState);
		if (CurrentState)
		{
			CurrentState->SetPlayerScore(Score);
		}
	}
}

void ASpaceshipPawn::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	if (OtherActor->IsA(AAsteroid::StaticClass()))
	{
		if (Counter > 0) {
			Lives--;
			AMyPlayerState* CurrentState = Cast<AMyPlayerState>(this->PlayerState);
			if (CurrentState)
			{
				CurrentState->SetPlayerLives(Lives);
			}
			Counter = -3;
			if (Lives == 0) {
				UWorld* TheWorld = GetWorld();

				UGameplayStatics::OpenLevel(GetWorld(), "GameOver");
			}
		}
	}
}