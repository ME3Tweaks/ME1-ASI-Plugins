#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_ISACTAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ISACTAudio.ISACTAudioDevice
// 0x011C (0x0268 - 0x014C)
class UISACTAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x014C(0x00D8) MISSED OFFSET
	float                                              TimeBetweenHWUpdates;                                     // 0x0224(0x0004) (Config)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0228(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ISACTAudio.ISACTAudioDevice");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
