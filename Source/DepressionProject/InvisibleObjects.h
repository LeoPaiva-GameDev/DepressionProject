// Code by Leonardo Paiva

#pragma once

#include "CoreMinimal.h"

#include "Gate.h"
#include "GameFramework/Actor.h"
#include "InvisibleObjects.generated.h"

UCLASS()
class DEPRESSIONPROJECT_API AInvisibleObjects : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
	AGate* Gate;

	/*UFUNCTION()
	void SetCollisionAndMaterial();*/
	
public:	
	// Sets default values for this actor's properties
	AInvisibleObjects();

	UPROPERTY(EditAnywhere, Category = "Components", meta = (AllowPrivateAcsses = "true"))
	UStaticMeshComponent* MyStaticMesh;

	UFUNCTION()
	UStaticMeshComponent* GetMesh();
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
