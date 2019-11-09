#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Powers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BIOG_Powers.BioPowerScriptDesign
// 0x0000 (0x005C - 0x005C)
class UBioPowerScriptDesign : public UBioPowerScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioPowerScriptDesign");
		return ptr;
	}


	bool AdjustInventoryResource(class AActor* oActor, TEnumAsByte<EInventoryResourceTypes> eResource, float fAmount);
	bool EffectCarnageSetup(class AActor* oCaster, int nNumberOfUses, float fDuration);
	bool InstantRegenerateShield(class AActor* oActor, float fPercentOfShieldRegained);
	bool IncreaseAllPowerCooldowns(class AActor* oActor, float fPercentOfTotalToIncreaseBy, bool bIncreaseTech, bool bIncreaseBiotic, bool bIncreaseWeapon, bool bIncreaseCombat);
	bool ClearAllPowerCooldowns(class AActor* oActor);
	bool EffectSingularity(class AActor* oCaster, class AActor* oImpacted, const struct FVector& vSingularityLocation, float fForce, float fForceInterval, float fDuration, float fBubbleRadius);
	bool EffectRagdoll(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGroupID);
	bool EffectEntrenchShield(class AActor* oCaster, class AActor* oImpacted, float fShieldInc, float fDuration);
	bool EffectRegenerateShield(class AActor* oCaster, class AActor* oImpacted, float fAmountPerInterval, float fInterval, float fDuration);
	bool EffectDamageVulnerability(class AActor* oCaster, class AActor* oImpacted, float fDamageMultiplier, float fDuration);
	bool EffectRegen(class AActor* oCaster, float fHealingFactor, float fDuration);
	bool EffectHealInstant(class AActor* oCaster, class AActor* oImpacted, float fHealth, float fToxic);
	bool EffectHeal(class AActor* oCaster, class AActor* oImpacted, float fHealthPerInterval, float fToxicPerInterval, float fInterval, float fDuration);
	bool EffectCombatBoost(class AActor* oCaster, class AActor* oImpacted, float fDuration, float fDmgDurBonus, float fRegenBonus, float fSuppResistBonus, float fMobilityBonus);
	bool EffectImmunity(class AActor* oCaster, float fDuration, float fDamageResistBonus);
	bool EffectSniperCritical(class AActor* oCaster, float fDuration, float fDamageBonus, float fStunDuration, float fMaxDriftRed, float fMinDriftRed);
	bool EffectOverkill(class AActor* oCaster, float fDuration, float fSuppDamage, float fKickbackRed, float fHeatRed);
	bool EffectMarksman(class AActor* oCaster, float fDuration, float fMaxDriftRed, float fMinDriftRed, float fDamageBonus, float fRPSBonus, float fHeatRed);
	bool EffectCorrosion(class AActor* oImpacted, class AActor* oCaster, float fCorrosion, float fDuration);
	bool EffectSuppressingFire(class AActor* oCaster, float fDuration, float fDriftInc);
	bool EffectZeroGLift(class AActor* oImpacted, class AActor* oCaster, float fDuration, float fLiftForce, float fLiftDistance, float fDeceleration, float fMinVelocity);
	bool EffectAIHacking(class AActor* oCaster, class AActor* oImpacted, float fDuration);
	bool EffectDisablePowers(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, bool bDisableTech, bool bDisableBiotics, bool bDisableWeaponPowers, bool bDisableCombat);
	bool EffectOverheatWeapons(class AActor* oCaster, class AActor* oImpacted, float fDuration, float fHeat);
	bool EffectDisableWeapons(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup);
	bool EffectDisableActions(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, bool bDisableActionQueue, bool bDisableMovementStack);
	bool EffectAdjustStability(class ABioPawn* oTarget, class AActor* oCaster, float fAmount, float fApplyInterval, float fTotalTime);
	bool EffectDamageOverTime(class AActor* oImpacted, class AActor* oCaster, float fDamagePerInterval, const struct FVector& vMomentumPerInterval, class UBioDamageType* pDamage, float fInterval, float fDuration, int nGroup);
	bool EffectTakeDamage(class AActor* oImpacted, class AActor* oCaster, float fDamage, const struct FVector& vMomentum, class UBioDamageType* pDamage);
	class AActor* SpawnBeacon(class UBioActorBehavior* oCasterBehavior, const struct FString& sBeaconActorType, const struct FVector& vLocation, const struct FRotator& vFacing, float fDuration, bool bFloatingBeacon, bool bSnapToFloor, bool bSpawnAsProxMine, float fSquadActivateDelay, float fRadiusMulti, float fDamageMulti, class AActor* oOwner);
	class AActor* SpawnBarrier(class UBioActorBehavior* oCasterBehavior, const struct FString& sBarrierActorType, const struct FVector& vLocation, const struct FRotator& vFacing, float fHealth, float fDuration, bool bSnapToFloor, bool bAddToSquadCover, class AActor* oOwner);
	TEnumAsByte<EBioFactionRelationship> GetFactionRelationship(class AActor* oCaster, class AActor* oTarget);
	float GetTechResistance(class AActor* oTarget);
	float GetBioticResistance(class AActor* oTarget);
	float GetTargetResistance(class AActor* oTarget);
	float GetDistanceModifier(class AActor* oTarget, TEnumAsByte<EBioAttributesDamageFalloff> eFalloff);
	float GetDmgDurModifier(class AActor* oCaster);
	int GetPhysicsLevel(class AActor* oImpacted);
	bool IsOfRace(class AActor* oImpacted, TEnumAsByte<EBio_Appr_CharacterTalentRaceType> eRace);
	bool HasShields(class AActor* oImpacted, bool bCheckMax);
	bool IsDeadBody(class AActor* oImpacted);
	bool IsPlaceable(class AActor* oImpacted);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioAdrenalineScript
