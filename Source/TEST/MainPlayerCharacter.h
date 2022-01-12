// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TEST_API AMainPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayerCharacter();

private:
	UPROPERTY(EditAnywhere)
	USpringArmComponent* springArmComponent;
	
	UPROPERTY(EditAnywhere)
	UCameraComponent* cameraComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void Initialize_USpringArmComponent();
	void Initialize_UCameraComponent();
private:
	void Initialize_PlayerMeshRotation();
	void Initialize_SpringArmComponentRotation();
private:
	void Input_MoveForward(float _value);
	void Input_MoveRight(float _value);
	void Input_Turn(float _value);
	void Input_LookUp(float _value);
	void Inuput_Jump();
};
