// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCFlyingObjectPC.h"
#include "EnhancedInputSubsystems.h"

ANBCFlyingObjectPC::ANBCFlyingObjectPC()
: InputMappingContext(nullptr),
MoveAction(nullptr),
LookAction(nullptr)
{
}

void ANBCFlyingObjectPC::BeginPlay()
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