// 0x0000 (0x005C - 0x005C)
class UBioAdrenalineScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioAdrenalineScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioBarrierScript
// 0x0000 (0x005C - 0x005C)
class UBioBarrierScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioBarrierScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
};


// Class BIOG_Powers.BioCarnageScript
// 0x0018 (0x0074 - 0x005C)
class UBioCarnageScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamage;                                                // 0x005C(0x0004)
	float                                              m_fForce;                                                 // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioCarnageScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioCarnageSetupScript
// 0x0000 (0x005C - 0x005C)
class UBioCarnageSetupScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioCarnageSetupScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
};


// Class BIOG_Powers.BioSpawnBeacon
// 0x0020 (0x007C - 0x005C)
class UBioSpawnBeacon : public UBioPowerScriptDesign
{
public:
	TArray<struct FString>                             m_asBeaconActorType;                                      // 0x005C(0x000C) (NeedCtorLink)
	float                                              m_fBeaconOffset;                                          // 0x0068(0x0004)
	unsigned long                                      m_bRecordUses : 1;                                        // 0x006C(0x0004)
	unsigned long                                      m_bProxMine : 1;                                          // 0x006C(0x0004)
	unsigned long                                      m_bFloating : 1;                                          // 0x006C(0x0004)
	unsigned long                                      m_bSnapToGround : 1;                                      // 0x006C(0x0004)
	struct FString                                     m_sRecordUseName;                                         // 0x0070(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSpawnBeacon");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioDampingBeacon
// 0x0000 (0x007C - 0x007C)
class UBioDampingBeacon : public UBioSpawnBeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioDampingBeacon");
		return ptr;
	}

};


// Class BIOG_Powers.BioDampingScript
// 0x0018 (0x0074 - 0x005C)
class UBioDampingScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fMineDamage;                                            // 0x005C(0x0004)
	class UBioDamageType*                              m_oDTExplosion;                                           // 0x0060(0x0004) (Transient)
	float                                              m_fCooldownIncPct;                                        // 0x0064(0x0004)
	unsigned long                                      m_bDampenBiotics : 1;                                     // 0x0068(0x0004)
	unsigned long                                      m_bDampenTech : 1;                                        // 0x0068(0x0004)
	unsigned long                                      m_bDampenWeapons : 1;                                     // 0x0068(0x0004)
	unsigned long                                      m_bDampenCombat : 1;                                      // 0x0068(0x0004)
	float                                              m_fDuration;                                              // 0x006C(0x0004)
	int                                                m_nDifficultyLevel;                                       // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioDampingScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioDampingSuicideScript
// 0x0004 (0x0078 - 0x0074)
class UBioDampingSuicideScript : public UBioDampingScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                                     // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioDampingSuicideScript");
		return ptr;
	}


	bool EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioEMPBeacon
// 0x0000 (0x007C - 0x007C)
class UBioEMPBeacon : public UBioSpawnBeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioEMPBeacon");
		return ptr;
	}

};


