// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnActor.generated.h"

UCLASS()
class LEARN_API ASpawnActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void SpawnGameObject();
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> GameObject;

};
