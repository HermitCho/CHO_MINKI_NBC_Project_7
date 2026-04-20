#include "NBC7Assignment.h"
#include "NBC7AssignmentPC.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"

ANBC7Assignment::ANBC7Assignment()
{
    PrimaryActorTick.bCanEverTick = true;

    //---컴포넌트 4종 추가---
    CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    RootComponent = CapsuleComp;

    SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    SkeletalMeshComp->SetupAttachment(RootComponent);

    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComp->SetupAttachment(RootComponent);
    SpringArmComp->bUsePawnControlRotation = false;

    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    MoveSpeed = 500.0f;
    LookSensitivity = 45.0f;
}

void ANBC7Assignment::BeginPlay()
{
    Super::BeginPlay();
}

void ANBC7Assignment::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    //이동 로직
    if (!MoveInput.IsNearlyZero())
    {
        FVector DeltaLocation = FVector(MoveInput.X, MoveInput.Y, 0.0f) * MoveSpeed * DeltaTime;
        AddActorLocalOffset(DeltaLocation, true);
    }

    //회전 로직
    if (!LookInput.IsNearlyZero())
    {
        float NewYaw = LookInput.X * LookSensitivity * DeltaTime;
        AddActorLocalRotation(FRotator(0.0f, NewYaw, 0.0f));

        float NewPitch = -LookInput.Y * LookSensitivity * DeltaTime;
        FRotator CurrentSpringArmRotation = SpringArmComp->GetRelativeRotation();
        float CombinedPitch = FMath::Clamp(CurrentSpringArmRotation.Pitch + NewPitch, -60.0f, 60.0f);
        SpringArmComp->SetRelativeRotation(FRotator(CombinedPitch, 0.0f, 0.0f));
    }

    LookInput = FVector2D::ZeroVector;
}

void ANBC7Assignment::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (ANBC7AssignmentPC* PC = Cast<ANBC7AssignmentPC>(GetController()))
        {
            EnhancedInput->BindAction(PC->MoveAction, ETriggerEvent::Triggered, this, &ANBC7Assignment::Move);
            EnhancedInput->BindAction(PC->LookAction, ETriggerEvent::Triggered, this, &ANBC7Assignment::Look);
        }
    }
}

void ANBC7Assignment::Move(const FInputActionValue& Value)
{
    MoveInput = Value.Get<FVector2D>();
}

void ANBC7Assignment::Look(const FInputActionValue& Value)
{
    LookInput = Value.Get<FVector2D>();
}