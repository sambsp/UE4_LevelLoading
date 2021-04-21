// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleLoadingGameMode.h"
#include "SimpleLoadingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleLoadingGameMode::ASimpleLoadingGameMode()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Start......."));

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
