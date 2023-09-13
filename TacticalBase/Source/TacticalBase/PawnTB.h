// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PawnTB.generated.h"

UCLASS()
class TACTICALBASE_API APawnTB : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnTB();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//MainPawnCamera
	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;
	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
