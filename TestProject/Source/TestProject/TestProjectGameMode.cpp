// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TestProject.h"
#include "TestProjectGameMode.h"
#include "TestProjectPlayerController.h"
#include "TestProjectCharacter.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}