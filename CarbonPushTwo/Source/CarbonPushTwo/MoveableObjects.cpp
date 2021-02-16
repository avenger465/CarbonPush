// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveableObjects.h"

// Sets default values
AMoveableObjects::AMoveableObjects()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the Subobject and Attachment for the MeshComponent to be seen the interface
	//and sets the simulatePhysics property to true
	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Moveable Object Mesh"));
	ObjectMesh->SetupAttachment(RootComponent);
	ObjectMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AMoveableObjects::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMoveableObjects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

