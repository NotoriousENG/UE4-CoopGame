// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosive.h"
#include "CoopGame/Components/SHealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASExplosive::ASExplosive()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->SetIsReplicated(true);

	ExplosionImpulse = 400.0f;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(RootComponent);
	RadialForceComp->Radius = 250;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false;
	RadialForceComp->bIgnoreOwningActor = true;
	RadialForceComp->ImpulseStrength = ExplosionImpulse;

	Damage = 100.0f;

	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void ASExplosive::BeginPlay()
{
	Super::BeginPlay();

	HealthComp->OnHealthChanged.AddDynamic(this, &ASExplosive::OnHealthChanged);
}

void ASExplosive::OnHealthChanged(USHealthComponent* OwningHealthComp, float Health, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.0f && !bExploded)
	{
		bExploded = true;
		OnRep_Exploded();

		MeshComp->AddImpulse(FVector::UpVector * ExplosionImpulse, NAME_None, true);

		UGameplayStatics::ApplyRadialDamage(GetWorld(), Damage, GetActorLocation(), RadialForceComp->Radius, UDamageType::StaticClass(), TArray<AActor*>(), this, InstigatedBy);
		PlayEffects();

		RadialForceComp->FireImpulse();
	}
}

void ASExplosive::PlayEffects()
{
	if (ExplosionEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation(), GetActorRotation());
	}
	if (ExplodedMaterial)
	{
		MeshComp->SetMaterial(0, ExplodedMaterial);
	}
}

void ASExplosive::OnRep_Exploded()
{
	PlayEffects();
}

void ASExplosive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASExplosive, bExploded);
}

