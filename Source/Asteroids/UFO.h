// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UFO.generated.h"

UCLASS()
class ASTEROIDS_API AUFO : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUFO();

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

	bool Temp;

	bool destroyTemp;

	//How long, in seconds, the countdown will run
	int CountdownTime;

	int Counter;

	void AdvanceTimer();

	void CountdownHasFinished();

	FTimerHandle CountdownTimerHandle;

private:
	// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* UFOVisual;

	// Flag. True if the object has moved to the edge of the world
	bool edgeOfWorld;

	// A class to store the human player
	class APawn* Player;

	// The actors location
	FVector actorLoc;


};
