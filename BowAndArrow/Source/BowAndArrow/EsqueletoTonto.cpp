// Fill out your copyright notice in the Description page of Project Settings.

#include "BowAndArrow.h"
#include "EsqueletoTonto.h"


// Sets default values
AEsqueletoTonto::AEsqueletoTonto()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEsqueletoTonto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsqueletoTonto::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AEsqueletoTonto::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

