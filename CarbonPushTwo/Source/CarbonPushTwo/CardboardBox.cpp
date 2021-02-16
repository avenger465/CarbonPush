// Fill out your copyright notice in the Description page of Project Settings.


#include "CardboardBox.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACardboardBox::ACardboardBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	cardBoardBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardBoardBox Mesh"));
	cardBoardBoxMesh->SetupAttachment(RootComponent);
	SetRootComponent(cardBoardBoxMesh);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(cardBoardBoxMesh);
	CollisionBox->SetBoxExtent(FVector(32.0f, 32.0f, 32.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	CollisionBox->SetCollisionProfileName("Trigger");

}

// Called when the game starts or when spawned
void ACardboardBox::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACardboardBox::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ACardboardBox::OnOverlapEnd);
	GameModeRef = Cast<ACarbonPushTwoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void ACardboardBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACardboardBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Point"));
	Destroy();
}

void ACardboardBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GameModeRef->PointScored();
	GameModeRef->PointScored();
	//UE_LOG(LogTemp, Warning, TEXT("Hi "));
}


