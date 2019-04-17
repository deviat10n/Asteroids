// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidsGameModeBase.h"
#include "SpaceshipPawn.h"
#include "Asteroid.h"
#include "MyPlayerState.h"
#include "MyFirstHUD.h"

AAsteroidsGameModeBase::AAsteroidsGameModeBase()
{
	// set default pawn class to our spaceship pawn
	DefaultPawnClass = ASpaceshipPawn::StaticClass();
	// Set the player state
	PlayerStateClass = AMyPlayerState::StaticClass();
	// Set the game hud
	HUDClass = AMyFirstHUD::StaticClass();
}

