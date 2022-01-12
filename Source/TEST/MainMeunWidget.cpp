// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMeunWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMeunWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UE_LOG(LogTemp,Warning,TEXT("TEST Main Meun Widget NativeOnInitialized"));
	Initialize_StartAndEndBtn();
}

void UMainMeunWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UE_LOG(LogTemp,Warning,TEXT("TEST Main Meun Widget NativeConstruct"));
}

void UMainMeunWidget::Initialize_StartAndEndBtn()
{
	/*startBtn = Cast<UButton>(GetWidgetFromName("StartBtn"));
	startBtn->OnClicked.AddDynamic(this,&UMainMeunWidget::Click_StartBtn);*/
	/*TestButton = Cast<UButton>(GetWidgetFromName("TestButton"));*/
	if(StartBtn)
	{
		StartBtn->OnClicked.AddDynamic(this,&UMainMeunWidget::Click_StartBtn);
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("not Find the StartBtn"));
	}

	if(EndBtn)
	{
		EndBtn->OnClicked.AddDynamic(this,&UMainMeunWidget::Click_EndBtn);
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("not Find the EndBtn"));
	}
}

void UMainMeunWidget::Click_StartBtn()
{
	UE_LOG(LogTemp,Warning,TEXT("Click_StartBtn"));
	UGameplayStatics::OpenLevel(this, TransferLevelName);

}

void UMainMeunWidget::Click_EndBtn()
{
	UE_LOG(LogTemp,Warning,TEXT("Click_EndBtn"));
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}
