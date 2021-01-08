// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
TArray<FNameEntry*>* FName::GNames = nullptr; // Are these supposed to be set?
TArray<UObject*>* UObject::GObjects = nullptr; // Are these supposed to be set?
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
