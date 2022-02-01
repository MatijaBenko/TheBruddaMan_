// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheBruddaMan_GameMode.h"
#include "TheBruddaMan_Character.h"
#include "UObject/ConstructorHelpers.h"

ATheBruddaMan_GameMode::ATheBruddaMan_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
