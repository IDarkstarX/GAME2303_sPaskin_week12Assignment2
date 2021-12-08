// Fill out your copyright notice in the Description page of Project Settings.


#include "COIN.h"
#include "BASEPLAYER.h"
#include "EngineUtils.h"

// Sets default values
ACOIN::ACOIN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>("Trigger Capsule");

	RootComponent = Mesh;
	TriggerCapsule->SetupAttachment(RootComponent);

	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &ACOIN::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACOIN::BeginPlay()
{
	Super::BeginPlay();

	//EngineUtils.h
	/*for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		//ClientMessage(ActorItr->GetName());
		//ClientMessage(ActorItr->GetActorLocation().ToString());
		if (ActorItr->GetName() == "")
		{
			player = ActorItr->GetComponentByClass<ABaseA
		}
	}*/
	
}

// Called every frame
void ACOIN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACOIN::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag(TEXT("ball"))) {

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Emerald, TEXT("You hit a coin!"));

		player->scoreAdd(1);
		
		Destroy();
	}
}