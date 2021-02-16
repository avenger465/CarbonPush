// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "CarbonPushTwo/CarbonPushTwoGameModeBase.h"
#include "GameFramework/Actor.h"
#include "CardboardBox.generated.h"

UCLASS()
class CARBONPUSHTWO_API ACardboardBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACardboardBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//StaticMesh Component
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* cardBoardBoxMesh;

	//Box Component
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;

	//Function to be called when an Actor enters the overlap with this class
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//Function to be called when an Actor leaves the overlap with this class
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//Reference to the ACarbonPushTwoGameModeBase class
	UPROPERTY()
		ACarbonPushTwoGameModeBase* GameModeRef;
};
