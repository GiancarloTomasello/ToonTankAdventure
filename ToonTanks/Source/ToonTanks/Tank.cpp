// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

ATank::ATank()
{

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
    TankPlayerController = Cast<APlayerController>(GetController());

    //Returning Null!!!
    Collider = Cast<USphereComponent>(GetRootComponent());
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);

    
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if(TankPlayerController)
    {
        FHitResult HitResult;
        TankPlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility,
        false, 
        HitResult);

        RotateTurret(HitResult.ImpactPoint);
    }
}

void ATank::HandleDestruction()
{
    Super::HandleDestruction();
    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
    bAlive = false;
}

void ATank::Move(float Value)
{
    //TODO:: Change to get the forward vector
    FVector DeltaLocation = FVector::ZeroVector;
    DeltaLocation.X = Value * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);

    FVector ForwardVector = GetActorForwardVector();

    UE_LOG(LogTemp, Warning, TEXT("Vector X:%f Y:%f Z:%f"), ForwardVector.X, ForwardVector.Y, ForwardVector.Z);

    if(Collider){
        Collider->AddForce(Value * ForwardVector * Force, FName(), true);
    }else {
        UE_LOG(LogTemp, Warning, TEXT("Collider get null"));
    }
    
}  

void ATank::Turn(float Value)
{
    FRotator DeltaRotation = FRotator::ZeroRotator;
    DeltaRotation.Yaw = Value * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this);
    AddActorLocalRotation(DeltaRotation, true);
}


