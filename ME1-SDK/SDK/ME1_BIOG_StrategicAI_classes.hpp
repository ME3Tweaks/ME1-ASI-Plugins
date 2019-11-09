#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_StrategicAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BIOG_StrategicAI.BioAI_SarenHopper
// 0x0000 (0x043C - 0x043C)
class ABioAI_SarenHopper : public ABioAI_Hopper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioAI_SarenHopper");
		return ptr;
	}


	void OnDamaged(class AController* oInstigator, float fDamage);
};


// Class BIOG_StrategicAI.BioBaseSquadDesign
// 0x0050 (0x03C0 - 0x0370)
class ABioBaseSquadDesign : public ABioSquadAI
{
public:
	TEnumAsByte<EeAgitationLevel>                      AgitationLevel;                                           // 0x0370(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FName                                       InitialStrategy;                                          // 0x0374(0x0008) (Edit)
	struct FName                                       FallBackStrategy;                                         // 0x037C(0x0008) (Edit)
	TArray<struct FWaypointRoute>                      WaypointRoutes;                                           // 0x0384(0x000C) (Edit, NeedCtorLink, EditInline)
	float                                              DelayReactionIdle;                                        // 0x0390(0x0004) (Edit)
	float                                              DelayLostSight;                                           // 0x0394(0x0004) (Edit)
	float                                              DelayOrdersLoop;                                          // 0x0398(0x0004) (Edit)
	float                                              SightMultiplier;                                          // 0x039C(0x0004) (Edit)
	float                                              HearingMultiplier;                                        // 0x03A0(0x0004) (Edit)
	unsigned long                                      m_bPerceptionScaled : 1;                                  // 0x03A4(0x0004)
	unsigned long                                      m_bAttackedRecently : 1;                                  // 0x03A4(0x0004)
	float                                              m_fFlockingMinDistance;                                   // 0x03A8(0x0004)
	float                                              m_fFlockingMaxDistance;                                   // 0x03AC(0x0004)
	float                                              m_fFlockingMaxSquadDistance;                              // 0x03B0(0x0004)
	TArray<struct FLockedPoint>                        m_aoAssignedPathnodes;                                    // 0x03B4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioBaseSquadDesign");
		return ptr;
	}


	void OnProximityAlarm(class APawn* oMember, class AActor* oTarget, int nRelationship);
	void OnSquadSeen(class ABioBaseSquad* oSquad);
	void OnDamaged(class APawn* oMember, class AController* oInstigator, float fDamage);
	void OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower);
	void OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon);
	void OnDeath(class APawn* oMember, class AController* oKiller);
	void SetHackedSquad();
	void SetInitialState();
	void OnActionComplete_Movement(class APawn* oMember, const struct FName& nmAction, int nReason, class AActor* oTarget, const struct FVector& vLocation);
	void MemberAdded(int nIndex);
	void MemberRemoved(class APawn* oPawn);
	void RemovePerceptionMultipliers(class ABioAiController* oMember, float fSightMult, float fHearingMult);
	void ApplyPerceptionMultipliers(class ABioAiController* oMember, float fSightMult, float fHearingMult);
	void ResetAttackedRecently();
	void NoLongerSeePlayer(class APawn* Who, class APawn* Seen);
	void SeePlayer(class APawn* Who, class APawn* Seen);
	void OnFactionChanged(class UClass* oOldFaction, class UClass* oNewFaction);
	TEnumAsByte<EOrientationType> GetOrientationType();
	class UClass* GetRestFormation();
	void SquadWalkWaypoints();
	bool SquadMemberWalkWaypoints(class ABioAiController* oMember);
	class ANavigationPoint* GetNavPointInPlaypen(const struct FVector& vNear, const struct FVector& vLateralOffset, float fSearchRadius, float fVerticalOffset, bool bCanFly, bool bCanHop, bool bSniper, bool bAggressive, bool bDefensive, class AActor* oLOSTarget, class ABioPawn* oIgnoreIfLockedBy);
	struct FVector GetFlockingOffset(class ABioAiController* oMember);
	void SetFlockingRanges(float FMin, float FMax, float fSquadMax);
	class ABioAiController* GetFurthestSquadMember(const struct FVector& vTarget, TArray<class ABioAiController*> aoIgnoreMembers, float* fLongestDistToTargetSq);
	void ResetSquadProximity();
	void SetSquadProximityByAttackRange(float fMultiplier);
	void SetSquadProximity(float fDefault, float fCloseCombat, float fSniperCombat, float fSupport);
	void PushMoveWithLocking(class ABioAiController* oMember, class AActor* oTarget, float fTolerance, bool bWalking, float fMovementDelay, bool bCrouch);
	bool SquadMemberTakeCover(class ABioAiController* oMember, float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, bool bNewCover, bool bCrouchIfNoCover, float fMovementDelay, const struct FVector& vCoverLocation, bool bUseDefNodeIfNoCover);
	bool IsAtDefenseNode(class APawn* oTestPawn);
	void SquadTakeCover(float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, bool bNewCover, bool bCrouchIfNoCover, float fDelayOrdersLoop, bool bUseDefNodeIfNoCover);
	bool PushCoverWithLocking(class ABioAiController* oMember, const struct FVector& vNear, class APawn* oTarget, class APawn* oAvoid, float fCoverRadius, float fMovementDelay);
	void GetCoverList(class ABioAiController* oMember, class APawn* oTarget, class APawn* oAvoid, TArray<class APawn*>* aoCoverAgainst, TArray<int>* aoCoverValue);
	void UnlockAllPathnodes();
	void UnlockPathnodesByOwner(class ABioPawn* oUnlockOwner);
	void UnlockPathnode(class ANavigationPoint* oUnlockNode);
	void LockPathnode(class ANavigationPoint* oLockNode, class ABioPawn* oLockOwner, int* nIndex);
	bool IsPathnodeLocked(class ANavigationPoint* oTestNode, class ABioPawn* oIgnoreMember, int* nIndex);
	TArray<class ANavigationPoint*> GetLockedPathNodes(class ABioPawn* oIgnoreMember);
	class ANavigationPoint* GetCurrentMovePoint(class ABioPawn* oMemberPawn);
	void DropAgitationIfNoHostile(TEnumAsByte<EeAgitationLevel> nNewLevel);
	void UpgradeAgitationIfHostile(class APawn* oWho, class APawn* oPerceived, TEnumAsByte<EeAgitationLevel> nNewLevel);
	void SetFactionByType(TEnumAsByte<EBioFactionTypes> nNewFaction);
	void ClearAllSquadActions(bool bClearQueue, bool bClearState, bool bUnlockTarget, bool bLeaveCombat);
	float CalculateAllLikelihoods();
	float CalculateLikelihood(const struct FName& sStrategyName);
	bool IsValidStrategy(const struct FName& sStrategyName);
	TArray<struct FName> GetStrategyList();
	void ActivateAfterDelay(float fDelay);
	void Activate();
	void Deactivate();
	void DoFallBackStrategy();
	bool ReEvaluateStrategy();
};


