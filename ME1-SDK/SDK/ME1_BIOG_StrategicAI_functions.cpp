// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_StrategicAI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BIOG_StrategicAI.BioAI_SarenHopper.OnDamaged
// (Defined, Event, Public)
// Parameters:
// class AController*             oInstigator                    (Parm)
// float                          fDamage                        (Parm)

void ABioAI_SarenHopper::OnDamaged(class AController* oInstigator, float fDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioAI_SarenHopper.OnDamaged");

	ABioAI_SarenHopper_OnDamaged_Params params;
	params.oInstigator = oInstigator;
	params.fDamage = fDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnProximityAlarm
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class AActor*                  oTarget                        (Parm)
// int                            nRelationship                  (Parm)

void ABioBaseSquadDesign::OnProximityAlarm(class APawn* oMember, class AActor* oTarget, int nRelationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnProximityAlarm");

	ABioBaseSquadDesign_OnProximityAlarm_Params params;
	params.oMember = oMember;
	params.oTarget = oTarget;
	params.nRelationship = nRelationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnSquadSeen
// (Defined, Event, Public)
// Parameters:
// class ABioBaseSquad*           oSquad                         (Parm)

void ABioBaseSquadDesign::OnSquadSeen(class ABioBaseSquad* oSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnSquadSeen");

	ABioBaseSquadDesign_OnSquadSeen_Params params;
	params.oSquad = oSquad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnDamaged
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class AController*             oInstigator                    (Parm)
// float                          fDamage                        (Parm)

void ABioBaseSquadDesign::OnDamaged(class APawn* oMember, class AController* oInstigator, float fDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnDamaged");

	ABioBaseSquadDesign_OnDamaged_Params params;
	params.oMember = oMember;
	params.oInstigator = oInstigator;
	params.fDamage = fDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnCastAt
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmPower                        (Parm)

void ABioBaseSquadDesign::OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnCastAt");

	ABioBaseSquadDesign_OnCastAt_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmPower = nmPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnAttacked
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmWeapon                       (Parm)

void ABioBaseSquadDesign::OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnAttacked");

	ABioBaseSquadDesign_OnAttacked_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmWeapon = nmWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnDeath
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class AController*             oKiller                        (Parm)

void ABioBaseSquadDesign::OnDeath(class APawn* oMember, class AController* oKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnDeath");

	ABioBaseSquadDesign_OnDeath_Params params;
	params.oMember = oMember;
	params.oKiller = oKiller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetHackedSquad
// (Defined, Public)

void ABioBaseSquadDesign::SetHackedSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetHackedSquad");

	ABioBaseSquadDesign_SetHackedSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetInitialState
// (Defined, Simulated, Event, Public)

void ABioBaseSquadDesign::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetInitialState");

	ABioBaseSquadDesign_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnActionComplete_Movement
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// struct FName                   nmAction                       (Parm)
// int                            nReason                        (Parm)
// class AActor*                  oTarget                        (Parm)
// struct FVector                 vLocation                      (Parm)

void ABioBaseSquadDesign::OnActionComplete_Movement(class APawn* oMember, const struct FName& nmAction, int nReason, class AActor* oTarget, const struct FVector& vLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnActionComplete_Movement");

	ABioBaseSquadDesign_OnActionComplete_Movement_Params params;
	params.oMember = oMember;
	params.nmAction = nmAction;
	params.nReason = nReason;
	params.oTarget = oTarget;
	params.vLocation = vLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.MemberAdded
// (Defined, Event, Public)
// Parameters:
// int                            nIndex                         (Parm)

void ABioBaseSquadDesign::MemberAdded(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.MemberAdded");

	ABioBaseSquadDesign_MemberAdded_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.MemberRemoved
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oPawn                          (Parm)

void ABioBaseSquadDesign::MemberRemoved(class APawn* oPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.MemberRemoved");

	ABioBaseSquadDesign_MemberRemoved_Params params;
	params.oPawn = oPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// float                          fSightMult                     (Parm)
// float                          fHearingMult                   (Parm)

void ABioBaseSquadDesign::RemovePerceptionMultipliers(class ABioAiController* oMember, float fSightMult, float fHearingMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers");

	ABioBaseSquadDesign_RemovePerceptionMultipliers_Params params;
	params.oMember = oMember;
	params.fSightMult = fSightMult;
	params.fHearingMult = fHearingMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// float                          fSightMult                     (Parm)
// float                          fHearingMult                   (Parm)

void ABioBaseSquadDesign::ApplyPerceptionMultipliers(class ABioAiController* oMember, float fSightMult, float fHearingMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers");

	ABioBaseSquadDesign_ApplyPerceptionMultipliers_Params params;
	params.oMember = oMember;
	params.fSightMult = fSightMult;
	params.fHearingMult = fHearingMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ResetAttackedRecently
// (Defined, Public)

void ABioBaseSquadDesign::ResetAttackedRecently()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ResetAttackedRecently");

	ABioBaseSquadDesign_ResetAttackedRecently_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.NoLongerSeePlayer
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// class APawn*                   Seen                           (Parm)

void ABioBaseSquadDesign::NoLongerSeePlayer(class APawn* Who, class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.NoLongerSeePlayer");

	ABioBaseSquadDesign_NoLongerSeePlayer_Params params;
	params.Who = Who;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SeePlayer
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// class APawn*                   Seen                           (Parm)

void ABioBaseSquadDesign::SeePlayer(class APawn* Who, class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SeePlayer");

	ABioBaseSquadDesign_SeePlayer_Params params;
	params.Who = Who;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.OnFactionChanged
// (Defined, Event, Public)
// Parameters:
// class UClass*                  oOldFaction                    (Parm)
// class UClass*                  oNewFaction                    (Parm)

void ABioBaseSquadDesign::OnFactionChanged(class UClass* oOldFaction, class UClass* oNewFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.OnFactionChanged");

	ABioBaseSquadDesign_OnFactionChanged_Params params;
	params.oOldFaction = oOldFaction;
	params.oNewFaction = oNewFaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetOrientationType
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EOrientationType>  ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOrientationType> ABioBaseSquadDesign::GetOrientationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetOrientationType");

	ABioBaseSquadDesign_GetOrientationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetRestFormation
// (Defined, Event, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ABioBaseSquadDesign::GetRestFormation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetRestFormation");

	ABioBaseSquadDesign_GetRestFormation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadWalkWaypoints
// (Defined, Public)

void ABioBaseSquadDesign::SquadWalkWaypoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SquadWalkWaypoints");

	ABioBaseSquadDesign_SquadWalkWaypoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::SquadMemberWalkWaypoints(class ABioAiController* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints");

	ABioBaseSquadDesign_SquadMemberWalkWaypoints_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen
// (Defined, Public, HasDefaults)
// Parameters:
// struct FVector                 vNear                          (Parm)
// struct FVector                 vLateralOffset                 (Parm)
// float                          fSearchRadius                  (Parm)
// float                          fVerticalOffset                (OptionalParm, Parm)
// bool                           bCanFly                        (OptionalParm, Parm)
// bool                           bCanHop                        (OptionalParm, Parm)
// bool                           bSniper                        (OptionalParm, Parm)
// bool                           bAggressive                    (OptionalParm, Parm)
// bool                           bDefensive                     (OptionalParm, Parm)
// class AActor*                  oLOSTarget                     (OptionalParm, Parm)
// class ABioPawn*                oIgnoreIfLockedBy              (OptionalParm, Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ABioBaseSquadDesign::GetNavPointInPlaypen(const struct FVector& vNear, const struct FVector& vLateralOffset, float fSearchRadius, float fVerticalOffset, bool bCanFly, bool bCanHop, bool bSniper, bool bAggressive, bool bDefensive, class AActor* oLOSTarget, class ABioPawn* oIgnoreIfLockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen");

	ABioBaseSquadDesign_GetNavPointInPlaypen_Params params;
	params.vNear = vNear;
	params.vLateralOffset = vLateralOffset;
	params.fSearchRadius = fSearchRadius;
	params.fVerticalOffset = fVerticalOffset;
	params.bCanFly = bCanFly;
	params.bCanHop = bCanHop;
	params.bSniper = bSniper;
	params.bAggressive = bAggressive;
	params.bDefensive = bDefensive;
	params.oLOSTarget = oLOSTarget;
	params.oIgnoreIfLockedBy = oIgnoreIfLockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetFlockingOffset
// (Defined, Public, HasDefaults)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ABioBaseSquadDesign::GetFlockingOffset(class ABioAiController* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetFlockingOffset");

	ABioBaseSquadDesign_GetFlockingOffset_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetFlockingRanges
// (Defined, Public)
// Parameters:
// float                          FMin                           (Parm)
// float                          FMax                           (Parm)
// float                          fSquadMax                      (Parm)

void ABioBaseSquadDesign::SetFlockingRanges(float FMin, float FMax, float fSquadMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetFlockingRanges");

	ABioBaseSquadDesign_SetFlockingRanges_Params params;
	params.FMin = FMin;
	params.FMax = FMax;
	params.fSquadMax = fSquadMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetFurthestSquadMember
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 vTarget                        (Parm)
// TArray<class ABioAiController*> aoIgnoreMembers                (OptionalParm, Parm, NeedCtorLink)
// float                          fLongestDistToTargetSq         (OptionalParm, Parm, OutParm)
// class ABioAiController*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ABioAiController* ABioBaseSquadDesign::GetFurthestSquadMember(const struct FVector& vTarget, TArray<class ABioAiController*> aoIgnoreMembers, float* fLongestDistToTargetSq)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetFurthestSquadMember");

	ABioBaseSquadDesign_GetFurthestSquadMember_Params params;
	params.vTarget = vTarget;
	params.aoIgnoreMembers = aoIgnoreMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fLongestDistToTargetSq != nullptr)
		*fLongestDistToTargetSq = params.fLongestDistToTargetSq;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ResetSquadProximity
// (Defined, Public)

void ABioBaseSquadDesign::ResetSquadProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ResetSquadProximity");

	ABioBaseSquadDesign_ResetSquadProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange
// (Defined, Public)
// Parameters:
// float                          fMultiplier                    (OptionalParm, Parm)

void ABioBaseSquadDesign::SetSquadProximityByAttackRange(float fMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange");

	ABioBaseSquadDesign_SetSquadProximityByAttackRange_Params params;
	params.fMultiplier = fMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximity
// (Defined, Public)
// Parameters:
// float                          fDefault                       (OptionalParm, Parm)
// float                          fCloseCombat                   (OptionalParm, Parm)
// float                          fSniperCombat                  (OptionalParm, Parm)
// float                          fSupport                       (OptionalParm, Parm)

void ABioBaseSquadDesign::SetSquadProximity(float fDefault, float fCloseCombat, float fSniperCombat, float fSupport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximity");

	ABioBaseSquadDesign_SetSquadProximity_Params params;
	params.fDefault = fDefault;
	params.fCloseCombat = fCloseCombat;
	params.fSniperCombat = fSniperCombat;
	params.fSupport = fSupport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.PushMoveWithLocking
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class AActor*                  oTarget                        (Parm)
// float                          fTolerance                     (OptionalParm, Parm)
// bool                           bWalking                       (OptionalParm, Parm)
// float                          fMovementDelay                 (OptionalParm, Parm)
// bool                           bCrouch                        (OptionalParm, Parm)

void ABioBaseSquadDesign::PushMoveWithLocking(class ABioAiController* oMember, class AActor* oTarget, float fTolerance, bool bWalking, float fMovementDelay, bool bCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.PushMoveWithLocking");

	ABioBaseSquadDesign_PushMoveWithLocking_Params params;
	params.oMember = oMember;
	params.oTarget = oTarget;
	params.fTolerance = fTolerance;
	params.bWalking = bWalking;
	params.fMovementDelay = fMovementDelay;
	params.bCrouch = bCrouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberTakeCover
// (Defined, Public, HasDefaults)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// float                          fCoverRange                    (OptionalParm, Parm)
// float                          fNavRange                      (OptionalParm, Parm)
// class APawn*                   oTarget                        (OptionalParm, Parm)
// class APawn*                   oAvoid                         (OptionalParm, Parm)
// bool                           bNewCover                      (OptionalParm, Parm)
// bool                           bCrouchIfNoCover               (OptionalParm, Parm)
// float                          fMovementDelay                 (OptionalParm, Parm)
// struct FVector                 vCoverLocation                 (OptionalParm, Parm)
// bool                           bUseDefNodeIfNoCover           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::SquadMemberTakeCover(class ABioAiController* oMember, float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, bool bNewCover, bool bCrouchIfNoCover, float fMovementDelay, const struct FVector& vCoverLocation, bool bUseDefNodeIfNoCover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberTakeCover");

	ABioBaseSquadDesign_SquadMemberTakeCover_Params params;
	params.oMember = oMember;
	params.fCoverRange = fCoverRange;
	params.fNavRange = fNavRange;
	params.oTarget = oTarget;
	params.oAvoid = oAvoid;
	params.bNewCover = bNewCover;
	params.bCrouchIfNoCover = bCrouchIfNoCover;
	params.fMovementDelay = fMovementDelay;
	params.vCoverLocation = vCoverLocation;
	params.bUseDefNodeIfNoCover = bUseDefNodeIfNoCover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.IsAtDefenseNode
// (Defined, Public)
// Parameters:
// class APawn*                   oTestPawn                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::IsAtDefenseNode(class APawn* oTestPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.IsAtDefenseNode");

	ABioBaseSquadDesign_IsAtDefenseNode_Params params;
	params.oTestPawn = oTestPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadTakeCover
// (Defined, Public)
// Parameters:
// float                          fCoverRange                    (OptionalParm, Parm)
// float                          fNavRange                      (OptionalParm, Parm)
// class APawn*                   oTarget                        (OptionalParm, Parm)
// class APawn*                   oAvoid                         (OptionalParm, Parm)
// bool                           bNewCover                      (OptionalParm, Parm)
// bool                           bCrouchIfNoCover               (OptionalParm, Parm)
// float                          fDelayOrdersLoop               (OptionalParm, Parm)
// bool                           bUseDefNodeIfNoCover           (OptionalParm, Parm)

void ABioBaseSquadDesign::SquadTakeCover(float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, bool bNewCover, bool bCrouchIfNoCover, float fDelayOrdersLoop, bool bUseDefNodeIfNoCover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SquadTakeCover");

	ABioBaseSquadDesign_SquadTakeCover_Params params;
	params.fCoverRange = fCoverRange;
	params.fNavRange = fNavRange;
	params.oTarget = oTarget;
	params.oAvoid = oAvoid;
	params.bNewCover = bNewCover;
	params.bCrouchIfNoCover = bCrouchIfNoCover;
	params.fDelayOrdersLoop = fDelayOrdersLoop;
	params.bUseDefNodeIfNoCover = bUseDefNodeIfNoCover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.PushCoverWithLocking
// (Defined, Public, HasDefaults)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// struct FVector                 vNear                          (Parm)
// class APawn*                   oTarget                        (OptionalParm, Parm)
// class APawn*                   oAvoid                         (OptionalParm, Parm)
// float                          fCoverRadius                   (OptionalParm, Parm)
// float                          fMovementDelay                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::PushCoverWithLocking(class ABioAiController* oMember, const struct FVector& vNear, class APawn* oTarget, class APawn* oAvoid, float fCoverRadius, float fMovementDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.PushCoverWithLocking");

	ABioBaseSquadDesign_PushCoverWithLocking_Params params;
	params.oMember = oMember;
	params.vNear = vNear;
	params.oTarget = oTarget;
	params.oAvoid = oAvoid;
	params.fCoverRadius = fCoverRadius;
	params.fMovementDelay = fMovementDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetCoverList
// (Defined, Public, HasOutParms)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// TArray<class APawn*>           aoCoverAgainst                 (Parm, OutParm, NeedCtorLink)
// TArray<int>                    aoCoverValue                   (Parm, OutParm, NeedCtorLink)
// class APawn*                   oTarget                        (OptionalParm, Parm)
// class APawn*                   oAvoid                         (OptionalParm, Parm)

void ABioBaseSquadDesign::GetCoverList(class ABioAiController* oMember, class APawn* oTarget, class APawn* oAvoid, TArray<class APawn*>* aoCoverAgainst, TArray<int>* aoCoverValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetCoverList");

	ABioBaseSquadDesign_GetCoverList_Params params;
	params.oMember = oMember;
	params.oTarget = oTarget;
	params.oAvoid = oAvoid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (aoCoverAgainst != nullptr)
		*aoCoverAgainst = params.aoCoverAgainst;
	if (aoCoverValue != nullptr)
		*aoCoverValue = params.aoCoverValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockAllPathnodes
// (Defined, Public)

void ABioBaseSquadDesign::UnlockAllPathnodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockAllPathnodes");

	ABioBaseSquadDesign_UnlockAllPathnodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner
// (Defined, Public)
// Parameters:
// class ABioPawn*                oUnlockOwner                   (Parm)

void ABioBaseSquadDesign::UnlockPathnodesByOwner(class ABioPawn* oUnlockOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner");

	ABioBaseSquadDesign_UnlockPathnodesByOwner_Params params;
	params.oUnlockOwner = oUnlockOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnode
// (Defined, Public)
// Parameters:
// class ANavigationPoint*        oUnlockNode                    (Parm)

void ABioBaseSquadDesign::UnlockPathnode(class ANavigationPoint* oUnlockNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnode");

	ABioBaseSquadDesign_UnlockPathnode_Params params;
	params.oUnlockNode = oUnlockNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.LockPathnode
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// class ANavigationPoint*        oLockNode                      (Parm)
// class ABioPawn*                oLockOwner                     (Parm)
// int                            nIndex                         (OptionalParm, Parm, OutParm)

void ABioBaseSquadDesign::LockPathnode(class ANavigationPoint* oLockNode, class ABioPawn* oLockOwner, int* nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.LockPathnode");

	ABioBaseSquadDesign_LockPathnode_Params params;
	params.oLockNode = oLockNode;
	params.oLockOwner = oLockOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nIndex != nullptr)
		*nIndex = params.nIndex;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.IsPathnodeLocked
// (Defined, Public, HasOutParms)
// Parameters:
// class ANavigationPoint*        oTestNode                      (Parm)
// int                            nIndex                         (OptionalParm, Parm, OutParm)
// class ABioPawn*                oIgnoreMember                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::IsPathnodeLocked(class ANavigationPoint* oTestNode, class ABioPawn* oIgnoreMember, int* nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.IsPathnodeLocked");

	ABioBaseSquadDesign_IsPathnodeLocked_Params params;
	params.oTestNode = oTestNode;
	params.oIgnoreMember = oIgnoreMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nIndex != nullptr)
		*nIndex = params.nIndex;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetLockedPathNodes
// (Defined, Public)
// Parameters:
// class ABioPawn*                oIgnoreMember                  (OptionalParm, Parm)
// TArray<class ANavigationPoint*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class ANavigationPoint*> ABioBaseSquadDesign::GetLockedPathNodes(class ABioPawn* oIgnoreMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetLockedPathNodes");

	ABioBaseSquadDesign_GetLockedPathNodes_Params params;
	params.oIgnoreMember = oIgnoreMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetCurrentMovePoint
// (Defined, Public, HasDefaults)
// Parameters:
// class ABioPawn*                oMemberPawn                    (Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* ABioBaseSquadDesign::GetCurrentMovePoint(class ABioPawn* oMemberPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetCurrentMovePoint");

	ABioBaseSquadDesign_GetCurrentMovePoint_Params params;
	params.oMemberPawn = oMemberPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile
// (Defined, Public)
// Parameters:
// TEnumAsByte<EeAgitationLevel>  nNewLevel                      (OptionalParm, Parm)

void ABioBaseSquadDesign::DropAgitationIfNoHostile(TEnumAsByte<EeAgitationLevel> nNewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile");

	ABioBaseSquadDesign_DropAgitationIfNoHostile_Params params;
	params.nNewLevel = nNewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile
// (Defined, Public)
// Parameters:
// class APawn*                   oWho                           (Parm)
// class APawn*                   oPerceived                     (Parm)
// TEnumAsByte<EeAgitationLevel>  nNewLevel                      (Parm)

void ABioBaseSquadDesign::UpgradeAgitationIfHostile(class APawn* oWho, class APawn* oPerceived, TEnumAsByte<EeAgitationLevel> nNewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile");

	ABioBaseSquadDesign_UpgradeAgitationIfHostile_Params params;
	params.oWho = oWho;
	params.oPerceived = oPerceived;
	params.nNewLevel = nNewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.SetFactionByType
// (Defined, Public)
// Parameters:
// TEnumAsByte<EBioFactionTypes>  nNewFaction                    (Parm)

void ABioBaseSquadDesign::SetFactionByType(TEnumAsByte<EBioFactionTypes> nNewFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.SetFactionByType");

	ABioBaseSquadDesign_SetFactionByType_Params params;
	params.nNewFaction = nNewFaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ClearAllSquadActions
// (Defined, Public)
// Parameters:
// bool                           bClearQueue                    (OptionalParm, Parm)
// bool                           bClearState                    (OptionalParm, Parm)
// bool                           bUnlockTarget                  (OptionalParm, Parm)
// bool                           bLeaveCombat                   (OptionalParm, Parm)

void ABioBaseSquadDesign::ClearAllSquadActions(bool bClearQueue, bool bClearState, bool bUnlockTarget, bool bLeaveCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ClearAllSquadActions");

	ABioBaseSquadDesign_ClearAllSquadActions_Params params;
	params.bClearQueue = bClearQueue;
	params.bClearState = bClearState;
	params.bUnlockTarget = bUnlockTarget;
	params.bLeaveCombat = bLeaveCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioBaseSquadDesign::CalculateAllLikelihoods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods");

	ABioBaseSquadDesign_CalculateAllLikelihoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioBaseSquadDesign::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateLikelihood");

	ABioBaseSquadDesign_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.IsValidStrategy
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::IsValidStrategy(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.IsValidStrategy");

	ABioBaseSquadDesign_IsValidStrategy_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.GetStrategyList
// (Defined, Public)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FName> ABioBaseSquadDesign::GetStrategyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.GetStrategyList");

	ABioBaseSquadDesign_GetStrategyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ActivateAfterDelay
// (Defined, Public)
// Parameters:
// float                          fDelay                         (Parm)

void ABioBaseSquadDesign::ActivateAfterDelay(float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ActivateAfterDelay");

	ABioBaseSquadDesign_ActivateAfterDelay_Params params;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.Activate
// (Defined, Public)

void ABioBaseSquadDesign::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.Activate");

	ABioBaseSquadDesign_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.Deactivate
// (Defined, Public)

void ABioBaseSquadDesign::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.Deactivate");

	ABioBaseSquadDesign_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.DoFallBackStrategy
// (Defined, Public)

void ABioBaseSquadDesign::DoFallBackStrategy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.DoFallBackStrategy");

	ABioBaseSquadDesign_DoFallBackStrategy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesign.ReEvaluateStrategy
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesign::ReEvaluateStrategy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesign.ReEvaluateStrategy");

	ABioBaseSquadDesign_ReEvaluateStrategy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// struct FName                   nmAction                       (Parm)
// struct FName                   nmTechnique                    (Parm)
// int                            nReason                        (Parm)
// class AActor*                  oLastTarget                    (Parm)

void ABioBaseSquadDesignCombat::OnActionComplete_Combat(class APawn* oMember, const struct FName& nmAction, const struct FName& nmTechnique, int nReason, class AActor* oLastTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat");

	ABioBaseSquadDesignCombat_OnActionComplete_Combat_Params params;
	params.oMember = oMember;
	params.nmAction = nmAction;
	params.nmTechnique = nmTechnique;
	params.nReason = nReason;
	params.oLastTarget = oLastTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// struct FName                   nmAction                       (Parm)
// int                            nReason                        (Parm)
// class AActor*                  oTarget                        (Parm)
// struct FVector                 vLocation                      (Parm)

void ABioBaseSquadDesignCombat::OnActionComplete_Movement(class APawn* oMember, const struct FName& nmAction, int nReason, class AActor* oTarget, const struct FVector& vLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement");

	ABioBaseSquadDesignCombat_OnActionComplete_Movement_Params params;
	params.oMember = oMember;
	params.nmAction = nmAction;
	params.nReason = nReason;
	params.oTarget = oTarget;
	params.vLocation = vLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.UseAttackCapability
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class APawn*                   oTarget                        (Parm)
// class UBioCapability*          oCap                           (Parm)
// TEnumAsByte<EeATTACK_TYPE>     eAttackType                    (Parm)
// float                          fStabilityOffset               (OptionalParm, Parm)
// class AActor*                  oMoveDest                      (OptionalParm, Parm)
// float                          fMovementDelay                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioBaseSquadDesignCombat::UseAttackCapability(class ABioAiController* oMember, class APawn* oTarget, class UBioCapability* oCap, TEnumAsByte<EeATTACK_TYPE> eAttackType, float fStabilityOffset, class AActor* oMoveDest, float fMovementDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.UseAttackCapability");

	ABioBaseSquadDesignCombat_UseAttackCapability_Params params;
	params.oMember = oMember;
	params.oTarget = oTarget;
	params.oCap = oCap;
	params.eAttackType = eAttackType;
	params.fStabilityOffset = fStabilityOffset;
	params.oMoveDest = oMoveDest;
	params.fMovementDelay = fMovementDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class APawn*                   oIgnore                        (OptionalParm, Parm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* ABioBaseSquadDesignCombat::FindDangerousEnemy(class ABioAiController* oMember, class APawn* oIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy");

	ABioBaseSquadDesignCombat_FindDangerousEnemy_Params params;
	params.oMember = oMember;
	params.oIgnore = oIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class APawn*                   oIgnoreTarget                  (OptionalParm, Parm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* ABioBaseSquadDesignCombat::GetClosestPerceivedTarget(class ABioAiController* oMember, class APawn* oIgnoreTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget");

	ABioBaseSquadDesignCombat_GetClosestPerceivedTarget_Params params;
	params.oMember = oMember;
	params.oIgnoreTarget = oIgnoreTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile
// (Defined, Public, HasOutParms)
// Parameters:
// bool                           bSquareDist                    (OptionalParm, Parm)
// class ABioAiController*        oNearestMember                 (OptionalParm, Parm, OutParm)
// class APawn*                   oNearestTarget                 (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioBaseSquadDesignCombat::GetDistanceToNearestHostile(bool bSquareDist, class ABioAiController** oNearestMember, class APawn** oNearestTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile");

	ABioBaseSquadDesignCombat_GetDistanceToNearestHostile_Params params;
	params.bSquareDist = bSquareDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oNearestMember != nullptr)
		*oNearestMember = params.oNearestMember;
	if (oNearestTarget != nullptr)
		*oNearestTarget = params.oNearestTarget;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetOrientationType
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EOrientationType>  ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOrientationType> ABioBaseSquadDesignCombat::GetOrientationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetOrientationType");

	ABioBaseSquadDesignCombat_GetOrientationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetRestFormation
// (Defined, Event, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ABioBaseSquadDesignCombat::GetRestFormation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetRestFormation");

	ABioBaseSquadDesignCombat_GetRestFormation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnCastAt
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmPower                        (Parm)

void ABioBaseSquadDesignCombat::OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnCastAt");

	ABioBaseSquadDesignCombat_OnCastAt_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmPower = nmPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnAttacked
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmWeapon                       (Parm)

void ABioBaseSquadDesignCombat::OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnAttacked");

	ABioBaseSquadDesignCombat_OnAttacked_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmWeapon = nmWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.HearNoise
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// float                          Loudness                       (Parm)
// class AActor*                  NoiseMaker                     (Parm)
// struct FVector                 vNoiseLocation                 (Parm)
// struct FName                   NoiseType                      (OptionalParm, Parm)

void ABioBaseSquadDesignCombat::HearNoise(class APawn* Who, float Loudness, class AActor* NoiseMaker, const struct FVector& vNoiseLocation, const struct FName& NoiseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.HearNoise");

	ABioBaseSquadDesignCombat_HearNoise_Params params;
	params.Who = Who;
	params.Loudness = Loudness;
	params.NoiseMaker = NoiseMaker;
	params.vNoiseLocation = vNoiseLocation;
	params.NoiseType = NoiseType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// class APawn*                   Seen                           (Parm)

void ABioBaseSquadDesignCombat::NoLongerSeePlayer(class APawn* Who, class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer");

	ABioBaseSquadDesignCombat_NoLongerSeePlayer_Params params;
	params.Who = Who;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeePlayer
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// class APawn*                   Seen                           (Parm)

void ABioBaseSquadDesignCombat::SeePlayer(class APawn* Who, class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeePlayer");

	ABioBaseSquadDesignCombat_SeePlayer_Params params;
	params.Who = Who;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeenSquad
// (Defined, Event, Public)
// Parameters:
// class ABioBaseSquad*           oSquad                         (Parm)

void ABioBaseSquadDesignCombat::SeenSquad(class ABioBaseSquad* oSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeenSquad");

	ABioBaseSquadDesignCombat_SeenSquad_Params params;
	params.oSquad = oSquad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodFlee
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadAmbient::CalculateLikelihoodFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodFlee");

	ABioSquadAmbient_CalculateLikelihoodFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodIdle
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadAmbient::CalculateLikelihoodIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodIdle");

	ABioSquadAmbient_CalculateLikelihoodIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadAmbient::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihood");

	ABioSquadAmbient_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihoodCasting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadBeacon::CalculateLikelihoodCasting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihoodCasting");

	ABioSquadBeacon_CalculateLikelihoodCasting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadBeacon.SquadMemberBeginCasting
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)

void ABioSquadBeacon::SquadMemberBeginCasting(class ABioAiController* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadBeacon.SquadMemberBeginCasting");

	ABioSquadBeacon_SquadMemberBeginCasting_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadBeacon::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihood");

	ABioSquadBeacon_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodDefend
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihoodDefend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodDefend");

	ABioSquadCombat_CalculateLikelihoodDefend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihoodSkirmish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish");

	ABioSquadCombat_CalculateLikelihoodSkirmish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodCharge
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihoodCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodCharge");

	ABioSquadCombat_CalculateLikelihoodCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSearch
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihoodSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSearch");

	ABioSquadCombat_CalculateLikelihoodSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodIdle
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihoodIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodIdle");

	ABioSquadCombat_CalculateLikelihoodIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCombat::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihood");

	ABioSquadCombat_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihoodIdle
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCommoner::CalculateLikelihoodIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihoodIdle");

	ABioSquadCommoner_CalculateLikelihoodIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadCommoner::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihood");

	ABioSquadCommoner_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.OnSquadSeen
// (Defined, Event, Public)
// Parameters:
// class ABioBaseSquad*           oSquad                         (Parm)

void ABioSquadPlayerDesignBase::OnSquadSeen(class ABioBaseSquad* oSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayerDesignBase.OnSquadSeen");

	ABioSquadPlayerDesignBase_OnSquadSeen_Params params;
	params.oSquad = oSquad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioSquadPlayerDesignBase::AreHostilesNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby");

	ABioSquadPlayerDesignBase_AreHostilesNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand
// (Defined, Public)
// Parameters:
// class ABioPawn*                oMemberPawn                    (Parm)

void ABioSquadPlayerDesignBase::ClearMemberAttackCommand(class ABioPawn* oMemberPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand");

	ABioSquadPlayerDesignBase_ClearMemberAttackCommand_Params params;
	params.oMemberPawn = oMemberPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag
// (Defined, Public)

void ABioSquadPlayerDesignBase::ClearPerceptionFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag");

	ABioSquadPlayerDesignBase_ClearPerceptionFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag
// (Defined, Public)

void ABioSquadPlayerDesignBase::SetPerceptionFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag");

	ABioSquadPlayerDesignBase_SetPerceptionFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ABioSquadPlayer::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.Tick");

	ABioSquadPlayer_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.onPlayerEnterCover
// (Defined, Event, Public)

void ABioSquadPlayer::onPlayerEnterCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.onPlayerEnterCover");

	ABioSquadPlayer_onPlayerEnterCover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.onSquadCoverEvaluate
// (Defined, Event, Public, HasDefaults)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class UBioCoverInterface*      oCover                         (Parm)
// int                            nSlot                          (Parm)

void ABioSquadPlayer::onSquadCoverEvaluate(class APawn* oMember, class UBioCoverInterface* oCover, int nSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.onSquadCoverEvaluate");

	ABioSquadPlayer_onSquadCoverEvaluate_Params params;
	params.oMember = oMember;
	params.oCover = oCover;
	params.nSlot = nSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.onMemberArrivedAtTarget
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)

void ABioSquadPlayer::onMemberArrivedAtTarget(class APawn* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.onMemberArrivedAtTarget");

	ABioSquadPlayer_onMemberArrivedAtTarget_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.LookForCover
// (Defined, Public, HasDefaults)
// Parameters:
// class APawn*                   oMember                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioSquadPlayer::LookForCover(class APawn* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.LookForCover");

	ABioSquadPlayer_LookForCover_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnSetSquadFollowFormation
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EFollowFormation>  eFormation                     (Parm)

void ABioSquadPlayer::OnSetSquadFollowFormation(TEnumAsByte<EFollowFormation> eFormation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnSetSquadFollowFormation");

	ABioSquadPlayer_OnSetSquadFollowFormation_Params params;
	params.eFormation = eFormation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnMemberShieldsDown
// (Defined, Public)
// Parameters:
// class APawn*                   oWho                           (Parm)

void ABioSquadPlayer::OnMemberShieldsDown(class APawn* oWho)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnMemberShieldsDown");

	ABioSquadPlayer_OnMemberShieldsDown_Params params;
	params.oWho = oWho;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.MemberAdded
// (Defined, Event, Public)
// Parameters:
// int                            nIndex                         (Parm)

void ABioSquadPlayer::MemberAdded(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.MemberAdded");

	ABioSquadPlayer_MemberAdded_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnPlayerSwitchStance
// (Defined, Event, Public)
// Parameters:
// unsigned char                  FromState                      (Parm)
// unsigned char                  ToState                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioSquadPlayer::OnPlayerSwitchStance(unsigned char FromState, unsigned char ToState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnPlayerSwitchStance");

	ABioSquadPlayer_OnPlayerSwitchStance_Params params;
	params.FromState = FromState;
	params.ToState = ToState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnSetAttackTarget
// (Defined, Event, Public)
// Parameters:
// class APawn*                   pPawn                          (Parm)
// class AActor*                  Target                         (Parm)

void ABioSquadPlayer::OnSetAttackTarget(class APawn* pPawn, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnSetAttackTarget");

	ABioSquadPlayer_OnSetAttackTarget_Params params;
	params.pPawn = pPawn;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnCombatEnd
// (Defined, Public)

void ABioSquadPlayer::OnCombatEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnCombatEnd");

	ABioSquadPlayer_OnCombatEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnCombatBegin
// (Defined, Public)

void ABioSquadPlayer::OnCombatBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnCombatBegin");

	ABioSquadPlayer_OnCombatBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnDeath
// (Defined, Public)
// Parameters:
// class APawn*                   pPawn                          (Parm)
// class AController*             pKiller                        (Parm)

void ABioSquadPlayer::OnDeath(class APawn* pPawn, class AController* pKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnDeath");

	ABioSquadPlayer_OnDeath_Params params;
	params.pPawn = pPawn;
	params.pKiller = pKiller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oPawn                          (Parm)
// TEnumAsByte<EDisableType>      eEnableType                    (Parm)
// struct FName                   nmSubType                      (Parm)

void ABioSquadPlayer::onMemberAbilityEnabledEvent(class APawn* oPawn, TEnumAsByte<EDisableType> eEnableType, const struct FName& nmSubType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent");

	ABioSquadPlayer_onMemberAbilityEnabledEvent_Params params;
	params.oPawn = oPawn;
	params.eEnableType = eEnableType;
	params.nmSubType = nmSubType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.HearNoise
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// float                          Loudness                       (Parm)
// class AActor*                  NoiseMaker                     (Parm)
// struct FVector                 vNoiseLocation                 (Parm)
// struct FName                   NoiseType                      (OptionalParm, Parm)

void ABioSquadPlayer::HearNoise(class APawn* Who, float Loudness, class AActor* NoiseMaker, const struct FVector& vNoiseLocation, const struct FName& NoiseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.HearNoise");

	ABioSquadPlayer_HearNoise_Params params;
	params.Who = Who;
	params.Loudness = Loudness;
	params.NoiseMaker = NoiseMaker;
	params.vNoiseLocation = vNoiseLocation;
	params.NoiseType = NoiseType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.SeePlayer
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Who                            (Parm)
// class APawn*                   Seen                           (Parm)

void ABioSquadPlayer::SeePlayer(class APawn* Who, class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.SeePlayer");

	ABioSquadPlayer_SeePlayer_Params params;
	params.Who = Who;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnDamaged
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class AController*             oInstigator                    (Parm)
// float                          fDamage                        (Parm)

void ABioSquadPlayer::OnDamaged(class APawn* oMember, class AController* oInstigator, float fDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnDamaged");

	ABioSquadPlayer_OnDamaged_Params params;
	params.oMember = oMember;
	params.oInstigator = oInstigator;
	params.fDamage = fDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnCastAt
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmPower                        (Parm)

void ABioSquadPlayer::OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnCastAt");

	ABioSquadPlayer_OnCastAt_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmPower = nmPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.OnAttacked
// (Defined, Event, Public)
// Parameters:
// class APawn*                   oMember                        (Parm)
// class APawn*                   oAttacker                      (Parm)
// struct FName                   nmWeapon                       (Parm)

void ABioSquadPlayer::OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.OnAttacked");

	ABioSquadPlayer_OnAttacked_Params params;
	params.oMember = oMember;
	params.oAttacker = oAttacker;
	params.nmWeapon = nmWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.MemberActionComplete_Combat
// (Defined, Event, Public)
// Parameters:
// class ABioPawn*                Who                            (Parm)
// struct FName                   Action                         (Parm)
// struct FName                   nmTechnique                    (Parm)
// int                            nReason                        (Parm)
// class AActor*                  oLastTarget                    (Parm)
// float                          fReqStability                  (Parm)
// float                          fAbortStability                (Parm)
// float                          fReqRadius                     (Parm)
// float                          fLastTimeOut                   (Parm)

void ABioSquadPlayer::MemberActionComplete_Combat(class ABioPawn* Who, const struct FName& Action, const struct FName& nmTechnique, int nReason, class AActor* oLastTarget, float fReqStability, float fAbortStability, float fReqRadius, float fLastTimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.MemberActionComplete_Combat");

	ABioSquadPlayer_MemberActionComplete_Combat_Params params;
	params.Who = Who;
	params.Action = Action;
	params.nmTechnique = nmTechnique;
	params.nReason = nReason;
	params.oLastTarget = oLastTarget;
	params.fReqStability = fReqStability;
	params.fAbortStability = fAbortStability;
	params.fReqRadius = fReqRadius;
	params.fLastTimeOut = fLastTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.Leader_Changed
// (Defined, Event, Public)
// Parameters:
// class APawn*                   OldLeader                      (Parm)
// class APawn*                   NewLeader                      (Parm)

void ABioSquadPlayer::Leader_Changed(class APawn* OldLeader, class APawn* NewLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.Leader_Changed");

	ABioSquadPlayer_Leader_Changed_Params params;
	params.OldLeader = OldLeader;
	params.NewLeader = NewLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.Initialize
// (Defined, Event, Public)

void ABioSquadPlayer::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.Initialize");

	ABioSquadPlayer_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadPlayer.EvaluateTargets
// (Defined, Public)
// Parameters:
// class ABioPawn*                oMemberPawn                    (Parm)
// class ABioPawn*                ReturnValue                    (Parm, OutParm, ReturnParm)

class ABioPawn* ABioSquadPlayer::EvaluateTargets(class ABioPawn* oMemberPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.EvaluateTargets");

	ABioSquadPlayer_EvaluateTargets_Params params;
	params.oMemberPawn = oMemberPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayer.PickNewTarget
// (Defined, Public)
// Parameters:
// class ABioPawn*                oMemberPawn                    (Parm)
// class ABioPawn*                ReturnValue                    (Parm, OutParm, ReturnParm)

class ABioPawn* ABioSquadPlayer::PickNewTarget(class ABioPawn* oMemberPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.PickNewTarget");

	ABioSquadPlayer_PickNewTarget_Params params;
	params.oMemberPawn = oMemberPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayer.IsAttackTargetValid
// (Defined, Public)
// Parameters:
// class ABioPawn*                oMemberPawn                    (Parm)
// class ABioPawn*                oAttackTarget                  (Parm)
// bool                           bTestShooting                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABioSquadPlayer::IsAttackTargetValid(class ABioPawn* oMemberPawn, class ABioPawn* oAttackTarget, bool bTestShooting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.IsAttackTargetValid");

	ABioSquadPlayer_IsAttackTargetValid_Params params;
	params.oMemberPawn = oMemberPawn;
	params.oAttackTarget = oAttackTarget;
	params.bTestShooting = bTestShooting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadPlayer.DoBestAction
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)

void ABioSquadPlayer::DoBestAction(class ABioAiController* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadPlayer.DoBestAction");

	ABioSquadPlayer_DoBestAction_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihoodArmed
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadProxMine::CalculateLikelihoodArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihoodArmed");

	ABioSquadProxMine_CalculateLikelihoodArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadProxMine.SquadMemberBeginCasting
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)

void ABioSquadProxMine::SquadMemberBeginCasting(class ABioAiController* oMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadProxMine.SquadMemberBeginCasting");

	ABioSquadProxMine_SquadMemberBeginCasting_Params params;
	params.oMember = oMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadProxMine::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihood");

	ABioSquadProxMine_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadSitAndShoot::CalculateLikelihoodAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking");

	ABioSquadSitAndShoot_CalculateLikelihoodAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class APawn*                   oIgnore                        (OptionalParm, Parm)

void ABioSquadSitAndShoot::SquadMemberAttackAnyTarget(class ABioAiController* oMember, class APawn* oIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget");

	ABioSquadSitAndShoot_SquadMemberAttackAnyTarget_Params params;
	params.oMember = oMember;
	params.oIgnore = oIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget
// (Defined, Public)
// Parameters:
// class ABioAiController*        oMember                        (Parm)
// class APawn*                   oTarget                        (Parm)

void ABioSquadSitAndShoot::SquadMemberAttackTarget(class ABioAiController* oMember, class APawn* oTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget");

	ABioSquadSitAndShoot_SquadMemberAttackTarget_Params params;
	params.oMember = oMember;
	params.oTarget = oTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadSitAndShoot::CalculateLikelihoodIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle");

	ABioSquadSitAndShoot_CalculateLikelihoodIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihood
// (Defined, Public)
// Parameters:
// struct FName                   sStrategyName                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABioSquadSitAndShoot::CalculateLikelihood(const struct FName& sStrategyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihood");

	ABioSquadSitAndShoot_CalculateLikelihood_Params params;
	params.sStrategyName = sStrategyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
