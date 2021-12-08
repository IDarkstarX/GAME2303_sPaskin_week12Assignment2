// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "BASEPLAYER.h"

#include "GOAL.generated.h"

UCLASS()
class MEDIORCEMONKEYBALL_API AGOAL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGOAL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ABASEPLAYER* player;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult);

};
