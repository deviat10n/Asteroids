// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
*
*/
UCLASS()
class ASTEROIDS_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

		int PlayerScore;
	int PlayerLives;

public:
	AMyPlayerState();
	void SetPlayerScore(int Score);
	int GetPlayerScore();
	void SetPlayerLives(int Lives);
	int GetPlayerLives();



};
