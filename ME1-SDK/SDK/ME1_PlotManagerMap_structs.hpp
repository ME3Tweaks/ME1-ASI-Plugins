#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_Basic.hpp"
#include "ME1_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlotManagerMap.BioPlotEnums.EBioRegionAutoSet
enum class EBioRegionAutoSet : uint8_t
{
	Region_Unset                   = 0,
	Region_MAX                     = 1
};


// Enum PlotManagerMap.BioPlotEnums.EBioPlotAutoSet
enum class EBioPlotAutoSet : uint8_t
{
	Plot_Unset                     = 0,
	Plot_MAX                       = 1
};


// Enum PlotManagerMap.BioPlotEnums.EBioAutoSet
enum class EBioAutoSet : uint8_t
{
	Unset                          = 0,
	EBioAutoSet_MAX                = 1
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
