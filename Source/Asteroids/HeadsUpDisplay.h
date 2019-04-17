// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeadsUpDisplay.generated.h"

UCLASS()
class ASTEROIDS_API AHeadsUpDisplay : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeadsUpDisplay();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// A static mesh component. The visual representation of our actor
	class UStaticMeshComponent* HeartVisual;
	
};