// Class BIOG_Powers.BioEMPScript
// 0x0020 (0x007C - 0x005C)
class UBioEMPScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fMineDamage;                                            // 0x005C(0x0004)
	float                                              m_fEMPDamage;                                             // 0x0060(0x0004)
	float                                              m_fSuppressionDamage;                                     // 0x0064(0x0004)
	float                                              m_fDamageVulnerability;                                   // 0x0068(0x0004)
	float                                              m_fDuration;                                              // 0x006C(0x0004)
	class UBioDamageType*                              m_oDTExplosion;                                           // 0x0070(0x0004) (Transient)
	class UBioDamageType*                              m_oDTStability;                                           // 0x0074(0x0004) (Transient)
	class UBioDamageType*                              m_oDTElectroMagneticPulse;                                // 0x0078(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioEMPScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioEMPSuicideScript
// 0x0004 (0x0080 - 0x007C)
class UBioEMPSuicideScript : public UBioEMPScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                                     // 0x007C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioEMPSuicideScript");
		return ptr;
	}


	bool EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioFakePowerScript
// 0x0004 (0x0060 - 0x005C)
class UBioFakePowerScript : public UBioPowerScriptDesign
{
public:
	unsigned long                                      m_bIgnoreFriendly : 1;                                    // 0x005C(0x0004)
	unsigned long                                      m_bIgnoreNeutral : 1;                                     // 0x005C(0x0004)
	unsigned long                                      m_bIgnoreHostile : 1;                                     // 0x005C(0x0004)
	unsigned long                                      m_bIgnoreHumanoid : 1;                                    // 0x005C(0x0004)
	unsigned long                                      m_bIgnoreAnimal : 1;                                      // 0x005C(0x0004)
	unsigned long                                      m_bIgnoreMachine : 1;                                     // 0x005C(0x0004)
	unsigned long                                      m_bIgnorePlaceables : 1;                                  // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioFakePowerScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioGethCarnageScript
// 0x0018 (0x0074 - 0x005C)
class UBioGethCarnageScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamage;                                                // 0x005C(0x0004)
	float                                              m_fForce;                                                 // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioGethCarnageScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioHackingScript
// 0x000C (0x0068 - 0x005C)
class UBioHackingScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fHackingTime;                                           // 0x005C(0x0004)
	float                                              m_fEliteMult;                                             // 0x0060(0x0004)
	float                                              m_fSubBossMult;                                           // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHackingScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioHealScript
// 0x0018 (0x0074 - 0x005C)
class UBioHealScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fHealAmountPerInterval;                                 // 0x0060(0x0004)
	float                                              m_fToxicAmountPerInterval;                                // 0x0064(0x0004)
	float                                              m_fHealInterval;                                          // 0x0068(0x0004)
	unsigned long                                      m_bHealsAnimals : 1;                                      // 0x006C(0x0004)
	unsigned long                                      m_bHealsHumanoids : 1;                                    // 0x006C(0x0004)
	unsigned long                                      m_bHealsMachines : 1;                                     // 0x006C(0x0004)
	float                                              m_fMediGelPerUse;                                         // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHealScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioHealSelfScript
// 0x0000 (0x0074 - 0x0074)
class UBioHealSelfScript : public UBioHealScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHealSelfScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool CanStartPower(class AActor* oCaster);
};


// Class BIOG_Powers.BioHealSquadScript
// 0x0018 (0x0074 - 0x005C)
class UBioHealSquadScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fHealAmountPerInterval;                                 // 0x0060(0x0004)
	float                                              m_fToxicAmountPerInterval;                                // 0x0064(0x0004)
	float                                              m_fHealInterval;                                          // 0x0068(0x0004)
	float                                              m_fCooldownMulti;                                         // 0x006C(0x0004)
	float                                              m_fRezHealthPct;                                          // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHealSquadScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	bool CanStartPower(class AActor* oCaster);
	bool AdjustCooldown(float* fCoolDownTime);
	bool DoesSquadNeedHealing(class AActor* oActor);
	float GetCooldownMultiForSquad(class AActor* oCaster);
	void GetHealAmountForSquad(class AActor* oCaster, float* fHealAmount, float* fToxicAmount);
};


// Class BIOG_Powers.BioHexBarrierScript
// 0x0000 (0x005C - 0x005C)
class UBioHexBarrierScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHexBarrierScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
};


// Class BIOG_Powers.BioImmunityScript
// 0x0000 (0x005C - 0x005C)
class UBioImmunityScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioImmunityScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioLanceArmScript
// 0x0018 (0x0074 - 0x005C)
class UBioLanceArmScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForce;                                                 // 0x005C(0x0004)
	float                                              m_fDamage;                                                // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioLanceArmScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioLiftScript
