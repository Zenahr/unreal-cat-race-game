// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CoreBaseCharacter.generated.h"

UCLASS()
class CATRACEGAME_API ACoreBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACoreBaseCharacter();
	UPROPERTY(EditAnywhere, Category = "Camera")
		USpringArmComponent* SpringArmComp;
	
	UPROPERTY(EditAnywhere, Category = "Camera")
		UCameraComponent* CameraComp;
	
	UPROPERTY(EditAnywhere, Category = "Player")
		UStaticMeshComponent* MeshComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
