// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatchTestGameMode.h"
#include "PatchTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APatchTestGameMode::APatchTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