// Class BIOG_StrategicAI.BioFaction_Commoner
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Commoner : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Commoner");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioFaction_Ambient
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Ambient : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Ambient");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioFaction_Defender1
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Defender1 : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Defender1");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioFaction_Defender2
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Defender2 : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Defender2");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioFaction_Hostile1
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Hostile1 : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Hostile1");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioFaction_Hostile2
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_Hostile2 : public UBioFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_Hostile2");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioBaseSquadDesignCombat
// 0x0010 (0x03D0 - 0x03C0)
class ABioBaseSquadDesignCombat : public ABioBaseSquadDesign
{
public:
	class UClass*                                      CombatRestFormations;                                     // 0x03C0(0x0004) (Edit)
	TEnumAsByte<EOrientationType>                      CombatRestOrientation;                                    // 0x03C4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              DelayReactionCombat;                                      // 0x03C8(0x0004) (Edit)
	float                                              DelaySwitchTarget;                                        // 0x03CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioBaseSquadDesignCombat");
		return ptr;
	}


	void OnActionComplete_Combat(class APawn* oMember, const struct FName& nmAction, const struct FName& nmTechnique, int nReason, class AActor* oLastTarget);
	void OnActionComplete_Movement(class APawn* oMember, const struct FName& nmAction, int nReason, class AActor* oTarget, const struct FVector& vLocation);
	bool UseAttackCapability(class ABioAiController* oMember, class APawn* oTarget, class UBioCapability* oCap, TEnumAsByte<EeATTACK_TYPE> eAttackType, float fStabilityOffset, class AActor* oMoveDest, float fMovementDelay);
	class APawn* FindDangerousEnemy(class ABioAiController* oMember, class APawn* oIgnore);
	class APawn* GetClosestPerceivedTarget(class ABioAiController* oMember, class APawn* oIgnoreTarget);
	float GetDistanceToNearestHostile(bool bSquareDist, class ABioAiController** oNearestMember, class APawn** oNearestTarget);
	TEnumAsByte<EOrientationType> GetOrientationType();
	class UClass* GetRestFormation();
	void OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower);
	void OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon);
	void HearNoise(class APawn* Who, float Loudness, class AActor* NoiseMaker, const struct FVector& vNoiseLocation, const struct FName& NoiseType);
	void NoLongerSeePlayer(class APawn* Who, class APawn* Seen);
	void SeePlayer(class APawn* Who, class APawn* Seen);
	void SeenSquad(class ABioBaseSquad* oSquad);
};


