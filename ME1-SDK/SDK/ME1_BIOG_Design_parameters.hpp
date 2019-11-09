#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Design_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BIOG_Design.BioDeathVFXControlGethTrooper.Evaluate
struct UBioDeathVFXControlGethTrooper_Evaluate_Params
{
	class UBioDeathVFXSpecArrayWrapper*                pDeathVFXSpecArrayWrapper;                                // (Parm)
	class UBioDeathVFXGameState*                       pGameState;                                               // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
