// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NBCFlyingObject.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;
class UCapsuleComponent;
struct FInputActionValue;

UCLASS()
class NBC_PROJECT_7_API ANBCFlyingObject : public APawn
{
    GENERATED_BODY()

public:
    ANBCFlyingObject();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCapsuleComponent* CapsuleComp;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* StaticMeshComp;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USpringArmComponent* SpringArmComp;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* CameraComp;

    FVector3d MoveInput;
    FVector3d LookInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MoveSpeed;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float LookSensitivity;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float Gravity;
    bool bIsGrounded;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float AirControlMultiplier;
    float CurrentGravity;

    UFUNCTION()
    void Move(const FInputActionValue& value);
    UFUNCTION()
    void Look(const FInputActionValue& value);

    void CheckGround();
};
