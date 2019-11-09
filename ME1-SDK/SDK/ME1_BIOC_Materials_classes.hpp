#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "ME1_BIOC_Materials_structs.hpp"

namespace SDK
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class BIOC_Materials.BioGlobalResources
	// 0x0174 (0x01B0 - 0x003C)

#undef lst1  
#undef lst2       
#undef lst3      
#undef lst4      
#undef lst5      
#undef lst6       
#undef lst7        
#undef lst8     
#undef lst9      
#undef lst10     
#undef lst11      
#undef lst12    
#undef lst13   
#undef lst14   
#undef lst15    
#undef lst16      
	class UBioGlobalResources : public UObject
	{
	public:
		TArray<class UMaterialInstance*>                   lst;                                                      // 0x003C(0x000C) (Transient, NeedCtorLink)
		TArray<class UMaterialInstance*>                   lstb;                                                     // 0x0048(0x000C) (Transient, NeedCtorLink)
		TArray<class UAnimSet*>                            lst2;                                                     // 0x0054(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioActorType*>                       lst3;                                                     // 0x0060(0x000C) (Transient, NeedCtorLink)
		TArray<class USkeletalMesh*>                       lst4;                                                     // 0x006C(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioAppearanceItem*>                  lst5;                                                     // 0x0078(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioVISGrenade*>                      lst6;                                                     // 0x0084(0x000C) (Transient, NeedCtorLink)
		TArray<class UPhysicsAsset*>                       lst7;                                                     // 0x0090(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioVFXTemplate*>                     lst8;                                                     // 0x009C(0x000C) (Transient, NeedCtorLink)
		TArray<class UPostProcessChain*>                   lst9;                                                     // 0x00A8(0x000C) (Transient, NeedCtorLink)
		TArray<class UUISkin*>                             lst10;                                                    // 0x00B4(0x000C) (Transient, NeedCtorLink)
		TArray<class USoundCue*>                           lst11;                                                    // 0x00C0(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioTlkFile*>                         lst12;                                                    // 0x00CC(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioStateEventMap*>                   lst13;                                                    // 0x00D8(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioOutcomeMap*>                      lst14;                                                    // 0x00E4(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioQuestMap*>                        lst15;                                                    // 0x00F0(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioCodexMap*>                        lst16;                                                    // 0x00FC(0x000C) (Transient, NeedCtorLink)
		TArray<class UPhysicalMaterial*>                   lst17;                                                    // 0x0108(0x000C) (Transient, NeedCtorLink)
		TArray<class UObject*>                             lst18;                                                    // 0x0114(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioSWF*>                             lst19;                                                    // 0x0120(0x000C) (Transient, NeedCtorLink)
		TArray<class UMaterialInstanceConstant*>           lst20;                                                    // 0x012C(0x000C) (Transient, NeedCtorLink)
		TArray<class UFont*>                               lst21;                                                    // 0x0138(0x000C) (Transient, NeedCtorLink)
		TArray<class UTexture2D*>                          lst22;                                                    // 0x0144(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioForceFeedbackPlayer*>             lst23;                                                    // 0x0150(0x000C) (Transient, NeedCtorLink)
		TArray<class UFaceFXAsset*>                        lst24;                                                    // 0x015C(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioShieldView*>                      lst25;                                                    // 0x0168(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioPowerVFXAppearance*>              lst26;                                                    // 0x0174(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioDeathVFX*>                        lst27;                                                    // 0x0180(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioDamageType*>                      lst28;                                                    // 0x018C(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioVISFootstep*>                     lst29;                                                    // 0x0198(0x000C) (Transient, NeedCtorLink)
		TArray<class UAnimTree*>                           lst30;                                                    // 0x01A4(0x000C) (Transient, NeedCtorLink)

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class BIOC_Materials.BioGlobalResources");
			return ptr;
		}

	};


	// Class BIOC_Materials.BioPrecacheMaterials
	// 0x0168 (0x01A4 - 0x003C)
	class UBioPrecacheMaterials : public UObject
	{
	public:
		TArray<class UMaterialInstance*>                   lst;                                                     // 0x003C(0x000C) (Transient, NeedCtorLink)
		TArray<class UMaterialInstance*>                   lstb;                                                     // 0x0048(0x000C) (Transient, NeedCtorLink)
		TArray<class UAnimSet*>                            lst2;                                                     // 0x0054(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioActorType*>                       lst3;                                                     // 0x0060(0x000C) (Transient, NeedCtorLink)
		TArray<class USkeletalMesh*>                       lst4;                                                     // 0x006C(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioAppearanceItem*>                  lst5;                                                     // 0x0078(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioVISGrenade*>                      lst6;                                                     // 0x0084(0x000C) (Transient, NeedCtorLink)
		TArray<class UPhysicsAsset*>                       lst7;                                                     // 0x0090(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioVFXTemplate*>                     lst8;                                                     // 0x009C(0x000C) (Transient, NeedCtorLink)
		TArray<class UPostProcessChain*>                   lst9;                                                     // 0x00A8(0x000C) (Transient, NeedCtorLink)
		TArray<class UUISkin*>                             lst10;                                                    // 0x00B4(0x000C) (Transient, NeedCtorLink)
		TArray<class USoundCue*>                           lst11;                                                    // 0x00C0(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioTlkFile*>                         lst12;                                                    // 0x00CC(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioStateEventMap*>                   lst13;                                                    // 0x00D8(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioOutcomeMap*>                      lst14;                                                    // 0x00E4(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioQuestMap*>                        lst15;                                                    // 0x00F0(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioCodexMap*>                        lst16;                                                    // 0x00FC(0x000C) (Transient, NeedCtorLink)
		TArray<class UPhysicalMaterial*>                   lst17;                                                    // 0x0108(0x000C) (Transient, NeedCtorLink)
		TArray<class UObject*>                             lst18;                                                    // 0x0114(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioSWF*>                             lst19;                                                    // 0x0120(0x000C) (Transient, NeedCtorLink)
		TArray<class UMaterialInstanceConstant*>           lst20;                                                    // 0x012C(0x000C) (Transient, NeedCtorLink)
		TArray<class UFont*>                               lst21;                                                    // 0x0138(0x000C) (Transient, NeedCtorLink)
		TArray<class UTexture2D*>                          lst22;                                                    // 0x0144(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioForceFeedbackPlayer*>             lst23;                                                    // 0x0150(0x000C) (Transient, NeedCtorLink)
		TArray<class UFaceFXAsset*>                        lst24;                                                    // 0x015C(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioShieldView*>                      lst25;                                                    // 0x0168(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioPowerVFXAppearance*>              lst26;                                                    // 0x0174(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioDeathVFX*>                        lst27;                                                    // 0x0180(0x000C) (Transient, NeedCtorLink)
		TArray<class UBioDamageType*>                      lst28;                                                    // 0x018C(0x000C) (Transient, NeedCtorLink)
		TArray<class UTexture2D*>                          lst29;                                                    // 0x0198(0x000C) (Transient, NeedCtorLink)

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class BIOC_Materials.BioPrecacheMaterials");
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
