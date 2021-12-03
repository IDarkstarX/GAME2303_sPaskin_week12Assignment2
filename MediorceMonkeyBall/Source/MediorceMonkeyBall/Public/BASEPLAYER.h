// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"

#include "BASEPLAYER.generated.h"

UCLASS()
class MEDIORCEMONKEYBALL_API ABASEPLAYER : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABASEPLAYER();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int score;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotSpeed;

	

	void RotX(float value);
	void RotY(float value);
	void scoreAdd(int value);
};
