// Copyright Epic Games, Inc. All Rights Reserved.

#include "proximity_voice_chatGameMode.h"
#include "proximity_voice_chatCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aproximity_voice_chatGameMode::Aproximity_voice_chatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
