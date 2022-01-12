// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
// Sets default values
AMainPlayerCharacter::AMainPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Initialize_USpringArmComponent();
	Initialize_UCameraComponent();
	Initialize_PlayerMeshRotation();
	Initialize_SpringArmComponentRotation();
}

// Called when the game starts or when spawned
void AMainPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Warning,TEXT("AMainPlayerCharacter Test"));
}

// Called every frame
void AMainPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this,&AMainPlayerCharacter::Input_MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&AMainPlayerCharacter::Input_MoveRight);

	PlayerInputComponent->BindAxis("Turn",this,&AMainPlayerCharacter::Input_Turn);
	PlayerInputComponent->BindAxis("LookUp",this,&AMainPlayerCharacter::Input_LookUp);

	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&AMainPlayerCharacter::Inuput_Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&AMainPlayerCharacter::Inuput_Jump);
}

void AMainPlayerCharacter::Initialize_USpringArmComponent()
{
	springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	springArmComponent->SetupAttachment(RootComponent);
}

void AMainPlayerCharacter::Initialize_UCameraComponent()
{
	cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	cameraComponent->SetupAttachment(springArmComponent);
}

void AMainPlayerCharacter::Initialize_PlayerMeshRotation()
{
	UE_LOG(LogTemp,Warning,TEXT("Initialize_PlayerMeshRoation"));
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;
}

void AMainPlayerCharacter::Initialize_SpringArmComponentRotation()
{
	UE_LOG(LogTemp,Warning,TEXT("Initialize_SpringArmComponentRotation"));
	springArmComponent->bUsePawnControlRotation = true;
	springArmComponent->bInheritPitch = true;
	springArmComponent->bInheritRoll = true;
	springArmComponent->bInheritYaw = true;
}

void AMainPlayerCharacter::Input_MoveForward(float _value)
{
	if(Controller != nullptr &&  _value != 0)
	{
		const FRotator _rotator = Controller->GetControlRotation();
		const FRotator _yawRotator ={0,_rotator.Yaw,0};

		const FVector _direction = FRotationMatrix{_yawRotator}.GetUnitAxis(EAxis::X);

		AddMovementInput(_direction,_value);
	}
}

void AMainPlayerCharacter::Input_MoveRight(float _value)
{
	if(Controller != nullptr && _value != 0.0f) 
	{
		const FRotator Rotator = Controller->GetControlRotation();
		const FRotator YawRotaor = {0,Rotator.Yaw,0};

		const FVector direction = {FRotationMatrix{YawRotaor}.GetUnitAxis(EAxis::Y)};

		AddMovementInput(direction,_value);
	}
}

void AMainPlayerCharacter::Input_Turn(float _value)
{
	AddControllerYawInput(_value);
}

void AMainPlayerCharacter::Input_LookUp(float _value)
{
	AddControllerPitchInput(_value);
}

void AMainPlayerCharacter::Inuput_Jump()
{
	Jump();
}

