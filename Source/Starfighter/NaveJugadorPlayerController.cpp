// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugadorPlayerController.h"
#include "kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "NaveJugador.h"

ANaveJugadorPlayerController::ANaveJugadorPlayerController()
{
}

void ANaveJugadorPlayerController::BeginPlay()
{
	TArray<AActor*>CameraActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
}

void ANaveJugadorPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);

	InputComponent->BindAxis("Move", this, &ANaveJugadorPlayerController::Move);
}

void ANaveJugadorPlayerController::Move(float _AxisValue)
{
	auto MyPawn = Cast<ANaveJugador>(GetPawn());

	if (MyPawn) {
		MyPawn->Move(_AxisValue);
	}
}