// Class BIOG_StrategicAI.BioFaction_CommonerPhysics
// 0x0000 (0x0054 - 0x0054)
class UBioFaction_CommonerPhysics : public UBioFaction_Commoner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioFaction_CommonerPhysics");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioForm_ScoutSwarm
// 0x0000 (0x0050 - 0x0050)
class UBioForm_ScoutSwarm : public UBioFormations
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioForm_ScoutSwarm");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioSeqAct_GetPropertyDesignSquad
// 0x0000 (0x0130 - 0x0130)
class UBioSeqAct_GetPropertyDesignSquad : public UBioSeqAct_GetProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSeqAct_GetPropertyDesignSquad");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioSeqAct_ModifyPropertyDesignSquad
// 0x0000 (0x0130 - 0x0130)
class UBioSeqAct_ModifyPropertyDesignSquad : public UBioSeqAct_ModifyPropertyBaseSquad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSeqAct_ModifyPropertyDesignSquad");
		return ptr;
	}

};


// Class BIOG_StrategicAI.BioSquadAmbient
// 0x0018 (0x03D8 - 0x03C0)
class ABioSquadAmbient : public ABioBaseSquadDesign
{
public:
	class AActor*                                      m_oAvoid;                                                 // 0x03C0(0x0004)
	unsigned long                                      m_bShouldFlee : 1;                                        // 0x03C4(0x0004)
	float                                              FleeTimeout;                                              // 0x03C8(0x0004) (Edit)
	float                                              FlockingMinDistance;                                      // 0x03CC(0x0004) (Edit)
	float                                              FlockingMaxDistance;                                      // 0x03D0(0x0004) (Edit)
	float                                              FlockingMaxSquadDistance;                                 // 0x03D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadAmbient");
		return ptr;
	}


	float CalculateLikelihoodFlee();
	float CalculateLikelihoodIdle();
	float CalculateLikelihood(const struct FName& sStrategyName);
};


// Class BIOG_StrategicAI.BioSquadBeacon
// 0x0000 (0x03D0 - 0x03D0)
class ABioSquadBeacon : public ABioBaseSquadDesignCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadBeacon");
		return ptr;
	}


	float CalculateLikelihoodCasting();
	void SquadMemberBeginCasting(class ABioAiController* oMember);
	float CalculateLikelihood(const struct FName& sStrategyName);
};


// Class BIOG_StrategicAI.BioSquadCombat
// 0x004C (0x041C - 0x03D0)
class ABioSquadCombat : public ABioBaseSquadDesignCombat
{
public:
	float                                              SearchMaxRadius;                                          // 0x03D0(0x0004) (Edit)
	float                                              SearchPercentToSend;                                      // 0x03D4(0x0004) (Edit)
	float                                              SearchTimeout;                                            // 0x03D8(0x0004) (Edit)
	struct FVector                                     m_vSearchLocation;                                        // 0x03DC(0x000C)
	float                                              m_fSearchStartRadius;                                     // 0x03E8(0x0004)
	float                                              m_fSearchStopRadius;                                      // 0x03EC(0x0004)
	unsigned long                                      m_bSearchEnabled : 1;                                     // 0x03F0(0x0004)
	class APawn*                                       m_oDefendAvoid;                                           // 0x03F4(0x0004)
	float                                              ChargeMinDist;                                            // 0x03F8(0x0004) (Edit)
	float                                              ChargeMaxDist;                                            // 0x03FC(0x0004) (Edit)
	float                                              ChargeSquadMaxDist;                                       // 0x0400(0x0004) (Edit)
	float                                              SkirmishMinDist;                                          // 0x0404(0x0004) (Edit)
	float                                              SkirmishMaxDist;                                          // 0x0408(0x0004) (Edit)
	float                                              SkirmishSquadMaxDist;                                     // 0x040C(0x0004) (Edit)
	float                                              DefendMinDist;                                            // 0x0410(0x0004) (Edit)
	float                                              DefendMaxDist;                                            // 0x0414(0x0004) (Edit)
	float                                              DefendSquadMaxDist;                                       // 0x0418(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadCombat");
		return ptr;
	}


	float CalculateLikelihoodDefend();
	float CalculateLikelihoodSkirmish();
	float CalculateLikelihoodCharge();
	float CalculateLikelihoodSearch();
	float CalculateLikelihoodIdle();
	float CalculateLikelihood(const struct FName& sStrategyName);
};


