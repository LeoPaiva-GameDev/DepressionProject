// Code by Leonardo Paiva

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gate.generated.h"

class AInvisibleObjects;
UCLASS()
class DEPRESSIONPROJECT_API AGate : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, Category = "Components", meta = (AllowPrivateAcsses = "true"))
	UStaticMeshComponent* FirstPole;

	UPROPERTY(EditAnywhere, Category = "Components", meta = (AllowPrivateAcsses = "true"))
	UStaticMeshComponent* SecondPole;

	UPROPERTY(EditAnywhere, Category = "Components", meta = (AllowPrivateAcsses = "true"))
	UMaterialInterface* InvisibleMaterial;

	UPROPERTY(VisibleAnywhere)
	FVector FirstPoleLocation;

	UPROPERTY(VisibleAnywhere)
	FVector SecondPoleLocation;

	UPROPERTY(VisibleAnywhere)
	AInvisibleObjects* InvisibleObject;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* InvisibleMesh;
	
	
public:	
	// Sets default values for this actor's properties
	AGate();

	bool bPassedThroughTheGate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
