// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePawn.h"
#include "EnemyDoor.generated.h"

UCLASS()
class TOONTANKS_API AEnemyDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyDoor();
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void OpenDoor();

	void Transition(float DeltaTime);
	void UpdateList(AActor* DeadActor);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

private:	
	// Called every frame


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* DoorCenter;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* LeftDoor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* RightDoor;
	
	UPROPERTY(EditAnywhere,Category = "Components");
	TArray<ABasePawn*> enemies;

	UPROPERTY(EditDefaultsOnly, Category = "Components");
	float openDoorOffset = 200.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Components");
	bool isOpen = false;


	bool isTransitioning = false;
	
};
