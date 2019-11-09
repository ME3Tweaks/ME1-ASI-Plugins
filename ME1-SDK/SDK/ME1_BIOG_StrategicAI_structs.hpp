#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_Basic.hpp"
#include "ME1_Engine_classes.hpp"
#include "ME1_BIOC_Base_classes.hpp"
#include "ME1_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_SKIRMISH_NAV_RANGE                                 1000.0
#define CONST_BioBaseSquadDesignCombat_MAX_STABILITY_OFFSET      0.10
#define CONST_SNIPER_DISTANCE_SQ                                 16000000
#define CONST_ATTACKED_RECENTLY_TIMEOUT                          10.0
#define CONST_DEFEND_FORCE_MOVE_CHANCE                           0.30
#define CONST_FT_SEARCH                                          0.99
#define CONST_SNIPER_DISTANCE                                    4000
#define CONST_BioBaseSquadDesign_CLOSE_COMBAT_DISTANCE           1000
#define CONST_CLOSE_COMBAT_DISTANCE_SQ                           1000000
#define CONST_PROXIMITY_RESET_DELAY                              10.0
#define CONST_CHARGE_NAV_RANGE                                   500.0
#define CONST_FLEE_NOISE_LEVEL                                   0.5
#define CONST_BioSquadAmbient_FT_IDLE                            0.5
#define CONST_FT_FLEE                                            0.5
#define CONST_DEFEND_NAV_RANGE                                   1500.0
#define CONST_FLEE_NAV_RANGE                                     1200
#define CONST_FLEE_DISTANCE                                      1000
#define CONST_FT_CASTING                                         0.1
#define CONST_SKIRMISH_COVER_RANGE                               1000.0
#define CONST_BioSquadCombat_FT_IDLE                             0.99
#define CONST_FT_CHARGE                                          0.8
#define CONST_FT_SKIRMISH                                        0.6
#define CONST_CHARGE_STOP_RANGE                                  300.0
#define CONST_FT_DEFEND                                          0.5
#define CONST_CHARGE_MAX_RANGE_SQ                                1000000.0
#define CONST_SKIRMISH_MAX_RANGE_SQ                              4000000.0
#define CONST_BioSquadPlayerDesignBase_CLOSE_COMBAT_DISTANCE     1000.0
#define CONST_DEFEND_MIN_RANGE_SQ                                640000.0
#define CONST_SEARCH_NAV_RANGE                                   1600.0
#define CONST_DEFAULT_NAV_RANGE                                  3000.0
#define CONST_LONG_NAV_RANGE                                     6000.0
#define CONST_CHARGE_COVER_RANGE                                 500.0
#define CONST_DEFEND_COVER_RANGE                                 1500.0
#define CONST_BioSquadPlayerDesignBase_MAX_STABILITY_OFFSET      0.10
#define CONST_SKIRMISH_STOP_RANGE                                1200.0
#define CONST_DEFEND_STOP_RANGE                                  1600.0
#define CONST_FT_ARMED                                           0.1
#define CONST_AI_MOVE_RANGE                                      800
#define CONST_BioSquadSitAndShoot_FT_IDLE                        0.1
#define CONST_FT_ATTACKING                                       0.1

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BIOG_StrategicAI.BioBaseSquadDesign.eAgitationLevel
enum class EeAgitationLevel : uint8_t
{
	AS_Low                         = 0,
	AS_Medium                      = 1,
	AS_High                        = 2,
	AS_MAX                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BIOG_StrategicAI.BioBaseSquadDesign.LockedPoint
// 0x0008
struct FLockedPoint
{
	class ANavigationPoint*                            oPoint;                                                   // 0x0000(0x0004)
	class ABioPawn*                                    oLockedBy;                                                // 0x0004(0x0004)
};

// ScriptStruct BIOG_StrategicAI.BioBaseSquadDesign.WaypointRoute
// 0x0014
struct FWaypointRoute
{
	class ABioWaypointSet*                             Route;                                                    // 0x0000(0x0004) (Edit)
	TEnumAsByte<EeWalkWaypointsTypes>                  RouteType;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class APawn*                                       AssignedSquadMember;                                      // 0x0008(0x0004) (Edit)
	unsigned long                                      LowAgitation : 1;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      HighAgitation : 1;                                        // 0x000C(0x0004) (Edit)
	unsigned long                                      SpeedRun : 1;                                             // 0x000C(0x0004) (Edit)
	class APawn*                                       oCurrentlyAssignedMember;                                 // 0x0010(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
