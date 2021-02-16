// Fill out your copyright notice in the Description page of Project Settings.


#include "CardboardBox.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACardboardBox::ACardboardBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the Subobject and Attachment for the MeshComponent to be seen in the interface
	cardBoardBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardBoardBox Mesh"));
	cardBoardBoxMesh->SetupAttachment(RootComponent);
	SetRootComponent(cardBoardBoxMesh);

	//Create the Subobject and Attachment for the CollisionBox to be seen in the interface
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(cardBoardBoxMesh);

	//Set the size and location of the CollisionBox
	CollisionBox->SetBoxExtent(FVector(32.0f, 32.0f, 32.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));

	//Set the CollisionProfileName for the editor
	CollisionBox->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void ACardboardBox::BeginPlay()
{
	Super::BeginPlay();

	//Creates Dynamics to the CollisionBox to call certain functions when an object hits the CollisionBox
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACardboardBox::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ACardboardBox::OnOverlapEnd);

	//Creates a object reference to the GameModeBase
	GameModeRef = Cast<ACarbonPushTwoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void ACardboardBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//Called when an object overlaps with the CardboardBoxes CollisionBox
void ACardboardBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Increments the players score
	GameModeRef->PointScored();

	//Destroys the CardboardBox object
	Destroy();
}

//Called when an object leaves the overlap of the CardboardBoxes CollisionBox
void ACardboardBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}


