// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleActors.h"

//Constructor
ADestructibleActors::ADestructibleActors()
{
	//Create the Subobject and Attachment for the RadialForceComponent to be seen the interface
	RadialForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("Radial Force Component"));
	RadialForceComponent->SetupAttachment(RootComponent);
}