// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Display, TEXT("Display!!!!"));
	//UE_LOG(LogTemp, Warning, TEXT("Warning!!!!"));
	//UE_LOG(LogTemp, Error, TEXT("Error!!!!"));

	//FString Log = TEXT("Hello!");
	//FString* PrtLog = &Log;

	//Log.Len(); //Member for non pointers
	//PrtLog->Len(); //arrow for pointers

	//UE_LOG(LogTemp, Warning, TEXT("Non pointer: %s"), *Log);
	//UE_LOG(LogTemp, Warning, TEXT("Pointer value: %s"), **PrtLog);

	//FString ObjectName = GetOwner()->GetName();
	//UE_LOG(LogTemp, Display, TEXT("Name actor: %s"), *ObjectName);

	UE_LOG(LogTemp, Warning, TEXT("the %s is in position: %s"), *GetOwner()->GetName(), *GetOwner()->GetActorLocation().ToString());

}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

