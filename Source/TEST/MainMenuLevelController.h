// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "MainMenuLevelController.generated.h"


UCLASS()
class TEST_API AMainMenuLevelController : public ALevelScriptActor
{
	GENERATED_BODY()
private:
	AMainMenuLevelController();
private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Widgets",meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> HUDOverlayClass;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Widgets",meta = (AllowPrivateAccess = "true"))
	UUserWidget* HUDOverlay;

private: //main function
	virtual void BeginPlay() override;

private://
	void Show_ManiMenuWidget();
	void Show_PlayerMouseCursor() const;
};
