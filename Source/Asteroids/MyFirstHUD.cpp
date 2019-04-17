// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFirstHUD.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "MyPlayerState.h"
#define LOCTEXT_NAMESPACE "SimpleHUD"
AMyFirstHUD::AMyFirstHUD()
{
	static ConstructorHelpers::FObjectFinder<UFont> Font(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	HUDFont = Font.Object;

}
void AMyFirstHUD::DrawHUD()
{
	// Call parent.
	Super::DrawHUD();

	if (CurrentState)
	{
		// Get screen dimensions.
		FVector2D ScreenDimensions = FVector2D(Canvas->SizeX, Canvas->SizeY);
		FText ScoreString = FText::Format(LOCTEXT("TestFormat", "Score: {0}"), FText::AsNumber(CurrentState->GetPlayerScore()));
		FVector2D TextCentrePos = FVector2D((Canvas->SizeX - 200), 10);
		FCanvasTextItem TextItem(TextCentrePos, ScoreString, HUDFont, FLinearColor::White);
		Canvas->DrawItem(TextItem);

		FText LivesString = FText::Format(LOCTEXT("TestFormat", "Lives: {0}"), FText::AsNumber(CurrentState->GetPlayerLives()));
		TextCentrePos = FVector2D((Canvas->SizeX - 100), 10);
		FCanvasTextItem TextItem2(TextCentrePos, LivesString, HUDFont, FLinearColor::White);
		Canvas->DrawItem(TextItem2);
	}
	else
	{
		// Get the player and player state
		APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		// First, check found the player pawn
		if (Player)
		{
			CurrentState = Cast<AMyPlayerState>(Player->PlayerState);
		}
	}
}
#undef LOCTEXT_NAMESPACE



