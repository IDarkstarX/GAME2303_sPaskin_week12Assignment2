// Fill out your copyright notice in the Description page of Project Settings.


#include "COIN.h"

// Sets default values
ACOIN::ACOIN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void ACOIN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACOIN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

