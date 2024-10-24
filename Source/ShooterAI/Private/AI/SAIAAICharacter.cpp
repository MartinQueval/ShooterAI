// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAIAAICharacter.h"

// Sets default values
ASAIAAICharacter::ASAIAAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASAIAAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASAIAAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASAIAAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