// 0x0010 (0x006C - 0x005C)
class UBioLiftScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForce;                                                 // 0x005C(0x0004)
	float                                              m_fDistance;                                              // 0x0060(0x0004)
	float                                              m_fDuration;                                              // 0x0064(0x0004)
	int                                                m_nPhysicsLevel;                                          // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioLiftScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioLiftPLCScript
// 0x0004 (0x0070 - 0x006C)
class UBioLiftPLCScript : public UBioLiftScript
{
public:
	float                                              m_fPawnDurationMult;                                      // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioLiftPLCScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
};


// Class BIOG_Powers.BioMarksmanScript
// 0x0000 (0x005C - 0x005C)
class UBioMarksmanScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioMarksmanScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioNeuralShockScript
// 0x0018 (0x0074 - 0x005C)
class UBioNeuralShockScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fToxicDamage;                                           // 0x0060(0x0004)
	float                                              m_fPushForce;                                             // 0x0064(0x0004)
	float                                              m_fPushDamage;                                            // 0x0068(0x0004)
	class UBioDamageType*                              m_oDTToxic;                                               // 0x006C(0x0004) (Transient)
	class UBioDamageType*                              m_oDTPhysics;                                             // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioNeuralShockScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioOverkillScript
// 0x0000 (0x005C - 0x005C)
class UBioOverkillScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioOverkillScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioRegenBurstScript
// 0x0000 (0x005C - 0x005C)
class UBioRegenBurstScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioRegenBurstScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
};


// Class BIOG_Powers.BioRepairScript
// 0x000C (0x0068 - 0x005C)
class UBioRepairScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fRepairAmountPerInterval;                               // 0x0060(0x0004)
	float                                              m_fRepairInterval;                                        // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioRepairScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	bool CanStartPower(class AActor* oCaster);
	int GetSquadElectronicsRank(class AActor* oCaster);
};


// Class BIOG_Powers.BioSabotageBeacon
// 0x0000 (0x007C - 0x007C)
class UBioSabotageBeacon : public UBioSpawnBeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSabotageBeacon");
		return ptr;
	}

};


// Class BIOG_Powers.BioSabotageScript
// 0x0018 (0x0074 - 0x005C)
class UBioSabotageScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fMineDamage;                                            // 0x005C(0x0004)
	class UBioDamageType*                              m_oDTExplosion;                                           // 0x0060(0x0004) (Transient)
	float                                              m_fDuration;                                              // 0x0064(0x0004)
	float                                              m_fHeat;                                                  // 0x0068(0x0004)
	float                                              m_fDamagePerSecond;                                       // 0x006C(0x0004)
	class UBioDamageType*                              m_oDTBurn;                                                // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSabotageScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioSabotageSuicideScript
// 0x0004 (0x0078 - 0x0074)
class UBioSabotageSuicideScript : public UBioSabotageScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                                     // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSabotageSuicideScript");
		return ptr;
	}


	bool EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioShieldBoostScript
// 0x0008 (0x0064 - 0x005C)
class UBioShieldBoostScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fShieldPercentPerSecond;                                // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioShieldBoostScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	bool CanStartPower(class AActor* oCaster);
};


// Class BIOG_Powers.BioShieldEntrenchScript
// 0x000C (0x0068 - 0x005C)
class UBioShieldEntrenchScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                              // 0x005C(0x0004)
	float                                              m_fShieldMax;                                             // 0x0060(0x0004)
	float                                              m_fShieldsPerInterval;                                    // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioShieldEntrenchScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioSiegePulseScript
// 0x0018 (0x0074 - 0x005C)
class UBioSiegePulseScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamage;                                                // 0x005C(0x0004)
	float                                              m_fForce;                                                 // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSiegePulseScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioSingularityScript
// 0x0020 (0x007C - 0x005C)
class UBioSingularityScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForcePerSecond;                                        // 0x005C(0x0004)
	float                                              m_fDuration;                                              // 0x0060(0x0004)
	struct FVector                                     m_vSingularityLocation;                                   // 0x0064(0x000C)
	unsigned long                                      m_bLocationSet : 1;                                       // 0x0070(0x0004)
	float                                              m_fRadius;                                                // 0x0074(0x0004)
	int                                                m_nPhysicsLevel;                                          // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSingularityScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	struct FVector BumpUpFromFloor(const struct FVector& vOriginalLocation, float fBumpDistance);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioSmashScript
