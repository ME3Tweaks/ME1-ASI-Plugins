#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_GameFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameFramework.GameBreakableActor.Destroyed
struct AGameBreakableActor_Destroyed_Params
{
};

// Function GameFramework.GameBreakableActor.HideAndDestroy
struct AGameBreakableActor_HideAndDestroy_Params
{
};

// Function GameFramework.GameBreakableActor.BreakLastApart
struct AGameBreakableActor_BreakLastApart_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function GameFramework.GameBreakableActor.BreakStepApart
struct AGameBreakableActor_BreakStepApart_Params
{
	int                                                BrokenStep;                                               // (Parm)
};

// Function GameFramework.GameBreakableActor.IsValidDamageType
struct AGameBreakableActor_IsValidDamageType_Params
{
	class UClass*                                      inDamageType;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameBreakableActor.TakeStepDamage
struct AGameBreakableActor_TakeStepDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	bool                                               bIsBroken;                                                // (Parm)
	int                                                BrokenStep;                                               // (Parm)
};

// Function GameFramework.GameBreakableActor.TakeLastDamage
struct AGameBreakableActor_TakeLastDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	bool                                               bIsBroken;                                                // (Parm)
	int                                                BrokenStep;                                               // (Parm)
};

// Function GameFramework.GameBreakableActor.TakeDamage
struct AGameBreakableActor_TakeDamage_Params
{
	float                                              Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
	class UDamageType*                                 pDamage;                                                  // (OptionalParm, Parm)
};

// Function GameFramework.GameBreakableActor.RemoveDecals
struct AGameBreakableActor_RemoveDecals_Params
{
};

// Function GameFramework.GameBreakableActor.SetParticlesLighting
struct AGameBreakableActor_SetParticlesLighting_Params
{
	class AEmitter*                                    Emit;                                                     // (Parm)
};

// Function GameFramework.GameBreakableActor.GetOffsetToWorld
struct AGameBreakableActor_GetOffsetToWorld_Params
{
	struct FVector                                     Offset;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
struct AGamePawn_GetTargetFrictionCylinder_Params
{
	float                                              CylinderRadius;                                           // (Parm, OutParm)
	float                                              CylinderHeight;                                           // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
