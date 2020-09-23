// Code by Leonardo Paiva

#include "InvisibleObjects.h"
#include "Gate.h"


// Sets default values
AGate::AGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGate::BeginPlay()
{
	Super::BeginPlay();

	FirstPoleLocation = FirstPole->GetComponentLocation();
	SecondPoleLocation = SecondPole->GetComponentLocation();
	UMaterialInstanceDynamic* InvisibleDynamicMaterial = UMaterialInstanceDynamic::Create(InvisibleMaterial, this);
	InvisibleDynamicMaterial->SetVectorParameterValue("FirstPole", FirstPoleLocation);
	InvisibleDynamicMaterial->SetVectorParameterValue("SecondPole", SecondPoleLocation);
	InvisibleMesh = InvisibleObject->GetMesh();
	InvisibleMesh->SetMaterial(0, InvisibleDynamicMaterial);
}

// Called every frame
void AGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

