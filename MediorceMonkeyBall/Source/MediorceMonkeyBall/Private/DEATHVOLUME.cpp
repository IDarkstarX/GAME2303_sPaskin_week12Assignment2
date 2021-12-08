// Fill out your copyright notice in the Description page of Project Settings.


#include "DEATHVOLUME.h"
#include "BASEPLAYER.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADEATHVOLUME::ADEATHVOLUME()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>("Trigger Box");

	//RootComponent = TriggerBox;
	TriggerBox->SetupAttachment(RootComponent);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADEATHVOLUME::OnOverlapBegin);
	
}

// Called when the game starts or when spawned
void ADEATHVOLUME::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADEATHVOLUME::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADEATHVOLUME::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Emerald, TEXT("A collision had occured! :O"));
	if (OtherActor->ActorHasTag(TEXT("ball"))){ 

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Magenta, TEXT("You fell off the map! D:"));

		//GEngine->LoadMap(Minimal_Default);
		UGameplayStatics::OpenLevel(this, "Minimal_Default", false);

	}
}