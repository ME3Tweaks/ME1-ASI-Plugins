#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_StrategicAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BIOG_StrategicAI.BioAI_SarenHopper.OnDamaged
struct ABioAI_SarenHopper_OnDamaged_Params
{
	class AController*                                 oInstigator;                                              // (Parm)
	float                                              fDamage;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnProximityAlarm
struct ABioBaseSquadDesign_OnProximityAlarm_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class AActor*                                      oTarget;                                                  // (Parm)
	int                                                nRelationship;                                            // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnSquadSeen
struct ABioBaseSquadDesign_OnSquadSeen_Params
{
	class ABioBaseSquad*                               oSquad;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnDamaged
struct ABioBaseSquadDesign_OnDamaged_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class AController*                                 oInstigator;                                              // (Parm)
	float                                              fDamage;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnCastAt
struct ABioBaseSquadDesign_OnCastAt_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmPower;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnAttacked
struct ABioBaseSquadDesign_OnAttacked_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmWeapon;                                                 // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnDeath
struct ABioBaseSquadDesign_OnDeath_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class AController*                                 oKiller;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetHackedSquad
struct ABioBaseSquadDesign_SetHackedSquad_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetInitialState
struct ABioBaseSquadDesign_SetInitialState_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnActionComplete_Movement
struct ABioBaseSquadDesign_OnActionComplete_Movement_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	struct FName                                       nmAction;                                                 // (Parm)
	int                                                nReason;                                                  // (Parm)
	class AActor*                                      oTarget;                                                  // (Parm)
	struct FVector                                     vLocation;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.MemberAdded
struct ABioBaseSquadDesign_MemberAdded_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.MemberRemoved
struct ABioBaseSquadDesign_MemberRemoved_Params
{
	class APawn*                                       oPawn;                                                    // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers
struct ABioBaseSquadDesign_RemovePerceptionMultipliers_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	float                                              fSightMult;                                               // (Parm)
	float                                              fHearingMult;                                             // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers
struct ABioBaseSquadDesign_ApplyPerceptionMultipliers_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	float                                              fSightMult;                                               // (Parm)
	float                                              fHearingMult;                                             // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ResetAttackedRecently
struct ABioBaseSquadDesign_ResetAttackedRecently_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.NoLongerSeePlayer
struct ABioBaseSquadDesign_NoLongerSeePlayer_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SeePlayer
struct ABioBaseSquadDesign_SeePlayer_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.OnFactionChanged
struct ABioBaseSquadDesign_OnFactionChanged_Params
{
	class UClass*                                      oOldFaction;                                              // (Parm)
	class UClass*                                      oNewFaction;                                              // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetOrientationType
struct ABioBaseSquadDesign_GetOrientationType_Params
{
	TEnumAsByte<EOrientationType>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetRestFormation
struct ABioBaseSquadDesign_GetRestFormation_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadWalkWaypoints
struct ABioBaseSquadDesign_SquadWalkWaypoints_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints
struct ABioBaseSquadDesign_SquadMemberWalkWaypoints_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen
struct ABioBaseSquadDesign_GetNavPointInPlaypen_Params
{
	struct FVector                                     vNear;                                                    // (Parm)
	struct FVector                                     vLateralOffset;                                           // (Parm)
	float                                              fSearchRadius;                                            // (Parm)
	float                                              fVerticalOffset;                                          // (OptionalParm, Parm)
	bool                                               bCanFly;                                                  // (OptionalParm, Parm)
	bool                                               bCanHop;                                                  // (OptionalParm, Parm)
	bool                                               bSniper;                                                  // (OptionalParm, Parm)
	bool                                               bAggressive;                                              // (OptionalParm, Parm)
	bool                                               bDefensive;                                               // (OptionalParm, Parm)
	class AActor*                                      oLOSTarget;                                               // (OptionalParm, Parm)
	class ABioPawn*                                    oIgnoreIfLockedBy;                                        // (OptionalParm, Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetFlockingOffset
struct ABioBaseSquadDesign_GetFlockingOffset_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetFlockingRanges
struct ABioBaseSquadDesign_SetFlockingRanges_Params
{
	float                                              FMin;                                                     // (Parm)
	float                                              FMax;                                                     // (Parm)
	float                                              fSquadMax;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetFurthestSquadMember
struct ABioBaseSquadDesign_GetFurthestSquadMember_Params
{
	struct FVector                                     vTarget;                                                  // (Parm)
	TArray<class ABioAiController*>                    aoIgnoreMembers;                                          // (OptionalParm, Parm, NeedCtorLink)
	float                                              fLongestDistToTargetSq;                                   // (OptionalParm, Parm, OutParm)
	class ABioAiController*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ResetSquadProximity
struct ABioBaseSquadDesign_ResetSquadProximity_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange
struct ABioBaseSquadDesign_SetSquadProximityByAttackRange_Params
{
	float                                              fMultiplier;                                              // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetSquadProximity
struct ABioBaseSquadDesign_SetSquadProximity_Params
{
	float                                              fDefault;                                                 // (OptionalParm, Parm)
	float                                              fCloseCombat;                                             // (OptionalParm, Parm)
	float                                              fSniperCombat;                                            // (OptionalParm, Parm)
	float                                              fSupport;                                                 // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.PushMoveWithLocking
struct ABioBaseSquadDesign_PushMoveWithLocking_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class AActor*                                      oTarget;                                                  // (Parm)
	float                                              fTolerance;                                               // (OptionalParm, Parm)
	bool                                               bWalking;                                                 // (OptionalParm, Parm)
	float                                              fMovementDelay;                                           // (OptionalParm, Parm)
	bool                                               bCrouch;                                                  // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadMemberTakeCover
struct ABioBaseSquadDesign_SquadMemberTakeCover_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	float                                              fCoverRange;                                              // (OptionalParm, Parm)
	float                                              fNavRange;                                                // (OptionalParm, Parm)
	class APawn*                                       oTarget;                                                  // (OptionalParm, Parm)
	class APawn*                                       oAvoid;                                                   // (OptionalParm, Parm)
	bool                                               bNewCover;                                                // (OptionalParm, Parm)
	bool                                               bCrouchIfNoCover;                                         // (OptionalParm, Parm)
	float                                              fMovementDelay;                                           // (OptionalParm, Parm)
	struct FVector                                     vCoverLocation;                                           // (OptionalParm, Parm)
	bool                                               bUseDefNodeIfNoCover;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.IsAtDefenseNode
struct ABioBaseSquadDesign_IsAtDefenseNode_Params
{
	class APawn*                                       oTestPawn;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SquadTakeCover
struct ABioBaseSquadDesign_SquadTakeCover_Params
{
	float                                              fCoverRange;                                              // (OptionalParm, Parm)
	float                                              fNavRange;                                                // (OptionalParm, Parm)
	class APawn*                                       oTarget;                                                  // (OptionalParm, Parm)
	class APawn*                                       oAvoid;                                                   // (OptionalParm, Parm)
	bool                                               bNewCover;                                                // (OptionalParm, Parm)
	bool                                               bCrouchIfNoCover;                                         // (OptionalParm, Parm)
	float                                              fDelayOrdersLoop;                                         // (OptionalParm, Parm)
	bool                                               bUseDefNodeIfNoCover;                                     // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.PushCoverWithLocking
struct ABioBaseSquadDesign_PushCoverWithLocking_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	struct FVector                                     vNear;                                                    // (Parm)
	class APawn*                                       oTarget;                                                  // (OptionalParm, Parm)
	class APawn*                                       oAvoid;                                                   // (OptionalParm, Parm)
	float                                              fCoverRadius;                                             // (OptionalParm, Parm)
	float                                              fMovementDelay;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetCoverList
struct ABioBaseSquadDesign_GetCoverList_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	TArray<class APawn*>                               aoCoverAgainst;                                           // (Parm, OutParm, NeedCtorLink)
	TArray<int>                                        aoCoverValue;                                             // (Parm, OutParm, NeedCtorLink)
	class APawn*                                       oTarget;                                                  // (OptionalParm, Parm)
	class APawn*                                       oAvoid;                                                   // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockAllPathnodes
struct ABioBaseSquadDesign_UnlockAllPathnodes_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner
struct ABioBaseSquadDesign_UnlockPathnodesByOwner_Params
{
	class ABioPawn*                                    oUnlockOwner;                                             // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.UnlockPathnode
struct ABioBaseSquadDesign_UnlockPathnode_Params
{
	class ANavigationPoint*                            oUnlockNode;                                              // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.LockPathnode
struct ABioBaseSquadDesign_LockPathnode_Params
{
	class ANavigationPoint*                            oLockNode;                                                // (Parm)
	class ABioPawn*                                    oLockOwner;                                               // (Parm)
	int                                                nIndex;                                                   // (OptionalParm, Parm, OutParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.IsPathnodeLocked
struct ABioBaseSquadDesign_IsPathnodeLocked_Params
{
	class ANavigationPoint*                            oTestNode;                                                // (Parm)
	int                                                nIndex;                                                   // (OptionalParm, Parm, OutParm)
	class ABioPawn*                                    oIgnoreMember;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetLockedPathNodes
struct ABioBaseSquadDesign_GetLockedPathNodes_Params
{
	class ABioPawn*                                    oIgnoreMember;                                            // (OptionalParm, Parm)
	TArray<class ANavigationPoint*>                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetCurrentMovePoint
struct ABioBaseSquadDesign_GetCurrentMovePoint_Params
{
	class ABioPawn*                                    oMemberPawn;                                              // (Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile
struct ABioBaseSquadDesign_DropAgitationIfNoHostile_Params
{
	TEnumAsByte<EeAgitationLevel>                      nNewLevel;                                                // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile
struct ABioBaseSquadDesign_UpgradeAgitationIfHostile_Params
{
	class APawn*                                       oWho;                                                     // (Parm)
	class APawn*                                       oPerceived;                                               // (Parm)
	TEnumAsByte<EeAgitationLevel>                      nNewLevel;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.SetFactionByType
struct ABioBaseSquadDesign_SetFactionByType_Params
{
	TEnumAsByte<EBioFactionTypes>                      nNewFaction;                                              // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ClearAllSquadActions
struct ABioBaseSquadDesign_ClearAllSquadActions_Params
{
	bool                                               bClearQueue;                                              // (OptionalParm, Parm)
	bool                                               bClearState;                                              // (OptionalParm, Parm)
	bool                                               bUnlockTarget;                                            // (OptionalParm, Parm)
	bool                                               bLeaveCombat;                                             // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods
struct ABioBaseSquadDesign_CalculateAllLikelihoods_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.CalculateLikelihood
struct ABioBaseSquadDesign_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.IsValidStrategy
struct ABioBaseSquadDesign_IsValidStrategy_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.GetStrategyList
struct ABioBaseSquadDesign_GetStrategyList_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ActivateAfterDelay
struct ABioBaseSquadDesign_ActivateAfterDelay_Params
{
	float                                              fDelay;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.Activate
struct ABioBaseSquadDesign_Activate_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.Deactivate
struct ABioBaseSquadDesign_Deactivate_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.DoFallBackStrategy
struct ABioBaseSquadDesign_DoFallBackStrategy_Params
{
};

// Function BIOG_StrategicAI.BioBaseSquadDesign.ReEvaluateStrategy
struct ABioBaseSquadDesign_ReEvaluateStrategy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat
struct ABioBaseSquadDesignCombat_OnActionComplete_Combat_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	struct FName                                       nmAction;                                                 // (Parm)
	struct FName                                       nmTechnique;                                              // (Parm)
	int                                                nReason;                                                  // (Parm)
	class AActor*                                      oLastTarget;                                              // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement
struct ABioBaseSquadDesignCombat_OnActionComplete_Movement_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	struct FName                                       nmAction;                                                 // (Parm)
	int                                                nReason;                                                  // (Parm)
	class AActor*                                      oTarget;                                                  // (Parm)
	struct FVector                                     vLocation;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.UseAttackCapability
struct ABioBaseSquadDesignCombat_UseAttackCapability_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class APawn*                                       oTarget;                                                  // (Parm)
	class UBioCapability*                              oCap;                                                     // (Parm)
	TEnumAsByte<EeATTACK_TYPE>                         eAttackType;                                              // (Parm)
	float                                              fStabilityOffset;                                         // (OptionalParm, Parm)
	class AActor*                                      oMoveDest;                                                // (OptionalParm, Parm)
	float                                              fMovementDelay;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy
struct ABioBaseSquadDesignCombat_FindDangerousEnemy_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class APawn*                                       oIgnore;                                                  // (OptionalParm, Parm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget
struct ABioBaseSquadDesignCombat_GetClosestPerceivedTarget_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class APawn*                                       oIgnoreTarget;                                            // (OptionalParm, Parm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile
struct ABioBaseSquadDesignCombat_GetDistanceToNearestHostile_Params
{
	bool                                               bSquareDist;                                              // (OptionalParm, Parm)
	class ABioAiController*                            oNearestMember;                                           // (OptionalParm, Parm, OutParm)
	class APawn*                                       oNearestTarget;                                           // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetOrientationType
struct ABioBaseSquadDesignCombat_GetOrientationType_Params
{
	TEnumAsByte<EOrientationType>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.GetRestFormation
struct ABioBaseSquadDesignCombat_GetRestFormation_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnCastAt
struct ABioBaseSquadDesignCombat_OnCastAt_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmPower;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.OnAttacked
struct ABioBaseSquadDesignCombat_OnAttacked_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmWeapon;                                                 // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.HearNoise
struct ABioBaseSquadDesignCombat_HearNoise_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	float                                              Loudness;                                                 // (Parm)
	class AActor*                                      NoiseMaker;                                               // (Parm)
	struct FVector                                     vNoiseLocation;                                           // (Parm)
	struct FName                                       NoiseType;                                                // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer
struct ABioBaseSquadDesignCombat_NoLongerSeePlayer_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeePlayer
struct ABioBaseSquadDesignCombat_SeePlayer_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioBaseSquadDesignCombat.SeenSquad
struct ABioBaseSquadDesignCombat_SeenSquad_Params
{
	class ABioBaseSquad*                               oSquad;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodFlee
struct ABioSquadAmbient_CalculateLikelihoodFlee_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihoodIdle
struct ABioSquadAmbient_CalculateLikelihoodIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadAmbient.CalculateLikelihood
struct ABioSquadAmbient_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihoodCasting
struct ABioSquadBeacon_CalculateLikelihoodCasting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadBeacon.SquadMemberBeginCasting
struct ABioSquadBeacon_SquadMemberBeginCasting_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadBeacon.CalculateLikelihood
struct ABioSquadBeacon_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodDefend
struct ABioSquadCombat_CalculateLikelihoodDefend_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish
struct ABioSquadCombat_CalculateLikelihoodSkirmish_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodCharge
struct ABioSquadCombat_CalculateLikelihoodCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodSearch
struct ABioSquadCombat_CalculateLikelihoodSearch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihoodIdle
struct ABioSquadCombat_CalculateLikelihoodIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCombat.CalculateLikelihood
struct ABioSquadCombat_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihoodIdle
struct ABioSquadCommoner_CalculateLikelihoodIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadCommoner.CalculateLikelihood
struct ABioSquadCommoner_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.OnSquadSeen
struct ABioSquadPlayerDesignBase_OnSquadSeen_Params
{
	class ABioBaseSquad*                               oSquad;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby
struct ABioSquadPlayerDesignBase_AreHostilesNearby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand
struct ABioSquadPlayerDesignBase_ClearMemberAttackCommand_Params
{
	class ABioPawn*                                    oMemberPawn;                                              // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag
struct ABioSquadPlayerDesignBase_ClearPerceptionFlag_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag
struct ABioSquadPlayerDesignBase_SetPerceptionFlag_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayer.Tick
struct ABioSquadPlayer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.onPlayerEnterCover
struct ABioSquadPlayer_onPlayerEnterCover_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayer.onSquadCoverEvaluate
struct ABioSquadPlayer_onSquadCoverEvaluate_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class UBioCoverInterface*                          oCover;                                                   // (Parm)
	int                                                nSlot;                                                    // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.onMemberArrivedAtTarget
struct ABioSquadPlayer_onMemberArrivedAtTarget_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.LookForCover
struct ABioSquadPlayer_LookForCover_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnSetSquadFollowFormation
struct ABioSquadPlayer_OnSetSquadFollowFormation_Params
{
	TEnumAsByte<EFollowFormation>                      eFormation;                                               // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnMemberShieldsDown
struct ABioSquadPlayer_OnMemberShieldsDown_Params
{
	class APawn*                                       oWho;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.MemberAdded
struct ABioSquadPlayer_MemberAdded_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnPlayerSwitchStance
struct ABioSquadPlayer_OnPlayerSwitchStance_Params
{
	unsigned char                                      FromState;                                                // (Parm)
	unsigned char                                      ToState;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnSetAttackTarget
struct ABioSquadPlayer_OnSetAttackTarget_Params
{
	class APawn*                                       pPawn;                                                    // (Parm)
	class AActor*                                      Target;                                                   // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnCombatEnd
struct ABioSquadPlayer_OnCombatEnd_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnCombatBegin
struct ABioSquadPlayer_OnCombatBegin_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnDeath
struct ABioSquadPlayer_OnDeath_Params
{
	class APawn*                                       pPawn;                                                    // (Parm)
	class AController*                                 pKiller;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent
struct ABioSquadPlayer_onMemberAbilityEnabledEvent_Params
{
	class APawn*                                       oPawn;                                                    // (Parm)
	TEnumAsByte<EDisableType>                          eEnableType;                                              // (Parm)
	struct FName                                       nmSubType;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.HearNoise
struct ABioSquadPlayer_HearNoise_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	float                                              Loudness;                                                 // (Parm)
	class AActor*                                      NoiseMaker;                                               // (Parm)
	struct FVector                                     vNoiseLocation;                                           // (Parm)
	struct FName                                       NoiseType;                                                // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.SeePlayer
struct ABioSquadPlayer_SeePlayer_Params
{
	class APawn*                                       Who;                                                      // (Parm)
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnDamaged
struct ABioSquadPlayer_OnDamaged_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class AController*                                 oInstigator;                                              // (Parm)
	float                                              fDamage;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnCastAt
struct ABioSquadPlayer_OnCastAt_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmPower;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.OnAttacked
struct ABioSquadPlayer_OnAttacked_Params
{
	class APawn*                                       oMember;                                                  // (Parm)
	class APawn*                                       oAttacker;                                                // (Parm)
	struct FName                                       nmWeapon;                                                 // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.MemberActionComplete_Combat
struct ABioSquadPlayer_MemberActionComplete_Combat_Params
{
	class ABioPawn*                                    Who;                                                      // (Parm)
	struct FName                                       Action;                                                   // (Parm)
	struct FName                                       nmTechnique;                                              // (Parm)
	int                                                nReason;                                                  // (Parm)
	class AActor*                                      oLastTarget;                                              // (Parm)
	float                                              fReqStability;                                            // (Parm)
	float                                              fAbortStability;                                          // (Parm)
	float                                              fReqRadius;                                               // (Parm)
	float                                              fLastTimeOut;                                             // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.Leader_Changed
struct ABioSquadPlayer_Leader_Changed_Params
{
	class APawn*                                       OldLeader;                                                // (Parm)
	class APawn*                                       NewLeader;                                                // (Parm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.Initialize
struct ABioSquadPlayer_Initialize_Params
{
};

// Function BIOG_StrategicAI.BioSquadPlayer.EvaluateTargets
struct ABioSquadPlayer_EvaluateTargets_Params
{
	class ABioPawn*                                    oMemberPawn;                                              // (Parm)
	class ABioPawn*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.PickNewTarget
struct ABioSquadPlayer_PickNewTarget_Params
{
	class ABioPawn*                                    oMemberPawn;                                              // (Parm)
	class ABioPawn*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.IsAttackTargetValid
struct ABioSquadPlayer_IsAttackTargetValid_Params
{
	class ABioPawn*                                    oMemberPawn;                                              // (Parm)
	class ABioPawn*                                    oAttackTarget;                                            // (Parm)
	bool                                               bTestShooting;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadPlayer.DoBestAction
struct ABioSquadPlayer_DoBestAction_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihoodArmed
struct ABioSquadProxMine_CalculateLikelihoodArmed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadProxMine.SquadMemberBeginCasting
struct ABioSquadProxMine_SquadMemberBeginCasting_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadProxMine.CalculateLikelihood
struct ABioSquadProxMine_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking
struct ABioSquadSitAndShoot_CalculateLikelihoodAttacking_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget
struct ABioSquadSitAndShoot_SquadMemberAttackAnyTarget_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class APawn*                                       oIgnore;                                                  // (OptionalParm, Parm)
};

// Function BIOG_StrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget
struct ABioSquadSitAndShoot_SquadMemberAttackTarget_Params
{
	class ABioAiController*                            oMember;                                                  // (Parm)
	class APawn*                                       oTarget;                                                  // (Parm)
};

// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle
struct ABioSquadSitAndShoot_CalculateLikelihoodIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BIOG_StrategicAI.BioSquadSitAndShoot.CalculateLikelihood
struct ABioSquadSitAndShoot_CalculateLikelihood_Params
{
	struct FName                                       sStrategyName;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
