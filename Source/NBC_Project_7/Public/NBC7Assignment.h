#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NBC7Assignment.generated.h"

class USpringArmComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
struct FInputActionValue;

UCLASS()
class NBC_PROJECT_7_API ANBC7Assignment : public APawn
{
    GENERATED_BODY()

public:
    ANBC7Assignment();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCapsuleComponent* CapsuleComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USkeletalMeshComponent* SkeletalMeshComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USpringArmComponent* SpringArmComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* CameraComp;

    FVector2D MoveInput;
    FVector2D LookInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float LookSensitivity;

    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
};