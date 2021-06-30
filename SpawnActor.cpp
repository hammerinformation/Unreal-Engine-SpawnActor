#include "SpawnActor.h"
#include <Runtime\Engine\Classes\Engine\World.h>

//Developed by hammerinformation
ASpawnActor::ASpawnActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawnActor::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 10; i++)
	{
		SpawnGameObject();
	}
}

void ASpawnActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnActor::SpawnGameObject()
{
	FVector Location(0.0f, FMath::RandRange(-100.0f, 100.0f), 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	GetWorld()->SpawnActor<AActor>(GameObject, Location, Rotation);
}

