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
	UPROPERTY(VisibleAnywhere,  Category = "Components | Poles", meta = (AllowPrivateAcsses = "true"))
	UStaticMeshComponent* FirstPole;

	UPROPERTY(VisibleAnywhere,  Category = "Components | Poles", meta = (AllowPrivateAcsses = "true"))
	UStaticMeshComponent* SecondPole;

	UPROPERTY(VisibleAnywhere)
	FVector FirstPoleLocation;

	UPROPERTY(VisibleAnywhere)
	FVector SecondPoleLocation;

	UPROPERTY(EditAnywhere)
	TArray<AInvisibleObjects*> InvisibleObjects;

	UPROPERTY(VisibleAnywhere)
	TArray<UStaticMeshComponent*> InvisibleMeshes;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneComponent;

	void SetupInvisibleObjects(UMaterialInstanceDynamic* HideMaterial);
	
	
public:	
	// Sets default values for this actor's properties
	AGate();

	bool bPassedThroughTheGate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,  Category = "Components")
	UMaterialInterface* InvisibleMaterial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
