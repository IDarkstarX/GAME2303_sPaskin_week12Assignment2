// Fill out your copyright notice in the Description page of Project Settings.


#include "BASEPLAYER.h"

// Sets default values
ABASEPLAYER::ABASEPLAYER()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void ABASEPLAYER::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABASEPLAYER::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABASEPLAYER::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("RotateX", this, &ABASEPLAYER::RotX);
	InputComponent->BindAxis("RotateY", this, &ABASEPLAYER::RotY);
}

void ABASEPLAYER::RotX(float value) {

	FRotator newRotation = FRotator(0, 0, value * rotSpeed);

	Mesh->AddRelativeRotation(newRotation, false, 0, ETeleportType::None);
}

void ABASEPLAYER::RotY(float value) {

	FRotator newRotation = FRotator(value * rotSpeed, 0, 0);

	Mesh->AddRelativeRotation(newRotation, false, 0, ETeleportType::None);
}