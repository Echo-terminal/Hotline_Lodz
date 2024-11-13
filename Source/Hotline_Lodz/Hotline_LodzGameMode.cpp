// Copyright Epic Games, Inc. All Rights Reserved.

#include "Hotline_LodzGameMode.h"
#include "Hotline_LodzCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHotline_LodzGameMode::AHotline_LodzGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
