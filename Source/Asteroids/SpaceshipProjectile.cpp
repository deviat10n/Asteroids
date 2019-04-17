// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceshipProjectile.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/TextRenderComponent.h"
#include "Engine.h"
#include "Asteroid.h"
#include "MyPlayerState.h"

// Sets default values
ASpaceshipProjectile::ASpaceshipProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile'"));
	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	// Here we insert a mesh into the mesh we created
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	// Set the root component to the mesh
	ProjectileMesh->SetupAttachment(RootComponent);
	// Collision profiles are defined in DefaultEngine.ini
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	// Set the root component to the mesh
	RootComponent = ProjectileMesh;
	// set up a notification for when this component hits something
	ProjectileMesh->OnComponentHit.AddDynamic(this, &ASpaceshipProjectile::OnHit);
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 1000.f;
	ProjectileMovement->MaxSpeed = 1000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity


	InitialLifeSpan = 10.0f;

	// Set the scale of the projectile
	FVector scale(1.0f, 1.0f, 1.0f);
	this->SetActorScale3D(scale);
}

// Called when the game starts or when spawned
void ASpaceshipProjectile::BeginPlay()
{
	Super::BeginPlay();
	Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

// Called every frame
void ASpaceshipProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpaceshipProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Debug some info to the screen if needed
	if (OtherActor->IsA(AAsteroid::StaticClass()))
	{
	}
	Destroy();
	// Look at the actors name and check if it includes asteroid
	if (OtherActor->GetName().Contains(TEXT("UFO"), ESearchCase::IgnoreCase, ESearchDir::FromStart))
	{
		// Ignore collisions with other actors that whose name includes "asteroids".
		ProjectileMesh->MoveIgnoreActors.Add(OtherActor);
		// Safely destroy this object
	}
}