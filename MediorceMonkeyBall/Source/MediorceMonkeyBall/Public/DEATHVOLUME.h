// UNREAL IS PAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIN

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BASEPLAYER.h"

#include "DEATHVOLUME.generated.h"

UCLASS()
class MEDIORCEMONKEYBALL_API ADEATHVOLUME : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADEATHVOLUME();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* TriggerBox;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult);

};
