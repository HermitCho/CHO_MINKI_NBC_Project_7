// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NBC7AssignmentPC.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class NBC_PROJECT_7_API ANBC7AssignmentPC : public APlayerController
{
	GENERATED_BODY()

public:
	ANBC7AssignmentPC();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	// IA_Move를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	// IA_Look를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;


	virtual void BeginPlay() override;
};