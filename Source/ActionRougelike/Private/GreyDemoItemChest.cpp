// Fill out your copyright notice in the Description page of Project Settings.


#include "GreyDemoItemChest.h"

// Sets default values
AGreyDemoItemChest::AGreyDemoItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BaseMesh);

	TargetPitch = 110;
}

//rotate the chest when opened
void AGreyDemoItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	LidMesh->SetRelativeRotation(FRotator(TargetPitch, 0, 0));
}

// Called when the game starts or when spawned
void AGreyDemoItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGreyDemoItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