// Class BIOG_StrategicAI.BioSquadCommoner
// 0x0000 (0x03C0 - 0x03C0)
class ABioSquadCommoner : public ABioBaseSquadDesign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadCommoner");
		return ptr;
	}


	float CalculateLikelihoodIdle();
	float CalculateLikelihood(const struct FName& sStrategyName);
};


// Class BIOG_StrategicAI.BioSquadPlayerDesignBase
// 0x0008 (0x04E0 - 0x04D8)
class ABioSquadPlayerDesignBase : public ABioPlayerSquad
{
public:
	unsigned long                                      m_bPerceivedEnemyRecently : 1;                            // 0x04D8(0x0004)
	float                                              m_fPerceivedRecentlyClearTime;                            // 0x04DC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadPlayerDesignBase");
		return ptr;
	}


	void OnSquadSeen(class ABioBaseSquad* oSquad);
	bool AreHostilesNearby();
	void ClearMemberAttackCommand(class ABioPawn* oMemberPawn);
	void ClearPerceptionFlag();
	void SetPerceptionFlag();
};


// Class BIOG_StrategicAI.BioSquadPlayer
// 0x0004 (0x04E4 - 0x04E0)
class ABioSquadPlayer : public ABioSquadPlayerDesignBase
{
public:
	float                                              m_fSquadTickTimer;                                        // 0x04E0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadPlayer");
		return ptr;
	}


	void Tick(float DeltaTime);
	void onPlayerEnterCover();
	void onSquadCoverEvaluate(class APawn* oMember, class UBioCoverInterface* oCover, int nSlot);
	void onMemberArrivedAtTarget(class APawn* oMember);
	bool LookForCover(class APawn* oMember);
	void OnSetSquadFollowFormation(TEnumAsByte<EFollowFormation> eFormation);
	void OnMemberShieldsDown(class APawn* oWho);
	void MemberAdded(int nIndex);
	bool OnPlayerSwitchStance(unsigned char FromState, unsigned char ToState);
	void OnSetAttackTarget(class APawn* pPawn, class AActor* Target);
	void OnCombatEnd();
	void OnCombatBegin();
	void OnDeath(class APawn* pPawn, class AController* pKiller);
	void onMemberAbilityEnabledEvent(class APawn* oPawn, TEnumAsByte<EDisableType> eEnableType, const struct FName& nmSubType);
	void HearNoise(class APawn* Who, float Loudness, class AActor* NoiseMaker, const struct FVector& vNoiseLocation, const struct FName& NoiseType);
	void SeePlayer(class APawn* Who, class APawn* Seen);
	void OnDamaged(class APawn* oMember, class AController* oInstigator, float fDamage);
	void OnCastAt(class APawn* oMember, class APawn* oAttacker, const struct FName& nmPower);
	void OnAttacked(class APawn* oMember, class APawn* oAttacker, const struct FName& nmWeapon);
	void MemberActionComplete_Combat(class ABioPawn* Who, const struct FName& Action, const struct FName& nmTechnique, int nReason, class AActor* oLastTarget, float fReqStability, float fAbortStability, float fReqRadius, float fLastTimeOut);
	void Leader_Changed(class APawn* OldLeader, class APawn* NewLeader);
	void Initialize();
	class ABioPawn* EvaluateTargets(class ABioPawn* oMemberPawn);
	class ABioPawn* PickNewTarget(class ABioPawn* oMemberPawn);
	bool IsAttackTargetValid(class ABioPawn* oMemberPawn, class ABioPawn* oAttackTarget, bool bTestShooting);
	void DoBestAction(class ABioAiController* oMember);
};


// Class BIOG_StrategicAI.BioSquadProxMine
// 0x0000 (0x03D0 - 0x03D0)
class ABioSquadProxMine : public ABioBaseSquadDesignCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadProxMine");
		return ptr;
	}


	float CalculateLikelihoodArmed();
	void SquadMemberBeginCasting(class ABioAiController* oMember);
	float CalculateLikelihood(const struct FName& sStrategyName);
};


// Class BIOG_StrategicAI.BioSquadSitAndShoot
// 0x0000 (0x03D0 - 0x03D0)
class ABioSquadSitAndShoot : public ABioBaseSquadDesignCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_StrategicAI.BioSquadSitAndShoot");
		return ptr;
	}


	float CalculateLikelihoodAttacking();
	void SquadMemberAttackAnyTarget(class ABioAiController* oMember, class APawn* oIgnore);
	void SquadMemberAttackTarget(class ABioAiController* oMember, class APawn* oTarget);
	float CalculateLikelihoodIdle();
	float CalculateLikelihood(const struct FName& sStrategyName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
