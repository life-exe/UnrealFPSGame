// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSGameMode::AFPSGameMode() : Super()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
    DefaultPawnClass = PlayerPawnClassFinder.Class;
}
