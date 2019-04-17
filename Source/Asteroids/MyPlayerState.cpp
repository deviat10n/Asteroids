// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerState.h"

AMyPlayerState::AMyPlayerState()
{
	PlayerScore = 0;
	PlayerLives = 3;
}
void AMyPlayerState::SetPlayerScore(int Score)
{
	PlayerScore = Score;
}
int AMyPlayerState::GetPlayerScore()
{
	return PlayerScore;
}
void AMyPlayerState::SetPlayerLives(int Lives)
{
	PlayerLives = Lives;
}
int AMyPlayerState::GetPlayerLives()
{
	return PlayerLives;
}

