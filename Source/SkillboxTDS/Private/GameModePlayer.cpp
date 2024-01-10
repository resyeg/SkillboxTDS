// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModePlayer.h"

// Sets default values
AGameModePlayer::AGameModePlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameModePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameModePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

