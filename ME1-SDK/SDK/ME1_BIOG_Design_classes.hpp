#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOG_Design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BIOG_Design.BioDeathVFXControlGethTrooper
// 0x0000 (0x0044 - 0x0044)
class UBioDeathVFXControlGethTrooper : public UBioDeathVFXControlBasic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOG_Design.BioDeathVFXControlGethTrooper");
		return ptr;
	}


	void Evaluate(class UBioDeathVFXSpecArrayWrapper* pDeathVFXSpecArrayWrapper, class UBioDeathVFXGameState* pGameState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
