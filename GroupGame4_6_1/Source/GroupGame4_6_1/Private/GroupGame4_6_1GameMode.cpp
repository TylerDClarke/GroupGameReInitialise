// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "GroupGame4_6_1.h"
#include "GroupGame4_6_1GameMode.h"
#include "GroupGame4_6_1Character.h"

AGroupGame4_6_1GameMode::AGroupGame4_6_1GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
