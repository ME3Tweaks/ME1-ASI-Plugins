// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_GameFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameFramework.GameBreakableActor.Destroyed
// (Defined, Event, Public)

void AGameBreakableActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.Destroyed");

	AGameBreakableActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.HideAndDestroy
// (Defined, Public)

void AGameBreakableActor::HideAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.HideAndDestroy");

	AGameBreakableActor_HideAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.BreakLastApart
// (Defined, Public, HasDefaults)
// Parameters:
// class AController*             EventInstigator                (Parm)

void AGameBreakableActor::BreakLastApart(class AController* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.BreakLastApart");

	AGameBreakableActor_BreakLastApart_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.BreakStepApart
// (Defined, Public, HasDefaults)
// Parameters:
// int                            BrokenStep                     (Parm)

void AGameBreakableActor::BreakStepApart(int BrokenStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.BreakStepApart");

	AGameBreakableActor_BreakStepApart_Params params;
	params.BrokenStep = BrokenStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.IsValidDamageType
// (Final, Defined, Public)
// Parameters:
// class UClass*                  inDamageType                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameBreakableActor::IsValidDamageType(class UClass* inDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.IsValidDamageType");

	AGameBreakableActor_IsValidDamageType_Params params;
	params.inDamageType = inDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameBreakableActor.TakeStepDamage
// (Defined, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// bool                           bIsBroken                      (Parm)
// int                            BrokenStep                     (Parm)

void AGameBreakableActor::TakeStepDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.TakeStepDamage");

	AGameBreakableActor_TakeStepDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.bIsBroken = bIsBroken;
	params.BrokenStep = BrokenStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.TakeLastDamage
// (Defined, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// bool                           bIsBroken                      (Parm)
// int                            BrokenStep                     (Parm)

void AGameBreakableActor::TakeLastDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.TakeLastDamage");

	AGameBreakableActor_TakeLastDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.bIsBroken = bIsBroken;
	params.BrokenStep = BrokenStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.TakeDamage
// (Defined, Event, Public)
// Parameters:
// float                          Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)
// class UDamageType*             pDamage                        (OptionalParm, Parm)

void AGameBreakableActor::TakeDamage(float Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UDamageType* pDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.TakeDamage");

	AGameBreakableActor_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;
	params.pDamage = pDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.RemoveDecals
// (Native, Public)

void AGameBreakableActor::RemoveDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.RemoveDecals");

	AGameBreakableActor_RemoveDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.SetParticlesLighting
// (Native, Public)
// Parameters:
// class AEmitter*                Emit                           (Parm)

void AGameBreakableActor::SetParticlesLighting(class AEmitter* Emit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.SetParticlesLighting");

	AGameBreakableActor_SetParticlesLighting_Params params;
	params.Emit = Emit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameBreakableActor.GetOffsetToWorld
// (Native, Public)
// Parameters:
// struct FVector                 Offset                         (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameBreakableActor::GetOffsetToWorld(const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameBreakableActor.GetOffsetToWorld");

	AGameBreakableActor_GetOffsetToWorld_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          CylinderRadius                 (Parm, OutParm)
// float                          CylinderHeight                 (Parm, OutParm)

void AGamePawn::GetTargetFrictionCylinder(float* CylinderRadius, float* CylinderHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.GetTargetFrictionCylinder");

	AGamePawn_GetTargetFrictionCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CylinderRadius != nullptr)
		*CylinderRadius = params.CylinderRadius;
	if (CylinderHeight != nullptr)
		*CylinderHeight = params.CylinderHeight;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
