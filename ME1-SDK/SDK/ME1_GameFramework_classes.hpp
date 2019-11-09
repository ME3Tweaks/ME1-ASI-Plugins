#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_GameFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFramework.GameBreakableActor
// 0x0024 (0x02A8 - 0x0284)
class AGameBreakableActor : public AKActor
{
public:
	TArray<class UClass*>                              DamageTypes;                                              // 0x0284(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBreakableStep>                      BreakableSteps;                                           // 0x0290(0x000C) (Edit, NeedCtorLink)
	int                                                CurrentBreakableStep;                                     // 0x029C(0x0004)
	struct FLightingChannelContainer                   ParticleLightingChannels;                                 // 0x02A0(0x0004) (Edit)
	unsigned long                                      bParticlesAcceptLights : 1;                               // 0x02A4(0x0004) (Edit)
	unsigned long                                      bParticlesAcceptDynamicLights : 1;                        // 0x02A4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameBreakableActor");
		return ptr;
	}


	void Destroyed();
	void HideAndDestroy();
	void BreakLastApart(class AController* EventInstigator);
	void BreakStepApart(int BrokenStep);
	bool IsValidDamageType(class UClass* inDamageType);
	void TakeStepDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep);
	void TakeLastDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep);
	void TakeDamage(float Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UDamageType* pDamage);
	void RemoveDecals();
	void SetParticlesLighting(class AEmitter* Emit);
	struct FVector GetOffsetToWorld(const struct FVector& Offset);
};


// Class GameFramework.GamePawn
// 0x0000 (0x04C4 - 0x04C4)
class AGamePawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void GetTargetFrictionCylinder(float* CylinderRadius, float* CylinderHeight);
};


// Class GameFramework.GamePlayerController
// 0x0000 (0x0580 - 0x0580)
class AGamePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}

};


// Class GameFramework.GamePlayerInput
// 0x0000 (0x0148 - 0x0148)
class UGamePlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerInput");
		return ptr;
	}

};


// Class GameFramework.GameProjectile
// 0x0000 (0x0228 - 0x0228)
class AGameProjectile : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameProjectile");
		return ptr;
	}

};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.GameVehicle
// 0x0000 (0x064C - 0x064C)
class AGameVehicle : public ASVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameVehicle");
		return ptr;
	}

};


// Class GameFramework.GameWeapon
// 0x0000 (0x02D0 - 0x02D0)
class AGameWeapon : public AWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWeapon");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0110 - 0x0094)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	struct FRecoilDef                                  Recoil;                                                   // 0x0094(0x0070) (Edit)
	struct FVector2D                                   Aim;                                                      // 0x0104(0x0008) (Edit)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x010C(0x0004) (Edit, Transient)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x010C(0x0004) (Transient)
	unsigned long                                      bApplyControl : 1;                                        // 0x010C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameActorFactoryBreakable
// 0x0000 (0x0095 - 0x0095)
class UGameActorFactoryBreakable : public UActorFactoryRigidBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameActorFactoryBreakable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
