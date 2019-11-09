// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Powers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BIOG_Powers.BioPowerScriptDesign.AdjustInventoryResource
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// TEnumAsByte<EInventoryResourceTypes> eResource                      (Parm)
// float                          fAmount                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::AdjustInventoryResource(class AActor* oActor, TEnumAsByte<EInventoryResourceTypes> eResource, float fAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.AdjustInventoryResource");

	UBioPowerScriptDesign_AdjustInventoryResource_Params params;
	params.oActor = oActor;
	params.eResource = eResource;
	params.fAmount = fAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectCarnageSetup
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// int                            nNumberOfUses                  (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectCarnageSetup(class AActor* oCaster, int nNumberOfUses, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectCarnageSetup");

	UBioPowerScriptDesign_EffectCarnageSetup_Params params;
	params.oCaster = oCaster;
	params.nNumberOfUses = nNumberOfUses;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.InstantRegenerateShield
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// float                          fPercentOfShieldRegained       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::InstantRegenerateShield(class AActor* oActor, float fPercentOfShieldRegained)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.InstantRegenerateShield");

	UBioPowerScriptDesign_InstantRegenerateShield_Params params;
	params.oActor = oActor;
	params.fPercentOfShieldRegained = fPercentOfShieldRegained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.IncreaseAllPowerCooldowns
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// float                          fPercentOfTotalToIncreaseBy    (Parm)
// bool                           bIncreaseTech                  (OptionalParm, Parm)
// bool                           bIncreaseBiotic                (OptionalParm, Parm)
// bool                           bIncreaseWeapon                (OptionalParm, Parm)
// bool                           bIncreaseCombat                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::IncreaseAllPowerCooldowns(class AActor* oActor, float fPercentOfTotalToIncreaseBy, bool bIncreaseTech, bool bIncreaseBiotic, bool bIncreaseWeapon, bool bIncreaseCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.IncreaseAllPowerCooldowns");

	UBioPowerScriptDesign_IncreaseAllPowerCooldowns_Params params;
	params.oActor = oActor;
	params.fPercentOfTotalToIncreaseBy = fPercentOfTotalToIncreaseBy;
	params.bIncreaseTech = bIncreaseTech;
	params.bIncreaseBiotic = bIncreaseBiotic;
	params.bIncreaseWeapon = bIncreaseWeapon;
	params.bIncreaseCombat = bIncreaseCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.ClearAllPowerCooldowns
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::ClearAllPowerCooldowns(class AActor* oActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.ClearAllPowerCooldowns");

	UBioPowerScriptDesign_ClearAllPowerCooldowns_Params params;
	params.oActor = oActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectSingularity
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// struct FVector                 vSingularityLocation           (Parm)
// float                          fForce                         (Parm)
// float                          fForceInterval                 (Parm)
// float                          fDuration                      (Parm)
// float                          fBubbleRadius                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectSingularity(class AActor* oCaster, class AActor* oImpacted, const struct FVector& vSingularityLocation, float fForce, float fForceInterval, float fDuration, float fBubbleRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectSingularity");

	UBioPowerScriptDesign_EffectSingularity_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.vSingularityLocation = vSingularityLocation;
	params.fForce = fForce;
	params.fForceInterval = fForceInterval;
	params.fDuration = fDuration;
	params.fBubbleRadius = fBubbleRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectRagdoll
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// int                            nGroupID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectRagdoll(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectRagdoll");

	UBioPowerScriptDesign_EffectRagdoll_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.nGroupID = nGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectEntrenchShield
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fShieldInc                     (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectEntrenchShield(class AActor* oCaster, class AActor* oImpacted, float fShieldInc, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectEntrenchShield");

	UBioPowerScriptDesign_EffectEntrenchShield_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fShieldInc = fShieldInc;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectRegenerateShield
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fAmountPerInterval             (Parm)
// float                          fInterval                      (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectRegenerateShield(class AActor* oCaster, class AActor* oImpacted, float fAmountPerInterval, float fInterval, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectRegenerateShield");

	UBioPowerScriptDesign_EffectRegenerateShield_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fAmountPerInterval = fAmountPerInterval;
	params.fInterval = fInterval;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectDamageVulnerability
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDamageMultiplier              (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectDamageVulnerability(class AActor* oCaster, class AActor* oImpacted, float fDamageMultiplier, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectDamageVulnerability");

	UBioPowerScriptDesign_EffectDamageVulnerability_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDamageMultiplier = fDamageMultiplier;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectRegen
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fHealingFactor                 (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectRegen(class AActor* oCaster, float fHealingFactor, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectRegen");

	UBioPowerScriptDesign_EffectRegen_Params params;
	params.oCaster = oCaster;
	params.fHealingFactor = fHealingFactor;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectHealInstant
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fHealth                        (Parm)
// float                          fToxic                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectHealInstant(class AActor* oCaster, class AActor* oImpacted, float fHealth, float fToxic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectHealInstant");

	UBioPowerScriptDesign_EffectHealInstant_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fHealth = fHealth;
	params.fToxic = fToxic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectHeal
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fHealthPerInterval             (Parm)
// float                          fToxicPerInterval              (Parm)
// float                          fInterval                      (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectHeal(class AActor* oCaster, class AActor* oImpacted, float fHealthPerInterval, float fToxicPerInterval, float fInterval, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectHeal");

	UBioPowerScriptDesign_EffectHeal_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fHealthPerInterval = fHealthPerInterval;
	params.fToxicPerInterval = fToxicPerInterval;
	params.fInterval = fInterval;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectCombatBoost
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// float                          fDmgDurBonus                   (Parm)
// float                          fRegenBonus                    (Parm)
// float                          fSuppResistBonus               (Parm)
// float                          fMobilityBonus                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectCombatBoost(class AActor* oCaster, class AActor* oImpacted, float fDuration, float fDmgDurBonus, float fRegenBonus, float fSuppResistBonus, float fMobilityBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectCombatBoost");

	UBioPowerScriptDesign_EffectCombatBoost_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.fDmgDurBonus = fDmgDurBonus;
	params.fRegenBonus = fRegenBonus;
	params.fSuppResistBonus = fSuppResistBonus;
	params.fMobilityBonus = fMobilityBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectImmunity
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fDamageResistBonus             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectImmunity(class AActor* oCaster, float fDuration, float fDamageResistBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectImmunity");

	UBioPowerScriptDesign_EffectImmunity_Params params;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fDamageResistBonus = fDamageResistBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectSniperCritical
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fDamageBonus                   (Parm)
// float                          fStunDuration                  (OptionalParm, Parm)
// float                          fMaxDriftRed                   (OptionalParm, Parm)
// float                          fMinDriftRed                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectSniperCritical(class AActor* oCaster, float fDuration, float fDamageBonus, float fStunDuration, float fMaxDriftRed, float fMinDriftRed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectSniperCritical");

	UBioPowerScriptDesign_EffectSniperCritical_Params params;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fDamageBonus = fDamageBonus;
	params.fStunDuration = fStunDuration;
	params.fMaxDriftRed = fMaxDriftRed;
	params.fMinDriftRed = fMinDriftRed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectOverkill
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fSuppDamage                    (Parm)
// float                          fKickbackRed                   (Parm)
// float                          fHeatRed                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectOverkill(class AActor* oCaster, float fDuration, float fSuppDamage, float fKickbackRed, float fHeatRed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectOverkill");

	UBioPowerScriptDesign_EffectOverkill_Params params;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fSuppDamage = fSuppDamage;
	params.fKickbackRed = fKickbackRed;
	params.fHeatRed = fHeatRed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectMarksman
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fMaxDriftRed                   (Parm)
// float                          fMinDriftRed                   (Parm)
// float                          fDamageBonus                   (Parm)
// float                          fRPSBonus                      (Parm)
// float                          fHeatRed                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectMarksman(class AActor* oCaster, float fDuration, float fMaxDriftRed, float fMinDriftRed, float fDamageBonus, float fRPSBonus, float fHeatRed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectMarksman");

	UBioPowerScriptDesign_EffectMarksman_Params params;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fMaxDriftRed = fMaxDriftRed;
	params.fMinDriftRed = fMinDriftRed;
	params.fDamageBonus = fDamageBonus;
	params.fRPSBonus = fRPSBonus;
	params.fHeatRed = fHeatRed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectCorrosion
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fCorrosion                     (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectCorrosion(class AActor* oImpacted, class AActor* oCaster, float fCorrosion, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectCorrosion");

	UBioPowerScriptDesign_EffectCorrosion_Params params;
	params.oImpacted = oImpacted;
	params.oCaster = oCaster;
	params.fCorrosion = fCorrosion;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectSuppressingFire
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fDriftInc                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectSuppressingFire(class AActor* oCaster, float fDuration, float fDriftInc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectSuppressingFire");

	UBioPowerScriptDesign_EffectSuppressingFire_Params params;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fDriftInc = fDriftInc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectZeroGLift
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// float                          fLiftForce                     (Parm)
// float                          fLiftDistance                  (Parm)
// float                          fDeceleration                  (Parm)
// float                          fMinVelocity                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectZeroGLift(class AActor* oImpacted, class AActor* oCaster, float fDuration, float fLiftForce, float fLiftDistance, float fDeceleration, float fMinVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectZeroGLift");

	UBioPowerScriptDesign_EffectZeroGLift_Params params;
	params.oImpacted = oImpacted;
	params.oCaster = oCaster;
	params.fDuration = fDuration;
	params.fLiftForce = fLiftForce;
	params.fLiftDistance = fLiftDistance;
	params.fDeceleration = fDeceleration;
	params.fMinVelocity = fMinVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectAIHacking
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectAIHacking(class AActor* oCaster, class AActor* oImpacted, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectAIHacking");

	UBioPowerScriptDesign_EffectAIHacking_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectDisablePowers
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// int                            nGFXGroup                      (Parm)
// bool                           bDisableTech                   (Parm)
// bool                           bDisableBiotics                (Parm)
// bool                           bDisableWeaponPowers           (Parm)
// bool                           bDisableCombat                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectDisablePowers(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, bool bDisableTech, bool bDisableBiotics, bool bDisableWeaponPowers, bool bDisableCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectDisablePowers");

	UBioPowerScriptDesign_EffectDisablePowers_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.nGFXGroup = nGFXGroup;
	params.bDisableTech = bDisableTech;
	params.bDisableBiotics = bDisableBiotics;
	params.bDisableWeaponPowers = bDisableWeaponPowers;
	params.bDisableCombat = bDisableCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectOverheatWeapons
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// float                          fHeat                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectOverheatWeapons(class AActor* oCaster, class AActor* oImpacted, float fDuration, float fHeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectOverheatWeapons");

	UBioPowerScriptDesign_EffectOverheatWeapons_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.fHeat = fHeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectDisableWeapons
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// int                            nGFXGroup                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectDisableWeapons(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectDisableWeapons");

	UBioPowerScriptDesign_EffectDisableWeapons_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.nGFXGroup = nGFXGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectDisableActions
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oImpacted                      (Parm)
// float                          fDuration                      (Parm)
// int                            nGFXGroup                      (Parm)
// bool                           bDisableActionQueue            (OptionalParm, Parm)
// bool                           bDisableMovementStack          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectDisableActions(class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, bool bDisableActionQueue, bool bDisableMovementStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectDisableActions");

	UBioPowerScriptDesign_EffectDisableActions_Params params;
	params.oCaster = oCaster;
	params.oImpacted = oImpacted;
	params.fDuration = fDuration;
	params.nGFXGroup = nGFXGroup;
	params.bDisableActionQueue = bDisableActionQueue;
	params.bDisableMovementStack = bDisableMovementStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectAdjustStability
// (Defined, Public)
// Parameters:
// class ABioPawn*                oTarget                        (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fAmount                        (Parm)
// float                          fApplyInterval                 (Parm)
// float                          fTotalTime                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectAdjustStability(class ABioPawn* oTarget, class AActor* oCaster, float fAmount, float fApplyInterval, float fTotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectAdjustStability");

	UBioPowerScriptDesign_EffectAdjustStability_Params params;
	params.oTarget = oTarget;
	params.oCaster = oCaster;
	params.fAmount = fAmount;
	params.fApplyInterval = fApplyInterval;
	params.fTotalTime = fTotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectDamageOverTime
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDamagePerInterval             (Parm)
// struct FVector                 vMomentumPerInterval           (Parm)
// class UBioDamageType*          pDamage                        (Parm)
// float                          fInterval                      (Parm)
// float                          fDuration                      (Parm)
// int                            nGroup                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectDamageOverTime(class AActor* oImpacted, class AActor* oCaster, float fDamagePerInterval, const struct FVector& vMomentumPerInterval, class UBioDamageType* pDamage, float fInterval, float fDuration, int nGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectDamageOverTime");

	UBioPowerScriptDesign_EffectDamageOverTime_Params params;
	params.oImpacted = oImpacted;
	params.oCaster = oCaster;
	params.fDamagePerInterval = fDamagePerInterval;
	params.vMomentumPerInterval = vMomentumPerInterval;
	params.pDamage = pDamage;
	params.fInterval = fInterval;
	params.fDuration = fDuration;
	params.nGroup = nGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.EffectTakeDamage
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDamage                        (Parm)
// struct FVector                 vMomentum                      (Parm)
// class UBioDamageType*          pDamage                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::EffectTakeDamage(class AActor* oImpacted, class AActor* oCaster, float fDamage, const struct FVector& vMomentum, class UBioDamageType* pDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.EffectTakeDamage");

	UBioPowerScriptDesign_EffectTakeDamage_Params params;
	params.oImpacted = oImpacted;
	params.oCaster = oCaster;
	params.fDamage = fDamage;
	params.vMomentum = vMomentum;
	params.pDamage = pDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.SpawnBeacon
// (Defined, Public)
// Parameters:
// class UBioActorBehavior*       oCasterBehavior                (Parm)
// struct FString                 sBeaconActorType               (Parm, NeedCtorLink)
// struct FVector                 vLocation                      (Parm)
// struct FRotator                vFacing                        (Parm)
// float                          fDuration                      (Parm)
// bool                           bFloatingBeacon                (OptionalParm, Parm)
// bool                           bSnapToFloor                   (OptionalParm, Parm)
// bool                           bSpawnAsProxMine               (OptionalParm, Parm)
// float                          fSquadActivateDelay            (OptionalParm, Parm)
// float                          fRadiusMulti                   (OptionalParm, Parm)
// float                          fDamageMulti                   (OptionalParm, Parm)
// class AActor*                  oOwner                         (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UBioPowerScriptDesign::SpawnBeacon(class UBioActorBehavior* oCasterBehavior, const struct FString& sBeaconActorType, const struct FVector& vLocation, const struct FRotator& vFacing, float fDuration, bool bFloatingBeacon, bool bSnapToFloor, bool bSpawnAsProxMine, float fSquadActivateDelay, float fRadiusMulti, float fDamageMulti, class AActor* oOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.SpawnBeacon");

	UBioPowerScriptDesign_SpawnBeacon_Params params;
	params.oCasterBehavior = oCasterBehavior;
	params.sBeaconActorType = sBeaconActorType;
	params.vLocation = vLocation;
	params.vFacing = vFacing;
	params.fDuration = fDuration;
	params.bFloatingBeacon = bFloatingBeacon;
	params.bSnapToFloor = bSnapToFloor;
	params.bSpawnAsProxMine = bSpawnAsProxMine;
	params.fSquadActivateDelay = fSquadActivateDelay;
	params.fRadiusMulti = fRadiusMulti;
	params.fDamageMulti = fDamageMulti;
	params.oOwner = oOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.SpawnBarrier
// (Defined, Public)
// Parameters:
// class UBioActorBehavior*       oCasterBehavior                (Parm)
// struct FString                 sBarrierActorType              (Parm, NeedCtorLink)
// struct FVector                 vLocation                      (Parm)
// struct FRotator                vFacing                        (Parm)
// float                          fHealth                        (Parm)
// float                          fDuration                      (Parm)
// bool                           bSnapToFloor                   (OptionalParm, Parm)
// bool                           bAddToSquadCover               (OptionalParm, Parm)
// class AActor*                  oOwner                         (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UBioPowerScriptDesign::SpawnBarrier(class UBioActorBehavior* oCasterBehavior, const struct FString& sBarrierActorType, const struct FVector& vLocation, const struct FRotator& vFacing, float fHealth, float fDuration, bool bSnapToFloor, bool bAddToSquadCover, class AActor* oOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.SpawnBarrier");

	UBioPowerScriptDesign_SpawnBarrier_Params params;
	params.oCasterBehavior = oCasterBehavior;
	params.sBarrierActorType = sBarrierActorType;
	params.vLocation = vLocation;
	params.vFacing = vFacing;
	params.fHealth = fHealth;
	params.fDuration = fDuration;
	params.bSnapToFloor = bSnapToFloor;
	params.bAddToSquadCover = bAddToSquadCover;
	params.oOwner = oOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetFactionRelationship
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// class AActor*                  oTarget                        (Parm)
// TEnumAsByte<EBioFactionRelationship> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBioFactionRelationship> UBioPowerScriptDesign::GetFactionRelationship(class AActor* oCaster, class AActor* oTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetFactionRelationship");

	UBioPowerScriptDesign_GetFactionRelationship_Params params;
	params.oCaster = oCaster;
	params.oTarget = oTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetTechResistance
// (Final, Defined, Private)
// Parameters:
// class AActor*                  oTarget                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioPowerScriptDesign::GetTechResistance(class AActor* oTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetTechResistance");

	UBioPowerScriptDesign_GetTechResistance_Params params;
	params.oTarget = oTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetBioticResistance
// (Final, Defined, Private)
// Parameters:
// class AActor*                  oTarget                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioPowerScriptDesign::GetBioticResistance(class AActor* oTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetBioticResistance");

	UBioPowerScriptDesign_GetBioticResistance_Params params;
	params.oTarget = oTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetTargetResistance
// (Defined, Public)
// Parameters:
// class AActor*                  oTarget                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioPowerScriptDesign::GetTargetResistance(class AActor* oTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetTargetResistance");

	UBioPowerScriptDesign_GetTargetResistance_Params params;
	params.oTarget = oTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetDistanceModifier
// (Defined, Public, HasDefaults)
// Parameters:
// class AActor*                  oTarget                        (Parm)
// TEnumAsByte<EBioAttributesDamageFalloff> eFalloff                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioPowerScriptDesign::GetDistanceModifier(class AActor* oTarget, TEnumAsByte<EBioAttributesDamageFalloff> eFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetDistanceModifier");

	UBioPowerScriptDesign_GetDistanceModifier_Params params;
	params.oTarget = oTarget;
	params.eFalloff = eFalloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetDmgDurModifier
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioPowerScriptDesign::GetDmgDurModifier(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetDmgDurModifier");

	UBioPowerScriptDesign_GetDmgDurModifier_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.GetPhysicsLevel
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBioPowerScriptDesign::GetPhysicsLevel(class AActor* oImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.GetPhysicsLevel");

	UBioPowerScriptDesign_GetPhysicsLevel_Params params;
	params.oImpacted = oImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.IsOfRace
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// TEnumAsByte<EBio_Appr_CharacterTalentRaceType> eRace                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::IsOfRace(class AActor* oImpacted, TEnumAsByte<EBio_Appr_CharacterTalentRaceType> eRace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.IsOfRace");

	UBioPowerScriptDesign_IsOfRace_Params params;
	params.oImpacted = oImpacted;
	params.eRace = eRace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.HasShields
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// bool                           bCheckMax                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::HasShields(class AActor* oImpacted, bool bCheckMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.HasShields");

	UBioPowerScriptDesign_HasShields_Params params;
	params.oImpacted = oImpacted;
	params.bCheckMax = bCheckMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.IsDeadBody
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::IsDeadBody(class AActor* oImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.IsDeadBody");

	UBioPowerScriptDesign_IsDeadBody_Params params;
	params.oImpacted = oImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.IsPlaceable
// (Defined, Public)
// Parameters:
// class AActor*                  oImpacted                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioPowerScriptDesign::IsPlaceable(class AActor* oImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.IsPlaceable");

	UBioPowerScriptDesign_IsPlaceable_Params params;
	params.oImpacted = oImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioPowerScriptDesign.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioPowerScriptDesign::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioPowerScriptDesign.InitializePowerScript");

	UBioPowerScriptDesign_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioAdrenalineScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioAdrenalineScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioAdrenalineScript.OnImpact");

	UBioAdrenalineScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioAdrenalineScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioAdrenalineScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioAdrenalineScript.StartPhase");

	UBioAdrenalineScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioBarrierScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioBarrierScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioBarrierScript.OnImpact");

	UBioBarrierScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioCarnageScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioCarnageScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioCarnageScript.OnImpact");

	UBioCarnageScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioCarnageScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioCarnageScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioCarnageScript.StartPhase");

	UBioCarnageScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioCarnageScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioCarnageScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioCarnageScript.InitializePowerScript");

	UBioCarnageScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioCarnageSetupScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioCarnageSetupScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioCarnageSetupScript.OnImpact");

	UBioCarnageSetupScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSpawnBeacon.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSpawnBeacon::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSpawnBeacon.OnImpact");

	UBioSpawnBeacon_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSpawnBeacon.EndPhase
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSpawnBeacon::EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSpawnBeacon.EndPhase");

	UBioSpawnBeacon_EndPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSpawnBeacon.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSpawnBeacon::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSpawnBeacon.StartPhase");

	UBioSpawnBeacon_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSpawnBeacon.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSpawnBeacon::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSpawnBeacon.InitializePowerScript");

	UBioSpawnBeacon_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioDampingScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioDampingScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioDampingScript.OnImpact");

	UBioDampingScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioDampingScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioDampingScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioDampingScript.StartPhase");

	UBioDampingScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioDampingScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioDampingScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioDampingScript.InitializePowerScript");

	UBioDampingScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioDampingSuicideScript.EndPhase
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioDampingSuicideScript::EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioDampingSuicideScript.EndPhase");

	UBioDampingSuicideScript_EndPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioDampingSuicideScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioDampingSuicideScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioDampingSuicideScript.InitializePowerScript");

	UBioDampingSuicideScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioEMPScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioEMPScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioEMPScript.OnImpact");

	UBioEMPScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioEMPScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioEMPScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioEMPScript.StartPhase");

	UBioEMPScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioEMPScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioEMPScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioEMPScript.InitializePowerScript");

	UBioEMPScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioEMPSuicideScript.EndPhase
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioEMPSuicideScript::EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioEMPSuicideScript.EndPhase");

	UBioEMPSuicideScript_EndPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioEMPSuicideScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioEMPSuicideScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioEMPSuicideScript.InitializePowerScript");

	UBioEMPSuicideScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioFakePowerScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioFakePowerScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioFakePowerScript.OnImpact");

	UBioFakePowerScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioFakePowerScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioFakePowerScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioFakePowerScript.StartPhase");

	UBioFakePowerScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioGethCarnageScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioGethCarnageScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioGethCarnageScript.OnImpact");

	UBioGethCarnageScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioGethCarnageScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioGethCarnageScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioGethCarnageScript.StartPhase");

	UBioGethCarnageScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioGethCarnageScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioGethCarnageScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioGethCarnageScript.InitializePowerScript");

	UBioGethCarnageScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioHackingScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHackingScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHackingScript.OnImpact");

	UBioHackingScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHackingScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHackingScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHackingScript.StartPhase");

	UBioHackingScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealScript.OnImpact");

	UBioHealScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealScript.StartPhase");

	UBioHealScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSelfScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSelfScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSelfScript.OnImpact");

	UBioHealSelfScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSelfScript.CanStartPower
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSelfScript::CanStartPower(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSelfScript.CanStartPower");

	UBioHealSelfScript_CanStartPower_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSquadScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.OnImpact");

	UBioHealSquadScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSquadScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.StartPhase");

	UBioHealSquadScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.CanStartPower
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSquadScript::CanStartPower(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.CanStartPower");

	UBioHealSquadScript_CanStartPower_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.AdjustCooldown
// (Defined, Event, Public, HasOutParms)
// Parameters:
// float                          fCoolDownTime                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSquadScript::AdjustCooldown(float* fCoolDownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.AdjustCooldown");

	UBioHealSquadScript_AdjustCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fCoolDownTime != nullptr)
		*fCoolDownTime = params.fCoolDownTime;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.DoesSquadNeedHealing
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHealSquadScript::DoesSquadNeedHealing(class AActor* oActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.DoesSquadNeedHealing");

	UBioHealSquadScript_DoesSquadNeedHealing_Params params;
	params.oActor = oActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.GetCooldownMultiForSquad
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBioHealSquadScript::GetCooldownMultiForSquad(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.GetCooldownMultiForSquad");

	UBioHealSquadScript_GetCooldownMultiForSquad_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioHealSquadScript.GetHealAmountForSquad
// (Defined, Public, HasOutParms)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fHealAmount                    (Parm, OutParm)
// float                          fToxicAmount                   (Parm, OutParm)

void UBioHealSquadScript::GetHealAmountForSquad(class AActor* oCaster, float* fHealAmount, float* fToxicAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHealSquadScript.GetHealAmountForSquad");

	UBioHealSquadScript_GetHealAmountForSquad_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fHealAmount != nullptr)
		*fHealAmount = params.fHealAmount;
	if (fToxicAmount != nullptr)
		*fToxicAmount = params.fToxicAmount;
}


// Function BIOG_Powers.BioHexBarrierScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioHexBarrierScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioHexBarrierScript.OnImpact");

	UBioHexBarrierScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioImmunityScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioImmunityScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioImmunityScript.OnImpact");

	UBioImmunityScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioImmunityScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioImmunityScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioImmunityScript.StartPhase");

	UBioImmunityScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioLanceArmScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioLanceArmScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLanceArmScript.OnImpact");

	UBioLanceArmScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioLanceArmScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioLanceArmScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLanceArmScript.StartPhase");

	UBioLanceArmScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioLanceArmScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioLanceArmScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLanceArmScript.InitializePowerScript");

	UBioLanceArmScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioLiftScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioLiftScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLiftScript.OnImpact");

	UBioLiftScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioLiftScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioLiftScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLiftScript.StartPhase");

	UBioLiftScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioLiftPLCScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioLiftPLCScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioLiftPLCScript.OnImpact");

	UBioLiftPLCScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioMarksmanScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioMarksmanScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioMarksmanScript.OnImpact");

	UBioMarksmanScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioMarksmanScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioMarksmanScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioMarksmanScript.StartPhase");

	UBioMarksmanScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioNeuralShockScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioNeuralShockScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioNeuralShockScript.OnImpact");

	UBioNeuralShockScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioNeuralShockScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioNeuralShockScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioNeuralShockScript.StartPhase");

	UBioNeuralShockScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioNeuralShockScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioNeuralShockScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioNeuralShockScript.InitializePowerScript");

	UBioNeuralShockScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioOverkillScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioOverkillScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioOverkillScript.OnImpact");

	UBioOverkillScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioOverkillScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioOverkillScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioOverkillScript.StartPhase");

	UBioOverkillScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioRegenBurstScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioRegenBurstScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioRegenBurstScript.OnImpact");

	UBioRegenBurstScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioRepairScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioRepairScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioRepairScript.OnImpact");

	UBioRepairScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioRepairScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioRepairScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioRepairScript.StartPhase");

	UBioRepairScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioRepairScript.CanStartPower
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioRepairScript::CanStartPower(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioRepairScript.CanStartPower");

	UBioRepairScript_CanStartPower_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioRepairScript.GetSquadElectronicsRank
// (Defined, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBioRepairScript::GetSquadElectronicsRank(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioRepairScript.GetSquadElectronicsRank");

	UBioRepairScript_GetSquadElectronicsRank_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSabotageScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSabotageScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSabotageScript.OnImpact");

	UBioSabotageScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSabotageScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSabotageScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSabotageScript.StartPhase");

	UBioSabotageScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSabotageScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSabotageScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSabotageScript.InitializePowerScript");

	UBioSabotageScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioSabotageSuicideScript.EndPhase
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSabotageSuicideScript::EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSabotageSuicideScript.EndPhase");

	UBioSabotageSuicideScript_EndPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSabotageSuicideScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSabotageSuicideScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSabotageSuicideScript.InitializePowerScript");

	UBioSabotageSuicideScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioShieldBoostScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioShieldBoostScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioShieldBoostScript.OnImpact");

	UBioShieldBoostScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioShieldBoostScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioShieldBoostScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioShieldBoostScript.StartPhase");

	UBioShieldBoostScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioShieldBoostScript.CanStartPower
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioShieldBoostScript::CanStartPower(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioShieldBoostScript.CanStartPower");

	UBioShieldBoostScript_CanStartPower_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioShieldEntrenchScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioShieldEntrenchScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioShieldEntrenchScript.OnImpact");

	UBioShieldEntrenchScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioShieldEntrenchScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioShieldEntrenchScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioShieldEntrenchScript.StartPhase");

	UBioShieldEntrenchScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSiegePulseScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSiegePulseScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSiegePulseScript.OnImpact");

	UBioSiegePulseScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSiegePulseScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSiegePulseScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSiegePulseScript.StartPhase");

	UBioSiegePulseScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSiegePulseScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSiegePulseScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSiegePulseScript.InitializePowerScript");

	UBioSiegePulseScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioSingularityScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSingularityScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSingularityScript.OnImpact");

	UBioSingularityScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSingularityScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSingularityScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSingularityScript.StartPhase");

	UBioSingularityScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSingularityScript.BumpUpFromFloor
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 vOriginalLocation              (Parm)
// float                          fBumpDistance                  (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UBioSingularityScript::BumpUpFromFloor(const struct FVector& vOriginalLocation, float fBumpDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSingularityScript.BumpUpFromFloor");

	UBioSingularityScript_BumpUpFromFloor_Params params;
	params.vOriginalLocation = vOriginalLocation;
	params.fBumpDistance = fBumpDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSingularityScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSingularityScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSingularityScript.InitializePowerScript");

	UBioSingularityScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioSmashScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSmashScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSmashScript.OnImpact");

	UBioSmashScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSmashScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSmashScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSmashScript.StartPhase");

	UBioSmashScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSmashScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioSmashScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSmashScript.InitializePowerScript");

	UBioSmashScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioSniperCritScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSniperCritScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSniperCritScript.OnImpact");

	UBioSniperCritScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioSniperCritScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioSniperCritScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioSniperCritScript.StartPhase");

	UBioSniperCritScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioStasisScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioStasisScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioStasisScript.OnImpact");

	UBioStasisScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioStasisScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioStasisScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioStasisScript.StartPhase");

	UBioStasisScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioTakeDownScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioTakeDownScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioTakeDownScript.OnImpact");

	UBioTakeDownScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioTakeDownScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioTakeDownScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioTakeDownScript.StartPhase");

	UBioTakeDownScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioTeslaBurstScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioTeslaBurstScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioTeslaBurstScript.OnImpact");

	UBioTeslaBurstScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioTeslaBurstScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioTeslaBurstScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioTeslaBurstScript.StartPhase");

	UBioTeslaBurstScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioTeslaBurstScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioTeslaBurstScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioTeslaBurstScript.InitializePowerScript");

	UBioTeslaBurstScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioThrowScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioThrowScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowScript.OnImpact");

	UBioThrowScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioThrowScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioThrowScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowScript.StartPhase");

	UBioThrowScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioThrowScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioThrowScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowScript.InitializePowerScript");

	UBioThrowScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioThrowWarpScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioThrowWarpScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowWarpScript.OnImpact");

	UBioThrowWarpScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioThrowWarpScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioThrowWarpScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowWarpScript.StartPhase");

	UBioThrowWarpScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioThrowWarpScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioThrowWarpScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioThrowWarpScript.InitializePowerScript");

	UBioThrowWarpScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioToxicSpitScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioToxicSpitScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioToxicSpitScript.OnImpact");

	UBioToxicSpitScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioToxicSpitScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioToxicSpitScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioToxicSpitScript.StartPhase");

	UBioToxicSpitScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioToxicSpitScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioToxicSpitScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioToxicSpitScript.InitializePowerScript");

	UBioToxicSpitScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioToxicSpitSuicideScript.EndPhase
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioToxicSpitSuicideScript::EndPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioToxicSpitSuicideScript.EndPhase");

	UBioToxicSpitSuicideScript_EndPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioToxicSpitSuicideScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioToxicSpitSuicideScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioToxicSpitSuicideScript.InitializePowerScript");

	UBioToxicSpitSuicideScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioUnityScript.OnImpact
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioUnityScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioUnityScript.OnImpact");

	UBioUnityScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioUnityScript.CanStartPower
// (Defined, Event, Public)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioUnityScript::CanStartPower(class AActor* oCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioUnityScript.CanStartPower");

	UBioUnityScript_CanStartPower_Params params;
	params.oCaster = oCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioUnityScript.DoesSquadHaveDeadMember
// (Defined, Public)
// Parameters:
// class AActor*                  oActor                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioUnityScript::DoesSquadHaveDeadMember(class AActor* oActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioUnityScript.DoesSquadHaveDeadMember");

	UBioUnityScript_DoesSquadHaveDeadMember_Params params;
	params.oActor = oActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioWarpScript.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioWarpScript::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioWarpScript.OnImpact");

	UBioWarpScript_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioWarpScript.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioWarpScript::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioWarpScript.StartPhase");

	UBioWarpScript_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioWarpScript.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioWarpScript::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioWarpScript.InitializePowerScript");

	UBioWarpScript_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_Powers.BioArmorEmitter.OnImpact
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class AActor*                  oCaster                        (Parm)
// float                          fCasterStability               (Parm)
// class AActor*                  oImpacted                      (Parm)
// int                            nPreviouslyImpacted            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioArmorEmitter::OnImpact(class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioArmorEmitter.OnImpact");

	UBioArmorEmitter_OnImpact_Params params;
	params.oCaster = oCaster;
	params.fCasterStability = fCasterStability;
	params.oImpacted = oImpacted;
	params.nPreviouslyImpacted = nPreviouslyImpacted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioArmorEmitter.StartPhase
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EBioPowerState>    ePhase                         (Parm)
// class AActor*                  oCaster                        (Parm)
// float                          fDuration                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBioArmorEmitter::StartPhase(TEnumAsByte<EBioPowerState> ePhase, class AActor* oCaster, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioArmorEmitter.StartPhase");

	UBioArmorEmitter_StartPhase_Params params;
	params.ePhase = ePhase;
	params.oCaster = oCaster;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_Powers.BioArmorEmitter.InitializePowerScript
// (Defined, Event, Public)
// Parameters:
// class UBioPower*               pPower                         (Parm)

void UBioArmorEmitter::InitializePowerScript(class UBioPower* pPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Powers.BioArmorEmitter.InitializePowerScript");

	UBioArmorEmitter_InitializePowerScript_Params params;
	params.pPower = pPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
