#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_Basic.hpp"
#include "ME1_BIOC_Base_classes.hpp"
#include "ME1_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_GFX_GROUP_Suppression_Target                       4
#define CONST_GFX_GROUP_ALWAYS_STACKS                            -1
#define CONST_GFX_GROUP_Marksman                                 0
#define CONST_GFX_GROUP_Take_Down                                7
#define CONST_GFX_GROUP_Critical_Dmg                             1
#define CONST_GFX_GROUP_Suppression_Caster                       3
#define CONST_GFX_GROUP_Critical_Stun                            2
#define CONST_GFX_GROUP_Shield_Boost                             5
#define CONST_GFX_GROUP_Adrenaline                               6
#define CONST_BURN_INTERVAL                                      0.1
#define CONST_GFX_GROUP_Lift                                     8
#define CONST_GFX_GROUP_Warp_DoT                                 9
#define CONST_GFX_GROUP_Weaken                                   10
#define CONST_GFX_GROUP_Stasis                                   11
#define CONST_GFX_GROUP_Sabotage_WeaponPowers                    12
#define CONST_GFX_GROUP_AI_Hacking                               13
#define CONST_BioBarrierScript_BARRIER_ACTOR_TYPE                "BIOG_V_B_Barrier_Z.BioticBarrier01_Type"
#define CONST_GFX_GROUP_Damping_Field                            14
#define CONST_GFX_GROUP_Neural_Shock                             15
#define CONST_GFX_GROUP_Immunity                                 16
#define CONST_GFX_GROUP_Resin_Slow                               18
#define CONST_GFX_GROUP_Acid_DR_Lowered                          19
#define CONST_GFX_GROUP_Singularity                              20
#define CONST_GFX_GROUP_Sabotage_Sniper                          24
#define CONST_GFX_GROUP_Sabotage_Pistol                          21
#define CONST_GFX_GROUP_Sabotage_Shotgun                         22
#define CONST_BioShieldBoostScript_HEAL_INTERVAL                 0.1
#define CONST_GFX_GROUP_Sabotage_Assault                         23
#define CONST_REPAIR_INTERVAL                                    0.1
#define CONST_GFX_GROUP_Entrench                                 25
#define CONST_GFX_GROUP_Carnage_Setup                            26
#define CONST_GFX_GROUP_Sabotage_BurnDamage                      27
#define CONST_BARRIER_HEIGHT                                     150
#define CONST_BARRIER_WIDTH                                      240
#define CONST_BARRIER_DEPTH                                      50
#define CONST_BioHealScript_HEAL_INTERVAL                        0.1
#define CONST_BioHealSquadScript_HEAL_INTERVAL                   0.1
#define CONST_BioHexBarrierScript_BARRIER_ACTOR_TYPE             "BIOG_APL_TYPES.Cover.HexL_90_Type"
#define CONST_DEGREES_TO_UUR_1                                   0
#define CONST_DEGREES_TO_UUR_91                                  16384
#define CONST_FORCE_INTERVAL                                     0.25
#define CONST_TICK_INTERVAL                                      0.1f
#define CONST_TALENTID_ELECTRONICS                               84
#define CONST_BioShieldEntrenchScript_HEAL_INTERVAL              0.1
#define CONST_BioThrowWarpScript_WARP_INTERVAL                   0.1
#define CONST_BioWarpScript_WARP_INTERVAL                        0.1

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
