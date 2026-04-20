// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCFlyingObject.h"
#include "NBCFlyingObjectPC.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"

// Sets default values
ANBCFlyingObject::ANBCFlyingObject()
{
    PrimaryActorTick.bCanEverTick = true;

    //---컴포넌트 4종 추가---
    CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    RootComponent = CapsuleComp;

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(RootComponent);

    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComp->SetupAttachment(RootComponent);
    SpringArmComp->bUsePawnControlRotation = false;

    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    MoveSpeed = 500.0f;
    LookSensitivity = 45.0f;
    Gravity = -980.0f;
    bIsGrounded = false;
    AirControlMultiplier = 0.4f;
    CurrentGravity = 0.0f;
}

void ANBCFlyingObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    //지상 체크 함수(하단에 있음)
    CheckGround();

    //공중, 지상에 따라 이동 속도 적용.
    float CurrentMoveSpeed = bIsGrounded ? MoveSpeed : MoveSpeed * AirControlMultiplier;

    //이동 로직
    if (!MoveInput.IsNearlyZero())
    {
        FVector DeltaLocation = FVector(MoveInput.X, MoveInput.Y, MoveInput.Z) * CurrentMoveSpeed * DeltaTime;
        AddActorLocalOffset(DeltaLocation, true);
    }

    //공중, 지상에 따라 중력 가속도 적용.
    if (bIsGrounded)
    {
        CurrentGravity = 0.0f;
    }
    else
    {
        CurrentGravity += Gravity * DeltaTime;
    }

    // 중력 구현
    FVector GravityOffset = FVector(0, 0, CurrentGravity * DeltaTime) * DeltaTime;
    AddActorWorldOffset(GravityOffset, true);

    //회전 로직
    if (!LookInput.IsNearlyZero())
    {
        FRotator DeltaRotation = FRotator(LookInput.Y, LookInput.X, LookInput.Z) * LookSensitivity * DeltaTime;
        AddActorLocalRotation(DeltaRotation);
    }

    MoveInput = FVector3d::ZeroVector;
    LookInput = FVector3d::ZeroVector;
}

void ANBCFlyingObject::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (ANBCFlyingObjectPC* PC = Cast<ANBCFlyingObjectPC>(GetController()))
        {
            EnhancedInput->BindAction(PC->MoveAction, ETriggerEvent::Triggered, this, &ANBCFlyingObject::Move);
            EnhancedInput->BindAction(PC->LookAction, ETriggerEvent::Triggered, this, &ANBCFlyingObject::Look);
        }
    }
}

void ANBCFlyingObject::Move(const FInputActionValue& Value)
{
    MoveInput = Value.Get<FVector3d>();
}

void ANBCFlyingObject::Look(const FInputActionValue& Value)
{
    LookInput = Value.Get<FVector3d>();
}

//지상 체크 함수
void ANBCFlyingObject::CheckGround()
{
    FHitResult HitResult;
    FVector Start = GetActorLocation();
    float TraceDistance = CapsuleComp->GetScaledCapsuleHalfHeight() + 5.0f;
    FVector End = Start + (FVector::DownVector * TraceDistance);

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    //최종 bool(LineTrace 사용)
    bIsGrounded = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);

    //지상에 가까울 때, 지상 판정 최소화
    if (bIsGrounded)
    {
        float DistanceToGround = HitResult.Distance - CapsuleComp->GetScaledCapsuleHalfHeight();

        if (DistanceToGround > 0.0f && DistanceToGround < 5.0f && CurrentGravity <= 0.0f)
        {
            // 위치를 강제로 바닥 높이에 맞춤 (Snapping 사용)
            FVector NewLocation = GetActorLocation();
            NewLocation.Z = HitResult.ImpactPoint.Z + CapsuleComp->GetScaledCapsuleHalfHeight();
            SetActorLocation(NewLocation);

            CurrentGravity = 0.0f;
        }
    }
}