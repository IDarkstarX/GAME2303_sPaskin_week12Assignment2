// Fill out your copyright notice in the Description page of Project Settings.


#include "GOAL.h"
#include "BASEPLAYER.h"

// Sets default values
AGOAL::AGOAL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	TriggerBox = CreateDefaultSubobject<UBoxComponent>("Trigger Box");

	RootComponent = Mesh;
	TriggerBox->SetupAttachment(RootComponent);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AGOAL::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AGOAL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGOAL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGOAL::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor->ActorHasTag(TEXT("ball")) && player->score < 9) {

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Orange, TEXT("You need 9 coins to enter! >_>"));


	}
	else if (OtherActor->ActorHasTag(TEXT("ball")) && player->score >= 9) {

		GEngine->AddOnScreenDebugMessage(-1, 10000.0f, FColor::Orange, TEXT("You have enough coins! ^vv^\n~You Win!~"));

	}
}