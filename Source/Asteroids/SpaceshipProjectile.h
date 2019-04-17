// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Asteroid.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceshipProjectile.generated.h"

UCLASS()
class ASTEROIDS_API ASpaceshipProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpaceshipProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// A class to store the human player
	class APawn* Player;

	// Function to handle the projectile hitting something
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
private:
	// Sphere collision component
	class UStaticMeshComponent* ProjectileMesh;
	// Projectile movement component
	class UProjectileMovementComponent* ProjectileMovement;

	// The actors location
	FVector actorLoc;

};
