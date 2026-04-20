// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC7AssignmentPC.h"
#include "EnhancedInputSubsystems.h"

ANBC7AssignmentPC::ANBC7AssignmentPC()
    : InputMappingContext(nullptr),
    MoveAction(nullptr),
    LookAction(nullptr)
{
}

void ANBC7AssignmentPC::BeginPlay()
{
    Super::BeginPlay();

    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            if (InputMappingContext)
            {
                Subsystem->AddMappingContext(InputMappingContext, 0);
            }
        }
    }
}