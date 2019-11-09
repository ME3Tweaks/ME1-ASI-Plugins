#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_BIOC_WorldResources_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BIOC_WorldResources.BioWorldResources
// 0x003C (0x0078 - 0x003C)
class UBioWorldResources : public UObject
{
public:
	TArray<class UMaterialInstance*>                   lstMaterials;                                             // 0x003C(0x000C) (Transient, NeedCtorLink)
	TArray<class UBioAppearanceItem*>                  lstAppearanceItems;                                       // 0x0048(0x000C) (Transient, NeedCtorLink)
	TArray<class UBioVFXTemplate*>                     lstVFXTemplates;                                          // 0x0054(0x000C) (Transient, NeedCtorLink)
	TArray<class UBioPowerVFXAppearance*>              lstPowerVFXAppearances;                                   // 0x0060(0x000C) (Transient, NeedCtorLink)
	TArray<class UBioVISFootstep*>                     lstVISFootstep;                                           // 0x006C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BIOC_WorldResources.BioWorldResources");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
