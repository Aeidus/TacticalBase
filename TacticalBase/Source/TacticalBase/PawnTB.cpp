// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTB.h"

// Sets default values
APawnTB::APawnTB()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create components
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	//Setup Camera
	Camera->FieldOfView = 120.f;
	Camera->SetRelativeLocation(FVector(-100, 0, 50));
}


	// Called when the game starts or when spawned
	void APawnTB::BeginPlay()
	{
		Super::BeginPlay();

	}

	// Called every frame
	void APawnTB::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);

	}

	// Called to bind functionality to input
	void APawnTB::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
	{
		Super::SetupPlayerInputComponent(PlayerInputComponent);

	}

