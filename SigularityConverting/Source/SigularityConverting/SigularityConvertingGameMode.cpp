// Copyright Epic Games, Inc. All Rights Reserved.

#include "SigularityConvertingGameMode.h"
#include "SigularityConvertingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASigularityConvertingGameMode::ASigularityConvertingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
