// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPUDExamplesGameMode.h"
#include "SPUDExamplesHUD.h"
#include "SPUDExamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASPUDExamplesGameMode::ASPUDExamplesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASPUDExamplesHUD::StaticClass();

	// Use seamless travel for ServerTravel for testing (different sequence)
	bUseSeamlessTravel = true;
}
