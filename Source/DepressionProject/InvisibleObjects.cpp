// Code by Leonardo Paiva


#include "InvisibleObjects.h"

// Sets default values
AInvisibleObjects::AInvisibleObjects()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInvisibleObjects::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvisibleObjects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UStaticMeshComponent* AInvisibleObjects::GetMesh()
{
	return MyStaticMesh;
}

/*void AInvisibleObjects::SetCollisionAndMaterial()
{
	
}*/


