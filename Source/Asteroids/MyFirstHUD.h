// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyFirstHUD.generated.h"

/**
*
*/
UCLASS()
class ASTEROIDS_API AMyFirstHUD : public AHUD
{
	GENERATED_BODY()

		// Current player state
		class AMyPlayerState* CurrentState;
public:
	AMyFirstHUD();
	// Font used to render info
	UPROPERTY()
		UFont* HUDFont;
	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface	

};
