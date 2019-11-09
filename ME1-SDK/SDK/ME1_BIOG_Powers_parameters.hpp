#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Powers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BIOG_Powers.BioPowerScriptDesign.AdjustInventoryResource
struct UBioPowerScriptDesign_AdjustInventoryResource_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	TEnumAsByte<EInventoryResourceTypes>               eResource;                                                // (Parm)
	float                                              fAmount;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectCarnageSetup
struct UBioPowerScriptDesign_EffectCarnageSetup_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	int                                                nNumberOfUses;                                            // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.InstantRegenerateShield
struct UBioPowerScriptDesign_InstantRegenerateShield_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	float                                              fPercentOfShieldRegained;                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.IncreaseAllPowerCooldowns
struct UBioPowerScriptDesign_IncreaseAllPowerCooldowns_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	float                                              fPercentOfTotalToIncreaseBy;                              // (Parm)
	bool                                               bIncreaseTech;                                            // (OptionalParm, Parm)
	bool                                               bIncreaseBiotic;                                          // (OptionalParm, Parm)
	bool                                               bIncreaseWeapon;                                          // (OptionalParm, Parm)
	bool                                               bIncreaseCombat;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.ClearAllPowerCooldowns
struct UBioPowerScriptDesign_ClearAllPowerCooldowns_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectSingularity
struct UBioPowerScriptDesign_EffectSingularity_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	struct FVector                                     vSingularityLocation;                                     // (Parm)
	float                                              fForce;                                                   // (Parm)
	float                                              fForceInterval;                                           // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fBubbleRadius;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectRagdoll
struct UBioPowerScriptDesign_EffectRagdoll_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	int                                                nGroupID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectEntrenchShield
struct UBioPowerScriptDesign_EffectEntrenchShield_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fShieldInc;                                               // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectRegenerateShield
struct UBioPowerScriptDesign_EffectRegenerateShield_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fAmountPerInterval;                                       // (Parm)
	float                                              fInterval;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectDamageVulnerability
struct UBioPowerScriptDesign_EffectDamageVulnerability_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDamageMultiplier;                                        // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectRegen
struct UBioPowerScriptDesign_EffectRegen_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fHealingFactor;                                           // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectHealInstant
struct UBioPowerScriptDesign_EffectHealInstant_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fHealth;                                                  // (Parm)
	float                                              fToxic;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectHeal
struct UBioPowerScriptDesign_EffectHeal_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fHealthPerInterval;                                       // (Parm)
	float                                              fToxicPerInterval;                                        // (Parm)
	float                                              fInterval;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectCombatBoost
struct UBioPowerScriptDesign_EffectCombatBoost_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fDmgDurBonus;                                             // (Parm)
	float                                              fRegenBonus;                                              // (Parm)
	float                                              fSuppResistBonus;                                         // (Parm)
	float                                              fMobilityBonus;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectImmunity
struct UBioPowerScriptDesign_EffectImmunity_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fDamageResistBonus;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectSniperCritical
struct UBioPowerScriptDesign_EffectSniperCritical_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fDamageBonus;                                             // (Parm)
	float                                              fStunDuration;                                            // (OptionalParm, Parm)
	float                                              fMaxDriftRed;                                             // (OptionalParm, Parm)
	float                                              fMinDriftRed;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectOverkill
struct UBioPowerScriptDesign_EffectOverkill_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fSuppDamage;                                              // (Parm)
	float                                              fKickbackRed;                                             // (Parm)
	float                                              fHeatRed;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectMarksman
struct UBioPowerScriptDesign_EffectMarksman_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fMaxDriftRed;                                             // (Parm)
	float                                              fMinDriftRed;                                             // (Parm)
	float                                              fDamageBonus;                                             // (Parm)
	float                                              fRPSBonus;                                                // (Parm)
	float                                              fHeatRed;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectCorrosion
struct UBioPowerScriptDesign_EffectCorrosion_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCorrosion;                                               // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectSuppressingFire
struct UBioPowerScriptDesign_EffectSuppressingFire_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fDriftInc;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectZeroGLift
struct UBioPowerScriptDesign_EffectZeroGLift_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fLiftForce;                                               // (Parm)
	float                                              fLiftDistance;                                            // (Parm)
	float                                              fDeceleration;                                            // (Parm)
	float                                              fMinVelocity;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectAIHacking
struct UBioPowerScriptDesign_EffectAIHacking_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectDisablePowers
struct UBioPowerScriptDesign_EffectDisablePowers_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	int                                                nGFXGroup;                                                // (Parm)
	bool                                               bDisableTech;                                             // (Parm)
	bool                                               bDisableBiotics;                                          // (Parm)
	bool                                               bDisableWeaponPowers;                                     // (Parm)
	bool                                               bDisableCombat;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectOverheatWeapons
