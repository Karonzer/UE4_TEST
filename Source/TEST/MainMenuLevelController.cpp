// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuLevelController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "UObject/ConstructorHelpers.h"

AMainMenuLevelController::AMainMenuLevelController()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> MainHUDWidgetAsset(TEXT("WidgetBlueprint'/Game/BluePrint/MainLevel/BP_MainMeunWidget'"));
	if(MainHUDWidgetAsset.Succeeded())
	{
		HUDOverlayClass = MainHUDWidgetAsset.Class;
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("not find"));
	}
}

void AMainMenuLevelController::BeginPlay()
{
	Super::BeginPlay();

	Show_PlayerMouseCursor();
	Show_ManiMenuWidget();
}


void AMainMenuLevelController::Show_ManiMenuWidget()
{
	if(HUDOverlayClass)
	{
		HUDOverlay = CreateWidget<UUserWidget>(GetWorld(),HUDOverlayClass);
		if(HUDOverlay)
		{
			HUDOverlay->AddToViewport();
			HUDOverlay->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			UE_LOG(LogTemp,Warning,TEXT("HUDOverlay false"));
		}
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("HUDOverlayClass false"));
	}
}

void AMainMenuLevelController::Show_PlayerMouseCursor() const
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this,0);
	playerController->bShowMouseCursor = true;
	return;
}
