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
    //중력 가속도
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float Gravity;
    //지상 체크
    bool bIsGrounded;
    //공중 감속 정도
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float AirControlMultiplier;
    //지상/공중에 따른 중력량
    float CurrentGravity;

    UFUNCTION()
    void Move(const FInputActionValue& value);
    UFUNCTION()
    void Look(const FInputActionValue& value);

    //지상 체크 함수
    void CheckGround();
};
