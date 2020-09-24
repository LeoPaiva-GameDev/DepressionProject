// Code by Leonardo Paiva

#include "Gate.h"


// Sets default values
AGate::AGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(GetRootComponent());
	
	FirstPole = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FirstPoleMesh"));
	FirstPole->SetupAttachment(SceneComponent);

	SecondPole = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondPoleMesh"));
	SecondPole->SetupAttachment(SceneComponent);
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
	SetupInvisibleObjects(InvisibleDynamicMaterial);
	
	//InvisibleMesh = InvisibleObject.GetMesh();
	//InvisibleMeshes->SetMaterial(0, InvisibleDynamicMaterial);
}

// Called every frame
void AGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AGate::SetupInvisibleObjects(UMaterialInstanceDynamic* HideMaterial)
{
	for(int32 i = 0; i < InvisibleMeshes.Num(); i++)
    	{
    		//InvisibleMeshes[i] = InvisibleObjects[i]->GetMesh();
    		InvisibleMeshes[i]->SetMaterial(0, HideMaterial);
    	}
}

