// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AEnemyDoor::AEnemyDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorCenter = CreateDefaultSubobject<USceneComponent>(TEXT("Enemy Door"));
	RootComponent = DoorCenter;
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Door"));
	LeftDoor->SetupAttachment(RootComponent);
	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Door"));
	RightDoor->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemyDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//this->Transition(DeltaTime);

	if(enemies.Num() == 0 && !isOpen)
		OpenDoor();
}

void AEnemyDoor::UpdateList(AActor* DeadActor){
	UE_LOG(LogTemp, Warning, TEXT("Updating List"));
	for(int i = 0; i < enemies.Num(); i++)
	{
		if(enemies[i] == DeadActor){
			UE_LOG(LogTemp, Warning, TEXT("enemy null"));
			enemies.RemoveAt(i);
		}
	}
}

void AEnemyDoor::OpenDoor()
{
	this->LeftDoor->SetRelativeLocation(FVector{0.0f, -openDoorOffset, 0.f});
	this->RightDoor->SetRelativeLocation(FVector{0.0f, openDoorOffset, 0.f});
	isOpen = true;
	UE_LOG(LogTemp, Warning, TEXT("Open Door"));
	//this->Destroy();
	//this->isTransitioning = true;
}


void AEnemyDoor::Transition(float DeltaTime)
{
	// if(this->isTransitioning){
	// 	float UpdatedYPosition = FMath::FInterpConstantTo(this->LeftDoor->GetRelativeLocation().Y, this->openDoorOffset * -1, DeltaTime, 50.f);
	// 	this->LeftDoor->SetRelativeLocation(FVector{0.f, UpdatedYPosition, 0.f});

	
	// 	UpdatedYPosition = FMath::FInterpConstantTo(this->RightDoor->GetRelativeLocation().Y, this->openDoorOffset, DeltaTime, 50.f);
	// 	this->LeftDoor->SetRelativeLocation(FVector{0.f, UpdatedYPosition, 0.f});
	// }

}