// 0x0018 (0x0074 - 0x005C)
class UBioSmashScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForce;                                                 // 0x005C(0x0004)
	float                                              m_fDamage;                                                // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSmashScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioSniperCritScript
// 0x0000 (0x005C - 0x005C)
class UBioSniperCritScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioSniperCritScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioStasisScript
// 0x0008 (0x0064 - 0x005C)
class UBioStasisScript : public UBioPowerScriptDesign
{
public:
	unsigned long                                      m_bAllowDamage : 1;                                       // 0x005C(0x0004)
	float                                              m_fDuration;                                              // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioStasisScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioTakeDownScript
// 0x0000 (0x005C - 0x005C)
class UBioTakeDownScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioTakeDownScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
};


// Class BIOG_Powers.BioTeslaBurstScript
// 0x0010 (0x006C - 0x005C)
class UBioTeslaBurstScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fEMPDamage;                                             // 0x005C(0x0004)
	float                                              m_fDamage;                                                // 0x0060(0x0004)
	class UBioDamageType*                              m_oDTElectroMagneticPulse;                                // 0x0064(0x0004) (Transient)
	class UBioDamageType*                              m_oDTElectric;                                            // 0x0068(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioTeslaBurstScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioThrowScript
// 0x001C (0x0078 - 0x005C)
class UBioThrowScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForce;                                                 // 0x005C(0x0004)
	float                                              m_fDamage;                                                // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	int                                                m_nPhysicsLevel;                                          // 0x0070(0x0004)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioThrowScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioThrowWarpScript
// 0x002C (0x0088 - 0x005C)
class UBioThrowWarpScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fThrowForce;                                            // 0x005C(0x0004)
	float                                              m_fThrowDamage;                                           // 0x0060(0x0004)
	struct FVector                                     m_vCasterLocation;                                        // 0x0064(0x000C)
	int                                                m_nPhysicsLevel;                                          // 0x0070(0x0004)
	class UBioDamageType*                              m_oThrowDamageType;                                       // 0x0074(0x0004) (Transient)
	float                                              m_fDamagePerSecond;                                       // 0x0078(0x0004)
	float                                              m_fDuration;                                              // 0x007C(0x0004)
	float                                              m_fDamageMultiplier;                                      // 0x0080(0x0004)
	class UBioDamageType*                              m_oWarpDamageType;                                        // 0x0084(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioThrowWarpScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioToxicSpitScript
// 0x0008 (0x0064 - 0x005C)
class UBioToxicSpitScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamage;                                                // 0x005C(0x0004)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0060(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioToxicSpitScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioToxicSpitSuicideScript
// 0x0004 (0x0068 - 0x0064)
class UBioToxicSpitSuicideScript : public UBioToxicSpitScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                                     // 0x0064(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioToxicSpitSuicideScript");
		return ptr;
	}


	bool EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioUnityScript
// 0x0000 (0x005C - 0x005C)
class UBioUnityScript : public UBioPowerScriptDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioUnityScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool CanStartPower(class AActor* oCaster);
	bool DoesSquadHaveDeadMember(class AActor* oActor);
};


// Class BIOG_Powers.BioWarpScript
// 0x0010 (0x006C - 0x005C)
class UBioWarpScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamagePerSecond;                                       // 0x005C(0x0004)
	float                                              m_fDuration;                                              // 0x0060(0x0004)
	float                                              m_fDamageMultiplier;                                      // 0x0064(0x0004)
	class UBioDamageType*                              m_oDamageType;                                            // 0x0068(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioWarpScript");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioArmorEmitter
// 0x0018 (0x0074 - 0x005C)
class UBioArmorEmitter : public UBioPowerScriptDesign
{
public:
	float                                              m_fDamage;                                                // 0x005C(0x0004)
	float                                              m_fType;                                                  // 0x0060(0x0004)
	class UBioDamageType*                              m_oEnervate;                                              // 0x0064(0x0004) (Transient)
	class UBioDamageType*                              m_oToxic;                                                 // 0x0068(0x0004) (Transient)
	class UBioDamageType*                              m_oSiphon;                                                // 0x006C(0x0004) (Transient)
	class UBioDamageType*                              m_oDestab;                                                // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioArmorEmitter");
		return ptr;
	}


	bool OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted);
	bool StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration);
	void InitializePowerScript(class UBioPower* pPower);
};


// Class BIOG_Powers.BioHealMachineScript
// 0x0000 (0x0074 - 0x0074)
class UBioHealMachineScript : public UBioHealScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Powers.BioHealMachineScript");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
