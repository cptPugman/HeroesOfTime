// Fill out your copyright notice in the Description page of Project Settings.

#include "BowAndArrow.h"
#include "MyCharactert.h"


// Sets default values
AMyCharactert::AMyCharactert()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharactert::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharactert::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyCharactert::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

