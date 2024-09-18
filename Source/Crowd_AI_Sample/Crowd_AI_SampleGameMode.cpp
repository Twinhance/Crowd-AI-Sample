// Copyright Epic Games, Inc. All Rights Reserved.

#include "Crowd_AI_SampleGameMode.h"
#include "Crowd_AI_SampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrowd_AI_SampleGameMode::ACrowd_AI_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
