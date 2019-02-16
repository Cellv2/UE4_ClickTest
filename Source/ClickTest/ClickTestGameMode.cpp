// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ClickTestGameMode.h"
#include "ClickTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClickTestGameMode::AClickTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
