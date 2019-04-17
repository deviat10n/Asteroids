// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroid.generated.h"

UCLASS()
class ASTEROIDS_API AAsteroid : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAsteroid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function to handle the projectile hitting something
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Direction vector
	UPROPERTY(EditAnywhere)
		FVector movementDirection;

	//Temporary boolean
	bool Temp;

	//Temporary boolean to prevent asteroids from destroying each other
	bool destroyTemp;

	//How long, in seconds, the countdown will run
	int CountdownTime;

	//Number counter
	int Counter;

	//Make the timer count
	void AdvanceTimer();

	//Handle the timer
	FTimerHandle CountdownTimerHandle;

private:
	// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* AsteroidVisual;

	// A class to store the human player
	class APawn* Player;

	// The actors location
	FVector actorLoc;

	// Flag. True if the object has moved to the edge of the world
	bool edgeOfWorld;
};