struct UBioPowerScriptDesign_EffectOverheatWeapons_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	float                                              fHeat;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectDisableWeapons
struct UBioPowerScriptDesign_EffectDisableWeapons_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	int                                                nGFXGroup;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectDisableActions
struct UBioPowerScriptDesign_EffectDisableActions_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	int                                                nGFXGroup;                                                // (Parm)
	bool                                               bDisableActionQueue;                                      // (OptionalParm, Parm)
	bool                                               bDisableMovementStack;                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectAdjustStability
struct UBioPowerScriptDesign_EffectAdjustStability_Params
{
	class ABioPawn*                                    oTarget;                                                  // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fAmount;                                                  // (Parm)
	float                                              fApplyInterval;                                           // (Parm)
	float                                              fTotalTime;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectDamageOverTime
struct UBioPowerScriptDesign_EffectDamageOverTime_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDamagePerInterval;                                       // (Parm)
	struct FVector                                     vMomentumPerInterval;                                     // (Parm)
	class UBioDamageType*                              pDamage;                                                  // (Parm)
	float                                              fInterval;                                                // (Parm)
	float                                              fDuration;                                                // (Parm)
	int                                                nGroup;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.EffectTakeDamage
struct UBioPowerScriptDesign_EffectTakeDamage_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDamage;                                                  // (Parm)
	struct FVector                                     vMomentum;                                                // (Parm)
	class UBioDamageType*                              pDamage;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.SpawnBeacon
struct UBioPowerScriptDesign_SpawnBeacon_Params
{
	class UBioActorBehavior*                           oCasterBehavior;                                          // (Parm)
	struct FString                                     sBeaconActorType;                                         // (Parm, NeedCtorLink)
	struct FVector                                     vLocation;                                                // (Parm)
	struct FRotator                                    vFacing;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               bFloatingBeacon;                                          // (OptionalParm, Parm)
	bool                                               bSnapToFloor;                                             // (OptionalParm, Parm)
	bool                                               bSpawnAsProxMine;                                         // (OptionalParm, Parm)
	float                                              fSquadActivateDelay;                                      // (OptionalParm, Parm)
	float                                              fRadiusMulti;                                             // (OptionalParm, Parm)
	float                                              fDamageMulti;                                             // (OptionalParm, Parm)
	class AActor*                                      oOwner;                                                   // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.SpawnBarrier
struct UBioPowerScriptDesign_SpawnBarrier_Params
{
	class UBioActorBehavior*                           oCasterBehavior;                                          // (Parm)
	struct FString                                     sBarrierActorType;                                        // (Parm, NeedCtorLink)
	struct FVector                                     vLocation;                                                // (Parm)
	struct FRotator                                    vFacing;                                                  // (Parm)
	float                                              fHealth;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               bSnapToFloor;                                             // (OptionalParm, Parm)
	bool                                               bAddToSquadCover;                                         // (OptionalParm, Parm)
	class AActor*                                      oOwner;                                                   // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetFactionRelationship
struct UBioPowerScriptDesign_GetFactionRelationship_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	class AActor*                                      oTarget;                                                  // (Parm)
	TEnumAsByte<EBioFactionRelationship>               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetTechResistance
struct UBioPowerScriptDesign_GetTechResistance_Params
{
	class AActor*                                      oTarget;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetBioticResistance
struct UBioPowerScriptDesign_GetBioticResistance_Params
{
	class AActor*                                      oTarget;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetTargetResistance
struct UBioPowerScriptDesign_GetTargetResistance_Params
{
	class AActor*                                      oTarget;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetDistanceModifier
struct UBioPowerScriptDesign_GetDistanceModifier_Params
{
	class AActor*                                      oTarget;                                                  // (Parm)
	TEnumAsByte<EBioAttributesDamageFalloff>           eFalloff;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetDmgDurModifier
struct UBioPowerScriptDesign_GetDmgDurModifier_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.GetPhysicsLevel
struct UBioPowerScriptDesign_GetPhysicsLevel_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.IsOfRace
struct UBioPowerScriptDesign_IsOfRace_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	TEnumAsByte<EBio_Appr_CharacterTalentRaceType>     eRace;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.HasShields
struct UBioPowerScriptDesign_HasShields_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	bool                                               bCheckMax;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.IsDeadBody
struct UBioPowerScriptDesign_IsDeadBody_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.IsPlaceable
struct UBioPowerScriptDesign_IsPlaceable_Params
{
	class AActor*                                      oImpacted;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioPowerScriptDesign.InitializePowerScript
struct UBioPowerScriptDesign_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioAdrenalineScript.OnImpact
struct UBioAdrenalineScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioAdrenalineScript.StartPhase
struct UBioAdrenalineScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioBarrierScript.OnImpact
struct UBioBarrierScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioCarnageScript.OnImpact
struct UBioCarnageScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioCarnageScript.StartPhase
struct UBioCarnageScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioCarnageScript.InitializePowerScript
struct UBioCarnageScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioCarnageSetupScript.OnImpact
struct UBioCarnageSetupScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSpawnBeacon.OnImpact
struct UBioSpawnBeacon_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSpawnBeacon.EndPhase
struct UBioSpawnBeacon_EndPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSpawnBeacon.StartPhase
struct UBioSpawnBeacon_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSpawnBeacon.InitializePowerScript
struct UBioSpawnBeacon_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioDampingScript.OnImpact
struct UBioDampingScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioDampingScript.StartPhase
struct UBioDampingScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioDampingScript.InitializePowerScript
struct UBioDampingScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioDampingSuicideScript.EndPhase
struct UBioDampingSuicideScript_EndPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioDampingSuicideScript.InitializePowerScript
struct UBioDampingSuicideScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioEMPScript.OnImpact
struct UBioEMPScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioEMPScript.StartPhase
struct UBioEMPScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioEMPScript.InitializePowerScript
struct UBioEMPScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioEMPSuicideScript.EndPhase
struct UBioEMPSuicideScript_EndPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioEMPSuicideScript.InitializePowerScript
struct UBioEMPSuicideScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioFakePowerScript.OnImpact
struct UBioFakePowerScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioFakePowerScript.StartPhase
struct UBioFakePowerScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioGethCarnageScript.OnImpact
struct UBioGethCarnageScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioGethCarnageScript.StartPhase
struct UBioGethCarnageScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioGethCarnageScript.InitializePowerScript
struct UBioGethCarnageScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioHackingScript.OnImpact
struct UBioHackingScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHackingScript.StartPhase
struct UBioHackingScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealScript.OnImpact
struct UBioHealScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealScript.StartPhase
struct UBioHealScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSelfScript.OnImpact
struct UBioHealSelfScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSelfScript.CanStartPower
struct UBioHealSelfScript_CanStartPower_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.OnImpact
struct UBioHealSquadScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.StartPhase
struct UBioHealSquadScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.CanStartPower
struct UBioHealSquadScript_CanStartPower_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.AdjustCooldown
struct UBioHealSquadScript_AdjustCooldown_Params
{
	float                                              fCoolDownTime;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.DoesSquadNeedHealing
struct UBioHealSquadScript_DoesSquadNeedHealing_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.GetCooldownMultiForSquad
struct UBioHealSquadScript_GetCooldownMultiForSquad_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioHealSquadScript.GetHealAmountForSquad
struct UBioHealSquadScript_GetHealAmountForSquad_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fHealAmount;                                              // (Parm, OutParm)
	float                                              fToxicAmount;                                             // (Parm, OutParm)
};

// Function BIOG_Powers.BioHexBarrierScript.OnImpact
struct UBioHexBarrierScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioImmunityScript.OnImpact
struct UBioImmunityScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioImmunityScript.StartPhase
struct UBioImmunityScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioLanceArmScript.OnImpact
struct UBioLanceArmScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioLanceArmScript.StartPhase
struct UBioLanceArmScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioLanceArmScript.InitializePowerScript
struct UBioLanceArmScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioLiftScript.OnImpact
struct UBioLiftScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioLiftScript.StartPhase
struct UBioLiftScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioLiftPLCScript.OnImpact
struct UBioLiftPLCScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioMarksmanScript.OnImpact
struct UBioMarksmanScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioMarksmanScript.StartPhase
struct UBioMarksmanScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioNeuralShockScript.OnImpact
struct UBioNeuralShockScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioNeuralShockScript.StartPhase
struct UBioNeuralShockScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioNeuralShockScript.InitializePowerScript
struct UBioNeuralShockScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioOverkillScript.OnImpact
struct UBioOverkillScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioOverkillScript.StartPhase
struct UBioOverkillScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioRegenBurstScript.OnImpact
struct UBioRegenBurstScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioRepairScript.OnImpact
struct UBioRepairScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioRepairScript.StartPhase
struct UBioRepairScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioRepairScript.CanStartPower
struct UBioRepairScript_CanStartPower_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioRepairScript.GetSquadElectronicsRank
struct UBioRepairScript_GetSquadElectronicsRank_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSabotageScript.OnImpact
struct UBioSabotageScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSabotageScript.StartPhase
struct UBioSabotageScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSabotageScript.InitializePowerScript
struct UBioSabotageScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioSabotageSuicideScript.EndPhase
struct UBioSabotageSuicideScript_EndPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSabotageSuicideScript.InitializePowerScript
struct UBioSabotageSuicideScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioShieldBoostScript.OnImpact
struct UBioShieldBoostScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioShieldBoostScript.StartPhase
struct UBioShieldBoostScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioShieldBoostScript.CanStartPower
struct UBioShieldBoostScript_CanStartPower_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioShieldEntrenchScript.OnImpact
struct UBioShieldEntrenchScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioShieldEntrenchScript.StartPhase
struct UBioShieldEntrenchScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSiegePulseScript.OnImpact
struct UBioSiegePulseScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSiegePulseScript.StartPhase
struct UBioSiegePulseScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSiegePulseScript.InitializePowerScript
struct UBioSiegePulseScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioSingularityScript.OnImpact
struct UBioSingularityScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSingularityScript.StartPhase
struct UBioSingularityScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSingularityScript.BumpUpFromFloor
struct UBioSingularityScript_BumpUpFromFloor_Params
{
	struct FVector                                     vOriginalLocation;                                        // (Parm)
	float                                              fBumpDistance;                                            // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSingularityScript.InitializePowerScript
struct UBioSingularityScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioSmashScript.OnImpact
struct UBioSmashScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSmashScript.StartPhase
struct UBioSmashScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSmashScript.InitializePowerScript
struct UBioSmashScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioSniperCritScript.OnImpact
struct UBioSniperCritScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioSniperCritScript.StartPhase
struct UBioSniperCritScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioStasisScript.OnImpact
struct UBioStasisScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioStasisScript.StartPhase
struct UBioStasisScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioTakeDownScript.OnImpact
struct UBioTakeDownScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioTakeDownScript.StartPhase
struct UBioTakeDownScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioTeslaBurstScript.OnImpact
struct UBioTeslaBurstScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioTeslaBurstScript.StartPhase
struct UBioTeslaBurstScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioTeslaBurstScript.InitializePowerScript
struct UBioTeslaBurstScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioThrowScript.OnImpact
struct UBioThrowScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioThrowScript.StartPhase
struct UBioThrowScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioThrowScript.InitializePowerScript
struct UBioThrowScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioThrowWarpScript.OnImpact
struct UBioThrowWarpScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioThrowWarpScript.StartPhase
struct UBioThrowWarpScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioThrowWarpScript.InitializePowerScript
struct UBioThrowWarpScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioToxicSpitScript.OnImpact
struct UBioToxicSpitScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioToxicSpitScript.StartPhase
struct UBioToxicSpitScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioToxicSpitScript.InitializePowerScript
struct UBioToxicSpitScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioToxicSpitSuicideScript.EndPhase
struct UBioToxicSpitSuicideScript_EndPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioToxicSpitSuicideScript.InitializePowerScript
struct UBioToxicSpitSuicideScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioUnityScript.OnImpact
struct UBioUnityScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioUnityScript.CanStartPower
struct UBioUnityScript_CanStartPower_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioUnityScript.DoesSquadHaveDeadMember
struct UBioUnityScript_DoesSquadHaveDeadMember_Params
{
	class AActor*                                      oActor;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioWarpScript.OnImpact
struct UBioWarpScript_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioWarpScript.StartPhase
struct UBioWarpScript_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioWarpScript.InitializePowerScript
struct UBioWarpScript_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

// Function BIOG_Powers.BioArmorEmitter.OnImpact
struct UBioArmorEmitter_OnImpact_Params
{
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fCasterStability;                                         // (Parm)
	class AActor*                                      oImpacted;                                                // (Parm)
	int                                                nPreviouslyImpacted;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioArmorEmitter.StartPhase
struct UBioArmorEmitter_StartPhase_Params
{
	TEnumAsByte<EBioPowerState>                        ePhase;                                                   // (Parm)
	class AActor*                                      oCaster;                                                  // (Parm)
	float                                              fDuration;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_Powers.BioArmorEmitter.InitializePowerScript
struct UBioArmorEmitter_InitializePowerScript_Params
{
	class UBioPower*                                   pPower;                                                   // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
