// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "PlayLevelController.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API APlayLevelController : public ALevelScriptActor
{
	GENERATED_BODY()
private: //main function
	virtual void BeginPlay() override;
};
