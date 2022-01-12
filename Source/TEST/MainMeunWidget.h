// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMeunWidget.generated.h"

class UButton;
UCLASS()
class TEST_API UMainMeunWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly,meta = (BindWidget))
	UButton* StartBtn;
	
	UPROPERTY(BlueprintReadOnly,meta = (BindWidget))
    UButton* EndBtn;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "LevelName",meta = (AllowPrivateAccess = "true"))
	FName TransferLevelName;

protected:
	virtual void NativeOnInitialized() override; 
	virtual void NativeConstruct() override;

private:
	void Initialize_StartAndEndBtn();
private:
	UFUNCTION(BlueprintCallable)
	void Click_StartBtn();
	UFUNCTION(BlueprintCallable)
	void Click_EndBtn();
};
