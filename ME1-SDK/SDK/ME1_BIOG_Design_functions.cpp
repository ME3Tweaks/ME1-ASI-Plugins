// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Design_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BIOG_Design.BioDeathVFXControlGethTrooper.Evaluate
// (Defined, Event, Public)
// Parameters:
// class UBioDeathVFXSpecArrayWrapper* pDeathVFXSpecArrayWrapper      (Parm)
// class UBioDeathVFXGameState*   pGameState                     (Parm)

void UBioDeathVFXControlGethTrooper::Evaluate(class UBioDeathVFXSpecArrayWrapper* pDeathVFXSpecArrayWrapper, class UBioDeathVFXGameState* pGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BIOG_Design.BioDeathVFXControlGethTrooper.Evaluate");

	UBioDeathVFXControlGethTrooper_Evaluate_Params params;
	params.pDeathVFXSpecArrayWrapper = pDeathVFXSpecArrayWrapper;
	params.pGameState = pGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
