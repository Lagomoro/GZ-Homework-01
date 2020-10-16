// Copyright Epic Games, Inc. All Rights Reserved.

#include "tx_homework1GameMode.h"
#include "tx_homework1Character.h"
#include "UObject/ConstructorHelpers.h"

Atx_homework1GameMode::Atx_homework1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
