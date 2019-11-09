#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_Basic.hpp"
#include "ME1_Core_classes.hpp"
#include "ME1_Engine_classes.hpp"
#include "ME1_PlotManagerMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_DeleteCharacter                                    2
#define CONST_CloseLoot                                          1
#define CONST_AreaMap_UpdateZoom                                 7
#define CONST_FOLLOW_MOVEMENT_PathFind_Tolerance                 20.0
#define CONST_BIO_SQUAD_CHATTER_EXCLUDE_LEADER                   2
#define CONST_PCSettingsAutoLevelUp                              35
#define CONST_BIO_ACTION_ANIM_NODE_COUNT                         11
#define CONST_SHOP_HANDLER_EVENT_UPDATE_SLOT_ICONS               8
#define CONST_AT_ACCURATE_END                                    0.65
#define CONST_PCSSetDefaults                                     5
#define CONST_BioAiController_NEW_ACTION_GROUP                   -1
#define CONST_NUM_LINKS                                          10
#define CONST_AT_SUPPRESSING_START                               0.45
#define CONST_BioPawn_NEW_ACTION_GROUP                           -1
#define CONST_FOLLOW_MOVEMENT_Tolerance                          5.0
#define CONST_BioAiController_EXISTING_ACTION_GROUP              -2
#define CONST_AT_MELEE_START                                     0.05
#define CONST_BioPawn_EXISTING_ACTION_GROUP                      -2
#define CONST_MAX_DEFAULT_INTIMACY                               750
#define CONST_AT_SNIPER_TIMEOUT                                  10.0
#define CONST_RETICLE_MIN_AR                                     0.05f
#define CONST_GP_NEVER_TIMEOUT                                   9999999999.0f
#define CONST_BIO_SQUAD_HOLDVELOCITY                             50.0
#define CONST_FOLLOW_MOVEMENT_TIME_OUT                           20.0
#define CONST_ELEVATION_TEST_HEIGHT                              300
#define CONST_MINIMUM_PURCHASE_PRICE                             99
#define CONST_SelectNewScreenRes                                 25
#define CONST_BioSFHandler_PCPauseMenu_srExitConfirm             176289
#define CONST_FOLLOW_MOVEMENT_PathFind_IntermediateMoveTolerance 20.0
#define CONST_UninstallXMod                                      14
#define CONST_MELEE_RANGE                                        1000
#define CONST_COVERINVALIDRANK                                   -1
#define CONST_AT_MELEE_END                                       0.01
#define CONST_BIO_SQUAD_MARK_TOLERANCE                           30.0
#define CONST_InitializeInventory                                1
#define CONST_CAMERA_PITCH_MAX_DEG                               65.0f
#define CONST_HUD_SEGMENTS                                       64.0f
#define CONST_DEFAULT_NEAR_CLIP_PLANE                            10.0f
#define CONST_AudioHardwareToggle                                47
#define CONST_BIO_SQUAD_MARK_TOLERANCE_SQ                        900.0
#define CONST_ResetCategory                                      16
#define CONST_BIO_SQUAD_HOLDVELOCITY_SQ                          2500.0
#define CONST_SkipNode                                           1
#define CONST_BIO_PAWN_BEHAVIOR_BIOTIC_SLOW_MOTION_DURATION      -1.0f
#define CONST_MAX_COVER_BIAS_POINT_PROJECTION                    4000.f
#define CONST_BioSFHandler_SelectCharacter_back                  6
#define CONST_GammaChange                                        14
#define CONST_AreaMap_ReturnToNormandy                           4
#define CONST_DEFAULT_MOVE_TOLERANCE                             35.0
#define CONST_AT_SNIPER_START                                    0.89
#define CONST_DEFAULT_CAMERA_FOV                                 52.9f
#define CONST_BIO_SQUAD_CHATTER_RANDOM                           1
#define CONST_NextXModSlot                                       4
#define CONST_AT_SNIPER_END                                      0.80
#define CONST_AT_ACCURATE_START                                  0.75
#define CONST_AT_ACCURATE_TIMEOUT                                5.0
#define CONST_AT_INACCURATE_START                                0.65
#define CONST_MouseSenseSet                                      3
#define CONST_AT_INACCURATE_END                                  0.35
#define CONST_PCSettingsAutoMemberDown                           42
#define CONST_BWInitialized                                      3
#define CONST_AT_INACCURATE_TIMEOUT                              5.0
#define CONST_INVENTORY_HANDLER_EVENT_SET_CHARACTER              15
#define CONST_Bio_SkillState                                     'SkillState'
#define CONST_TutorialComplete                                   1
#define CONST_AT_SUPPRESSING_END                                 0.15
#define CONST_BIO_PAWN_ANIM_RUN_RIGHT_FOOT_END                   0.75f
#define CONST_AT_SUPPRESSING_TIMEOUT                             5.0
#define CONST_NUM_TEAMS                                          2
#define CONST_AT_POWER_START                                     0.05
#define CONST_CHARACTER_HANDLER_EVENT_COMMIT                     7
#define CONST_AT_POWER_END                                       0.04
#define CONST_AT_POWER_TIMEOUT                                   10.0
#define CONST_AT_MELEE_TIMEOUT                                   5.0
#define CONST_STABILITY_OFFSET                                   0.10
#define CONST_MAX_SIZE_PERCENT                                   0.75
#define CONST_PreviewItemOff                                     13
#define CONST_MODE_Intimidate                                    3
#define CONST_DEFEND_THRESHOLD                                   0.90
#define CONST_FRONT_COVER_ARC                                    0.5
#define CONST_Bio_Physics                                        'Physics'
#define CONST_VERY_SMALL_TIME                                    0.00001f
#define CONST_Close                                              1
#define CONST_Bio_Opened                                         'Opened'
#define CONST_Bio_Closed                                         'Closed'
#define CONST_BIO_PAWN_ANIM_RUN_RIGHT_FOOT_START                 0.25f
#define CONST_InitializeCommandWheel                             18
#define CONST_DEBUG_CAMERAS                                      FALSE
#define CONST_UpDateDistanceSqr                                  2500.0
#define CONST_MODE_Investigate                                   1
#define CONST_ZONE_VALID_DELAY_TIME                              0.25f
#define CONST_InitializeSelectCharacter                          1
#define CONST_INVENTORY_HANDLER_EVENT_INITIALIZE_MODS            18
#define CONST_THREAT_BASE_RANGE_SQ                               1000000
#define CONST_SHOP_HANDLER_EVENT_SELL_ITEM                       7
#define CONST_BIO_CAMERA_UTILITY_COLLISION_POINT_COUNT           8
#define CONST_GRENADE_CLOSE_PROXIMITY_DISTANCE_SQUARED           2500.0f
#define CONST_ToggleRumble                                       27
#define CONST_MIN_DEFAULT_INTIMACY                               250
#define CONST_BioSFHandler_SelectCharacter_ResumeGame            3
#define CONST_BioSFHandler_Loot_MaxIcons                         8
#define CONST_GAME_PROPERTY_GROUP_NONE                           -1
#define CONST_XMOD_HANDLER_EVENT_SET_XMOD                        16
#define CONST_BIO_PAWN_ANIM_WALK_START_SPEED                     0.05f
#define CONST_AudioVolMusic                                      10
#define CONST_BIO_PAWN_BEHAVIOR_BIOTIC_SLOW_MOTION_SPEED         0.5f
#define CONST_SetAnalogSensitivity                               28
#define CONST_BIO_PAWN_BEHAVIOR_BIOTIC_SLOW_MOTION_PRIORITY      0
#define CONST_SHOP_HANDLER_EVENT_PREV_SLOT                       4
#define CONST_BIO_PAWN_BEHAVIOR_BIOTIC_SLOW_MOTION_END_DURATION  0
#define CONST_nDAMAGEINDICATORARCSLICES                          8
#define CONST_PP_ENABLE_MOTION_BLUR                              0x0001
#define CONST_PP_ENABLE_FILM_GRAIN                               0x0002
#define CONST_COVERANYSLOTFLAG                                   -1
#define CONST_Resource_Head                                      1
#define CONST_Resource_Arms                                      2
#define CONST_Resource_legs                                      4
#define CONST_BioSFHandler_Achievement_MaxIcons                  8
#define CONST_CloseAchievement                                   1
#define CONST_BioSFHandler_Achievement_UpdateItemList            5
#define CONST_BioSFHandler_Achievement_Initialize                2
#define CONST_DeleteCharacterConfirm                             8
#define CONST_PCSettingsResetTutorials                           39
#define CONST_NextItem                                           3
#define CONST_PrevItem                                           4
#define CONST_DumpDebug                                          6
#define CONST_AreaMap_Initialize                                 1
#define CONST_AreaMap_SetDestination                             2
#define CONST_AreaMap_OpenJournal                                3
#define CONST_UpdatePreviewXMods                                 10
#define CONST_FadeFinished                                       1
#define CONST_BreakLootItem                                      9
#define CONST_PickSegment                                        1
#define CONST_INVENTORY_HANDLER_EVENT_SET_MOD_SLOT               17
#define CONST_CloseMenu                                          2
#define CONST_CHARACTER_HANDLER_EVENT_INITIALIZE                 1
#define CONST_CHARACTER_HANDLER_EVENT_NEXT_CHARACTER             2
#define CONST_PCSettingsConfirmNoSave                            43
#define CONST_INVENTORY_HANDLER_EVENT_SET_SLOT                   16
#define CONST_CHARACTER_HANDLER_EVENT_AUTO_LEVEL_UP              3
#define CONST_CHARACTER_HANDLER_EVENT_PURCHASE_TALENT_RANK       4
#define CONST_CHARACTER_HANDLER_EVENT_CANCEL                     6
#define CONST_CHARACTER_HANDLER_EVENT_PREV_CHARACTER             8
#define CONST_CHARACTER_HANDLER_EVENT_END_SUSPEND                11
#define CONST_CHARACTER_HANDLER_EVENT_TALENT_NOT_AVAILABLE       13
#define CONST_MODE_None                                          0
#define CONST_MODE_Charm                                         2
#define CONST_MODE_Illegal                                       4
#define CONST_SelectEntry                                        2
#define CONST_ShowReplyWheel                                     3
#define CONST_nArmorEmitterPowerToken                            -4
#define CONST_QueueEntry                                         4
#define CONST_BioSFHandler_SelectCharacter_PrevCharacter         5
#define CONST_InitializeCredits                                  1
#define CONST_ShowExtras                                         12
#define CONST_GetNextCredit                                      2
#define CONST_CreditScrollComplete                               3
#define CONST_IT_Populate                                        1
#define CONST_CreditsCancel                                      4
#define CONST_BioSFHandler_GalaxyMap_Initialize                  2
#define CONST_Select                                             3
#define CONST_ZoomInOnFace                                       14
#define CONST_BioSFHandler_GalaxyMap_back                        4
#define CONST_Scan                                               5
#define CONST_ClosePlanet                                        6
#define CONST_PCSettingsSetTutFlags                              38
#define CONST_IT_Finished                                        2
#define CONST_InitializeGameOver                                 1
#define CONST_Fuse                                               8
#define CONST_LoadLastSave                                       3
#define CONST_QuitToMainMenu                                     4
#define CONST_ShowLoadScreen                                     5
#define CONST_InitializeHUD                                      1
#define CONST_InitializePowerWheel                               2
#define CONST_PowerWheelSelect                                   3
#define CONST_LockSquadCommandExit                               8
#define CONST_UnlockSquadCommandExit                             9
#define CONST_InitializeWeaponWheel                              10
#define CONST_WeaponWheelSelect                                  11
#define CONST_ChangeToWeapons                                    12
#define CONST_DynamMeshLodChange                                 18
#define CONST_ChangeToPowers                                     13
#define CONST_AssignPowerToHotKey                                14
#define CONST_SelectCommandHUD                                   17
#define CONST_m_cShieldBarsMinimum                               0
#define CONST_m_cShieldBarsMaximum                               6
#define CONST_nGrenadePowerToken                                 -1
#define CONST_TextureDetailChange                                19
#define CONST_BioSFHandler_InventoryIGGOverride_ReturnToBrowserMenu 1
#define CONST_nHealPowerToken                                    -2
#define CONST_nWeaponAltPowerToken                               -3
#define CONST_BioSFHandler_Inventory_MaxIcons                    8
#define CONST_NextFilter                                         2
#define CONST_PrevFilter                                         3
#define CONST_BioSFHandler_Inventory_NextCharacter               4
#define CONST_BioSFHandler_Inventory_PrevCharacter               5
#define CONST_EquipItem                                          6
#define CONST_BioSFHandler_PCPauseMenu_srCancel                  153363
#define CONST_SalvageItem                                        7
#define CONST_BioSFHandler_Inventory_UpdateItemList              8
#define CONST_UpdatePreviewItems                                 9
#define CONST_SetWindowOpt                                       17
#define CONST_UpdateFilterIcons                                  10
#define CONST_AudioVolVoice                                      12
#define CONST_ToggleHelmet                                       11
#define CONST_PCSettingsSquadPowerUse                            37
#define CONST_PreviewItemOn                                      12
#define CONST_EquipItemDoubleCheck                               14
#define CONST_EndSuspend                                         19
#define CONST_AreaMap_HideMousePointer                           5
#define CONST_BioSFHandler_InventoryIGGOverride_CloseGUIs        2
#define CONST_BioSFHandler_Loot_Initialize                       2
#define CONST_StartNewGame                                       1
#define CONST_ShowHonors                                         2
#define CONST_ShowCredits                                        3
#define CONST_BioSFHandler_MainMenu_ResumeGame                   5
#define CONST_UpdateKeyBindingText                               8
#define CONST_ShowLoadGui                                        6
#define CONST_ShowLiveContent                                    8
#define CONST_ExitGame                                           10
#define CONST_ShowPCOptions                                      11
#define CONST_InitializeMainMenu                                 4
#define CONST_NextGeneratedHead                                  1
#define CONST_SliderValueChanged                                 2
#define CONST_StartGameWithIconic                                3
#define CONST_InitializeNC                                       4
#define CONST_StartGameWithCustom                                5
#define CONST_ExitNewCharacter                                   6
#define CONST_ShowNameKeyboard                                   7
#define CONST_ConfirmCharCreate                                  8
#define CONST_ClassChange                                        9
#define CONST_SelectPreviousChar                                 10
#define CONST_Hide3DModel                                        11
#define CONST_StartCustom                                        12
#define CONST_Show3DModel                                        13
#define CONST_ZoomOutFromFace                                    15
#define CONST_Set3DModelState                                    17
#define CONST_PCSExitMenu                                        4
#define CONST_UpdateBonusTalents                                 18
#define CONST_MAX_CLASS_CHOICES                                  6
#define CONST_InitializeParty                                    1
#define CONST_SPECIALIZATION_HANDLER_EVENT_INITIALIZE            2
#define CONST_SelectParty                                        2
#define CONST_AreaMap_ShowMousePointer                           6
#define CONST_CHARACTER_HANDLER_EVENT_SET_CHARACTER              9
#define CONST_InvertMouseToggle                                  2
#define CONST_CHARACTER_HANDLER_EVENT_REMOVE_TALENT              10
#define CONST_SHOP_HANDLER_EVENT_SWITCH_TO_BUY                   10
#define CONST_CHARACTER_HANDLER_EVENT_CONFIRM_COMMIT             12
#define CONST_srCommitApply                                      153362
#define CONST_srCommitDontApply                                  153363
#define CONST_UpdateResolutionText                               24
#define CONST_PC_DESIGNER_HANDLER_EVENT_BUTTON                   1
#define CONST_PCSettingsCombatDiff                               34
#define CONST_BioSFHandler_PCMainMenu_srExitConfirm              178796
#define CONST_PLAYER_IS_BUYING                                   true
#define CONST_BioSFHandler_PCMainMenu_srConfirm                  153362
#define CONST_BioSFHandler_PCMainMenu_srCancel                   153363
#define CONST_CONST_SetCustomName                                19
#define CONST_GotoMainMenu                                       4
#define CONST_ConfirmMainMenu                                    5
#define CONST_CaptionToggle                                      13
#define CONST_PExitGame                                          6
#define CONST_ConfirmExit                                        7
#define CONST_srMainMenuConfirm                                  176290
#define CONST_BioSFHandler_PCPauseMenu_srConfirm                 153362
#define CONST_HardWareMouseToggle                                1
#define CONST_MinAnalogSense                                     50
#define CONST_MaxAnalogSense                                     1000
#define CONST_PCSApplyChanges                                    6
#define CONST_SHOP_HANDLER_EVENT_BUY_ITEM                        6
#define CONST_SetBinding                                         7
#define CONST_SettingsTabChanged                                 9
#define CONST_AudioVolFX                                         11
#define CONST_SetVsyncOpt                                        15
#define CONST_ParticleEffectsToggle                              16
#define CONST_ShadowDetailChange                                 20
#define CONST_ShaderBlurChange                                   21
#define CONST_AntiAChange                                        22
#define CONST_FilterModeChange                                   23
#define CONST_ShowBindingHelpText                                26
#define CONST_SHOP_HANDLER_EVENT_CLOSE_SHOP                      1
#define CONST_PCSettingsTargetAssist                             36
#define CONST_PCSettingsAutoEnemySighted                         40
#define CONST_PLAYER_IS_SELLING                                  false
#define CONST_PCSettingsAutoBleed                                41
#define CONST_PCSettingsSetAutoSave                              44
#define CONST_PCSettingsUnsaved                                  45
#define CONST_ShaderFilmChange                                   46
#define CONST_AudioTestVoice                                     48
#define CONST_FadeinComplete                                     2
#define CONST_AudioTestFX                                        49
#define CONST_AudioTestMusic                                     50
#define CONST_GraphicTestGamma                                   51
#define CONST_BioSFHandler_XMods_MaxIcons                        8
#define CONST_InitializeXMods                                    1
#define CONST_PrevXModSlot                                       5
#define CONST_ChangeCharacter                                    6
#define CONST_SwapInXMod                                         7
#define CONST_UpdateXModList                                     9
#define CONST_SalvageXMod                                        15
#define CONST_XMOD_HANDLER_EVENT_UNINSTALL_XMOD_FOR_CURRENT_SLOT 17
#define CONST_BioSFHandler_SelectCharacter_NextCharacter         4
#define CONST_NewCharacter                                       7
#define CONST_CloseConfirm                                       9
#define CONST_BioSFHandler_SharedIGG_ReturnToBrowserMenu         1
#define CONST_BioSFHandler_SharedIGG_CloseGUIs                   2
#define CONST_SHOP_HANDLER_EVENT_INITIALIZE                      2
#define CONST_SHOP_HANDLER_EVENT_NEXT_SLOT                       3
#define CONST_SHOP_HANDLER_EVENT_SELECT_ITEM                     5
#define CONST_SHOP_HANDLER_EVENT_SWITCH_TO_SELL                  9
#define CONST_NUMBER_OF_MODIFIER_ICONS_ON_ITEM                   8
#define CONST_NUMBER_OF_COMPARE_SLOTS                            3
#define CONST_PURCHASE_ERROR_MSGBOX_DURATION                     0.8
#define CONST_SPECIALIZATION_HANDLER_EVENT_CHOOSE_SPECIALIZATION 1
#define CONST_FadeoutComplete                                    1
#define CONST_AnyKeyPressed                                      3

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BIOC_Base.BioDeathVFXCore.EBioDeathVFXGameStateEvent
enum class EBioDeathVFXGameStateEvent : uint8_t
{
	BIO_DEATH_VFX_GAME_STATE_EVENT_DEATH = 0,
	BIO_DEATH_VFX_GAME_STATE_EVENT_DEATH_ANIMATION_COMPLETED = 1,
	BIO_DEATH_VFX_GAME_STATE_EVENT_MAX = 2
};


// Enum BIOC_Base.BioDeathVFXControlBasic.EBioDeathVFXControlVFXType
enum class EBioDeathVFXControlVFXType : uint8_t
{
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_BOTH = 0,
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_DAMAGE_PREFERRED = 1,
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_APPEARANCE_PREFERRED = 2,
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_DAMAGE_ONLY = 3,
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_APPEARANCE_ONLY = 4,
	BIO_DEATH_VFX_CONDITION_VFX_TYPE_MAX = 5
};


// Enum BIOC_Base.BioBaseAppearance.EBioBaseAppearanceReportMethod
enum class EBioBaseAppearanceReportMethod : uint8_t
{
	BIO_BASE_APPEARANCE_REPORT_METHOD_NONE = 0,
	BIO_BASE_APPEARANCE_REPORT_METHOD_LOG = 1,
	BIO_BASE_APPEARANCE_REPORT_METHOD_DIALOG = 2,
	BIO_BASE_APPEARANCE_REPORT_METHOD_MAX = 3
};


// Enum BIOC_Base.BioItemEnumerations.EBioArmorType
enum class EBioArmorType : uint8_t
{
	ARMOR_TYPE_NONE                = 0,
	ARMOR_TYPE_CLOTHING            = 1,
	ARMOR_TYPE_LIGHT               = 2,
	ARMOR_TYPE_MEDIUM              = 3,
	ARMOR_TYPE_HEAVY               = 4,
	ARMOR_TYPE_MAX                 = 5
};


// Enum BIOC_Base.BioAttributesItem.EBioAttributesItemRaceType
enum class EBioAttributesItemRaceType : uint8_t
{
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_ANY = 0,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_HUMAN = 1,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_TURIAN = 2,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_QUARIAN = 3,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_KROGAN = 4,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_VEHICLE = 5,
	BIO_ATTRIBUTES_ITEM_RACE_TYPE_MAX = 6
};


// Enum BIOC_Base.Bio_Appr_Character.eModelVar
enum class EeModelVar : uint8_t
{
	BioMV_Variation1               = 0,
	BioMV_Variation2               = 1,
	BioMV_Variation3               = 2,
	BioMV_Variation4               = 3,
	BioMV_Variation5               = 4,
	BioMV_Variation6               = 5,
	BioMV_Variation7               = 6,
	BioMV_Variation8               = 7,
	BioMV_Variation9               = 8,
	BioMV_MAX                      = 9
};


// Enum BIOC_Base.Bio_Appr_Character.eMaterialVar
enum class EeMaterialVar : uint8_t
{
	BioTV_Sophistication1          = 0,
	BioTV_Sophistication2          = 1,
	BioTV_Sophistication3          = 2,
	BioTV_Sophistication4          = 3,
	BioTV_Sophistication5          = 4,
	BioTV_Sophistication6          = 5,
	BioTV_Sophistication7          = 6,
	BioTV_Sophistication8          = 7,
	BioTV_Sophistication9          = 8,
	BioTV_MAX                      = 9
};


// Enum BIOC_Base.Bio_Appr_Character.eHeadVar
enum class EeHeadVar : uint8_t
{
	BioHV_Head1                    = 0,
	BioHV_Head2                    = 1,
	BioHV_Head3                    = 2,
	BioHV_Head4                    = 3,
	BioHV_Head5                    = 4,
	BioHV_Head6                    = 5,
	BioHV_Head7                    = 6,
	BioHV_Head8                    = 7,
	BioHV_Head9                    = 8,
	BioHV_MAX                      = 9
};


// Enum BIOC_Base.Bio_Appr_Character.eHairVar
enum class EeHairVar : uint8_t
{
	BioHTV_Hat1                    = 0,
	BioHTV_Hat2                    = 1,
	BioHTV_Hat3                    = 2,
	BioHTV_Hat4                    = 3,
	BioHTV_Hat5                    = 4,
	BioHTV_Hat6                    = 5,
	BioHTV_Hat7                    = 6,
	BioHTV_Hat8                    = 7,
	BioHTV_Hat9                    = 8,
	BioHTV_MAX                     = 9
};


// Enum BIOC_Base.Bio_Appr_Character.EBioPawnHeadGearComponent
enum class EBioPawnHeadGearComponent : uint8_t
{
	BIO_PAWN_HEAD_GEAR_COMPONENT_VISOR = 0,
	BIO_PAWN_HEAD_GEAR_COMPONENT_FACE_PLATE = 1,
	BIO_PAWN_HEAD_GEAR_COMPONENT_HELMET = 2,
	BIO_PAWN_HEAD_GEAR_COMPONENT_MAX = 3
};


// Enum BIOC_Base.Bio_Appr_Character.eModelType
enum class EeModelType : uint8_t
{
	BioMT_BodyAndHead              = 0,
	BioMT_Simple                   = 1,
	BioMT_MAX                      = 2
};


// Enum BIOC_Base.Bio_Appr_Character.EBio_Appr_CharacterTalentRaceType
enum class EBio_Appr_CharacterTalentRaceType : uint8_t
{
	BIO_APPR_CHARACTER_TALENT_RACE_TYPE_HUMANOID = 0,
	BIO_APPR_CHARACTER_TALENT_RACE_TYPE_ANIMAL = 1,
	BIO_APPR_CHARACTER_TALENT_RACE_TYPE_MACHINE = 2,
	BIO_APPR_CHARACTER_TALENT_RACE_TYPE_MAX = 3
};


// Enum BIOC_Base.BioDefine.EActionComplete_Combat
enum class EActionComplete_Combat : uint8_t
{
	ACC_Cancelled                  = 0,
	ACC_Success                    = 1,
	ACC_Failed                     = 2,
	ACC_Dead                       = 3,
	ACC_TargetKilled               = 4,
	ACC_TimeOut                    = 5,
	ACC_LowTargeting               = 6,
	ACC_LostSight                  = 7,
	ACC_Disabled                   = 8,
	ACC_PowerCooldown              = 9,
	ACC_WeaponOverheat             = 10,
	ACC_WeaponCoolDown             = 11,
	ACC_MAX                        = 12
};


// Enum BIOC_Base.BioDefine.EActionComplete_Movement
enum class EActionComplete_Movement : uint8_t
{
	ACM_Cancelled                  = 0,
	ACM_Success                    = 1,
	ACM_Failed                     = 2,
	ACM_Dead                       = 3,
	ACM_LostCover                  = 4,
	ACM_Disabled                   = 5,
	ACM_CantSeeTarget              = 6,
	ACM_MAX                        = 7
};


// Enum BIOC_Base.BioDefine.EActionComplete_None
enum class EActionComplete_None : uint8_t
{
	ACN_Cancelled                  = 0,
	ACN_Success                    = 1,
	ACN_Disabled                   = 2,
	ACN_MAX                        = 3
};


// Enum BIOC_Base.BioDefine.EDisableType
enum class EDisableType : uint8_t
{
	DT_AI                          = 0,
	DT_Power                       = 1,
	DT_Offensive                   = 2,
	DT_MAX                         = 3
};


// Enum BIOC_Base.BioDefine.EBioPawnClassification
enum class EBioPawnClassification : uint8_t
{
	BPC_General                    = 0,
	BPC_ActionStation              = 1,
	BPC_Ambient                    = 2,
	BPC_UIWorld                    = 3,
	BPC_Combat                     = 4,
	BPC_Player                     = 5,
	BPC_Party                      = 6,
	BPC_MAX                        = 7
};


// Enum BIOC_Base.BioItemEnumerations.EBioEquipmentType
enum class EBioEquipmentType : uint8_t
{
	EQUIPMENT_TYPE_INVALID         = 0,
	EQUIPMENT_TYPE_ARMOR           = 1,
	EQUIPMENT_TYPE_OMNITOOL        = 2,
	EQUIPMENT_TYPE_WEAPON          = 3,
	EQUIPMENT_TYPE_BIOAMP          = 4,
	EQUIPMENT_TYPE_GRENADE         = 5,
	EQUIPMENT_TYPE_MAX             = 6
};


// Enum BIOC_Base.BioItemEnumerations.EBioHeadGearType
enum class EBioHeadGearType : uint8_t
{
	BIO_HEAD_GEAR_TYPE_HELMET      = 0,
	BIO_HEAD_GEAR_TYPE_VISOR       = 1,
	BIO_HEAD_GEAR_TYPE_COUNT       = 2,
	BIO_HEAD_GEAR_TYPE_MAX         = 3
};


// Enum BIOC_Base.BioItemEnumerations.EBioItemWeaponType
enum class EBioItemWeaponType : uint8_t
{
	ITEM_WEAPTYPE_MELEE            = 0,
	ITEM_WEAPTYPE_RANGED           = 1,
	ITEM_WEAPTYPE_MAX              = 2
};


// Enum BIOC_Base.BioItemEnumerations.EBioItemWeaponRangedType
enum class EBioItemWeaponRangedType : uint8_t
{
	ITEM_WEAPON_RANGED_PISTOL      = 0,
	ITEM_WEAPON_RANGED_SHOTGUN     = 1,
	ITEM_WEAPON_RANGED_ASSAULT_RIFLE = 2,
	ITEM_WEAPON_RANGED_SNIPER      = 3,
	ITEM_WEAPON_RANGED_MAX         = 4
};


// Enum BIOC_Base.BioBaseAppearancePlaceable.EBioStateEnumProxy
enum class EBioStateEnumProxy : uint8_t
{
	StateEnum_None                 = 0,
	StateEnum_MAX                  = 1
};


// Enum BIOC_Base.BioVisualEffect.EBioVFXState
enum class EBioVFXState : uint8_t
{
	BVFX_SPAWN                     = 0,
	BVFX_LIFE                      = 1,
	BVFX_DEATH                     = 2,
	BVFX_ENUM_SIZE                 = 3,
	BVFX_MAX                       = 4
};


// Enum BIOC_Base.BioActive.EInitalizeEventType
enum class EInitalizeEventType : uint8_t
{
	EIET_None                      = 0,
	EIET_Attacked                  = 1,
	EIET_Cast                      = 2,
	EIET_MAX                       = 3
};


// Enum BIOC_Base.BioSuperMode.EBioSuperModes
enum class EBioSuperModes : uint8_t
{
	BIO_SUPERMODE_BASE             = 0,
	BIO_SUPERMODE_INVALID          = 1,
	BIO_SUPERMODE_MAX              = 2
};


// Enum BIOC_Base.BioPawn.EBioGrenadeThrowAnimationState
enum class EBioGrenadeThrowAnimationState : uint8_t
{
	BIO_GRENADE_THROW_ANIMATION_STATE_STARTED = 0,
	BIO_GRENADE_THROW_ANIMATION_STATE_GRAB = 1,
	BIO_GRENADE_THROW_ANIMATION_STATE_THROW = 2,
	BIO_GRENADE_THROW_ANIMATION_STATE_FINISHED = 3,
	BIO_GRENADE_THROW_ANIMATION_STATE_MAX = 4
};


// Enum BIOC_Base.BioActiveGrenade.EBioGrenadeActiveState
enum class EBioGrenadeActiveState : uint8_t
{
	BIO_GRENADE_ACTIVE_STATE_THROW = 0,
	BIO_GRENADE_ACTIVE_STATE_DETONATE = 1,
	BIO_GRENADE_ACTIVE_STATE_MAX   = 2
};


// Enum BIOC_Base.BioActiveGrenade.EBioGrenadeActiveAnimationPlaybackState
enum class EBioGrenadeActiveAnimationPlaybackState : uint8_t
{
	BIO_GRENADE_ACTIVE_ANIMATION_PLAYBACK_IDLE = 0,
	BIO_GRENADE_ACTIVE_ANIMATION_PLAYBACK_PENDING = 1,
	BIO_GRENADE_ACTIVE_ANIMATION_PLAYBACK_STARTING = 2,
	BIO_GRENADE_ACTIVE_ANIMATION_PLAYBACK_STARTED = 3,
	BIO_GRENADE_ACTIVE_ANIMATION_PLAYBACK_MAX = 4
};


// Enum BIOC_Base.BioActivePower.EBioPowerState
enum class EBioPowerState : uint8_t
{
	BIO_POWER_NOT_STARTED          = 0,
	BIO_POWER_CASTING              = 1,
	BIO_POWER_RELEASE              = 2,
	BIO_POWER_USING                = 3,
	BIO_POWER_FINISHED             = 4,
	BIO_POWER_MAX                  = 5
};


// Enum BIOC_Base.BioPower.EBioPowerResource
enum class EBioPowerResource : uint8_t
{
	BIO_POWER_RESOURCE_VFX_PLAYER_CRUST = 0,
	BIO_POWER_RESOURCE_VFX_PLAYER_MATERIAL = 1,
	BIO_POWER_RESOURCE_VFX_TARGET_CRUST = 2,
	BIO_POWER_RESOURCE_VFX_TARGET_MATERIAL = 3,
	BIO_POWER_RESOURCE_VFX_FRAMEBUFFER = 4,
	BIO_POWER_RESOURCE_VFX_TRAVELLING = 5,
	BIO_POWER_RESOURCE_VFX_IMPACT  = 6,
	BIO_POWER_RESOURCE_VFX_WORLD_IMPACT = 7,
	BIO_POWER_RESOURCE_VFX_USING   = 8,
	BIO_POWER_RESOURCE_VFX_RELEASE = 9,
	BIO_POWER_RESOURCE_VFX_DEATH_DEPRECATED = 10,
	BIO_POWER_RESOURCE_CASTING     = 11,
	BIO_POWER_RESOURCE_RELEASE     = 12,
	BIO_POWER_RESOURCE_USING       = 13,
	BIO_POWER_RESOURCE_VFX_CASTING_BEAM = 14,
	BIO_POWER_RESOURCE_MAX         = 15
};


// Enum BIOC_Base.BioEpicPawnBehavior.EActionStateVariable
enum class EActionStateVariable : uint8_t
{
	BIO_ACTION_STATE_EXPLORE       = 0,
	BIO_ACTION_STATE_COMBAT        = 1,
	BIO_ACTION_STATE_ZOOM          = 2,
	BIO_ACTION_STATE_SNIPER        = 3,
	BIO_ACTION_STATE_MAX           = 4
};


// Enum BIOC_Base.BioActiveSelectWeapon.EBioActiveSelectWeaponState
enum class EBioActiveSelectWeaponState : uint8_t
{
	BIO_ACTIVE_SELECT_WEAPON_STATE_NONE = 0,
	BIO_ACTIVE_SELECT_WEAPON_STATE_WAIT = 1,
	BIO_ACTIVE_SELECT_WEAPON_STATE_DRAW = 2,
	BIO_ACTIVE_SELECT_WEAPON_STATE_HOLSTER = 3,
	BIO_ACTIVE_SELECT_WEAPON_STATE_SWITCH = 4,
	BIO_ACTIVE_SELECT_WEAPON_STATE_FADE_OUT = 5,
	BIO_ACTIVE_SELECT_WEAPON_STATE_FINISHING = 6,
	BIO_ACTIVE_SELECT_WEAPON_STATE_FINISHED = 7,
	BIO_ACTIVE_SELECT_WEAPON_STATE_MAX = 8
};


// Enum BIOC_Base.BioInventory.EInventoryResourceTypes
enum class EInventoryResourceTypes : uint8_t
{
	INV_RESOURCE_CREDITS           = 0,
	INV_RESOURCE_MEDIGEL           = 1,
	INV_RESOURCE_SALVAGE           = 2,
	INV_RESOURCE_GRENADES          = 3,
	INV_RESOURCE_MINOR_CREDITS     = 4,
	INV_RESOURCE_SMALL_CREDITS     = 5,
	INV_RESOURCE_MEDIUM_CREDITS    = 6,
	INV_RESOURCE_LARGE_CREDITS     = 7,
	INV_RESOURCE_MAJOR_CREDITS     = 8,
	INV_RESOURCE_MAX               = 9
};


// Enum BIOC_Base.BioGamePropertyTimer.EBioGPTimeAction
enum class EBioGPTimeAction : uint8_t
{
	GP_TA_REMOVE                   = 0,
	GP_TA_CONTINUE                 = 1,
	GP_TA_BREAK                    = 2,
	GP_TA_MAX                      = 3
};


// Enum BIOC_Base.BioGamePropertyTimer.EBioGPTimingType
enum class EBioGPTimingType : uint8_t
{
	GP_TIMING_STATIC               = 0,
	GP_TIMING_TIMEOUT              = 1,
	GP_TIMING_TICK                 = 2,
	GP_TIMING_COOLDOWN             = 3,
	GP_TIMING_MAX                  = 4
};


// Enum BIOC_Base.BioGamePropertyEventSet.EBioGamePropertyEvent
enum class EBioGamePropertyEvent : uint8_t
{
	GAMEPROP_EVENT_EQUIPMENT_CHANGE = 0,
	GAMEPROP_EVENT_XMOD_CHANGE     = 1,
	GAMEPROP_EVENT_WEAPON_IMPACT   = 2,
	GAMEPROP_EVENT_VEHICLE_EQUIPMENT_CHANGE = 3,
	GAMEPROP_EVENT_DEATH           = 4,
	GAMEPROP_EVENT_WEAPON_FIRED    = 5,
	GAMEPROP_EVENT_WEAPON_POWER_USED = 6,
	GAMEPROP_EVENT_MAX             = 7
};


// Enum BIOC_Base.BioAttributes.EBioAttrModType
enum class EBioAttrModType : uint8_t
{
	BIO_ATTR_MOD_SUM               = 0,
	BIO_ATTR_MOD_FRACTIONAL        = 1,
	BIO_ATTR_MOD_LAYER             = 2,
	BIO_ATTR_MOD_BASE_OVERRIDE     = 3,
	BIO_ATTR_MOD_MAX               = 4
};


// Enum BIOC_Base.BioAttributesDamage.EBioAttributesDamageFalloff
enum class EBioAttributesDamageFalloff : uint8_t
{
	BIO_ATTRIBUTES_DAMAGE_FALLOFF_LINEAR = 0,
	BIO_ATTRIBUTES_DAMAGE_FALLOFF_NONE = 1,
	BIO_ATTRIBUTES_DAMAGE_FALLOFF_EXPONENTIAL = 2,
	BIO_ATTRIBUTES_DAMAGE_FALLOFF_MAX = 3
};


// Enum BIOC_Base.BioActorBehavior.EBioActionFrameworkErrorCodes
enum class EBioActionFrameworkErrorCodes : uint8_t
{
	BIO_AFE_NOERROR                = 0,
	BIO_AFE_NOLINEOFSIGHT          = 1,
	BIO_AFE_OUTOFAMMO              = 2,
	BIO_AFE_WEAPONOVERHEAT         = 3,
	BIO_AFE_MAX                    = 4
};


// Enum BIOC_Base.BioActorBehavior.EBioActorBehaviorWeaponLOSCache
enum class EBioActorBehaviorWeaponLOSCache : uint8_t
{
	BIO_WLC_CENTER                 = 0,
	BIO_WLC_CENTER_CROUCHED        = 1,
	BIO_WLC_LEAN_LEFT              = 2,
	BIO_WLC_LEAN_LEFT_CROUCHED     = 3,
	BIO_WLC_LEAN_RIGHT             = 4,
	BIO_WLC_LEAN_RIGHT_CROUCHED    = 5,
	BIO_WLC_STEP_LEFT              = 6,
	BIO_WLC_STEP_LEFT_CROUCHED     = 7,
	BIO_WLC_STEP_RIGHT             = 8,
	BIO_WLC_STEP_RIGHT_CROUCHED    = 9,
	BIO_WLC_MAX                    = 10
};


// Enum BIOC_Base.BioActorBehavior.EBioStartLeanOriginator
enum class EBioStartLeanOriginator : uint8_t
{
	BIO_SLO_Attack                 = 0,
	BIO_SLO_Zoom                   = 1,
	BIO_SLO_MAX                    = 2
};


// Enum BIOC_Base.BioAiController.eLastSawTarget
enum class EeLastSawTarget : uint8_t
{
	LST_Eyes                       = 0,
	LST_Weapon                     = 1,
	LST_WeaponCrouch               = 2,
	LST_LeanLeft                   = 3,
	LST_LeanRight                  = 4,
	LST_StepLeft                   = 5,
	LST_StepRight                  = 6,
	LST_MAX                        = 7
};


// Enum BIOC_Base.BioAiController.eWeaponSystemAction
enum class EeWeaponSystemAction : uint8_t
{
	WSA_Off                        = 0,
	WSA_WeaponFire                 = 1,
	WSA_ThrowGrenade               = 2,
	WSA_SelectWeapon               = 3,
	WSA_MAX                        = 4
};


// Enum BIOC_Base.BioAiController.eActionType
enum class EeActionType : uint8_t
{
	AT_Action                      = 0,
	AT_State                       = 1,
	AT_Behavior                    = 2,
	AT_MAX                         = 3
};


// Enum BIOC_Base.BioAiController.eWalkWaypointsTypes
enum class EeWalkWaypointsTypes : uint8_t
{
	WWT_Linear                     = 0,
	WWT_Looping                    = 1,
	WWT_OutAndBack                 = 2,
	WWT_OutAndBackLooping          = 3,
	WWT_Random                     = 4,
	WWT_MAX                        = 5
};


// Enum BIOC_Base.BioBaseSquad.ESwitchToWeapon
enum class ESwitchToWeapon : uint8_t
{
	STW_Pistol                     = 0,
	STW_ShotGun                    = 1,
	STW_AssaultRifle               = 2,
	STW_SniperRifle                = 3,
	STW_None                       = 4,
	STW_MAX                        = 5
};


// Enum BIOC_Base.BioBaseSquad.eATTACK_TYPE
enum class EeATTACK_TYPE : uint8_t
{
	AI_ATTACK_TYPE_NONE            = 0,
	AI_ATTACK_TYPE_SNIPER          = 1,
	AI_ATTACK_TYPE_ACCURATE        = 2,
	AI_ATTACK_TYPE_INACCURATE      = 3,
	AI_ATTACK_TYPE_SUPPRESSING     = 4,
	AI_ATTACK_TYPE_POWER           = 5,
	AI_ATTACK_TYPE_MELEE           = 6,
	AI_ATTACK_TYPE_MAX             = 7
};


// Enum BIOC_Base.BioBaseSquad.ESquadRotation
enum class ESquadRotation : uint8_t
{
	SquadRotation_Next             = 0,
	SquadRotation_Prev             = 1,
	SquadRotation_MAX              = 2
};


// Enum BIOC_Base.BioPawnChallengeScaledType.EBioPawnChallengeRank
enum class EBioPawnChallengeRank : uint8_t
{
	BIOPAWNCHALLENGERANK_MINION    = 0,
	BIOPAWNCHALLENGERANK_ELITE     = 1,
	BIOPAWNCHALLENGERANK_SUB_BOSS  = 2,
	BIOPAWNCHALLENGERANK_BOSS      = 3,
	BIOPAWNCHALLENGERANK_MAX       = 4
};


// Enum BIOC_Base.BioAnimNodeBlendBase.EBioAnimBlendDirection
enum class EBioAnimBlendDirection : uint8_t
{
	eBioAnimBlend_NOBLEND          = 0,
	eBioAnimBlend_BLENDUP          = 1,
	eBioAnimBlend_BLENDDOWN        = 2,
	eBioAnimBlend_BLENDDIRECT      = 3,
	eBioAnimBlend_MAX              = 4
};


// Enum BIOC_Base.BioAnimNodeBlendAdditive.EBioAnimAdditive
enum class EBioAnimAdditive : uint8_t
{
	eBioAnimAdd_Primary            = 0,
	eBioAnimAdd_Additive           = 1,
	eBioAnimAdd_BasePose           = 2,
	eBioAnimAdd_MAX                = 3
};


// Enum BIOC_Base.BioAnimNodeBlendAdditivePower.EBioPowerAdditiveAnimNode
enum class EBioPowerAdditiveAnimNode : uint8_t
{
	POWER_ADDITIVE_PRIMARY         = 0,
	POWER_ADDITIVE_ADD_POWER       = 1,
	POWER_ADDITIVE_BASE_POSE       = 2,
	POWER_ADDITIVE_MAX             = 3
};


// Enum BIOC_Base.BioAnimNodeBlendByAction.EBioActionAnimNode
enum class EBioActionAnimNode : uint8_t
{
	ACTION_ANIM_NODE_POSTURE       = 0,
	ACTION_ANIM_NODE_MOUNT         = 1,
	ACTION_ANIM_NODE_HESITATE      = 2,
	ACTION_ANIM_NODE_FALL          = 3,
	ACTION_ANIM_NODE_BIOTIC        = 4,
	ACTION_ANIM_NODE_DEATH         = 5,
	ACTION_ANIM_NODE_DIE           = 6,
	ACTION_ANIM_NODE_TECH          = 7,
	ACTION_ANIM_NODE_MATINEE       = 8,
	ACTION_ANIM_NODE_GETUP         = 9,
	ACTION_ANIM_NODE_GESTURES      = 10,
	ACTION_ANIM_NODE_MAX           = 11
};


// Enum BIOC_Base.BioAnimNodeBlendByAim.eAimSliderAxis
enum class EeAimSliderAxis : uint8_t
{
	SLIDER_AXIS_PITCH              = 0,
	SLIDER_AXIS_YAW                = 1,
	SLIDER_AXIS_MAX                = 2
};


// Enum BIOC_Base.BioAnimNodeBlendByBiotic.EBioBioticAnimNode
enum class EBioBioticAnimNode : uint8_t
{
	BIOTIC_ANIM_NODE_IDLE          = 0,
	BIOTIC_ANIM_NODE_CASTING       = 1,
	BIOTIC_ANIM_NODE_LAUNCH        = 2,
	BIOTIC_ANIM_NODE_COUNT         = 3,
	BIOTIC_ANIM_NODE_MAX           = 4
};


// Enum BIOC_Base.BioAnimNodeBlendByDamage.EBioAnimDamage
enum class EBioAnimDamage : uint8_t
{
	eBioAnimDamage_Front           = 0,
	eBioAnimDamage_Rear            = 1,
	eBioAnimDamage_Left            = 2,
	eBioAnimDamage_Right           = 3,
	eBioAnimDamage_MAX             = 4
};


// Enum BIOC_Base.BioAnimNodeBlendByDeath.EBioAnimDeath
enum class EBioAnimDeath : uint8_t
{
	eBioAnimDeath_Head             = 0,
	eBioAnimDeath_Stomach          = 1,
	eBioAnimDeath_ArmLeft          = 2,
	eBioAnimDeath_ArmRight         = 3,
	eBioAnimDeath_LegLeft          = 4,
	eBioAnimDeath_LegRight         = 5,
	eBioAnimDeath_MAX              = 6
};


// Enum BIOC_Base.BioAnimNodeBlendByFireSequence.EBioAnimNodeBlendByFireSequenceChild
enum class EBioAnimNodeBlendByFireSequenceChild : uint8_t
{
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_IDLE = 0,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_START = 1,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_LOOP = 2,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_SUPPRESS = 3,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_END = 4,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_CHILD_MAX = 5
};


// Enum BIOC_Base.BioAnimNodeBlendByFireSequence.EBioAnimNodeBlendByFireSequenceState
enum class EBioAnimNodeBlendByFireSequenceState : uint8_t
{
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_STATE_IDLE = 0,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_STATE_START = 1,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_STATE_LOOP = 2,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_STATE_END = 3,
	BIO_ANIM_NODE_BLEND_BY_FIRE_SEQUENCE_STATE_MAX = 4
};


// Enum BIOC_Base.BioAnimNodeBlendByIncline.EBioAnimIncline
enum class EBioAnimIncline : uint8_t
{
	eBioAnimIncline_Up             = 0,
	eBioAnimIncline_Level          = 1,
	eBioAnimIncline_Down           = 2,
	eBioAnimIncline_MAX            = 3
};


// Enum BIOC_Base.BioAnimNodeBlendByMount.EBioAnimMountHeight
enum class EBioAnimMountHeight : uint8_t
{
	eBioAnimMountHeight_HighUpper  = 0,
	eBioAnimMountHeight_HighLower  = 1,
	eBioAnimMountHeight_LowUpper   = 2,
	eBioAnimMountHeight_LowLower   = 3,
	eBioAnimMountHeight_MAX        = 4
};


// Enum BIOC_Base.BioAnimNodeBlendByPower.EBioPowerAnimNode
enum class EBioPowerAnimNode : uint8_t
{
	POWER_ANIM_NODE_IDLE           = 0,
	POWER_ANIM_NODE_CASTING        = 1,
	POWER_ANIM_NODE_RELEASE        = 2,
	POWER_ANIM_NODE_USING          = 3,
	POWER_ANIM_NODE_COUNT          = 4,
	POWER_ANIM_NODE_MAX            = 5
};


// Enum BIOC_Base.BioAnimNodeBlendByWeaponAction.EBioWeaponActionAnimNode
enum class EBioWeaponActionAnimNode : uint8_t
{
	WEAPON_ACTION_ANIM_NODE_EXPANDED = 0,
	WEAPON_ACTION_ANIM_NODE_EXPANDING = 1,
	WEAPON_ACTION_ANIM_NODE_COLLAPSING = 2,
	WEAPON_ACTION_ANIM_NODE_COLLAPSED = 3,
	WEAPON_ACTION_ANIM_NODE_MAX    = 4
};


// Enum BIOC_Base.BioAnimNodeBlendCombatAction.EBioAnimNodeBlendCombatAction
enum class EBioAnimNodeBlendCombatAction : uint8_t
{
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_FIRE_WEAPON = 0,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_DEPRECATED = 1,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_DEPRECATED01 = 2,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_DEPRECATED02 = 3,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_THROW_GRENADE = 4,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_MAX = 5
};


// Enum BIOC_Base.BioAnimNodeBlendCombatAction.EBioAnimNodeBlendCombatActionThrowGrenade
enum class EBioAnimNodeBlendCombatActionThrowGrenade : uint8_t
{
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_THROW_GRENADE_FRISBEE = 0,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_THROW_GRENADE_BALLISTIC = 1,
	BIO_ANIM_NODE_BLEND_COMBAT_ACTION_THROW_GRENADE_MAX = 2
};


// Enum BIOC_Base.BioAnimNodeBlendDirStart.EBioAnimStartDirection
enum class EBioAnimStartDirection : uint8_t
{
	eBioAnimDirStart_ForwardRight  = 0,
	eBioAnimDirStart_ForwardLeft   = 1,
	eBioAnimDirStart_Right         = 2,
	eBioAnimDirStart_Left          = 3,
	eBioAnimDirStart_BackwardRight = 4,
	eBioAnimDirStart_BackwardLeft  = 5,
	eBioAnimDirStart_MAX           = 6
};


// Enum BIOC_Base.BioAnimNodeBlendFall.EBioAnimFalling
enum class EBioAnimFalling : uint8_t
{
	eBioAnimFall_JumpOff           = 0,
	eBioAnimFall_Falling           = 1,
	eBioAnimFall_Landing           = 2,
	eBioAnimFall_MAX               = 3
};


// Enum BIOC_Base.BioAnimNodeBlendMoveStop.EBioAnimMoveStop
enum class EBioAnimMoveStop : uint8_t
{
	eBioAnimMoveStop_StopRight     = 0,
	eBioAnimMoveStop_StopLeft      = 1,
	eBioAnimMoveStop_MAX           = 2
};


// Enum BIOC_Base.BioAnimNodeBlendPerBone.EBoneBlendType
enum class EBoneBlendType : uint8_t
{
	BLENDTYPE_ALWAYS               = 0,
	BLENDTYPE_ALWAYS_BONE_SWITCH   = 1,
	BLENDTYPE_CROSSFADE_BONE_SWITCH = 2,
	BLENDTYPE_SWITCH               = 3,
	BLENDTYPE_TOGGLE               = 4,
	BLENDTYPE_WEIGHT               = 5,
	BLENDTYPE_MAX                  = 6
};


// Enum BIOC_Base.BioAnimNodeBlendPerBone.EBoneBlendTestType
enum class EBoneBlendTestType : uint8_t
{
	BLENDTESTTYPE_NONE             = 0,
	BLENDTESTTYPE_ANIM             = 1,
	BLENDTESTTYPE_BONE             = 2,
	BLENDTESTTYPE_MAX              = 3
};


// Enum BIOC_Base.BioAnimNodeBlendScalarHoppingBehavior.EBioAnimNodeBlendScalarHoppingBehavior
enum class EBioAnimNodeBlendScalarHoppingBehavior : uint8_t
{
	BScHop_None                    = 0,
	BScHop_NotUsed                 = 1,
	BScHop_LandAngle               = 2,
	BScHop_MAX                     = 3
};


// Enum BIOC_Base.BioAnimNodeBlendScalarMovementBehavior.EBioAnimNodeBlendScalarMovementBehavior
enum class EBioAnimNodeBlendScalarMovementBehavior : uint8_t
{
	BScMv_None                     = 0,
	BScMv_TurnAngle                = 1,
	BScMv_SpeedVelocity            = 2,
	BScMv_SpeedTacticalVelocity    = 3,
	BScMv_AxisDirection            = 4,
	BScMv_MAX                      = 5
};


// Enum BIOC_Base.BioAnimNodeBlendScalarMovementBehavior.EBioAnimNodeBlendScalarMoveSpeedStates
enum class EBioAnimNodeBlendScalarMoveSpeedStates : uint8_t
{
	BScMvSS_Idle                   = 0,
	BScMvSS_Walk                   = 1,
	BScMvSS_Run                    = 2,
	BScMvSS_Sprint                 = 3,
	BScMvSS_MAX                    = 4
};


// Enum BIOC_Base.BioAnimNodeBlendScalarMovementBehavior.EBioAnimNodeBlendScalarMoveAxis
enum class EBioAnimNodeBlendScalarMoveAxis : uint8_t
{
	BScMvAxis_All                  = 0,
	BScMvAxis_2D                   = 1,
	BScMvAxis_X                    = 2,
	BScMvAxis_Y                    = 3,
	BScMvAxis_Z                    = 4,
	BScMvAxis_MAX                  = 5
};


// Enum BIOC_Base.BioAnimNodeBlendScalarMovementBehavior.EBioAnimNodeBlendScalarMoveAxisDir
enum class EBioAnimNodeBlendScalarMoveAxisDir : uint8_t
{
	BScMvAxisDir_X                 = 0,
	BScMvAxisDir_Y                 = 1,
	BScMvAxisDir_Z                 = 2,
	BScMvAxisDir_MAX               = 3
};


// Enum BIOC_Base.BioAnimNodeBlendScalarMovementBehavior.EBioAnimNodeBlendScalarMoveAxisDirMode
enum class EBioAnimNodeBlendScalarMoveAxisDirMode : uint8_t
{
	BScMvAxisDirMode_WorldRotation = 0,
	BScMvAxisDirMode_WorldVelDir   = 1,
	BScMvAxisDirMode_WorldAccelDir = 2,
	BScMvAxisDirMode_LocalVelDir   = 3,
	BScMvAxisDirMode_LocalAccelDir = 4,
	BScMvAxisDirMode_MAX           = 5
};


// Enum BIOC_Base.BioAnimNodeBlendSkidTurn.EBioAnimSkidTurn
enum class EBioAnimSkidTurn : uint8_t
{
	eBioAnimSkidTurn_StartRight    = 0,
	eBioAnimSkidTurn_StartLeft     = 1,
	eBioAnimSkidTurn_TurnRightNear = 2,
	eBioAnimSkidTurn_TurnRightFar  = 3,
	eBioAnimSkidTurn_TurnLeftNear  = 4,
	eBioAnimSkidTurn_TurnLeftFar   = 5,
	eBioAnimSkidTurn_MAX           = 6
};


// Enum BIOC_Base.BioAnimNodeBlendSpeed.EBioAnim_SpeedType
enum class EBioAnim_SpeedType : uint8_t
{
	eBioAnim_SpeedStandard         = 0,
	eBioAnim_SpeedStarting         = 1,
	eBioAnim_SpeedSnapshot         = 2,
	eBioAnim_MAX                   = 3
};


// Enum BIOC_Base.BioAnimNodeBlendState.EBioBlendStatePlayMode
enum class EBioBlendStatePlayMode : uint8_t
{
	eBioBlendStatePlayMode_None    = 0,
	eBioBlendStatePlayMode_OneShot = 1,
	eBioBlendStatePlayMode_Looping = 2,
	eBioBlendStatePlayMode_Query   = 3,
	eBioBlendStatePlayMode_MAX     = 4
};


// Enum BIOC_Base.BioAnimNodeBlendState.EBioBlendStatePlayAction
enum class EBioBlendStatePlayAction : uint8_t
{
	eBioBlendStatePlayAction_NoAction = 0,
	eBioBlendStatePlayAction_Play  = 1,
	eBioBlendStatePlayAction_Stop  = 2,
	eBioBlendStatePlayAction_Reset = 3,
	eBioBlendStatePlayAction_PlayFromStart = 4,
	eBioBlendStatePlayAction_PlayFromTime = 5,
	eBioBlendStatePlayAction_MAX   = 6
};


// Enum BIOC_Base.BioAnimNodeBlendStateActionBehavior.EBioAnimNodeBlendStateActionBehavior
enum class EBioAnimNodeBlendStateActionBehavior : uint8_t
{
	BSAct_None                     = 0,
	BSAct_PawnState                = 1,
	BSAct_PawnGesturesState        = 2,
	BSAct_ActiveState              = 3,
	BSAct_Posture                  = 4,
	BSAct_ArtPlaceable             = 5,
	BSAct_IdleState                = 6,
	BSAct_MAX                      = 7
};


// Enum BIOC_Base.BioAnimNodeBlendStateActionBehavior.EBioPawnAnimActionStates
enum class EBioPawnAnimActionStates : uint8_t
{
	PAAS_Posture                   = 0,
	PAAS_Dying                     = 1,
	PAAS_Death                     = 2,
	PAAS_Matinee                   = 3,
	PAAS_Recover                   = 4,
	PAAS_Gestures                  = 5,
	PAAS_MAX                       = 6
};


// Enum BIOC_Base.BioAnimNodeBlendStateActionBehavior.EBioPawnAnimActiveStates
enum class EBioPawnAnimActiveStates : uint8_t
{
	PAActiveS_Active               = 0,
	PAActiveS_ActiveToInactive     = 1,
	PAActiveS_InactiveToActive     = 2,
	PAActiveS_Inactive             = 3,
	PAActiveS_MAX                  = 4
};


// Enum BIOC_Base.BioAnimNodeBlendStateActionBehavior.EBioArtPlaceableActionStates
enum class EBioArtPlaceableActionStates : uint8_t
{
	APAS_Default                   = 0,
	APAS_Matinee                   = 1,
	APAS_MAX                       = 2
};


// Enum BIOC_Base.BioAnimNodeBlendStateCombatBehavior.EBioAnimNodeBlendStateCombatBehavior
enum class EBioAnimNodeBlendStateCombatBehavior : uint8_t
{
	BSCbt_None                     = 0,
	BSCbt_CoverSwitch              = 1,
	BSCbt_CoverDirection           = 2,
	BSCbt_CoverState               = 3,
	BSCbt_CoverBlocked             = 4,
	BSCbt_CombatSwitch             = 5,
	BSCbt_CoverPredictDirection    = 6,
	BSCbt_CoverBlockType           = 7,
	BSCbt_MAX                      = 8
};


// Enum BIOC_Base.BioAnimNodeBlendStateHoppingBehavior.EBioAnimNodeBlendStateHoppingBehavior
enum class EBioAnimNodeBlendStateHoppingBehavior : uint8_t
{
	BSHop_None                     = 0,
	BSHop_PawnSurface              = 1,
	BSHop_HopSequence              = 2,
	BSHop_HopPhys                  = 3,
	BSHop_MAX                      = 4
};


// Enum BIOC_Base.BioAnimNodeBlendStateMovementBehavior.EBioAnimNodeBlendStateMovementBehavior
enum class EBioAnimNodeBlendStateMovementBehavior : uint8_t
{
	BSMove_None                    = 0,
	BSMove_SpeedVelocity           = 1,
	BSMove_SpeedTacticalVelocity   = 2,
	BSMove_ScaleRate               = 3,
	BSMove_ScaleRateByWalkSpeed    = 4,
	BSMove_ScaleRateByRunSpeed     = 5,
	BSMove_ScaleRateBySprintSpeed  = 6,
	BSMove_ScaleRateByTacticalWalkSpeed = 7,
	BSMove_ScaleRateByTacticalRunSpeed = 8,
	BSMove_LookAtTurning           = 9,
	BSMove_TurningDirection        = 10,
	BSMove_AxisDirection           = 11,
	BSMove_FlyingState             = 12,
	BSMove_StopSwitch              = 13,
	BSMove_StopOnFoot              = 14,
	BSMove_StartSwitch             = 15,
	BSMove_ScaleRateByWalkRunRatio = 16,
	BSMove_SkidTurnSwitch          = 17,
	BSMove_MAX                     = 18
};


// Enum BIOC_Base.BioAnimNodeBlendStateMovementBehavior.EBioMovementSpeedStates
enum class EBioMovementSpeedStates : uint8_t
{
	MSS_Idle                       = 0,
	MSS_Walk                       = 1,
	MSS_Run                        = 2,
	MSS_Sprint                     = 3,
	MSS_MAX                        = 4
};


// Enum BIOC_Base.BioAnimNodeBlendStateMovementBehavior.EBioAnimNodeBlendStateMoveAxisDir
enum class EBioAnimNodeBlendStateMoveAxisDir : uint8_t
{
	BSMoveAxisDir_X                = 0,
	BSMoveAxisDir_Y                = 1,
	BSMoveAxisDir_Z                = 2,
	BSMoveAxisDir_MAX              = 3
};


// Enum BIOC_Base.BioAnimNodeBlendStateMovementBehavior.EBioAnimNodeBlendStateMoveAxisDirMode
enum class EBioAnimNodeBlendStateMoveAxisDirMode : uint8_t
{
	BSMoveAxisDirMode_WorldRotation = 0,
	BSMoveAxisDirMode_WorldVelDir  = 1,
	BSMoveAxisDirMode_WorldAccelDir = 2,
	BSMoveAxisDirMode_LocalVelDir  = 3,
	BSMoveAxisDirMode_LocalAccelDir = 4,
	BSMoveAxisDirMode_MAX          = 5
};


// Enum BIOC_Base.BioAnimNodeCombatMode.EBioAnimNodeCombatModeChild
enum class EBioAnimNodeCombatModeChild : uint8_t
{
	BIO_ANIM_NODE_COMBAT_MODE_CHILD_NONCOMBAT = 0,
	BIO_ANIM_NODE_COMBAT_MODE_CHILD_COMBAT = 1,
	BIO_ANIM_NODE_COMBAT_MODE_CHILD_ENTERCOMBAT = 2,
	BIO_ANIM_NODE_COMBAT_MODE_CHILD_EXITCOMBAT = 3,
	BIO_ANIM_NODE_COMBAT_MODE_CHILD_MAX = 4
};


// Enum BIOC_Base.BioAnimNodeCombatMode.EBioAnimNodeCombatModeState
enum class EBioAnimNodeCombatModeState : uint8_t
{
	BIO_ANIM_NODE_COMBAT_MODE_STATE_NONCOMBAT = 0,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_COMBAT = 1,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_ANIMATING_TO_COMBAT = 2,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_ANIMATING_TO_NONCOMBAT = 3,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_BLENDING_TO_COMBAT = 4,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_BLENDING_TO_NONCOMBAT = 5,
	BIO_ANIM_NODE_COMBAT_MODE_STATE_MAX = 6
};


// Enum BIOC_Base.BioAppearanceItemWeapon.EBioAppearanceItemWeaponVFXDamageEnum
enum class EBioAppearanceItemWeaponVFXDamageEnum : uint8_t
{
	BIO_APPEARANCE_ITEM_WEAPON_VFX_DAMAGE_ENUM_PLACEHOLDER = 0,
	BIO_APPEARANCE_ITEM_WEAPON_VFX_DAMAGE_ENUM_MAX = 1
};


// Enum BIOC_Base.BioFSMComponent.eBioPendingStateChange
enum class EeBioPendingStateChange : uint8_t
{
	BIO_PST_Done                   = 0,
	BIO_PST_Pending                = 1,
	BIO_PST_Started                = 2,
	BIO_PST_MAX                    = 3
};


// Enum BIOC_Base.BioArtPlaceableType.eMateralVariation
enum class EeMateralVariation : uint8_t
{
	APMV                           = 0,
	APMV01                         = 1,
	APMV02                         = 2,
	APMV03                         = 3,
	APMV04                         = 4,
	APMV05                         = 5,
	APMV06                         = 6,
	APMV07                         = 7,
	APMV08                         = 8,
	APMV_MAX                       = 9
};


// Enum BIOC_Base.BioArtPlaceableType.eBioAPLUseCase
enum class EeBioAPLUseCase : uint8_t
{
	APL_USE_TOGGLE                 = 0,
	APL_USE_STATE0                 = 1,
	APL_USE_STATE1                 = 2,
	APL_USE_ELECTRONICS            = 3,
	APL_USE_DECRYPT                = 4,
	APL_USE_PROXIMITY              = 5,
	APL_USE_PROXIMITY_ENTER        = 6,
	APL_USE_PROXIMITY_EXIT         = 7,
	APL_USE_MAX                    = 8
};


// Enum BIOC_Base.BioSkillGame.EBioSkillGame
enum class EBioSkillGame : uint8_t
{
	SKILL_GAME_DECRYPTION          = 0,
	SKILL_GAME_ELECTRONICS         = 1,
	SKILL_GAME_CUSTOM              = 2,
	SKILL_GAME_MAX                 = 3
};


// Enum BIOC_Base.BioSkillGame.EBioSkillGameDifficulty
enum class EBioSkillGameDifficulty : uint8_t
{
	SKILL_GAME_DIFFICULTY_EASY     = 0,
	SKILL_GAME_DIFFICULTY_MEDIUM   = 1,
	SKILL_GAME_DIFFICULTY_HARD     = 2,
	SKILL_GAME_DIFFICULTY_MAX      = 3
};


// Enum BIOC_Base.BioArtPlaceableType.eArtPlaceableRole
enum class EeArtPlaceableRole : uint8_t
{
	APR_NONE                       = 0,
	APR_MAX                        = 1
};


// Enum BIOC_Base.BioArtPlaceableType.eArtPlaceableStates
enum class EeArtPlaceableStates : uint8_t
{
	APL_FSM_STATE_NONE             = 0,
	APL_FSM_STATE_MAX              = 1
};


// Enum BIOC_Base.BioAttributeMapper.EBioGameEffectAttributeType
enum class EBioGameEffectAttributeType : uint8_t
{
	BIO_ATTRIBUTE_TYPE_PAWN        = 0,
	BIO_ATTRIBUTE_TYPE_PAWNPARTY   = 1,
	BIO_ATTRIBUTE_TYPE_PAWNPLAYER  = 2,
	BIO_ATTRIBUTE_TYPE_POWER       = 3,
	BIO_ATTRIBUTE_TYPE_ITEM        = 4,
	BIO_ATTRIBUTE_TYPE_ITEM_WEAPON = 5,
	BIO_ATTRIBUTE_TYPE_ITEM_ARMOR  = 6,
	BIO_ATTRIBUTE_TYPE_ITEM_BIOAMP = 7,
	BIO_ATTRIBUTE_TYPE_ITEM_OMNITOOL = 8,
	BIO_ATTRIBUTE_TYPE_SHIELD      = 9,
	BIO_ATTRIBUTE_TYPE_DAMAGE      = 10,
	BIO_ATTRIBUTE_TYPE_PAWN_VEHICLE = 11,
	BIO_ATTRIBUTE_TYPE_ITEM_GRENADE = 12,
	BIO_ATTRIBUTE_TYPE_MAX         = 13
};


// Enum BIOC_Base.BioEquipmentVehicle.EBioEquipmentVehicleSlot
enum class EBioEquipmentVehicleSlot : uint8_t
{
	VEHICLE_EQUIPMENT_SLOT_CANNON  = 0,
	VEHICLE_EQUIPMENT_SLOT_MACHINE_GUN = 1,
	VEHICLE_EQUIPMENT_SLOT_ARMOR   = 2,
	VEHICLE_EQUIPMENT_SLOT_SHIELDS = 3,
	VEHICLE_EQUIPMENT_SLOT_THRUSTER_BOOST = 4,
	VEHICLE_EQUIPMENT_SLOT_REPAIR  = 5,
	VEHICLE_EQUIPMENT_SLOT_RADAR   = 6,
	VEHICLE_EQUIPMENT_SLOT_MAX     = 7
};


// Enum BIOC_Base.BioAttributesItemWeaponRanged.EWeaponPowerMode
enum class EWeaponPowerMode : uint8_t
{
	WEAPON_POWER_MODE_NONE         = 0,
	WEAPON_POWER_MODE_MARKSMAN     = 1,
	WEAPON_POWER_MODE_SUPPRESSION  = 2,
	WEAPON_POWER_MODE_ASSASSINATION = 3,
	WEAPON_POWER_MODE_CARNAGE      = 4,
	WEAPON_POWER_MODE_MAX          = 5
};


// Enum BIOC_Base.BioAttributesPawn.EBioAttributePawnGender
enum class EBioAttributePawnGender : uint8_t
{
	BIO_ATTRIBUTE_PAWN_GENDER_MALE = 0,
	BIO_ATTRIBUTE_PAWN_GENDER_FEMALE = 1,
	BIO_ATTRIBUTE_PAWN_GENDER_NONE = 2,
	BIO_ATTRIBUTE_PAWN_GENDER_MAX  = 3
};


// Enum BIOC_Base.BioAttributesPawn.EBioAttributePawnRace
enum class EBioAttributePawnRace : uint8_t
{
	BIO_ATTRIBUTE_PAWN_RACE_HUMAN  = 0,
	BIO_ATTRIBUTE_PAWN_RACE_ASARI  = 1,
	BIO_ATTRIBUTE_PAWN_RACE_TURIAN = 2,
	BIO_ATTRIBUTE_PAWN_RACE_SALARIAN = 3,
	BIO_ATTRIBUTE_PAWN_RACE_QUARIAN = 4,
	BIO_ATTRIBUTE_PAWN_RACE_OTHER  = 5,
	BIO_ATTRIBUTE_PAWN_RACE_KROGAN = 6,
	BIO_ATTRIBUTE_PAWN_RACE_GETH   = 7,
	BIO_ATTRIBUTE_PAWN_RACE_OTHER_ARTIFICIAL = 8,
	BIO_ATTRIBUTE_PAWN_RACE_MAX    = 9
};


// Enum BIOC_Base.BioAttributesPawnParty.EBioPartyMemberAbility
enum class EBioPartyMemberAbility : uint8_t
{
	ABILITY_STAMINA                = 0,
	ABILITY_FOCUS                  = 1,
	ABILITY_COORDINATION           = 2,
	ABILITY_PRECISION              = 3,
	ABILITY_MAX                    = 4
};


// Enum BIOC_Base.BioAttributesPawnParty.EBioPartyMemberClassBase
enum class EBioPartyMemberClassBase : uint8_t
{
	BIO_PARTY_MEMBER_CLASS_BASE_SOLDIER = 0,
	BIO_PARTY_MEMBER_CLASS_BASE_ENGINEER = 1,
	BIO_PARTY_MEMBER_CLASS_BASE_ADEPT = 2,
	BIO_PARTY_MEMBER_CLASS_BASE_INFILTRATOR = 3,
	BIO_PARTY_MEMBER_CLASS_BASE_SAVANT = 4,
	BIO_PARTY_MEMBER_CLASS_BASE_REAVER = 5,
	BIO_PARTY_MEMBER_CLASS_BASE_ASARI_SCIENTIST = 6,
	BIO_PARTY_MEMBER_CLASS_BASE_KROGAN_OLD_ONE = 7,
	BIO_PARTY_MEMBER_CLASS_BASE_TURIAN_SPECTRE = 8,
	BIO_PARTY_MEMBER_CLASS_BASE_QUARIAN_TINKER = 9,
	BIO_PARTY_MEMBER_CLASS_BASE_SUPERSOLDIER = 10,
	BIO_PARTY_MEMBER_CLASS_BASE_WOMAN_VETERAN = 11,
	BIO_PARTY_MEMBER_CLASS_BASE_MAN_THINKER = 12,
	BIO_PARTY_MEMBER_CLASS_BASE_MAX = 13
};


// Enum BIOC_Base.BioAttributesPawnParty.EBioPartyMemberClassSpecialization
enum class EBioPartyMemberClassSpecialization : uint8_t
{
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_NONE_DEPRECATED = 0,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_MARINE_DEPRECATED = 1,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_RANGER_DEPRECATED = 2,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_INFILTRATOR_DEPRECATED = 3,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_MEDIC_DEPRECATED = 4,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_REAVER_DEPRECATED = 5,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_BASTION_DEPRECATED = 6,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_MAX_DEPRECATED = 7,
	BIO_PARTY_MEMBER_CLASS_SPECIALIZATION_MAX = 8
};


// Enum BIOC_Base.BioAttributesPawnPlayer.EBioPlayerCharacterSpectreRank
enum class EBioPlayerCharacterSpectreRank : uint8_t
{
	BIO_PLAYER_CHARACTER_SPECTRE_RANK_NONE = 0,
	BIO_PLAYER_CHARACTER_SPECTRE_RANK_OPERATIVE = 1,
	BIO_PLAYER_CHARACTER_SPECTRE_RANK_MAX = 2
};


// Enum BIOC_Base.BioAttributesPawnPlayer.EBioPlayerCharacterBackgroundOrigin
enum class EBioPlayerCharacterBackgroundOrigin : uint8_t
{
	BIO_PLAYER_CHARACTER_BACKGROUND_ORIGIN_NONE = 0,
	BIO_PLAYER_CHARACTER_BACKGROUND_ORIGIN_SPACER = 1,
	BIO_PLAYER_CHARACTER_BACKGROUND_ORIGIN_COLONY = 2,
	BIO_PLAYER_CHARACTER_BACKGROUND_ORIGIN_EARTHBORN = 3,
	BIO_PLAYER_CHARACTER_BACKGROUND_ORIGIN_MAX = 4
};


// Enum BIOC_Base.BioAttributesPawnPlayer.EBioPlayerCharacterBackgroundNotoriety
enum class EBioPlayerCharacterBackgroundNotoriety : uint8_t
{
	BIO_PLAYER_CHARACTER_BACKGROUND_NOTORIETY_NONE = 0,
	BIO_PLAYER_CHARACTER_BACKGROUND_NOTORIETY_SURVIVOR = 1,
	BIO_PLAYER_CHARACTER_BACKGROUND_NOTORIETY_WARHERO = 2,
	BIO_PLAYER_CHARACTER_BACKGROUND_NOTORIETY_RUTHLESS = 3,
	BIO_PLAYER_CHARACTER_BACKGROUND_NOTORIETY_MAX = 4
};


// Enum BIOC_Base.BioSquadAPI.EPathNodeAction
enum class EPathNodeAction : uint8_t
{
	PNA_Blank                      = 0,
	PNA_Run                        = 1,
	PNA_Mounted                    = 2,
	PNA_Fell                       = 3,
	PNA_Ladder                     = 4,
	PNA_Elevator                   = 5,
	PNA_Door                       = 6,
	PNA_Teleport                   = 7,
	PNA_MAX                        = 8
};


// Enum BIOC_Base.BioBaseSquad.eSTAT_Following
enum class EeSTAT_Following : uint8_t
{
	STAT_Following_Off             = 0,
	STAT_Following_Collect         = 1,
	STAT_Following_Report          = 2,
	STAT_Following_MAX             = 3
};


// Enum BIOC_Base.BioBaseSquad.EBioHoldPositionMode
enum class EBioHoldPositionMode : uint8_t
{
	BIO_HOLD_Following             = 0,
	BIO_HOLD_Holding               = 1,
	BIO_HOLD_MAX                   = 2
};


// Enum BIOC_Base.BioBaseSquad.EOrientationType
enum class EOrientationType : uint8_t
{
	OrientType_UseLeaders          = 0,
	OrientType_UseFormations       = 1,
	OrientType_MAX                 = 2
};


// Enum BIOC_Base.BioBaseSquad.ESquadIcons
enum class ESquadIcons : uint8_t
{
	BIO_SQUADICON_INVALID          = 0,
	BIO_SQUADICON_HOLD             = 1,
	BIO_SQUADICON_MOVETO           = 2,
	BIO_SQUADICON_FOLLOW           = 3,
	BIO_SQUADICON_DEAD             = 4,
	BIO_SQUADICON_INCOVER          = 5,
	BIO_SQUADICON_MAX              = 6
};


// Enum BIOC_Base.BioBaseSquad.EBioCapabilityTypes
enum class EBioCapabilityTypes : uint8_t
{
	BioCaps_AllTypes               = 0,
	BioCaps_SingleTargetAttack     = 1,
	BioCaps_AreaAttack             = 2,
	BioCaps_Disable                = 3,
	BioCaps_Debuff                 = 4,
	BioCaps_Defense                = 5,
	BioCaps_Heal                   = 6,
	BioCaps_Buff                   = 7,
	BioCaps_Suicide                = 8,
	BioCaps_Death                  = 9,
	BioCaps_ERROR                  = 10,
	BioCaps_MAX                    = 11
};


// Enum BIOC_Base.BioBaseSquad.EBioCapMode
enum class EBioCapMode : uint8_t
{
	BIO_CAPMODE_WEAPON             = 0,
	BIO_CAPMODE_BIOTICS            = 1,
	BIO_CAPMODE_TECH               = 2,
	BIO_CAPMODE_COMBAT             = 3,
	BIO_CAPMODE_GRENADES           = 4,
	BIO_CAPMODE_ERROR              = 5,
	BIO_CAPMODE_MAX                = 6
};


// Enum BIOC_Base.BioBaseSquad.EBioTechniqueWeapon
enum class EBioTechniqueWeapon : uint8_t
{
	BioWepTech_Pistol              = 0,
	BioWepTech_Blaster             = 1,
	BioWepTech_Assault             = 2,
	BioWepTech_Sniper              = 3,
	BioWepTech_Grenade             = 4,
	BioWepTech_Melee               = 5,
	BioWepTech_MAX                 = 6
};


// Enum BIOC_Base.BioBaseSquad.EBioTacticalAction
enum class EBioTacticalAction : uint8_t
{
	BIO_TACACT_NONE                = 0,
	BIO_TACACT_SHOOT               = 1,
	BIO_TACACT_GRENADE             = 2,
	BIO_TACACT_POWER               = 3,
	BIO_TACACT_EQUIP               = 4,
	BIO_TACACT_MAX                 = 5
};


// Enum BIOC_Base.BioBaseSquad.EFollowFormation
enum class EFollowFormation : uint8_t
{
	BIO_FOLLOWFORMATION_INVALID    = 0,
	BIO_FOLLOWFORMATION_FOLLOW     = 1,
	BIO_FOLLOWFORMATION_HOLD       = 2,
	BIO_FOLLOWFORMATION_MAX        = 3
};


// Enum BIOC_Base.BioBaseSquad.ePawnValidType
enum class EePawnValidType : uint8_t
{
	PVT_Invalid                    = 0,
	PVT_ValidPawn                  = 1,
	PVT_ValidCar                   = 2,
	PVT_MAX                        = 3
};


// Enum BIOC_Base.BioDefine.EBioFactionRelationship
enum class EBioFactionRelationship : uint8_t
{
	BIO_Relation_Friendly          = 0,
	BIO_Relation_Neutral           = 1,
	BIO_Relation_Hostile           = 2,
	BIO_Relation_MAX               = 3
};


// Enum BIOC_Base.BioDefine.EBioFactionTypes
enum class EBioFactionTypes : uint8_t
{
	BIO_Faction_Player             = 0,
	BIO_Faction_Commoner           = 1,
	BIO_Faction_Ambient            = 2,
	BIO_Faction_Defender1          = 3,
	BIO_Faction_Defender2          = 4,
	BIO_Faction_Hostile1           = 5,
	BIO_Faction_Hostile2           = 6,
	BIO_Faction_Hacked             = 7,
	BIO_Faction_MAX                = 8
};


// Enum BIOC_Base.BioCameraDebugger.EBioCameraDebuggerFlag
enum class EBioCameraDebuggerFlag : uint8_t
{
	BIO_CAMERA_DEBUGGER_FLAG_ACTIVE = 0,
	BIO_CAMERA_DEBUGGER_FLAG_COLLISION_LOCK = 1,
	BIO_CAMERA_DEBUGGER_FLAG_DRAW_HOOK = 2,
	BIO_CAMERA_DEBUGGER_FLAG_MAX   = 3
};


// Enum BIOC_Base.BioInterpolator.EBioInterpolationMethod
enum class EBioInterpolationMethod : uint8_t
{
	BIO_INTERPOLATION_METHOD_LINEAR = 0,
	BIO_INTERPOLATION_METHOD_LOG_E = 1,
	BIO_INTERPOLATION_METHOD_QUARTER_SIN = 2,
	BIO_INTERPOLATION_METHOD_MAX   = 3
};


// Enum BIOC_Base.BioCameraBehaviorFollowSniper.EBioWeaponInterpolationState
enum class EBioWeaponInterpolationState : uint8_t
{
	BIO_WEAPON_INTERPOLATION_STATE_NONE = 0,
	BIO_WEAPON_INTERPOLATION_STATE_KICKBACK = 1,
	BIO_WEAPON_INTERPOLATION_STATE_SETTLE = 2,
	BIO_WEAPON_INTERPOLATION_STATE_MAX = 3
};


// Enum BIOC_Base.BioCameraBehaviorGalaxy.EBioGalaxyMap_PlanetType
enum class EBioGalaxyMap_PlanetType : uint8_t
{
	eBioGM_PlanetType_None         = 0,
	eBioGM_PlanetType_Planet       = 1,
	eBioGM_PlanetType_Anomaly      = 2,
	eBioGM_PlanetType_PlanetAndAnomaly = 3,
	eBioGM_PlanetType_Citadel      = 4,
	eBioGM_PlanetType_MAX          = 5
};


// Enum BIOC_Base.BioCameraManager.EBioCameraManagerTrace
enum class EBioCameraManagerTrace : uint8_t
{
	BIO_CAMERA_MANAGER_TRACE       = 0,
	BIO_CAMERA_MANAGER_TRACE_SOURCE = 1,
	BIO_CAMERA_MANAGER_TRACE_PRECISE = 2,
	BIO_CAMERA_MANAGER_TRACE_WORLD = 3,
	BIO_CAMERA_MANAGER_TRACE_MAX   = 4,
	BIO_CAMERA_MANAGER_MAX         = 5
};


// Enum BIOC_Base.BioCameraShake.EBioCameraShakeType
enum class EBioCameraShakeType : uint8_t
{
	BIO_CAMERA_SHAKE_TYPE_PLACEHOLDER = 0,
	BIO_CAMERA_SHAKE_TYPE_MAX      = 1
};


// Enum BIOC_Base.BioCameraShake.EBioCameraShakeVariant
enum class EBioCameraShakeVariant : uint8_t
{
	BIO_CAMERA_SHAKE_VARIANT_PLACEHOLDER = 0,
	BIO_CAMERA_SHAKE_VARIANT_MAX   = 1
};


// Enum BIOC_Base.BioCameraTransition.EBioCameraTransitionVar
enum class EBioCameraTransitionVar : uint8_t
{
	BIO_CAMERA_TRANSITION_VAR_LOCATION = 0,
	BIO_CAMERA_TRANSITION_VAR_ROTATION = 1,
	BIO_CAMERA_TRANSITION_VAR_FOV  = 2,
	BIO_CAMERA_TRANSITION_VAR_SOURCE = 3,
	BIO_CAMERA_TRANSITION_VAR_TARGET = 4,
	BIO_CAMERA_TRANSITION_VAR_MAX  = 5
};


// Enum BIOC_Base.BioCharacterImporter.EBioCharacterImporterCharacter2DA
enum class EBioCharacterImporterCharacter2DA : uint8_t
{
	CHARACTER_IMPORTER_CHARACTER_2DA_CHARACTER = 0,
	CHARACTER_IMPORTER_CHARACTER_2DA_STARTING_EQUIPMENT = 1,
	CHARACTER_IMPORTER_CHARACTER_2DA_MAX = 2
};


// Enum BIOC_Base.BioCharacterImporter.EBioCharacterImporterClasses2DA
enum class EBioCharacterImporterClasses2DA : uint8_t
{
	CHARACTER_IMPORTER_CLASSES_2DA_BASE_CLASS = 0,
	CHARACTER_IMPORTER_CLASSES_2DA_CLASS_TALENTS = 1,
	CHARACTER_IMPORTER_CLASSES_2DA_CLASS_SPECIALIZATIONS = 2,
	CHARACTER_IMPORTER_CLASSES_2DA_MAX = 3
};


// Enum BIOC_Base.BioEquipment.EBioEquipmentSlot
enum class EBioEquipmentSlot : uint8_t
{
	EQUIPMENT_SLOT_HEAD_GEAR_DEPRECATED = 0,
	EQUIPMENT_SLOT_ARMOR           = 1,
	EQUIPMENT_SLOT_GRENADE         = 2,
	EQUIPMENT_SLOT_OMNITOOL        = 3,
	EQUIPMENT_SLOT_BIOAMP          = 4,
	EQUIPMENT_SLOT_MAX             = 5
};


// Enum BIOC_Base.BioInventoryGuiInterface.EBioInventoryGuiInterfaceSortMode
enum class EBioInventoryGuiInterfaceSortMode : uint8_t
{
	BIO_INVENTORY_GUI_INTERFACE_SORT_BY_PRICE = 0,
	BIO_INVENTORY_GUI_INTERFACE_SORT_BY_SOPH_ASC = 1,
	BIO_INVENTORY_GUI_INTERFACE_SORT_BY_SOPH_DESC = 2,
	BIO_INVENTORY_GUI_INTERFACE_SORT_STORE_BUY = 3,
	BIO_INVENTORY_GUI_INTERFACE_SORT_STORE_SELL = 4,
	BIO_INVENTORY_GUI_INTERFACE_SORT_MAX = 5
};


// Enum BIOC_Base.BioInventoryGuiInterface.GuiItemStatTypes
enum class EGuiItemStatTypes : uint8_t
{
	ITEM_STAT_TYPE_None            = 0,
	ITEM_STAT_TYPE_DamagePerSecond = 1,
	ITEM_STAT_TYPE_Range           = 2,
	ITEM_STAT_TYPE_KickbackEfficiency = 3,
	ITEM_STAT_TYPE_ChargeEfficiency = 4,
	ITEM_STAT_TYPE_EffectBoost     = 5,
	ITEM_STAT_TYPE_DamageResistance = 6,
	ITEM_STAT_TYPE_ShieldStrength  = 7,
	ITEM_STAT_TYPE_TechResistance  = 8,
	ITEM_STAT_TYPE_School_Electronics = 9,
	ITEM_STAT_TYPE_School_Decryption = 10,
	ITEM_STAT_TYPE_School_Medical  = 11,
	ITEM_STAT_TYPE_School_Kinetics = 12,
	ITEM_STAT_TYPE_School_Telekinetics = 13,
	ITEM_STAT_TYPE_School_SpatialDistortion = 14,
	ITEM_STAT_TYPE_HeatsinkEfficiency = 15,
	ITEM_STAT_TYPE_Grenade_Damage  = 16,
	ITEM_STAT_TYPE_Grenade_Impulse = 17,
	ITEM_STAT_TYPE_Grenade_Radius  = 18,
	ITEM_STAT_TYPE_MAX             = 19
};


// Enum BIOC_Base.BioInventoryGuiInterface.GuiEquipSlots
enum class EGuiEquipSlots : uint8_t
{
	EQUIP_SLOT_None                = 0,
	EQUIP_SLOT_Pistol              = 1,
	EQUIP_SLOT_Shotgun             = 2,
	EQUIP_SLOT_Assault             = 3,
	EQUIP_SLOT_Sniper              = 4,
	EQUIP_SLOT_BioAmp              = 5,
	EQUIP_SLOT_Armor               = 6,
	EQUIP_SLOT_OmniTool            = 7,
	EQUIP_SLOT_Buyback             = 8,
	EQUIP_SLOT_Premium             = 9,
	EQUIP_SLOT_XMods               = 10,
	EQUIP_SLOT_COMBO_All           = 11,
	EQUIP_SLOT_COMBO_BioAmp_OmniTool = 12,
	EQUIP_SLOT_COMBO_Weapons       = 13,
	EQUIP_SLOT_Resources           = 14,
	EQUIP_SLOT_Grenades            = 15,
	EQUIP_SLOT_MAX                 = 16
};


// Enum BIOC_Base.BioInventoryGuiInterface.EBioInventoryGuiInterfaceItemStat
enum class EBioInventoryGuiInterfaceItemStat : uint8_t
{
	BIO_INVENTORY_GUI_INTERFACE_ITEM_STAT_PRIMARY = 0,
	BIO_INVENTORY_GUI_INTERFACE_ITEM_STAT_SECONDARY = 1,
	BIO_INVENTORY_GUI_INTERFACE_ITEM_STAT_TERTIARY = 2,
	BIO_INVENTORY_GUI_INTERFACE_ITEM_STAT_MAX = 3
};


// Enum BIOC_Base.BioInventoryGuiInterface.GuiXModSlots
enum class EGuiXModSlots : uint8_t
{
	XMOD_SLOT_Emitter              = 0,
	XMOD_SLOT_Functional           = 1,
	XMOD_SLOT_Ammo                 = 2,
	XMOD_SLOT_MAX                  = 3
};


// Enum BIOC_Base.BioCheatManager.EBioProfilerType
enum class EBioProfilerType : uint8_t
{
	BioProfiler_None               = 0,
	BioProfiler_Combat             = 1,
	BioProfiler_Talents            = 2,
	BioProfiler_PawnAttributes     = 3,
	BioProfiler_WeaponAttributes   = 4,
	BioProfiler_PowerAttributes    = 5,
	BioProfiler_Inventory          = 6,
	BioProfiler_Hopper             = 7,
	BioProfiler_AI                 = 8,
	BioProfiler_Cover              = 9,
	BioProfiler_Movement           = 10,
	BioProfiler_Squad              = 11,
	BioProfiler_Avoid              = 12,
	BioProfiler_Path               = 13,
	BioProfiler_Noise              = 14,
	BioProfiler_Conversation       = 15,
	BioProfiler_Ragdoll            = 16,
	BioProfiler_Grenade            = 17,
	BioProfiler_Lookat             = 18,
	BioProfiler_VehicleAttributes  = 19,
	BioProfiler_Camera             = 20,
	BioProfiler_QA_AI              = 21,
	BioProfiler_Squad_Follow       = 22,
	BioProfiler_Anim               = 23,
	BioProfiler_Save               = 24,
	BioProfiler_Gestures           = 25,
	BioProfiler_Caps               = 26,
	BioProfiler_SquadCaps          = 27,
	BioProfiler_Perception         = 28,
	BioProfiler_ConversationBug    = 29,
	BioProfiler_Stasis             = 30,
	BioProfiler_Components         = 31,
	BioProfiler_VehicleWeaponAttributes = 32,
	BioProfiler_MAX                = 33
};


// Enum BIOC_Base.BioConsequenceFunctions.EXPCurveSet
enum class EXPCurveSet : uint8_t
{
	EXPCurve_NoReward              = 0,
	EXPCurve_MinionKill            = 1,
	EXPCurve_EliteKill             = 2,
	EXPCurve_SubBossKill           = 3,
	EXPCurve_BossKill              = 4,
	EXPCurve_SkillUse              = 5,
	EXPCurve_MinorQuest            = 6,
	EXPCurve_MediumQUest           = 7,
	EXPCurve_MajorQuest            = 8,
	EXPCurve_MainPlot              = 9,
	EXPCurve_MAX                   = 10
};


// Enum BIOC_Base.BioConversation.EReplyTypes
enum class EReplyTypes : uint8_t
{
	REPLY_STANDARD                 = 0,
	REPLY_AUTOCONTINUE             = 1,
	REPLY_DIALOGEND                = 2,
	REPLY_MAX                      = 3
};


// Enum BIOC_Base.BioConversation.EReplyCategory
enum class EReplyCategory : uint8_t
{
	REPLY_CATEGORY_DEFAULT         = 0,
	REPLY_CATEGORY_AGREE           = 1,
	REPLY_CATEGORY_DISAGREE        = 2,
	REPLY_CATEGORY_FRIENDLY        = 3,
	REPLY_CATEGORY_HOSTILE         = 4,
	REPLY_CATEGORY_INVESTIGATE     = 5,
	REPLY_CATEGORY_MAX             = 6
};


// Enum BIOC_Base.BioConversation.EConvGUIStyles
enum class EConvGUIStyles : uint8_t
{
	GUI_STYLE_NONE                 = 0,
	GUI_STYLE_CHARM                = 1,
	GUI_STYLE_INTIMIDATE           = 2,
	GUI_STYLE_PLAYER_ALERT         = 3,
	GUI_STYLE_ILLEGAL              = 4,
	GUI_STYLE_MAX                  = 5
};


// Enum BIOC_Base.BioDefine.EBioCoverStates
enum class EBioCoverStates : uint8_t
{
	BIO_COVERSTATE_NONE            = 0,
	BIO_COVERSTATE_AVAILABLE       = 1,
	BIO_COVERSTATE_INCOVER         = 2,
	BIO_COVERSTATE_LEAN_LEFT       = 3,
	BIO_COVERSTATE_LEAN_RIGHT      = 4,
	BIO_COVERSTATE_POPUP           = 5,
	BIO_COVERSTATE_MAX             = 6
};


// Enum BIOC_Base.BioDefine.EBioVFXPriority
enum class EBioVFXPriority : uint8_t
{
	BIO_VFX_PRIORITY_MIN           = 0,
	BIO_VFX_PRIORITY_LOW           = 1,
	BIO_VFX_PRIORITY_MEDIUM        = 2,
	BIO_VFX_PRIORITY_HIGH          = 3,
	BIO_VFX_PRIORITY_ALWAYS        = 4,
	BIO_VFX_PRIORITY_MAX           = 5
};


// Enum BIOC_Base.BioDefine.EHopPhysicsStates
enum class EHopPhysicsStates : uint8_t
{
	HPS_INVALID                    = 0,
	HPS_Idle                       = 1,
	HPS_Launch                     = 2,
	HPS_Flying                     = 3,
	HPS_Landing                    = 4,
	HPS_Landed                     = 5,
	HPS_MAX                        = 6
};


// Enum BIOC_Base.BioDefine.EBioPawnHoppingSurface
enum class EBioPawnHoppingSurface : uint8_t
{
	eBioHopSurface_Floor           = 0,
	eBioHopSurface_Wall            = 1,
	eBioHopSurface_Ceiling         = 2,
	eBioHopSurface_MAX             = 3
};


// Enum BIOC_Base.BioDestinationArrow.eColorSelection
enum class EeColorSelection : uint8_t
{
	BDA_White                      = 0,
	BDA_Yellow                     = 1,
	BDA_Blue                       = 2,
	BDA_Red                        = 3,
	BDA_MAX                        = 4
};


// Enum BIOC_Base.BioEpicPawnBehavior.EBioEpicPawnBehaviorWeaponFireMode
enum class EBioEpicPawnBehaviorWeaponFireMode : uint8_t
{
	BIO_EPIC_PAWN_BEHAVIOR_WEAPON_FIRE_MODE_NORMAL = 0,
	BIO_EPIC_PAWN_BEHAVIOR_WEAPON_FIRE_MODE_ALWAYS_HIT = 1,
	BIO_EPIC_PAWN_BEHAVIOR_WEAPON_FIRE_MODE_ALWAYS_MISS = 2,
	BIO_EPIC_PAWN_BEHAVIOR_WEAPON_FIRE_MODE_MAX = 3
};


// Enum BIOC_Base.BioEpicPawnBehavior.EBioAnimNodeCombatModeFadeOut
enum class EBioAnimNodeCombatModeFadeOut : uint8_t
{
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_NONE = 0,
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_ANIMATING_ENTER = 1,
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_ENTER = 2,
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_ANIMATING_EXIT = 3,
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_EXIT = 4,
	BIO_ANIM_NODE_COMBAT_MODE_FADEOUT_MAX = 5
};


// Enum BIOC_Base.BioEpicPawnBehavior.EBioCombatStance
enum class EBioCombatStance : uint8_t
{
	COMBAT_STANCE_NONE             = 0,
	COMBAT_STANCE_AGGRESSIVE       = 1,
	COMBAT_STANCE_DEFENSIVE        = 2,
	COMBAT_STANCE_COUNT            = 3,
	COMBAT_STANCE_MAX              = 4
};


// Enum BIOC_Base.BioEventNotifier.BioNoticeDisplayTypes
enum class EBioNoticeDisplayTypes : uint8_t
{
	NOTICE_TYPE_DELTA              = 0,
	NOTICE_TYPE_TEXT               = 1,
	NOTICE_TYPE_QUANTITY           = 2,
	NOTICE_TYPE_QUANTITY_TEXT      = 3,
	NOTICE_TYPE_MAX                = 4
};


// Enum BIOC_Base.BioEventNotifier.BioNoticeIcons
enum class EBioNoticeIcons : uint8_t
{
	NOTICE_ICON_UNASSIGNED         = 0,
	NOTICE_ICON_QUEST_UPDATE       = 1,
	NOTICE_ICON_LEVELUP            = 2,
	NOTICE_ICON_DEFICIENCY         = 3,
	NOTICE_ICON_XP                 = 4,
	NOTICE_ICON_PARAGON            = 5,
	NOTICE_ICON_RENEGADE           = 6,
	NOTICE_ICON_OMNITOOL           = 7,
	NOTICE_ICON_BIOAMP             = 8,
	NOTICE_ICON_XMOD               = 9,
	NOTICE_ICON_CODEX_ADDED        = 10,
	NOTICE_ICON_COIN               = 11,
	NOTICE_ICON_MEDIGEL            = 12,
	NOTICE_ICON_SALVAGE            = 13,
	NOTICE_ICON_PISTOL             = 14,
	NOTICE_ICON_SHOTGUN            = 15,
	NOTICE_ICON_ASSAULT_RIFLE      = 16,
	NOTICE_ICON_SNIPER_RIFLE       = 17,
	NOTICE_ICON_ARMOR              = 18,
	NOTICE_ICON_GRENADE            = 19,
	NOTICE_ICON_QUEST_ADDED        = 20,
	NOTICE_ICON_AREAMAPNODE        = 21,
	NOTICE_ICON_HONOR              = 22,
	NOTICE_ICON_MAX                = 23
};


// Enum BIOC_Base.BioEventNotifier.BioNoticeContexts
enum class EBioNoticeContexts : uint8_t
{
	NOTICE_CONTEXT_JOURNAL         = 0,
	NOTICE_CONTEXT_CODEX           = 1,
	NOTICE_CONTEXT_INVENTORY       = 2,
	NOTICE_CONTEXT_PARTYLEVEL      = 3,
	NOTICE_CONTEXT_XP              = 4,
	NOTICE_CONTEXT_MEDIGEL         = 5,
	NOTICE_CONTEXT_SALVAGE         = 6,
	NOTICE_CONTEXT_CREDITS         = 7,
	NOTICE_CONTEXT_GRENADES        = 8,
	NOTICE_CONTEXT_PARAGON         = 9,
	NOTICE_CONTEXT_RENEGADE        = 10,
	NOTICE_CONTEXT_AREAMAP         = 11,
	NOTICE_CONTEXT_ABILITY         = 12,
	NOTICE_CONTEXT_HONOR           = 13,
	NOTICE_CONTEXT_MAX             = 14
};


// Enum BIOC_Base.BioEventNotifier.BioQuestEventTypes
enum class EBioQuestEventTypes : uint8_t
{
	QET_New                        = 0,
	QET_Updated                    = 1,
	QET_Completed                  = 2,
	QET_MAX                        = 3
};


// Enum BIOC_Base.BioEvtSysTrackFuncShot.EBioFuncShotType
enum class EBioFuncShotType : uint8_t
{
	FuncShotType_Unset             = 0,
	FuncShotType_MAX               = 1
};


// Enum BIOC_Base.BioEvtSysTrackGesture.EBioGestureAllPoses
enum class EBioGestureAllPoses : uint8_t
{
	GestPose_Unset                 = 0,
	GestPose_MAX                   = 1
};


// Enum BIOC_Base.BioEvtSysTrackGesture.EBioGestureOverrideType
enum class EBioGestureOverrideType : uint8_t
{
	DEFAULT_TRACK                  = 0,
	FEMALE_PLAYER_TRACK            = 1,
	FRENCH_TRACK                   = 2,
	ITALIAN_TRACK                  = 3,
	GERMAN_TRACK                   = 4,
	EBioGestureOverrideType_MAX    = 5
};


// Enum BIOC_Base.BioEvtSysTrackGesture.EBioGestureFindActorMode
enum class EBioGestureFindActorMode : uint8_t
{
	Gesture_FindActorByTag         = 0,
	Gesture_UseObjectPinForActor   = 1,
	Gesture_MAX                    = 2
};


// Enum BIOC_Base.BioStage.EStageNodes
enum class EStageNodes : uint8_t
{
	STAGENODE_NODE1                = 0,
	STAGENODE_NODE2                = 1,
	STAGENODE_PUP1                 = 2,
	STAGENODE_PUP101               = 3,
	STAGENODE_PUP2                 = 4,
	STAGENODE_PUP201               = 5,
	STAGENODE_NODE3                = 6,
	STAGENODE_NODE4                = 7,
	STAGENODE_UNSET                = 8,
	STAGENODE_MAX                  = 9
};


// Enum BIOC_Base.BioSeqAct_StageSwitchCamera.EBioCommonStageCameras
enum class EBioCommonStageCameras : uint8_t
{
	ChangeCam_Unset                = 0,
	cam1_2                         = 1,
	cam1_201                       = 2,
	cam1_202                       = 3,
	cam1_203                       = 4,
	cam1_204                       = 5,
	cam2_1                         = 6,
	cam2_101                       = 7,
	cam2_102                       = 8,
	cam2_103                       = 9,
	cam2_104                       = 10,
	cam3_1                         = 11,
	cam3_101                       = 12,
	cam3_2                         = 13,
	cam3_201                       = 14,
	cam4_1                         = 15,
	cam4_101                       = 16,
	cam4_2                         = 17,
	cam4_201                       = 18,
	EBioCommonStageCameras_MAX     = 19
};


// Enum BIOC_Base.BioForceFeedbackPlayer.EBioForceFeedbackPlayer
enum class EBioForceFeedbackPlayer : uint8_t
{
	BIO_FORCE_FEEDBACK_PLAYER_COVER = 0,
	BIO_FORCE_FEEDBACK_PLAYER_DRAW = 1,
	BIO_FORCE_FEEDBACK_PLAYER_HOLSTERED = 2,
	BIO_FORCE_FEEDBACK_PLAYER_WEAPON_CLOSE = 3,
	BIO_FORCE_FEEDBACK_PLAYER_USE_PLACEABLE = 4,
	BIO_FORCE_FEEDBACK_PLAYER_VEHICLE_CANNON = 5,
	BIO_FORCE_FEEDBACK_PLAYER_VEHICLE_MACHINE_GUN = 6,
	BIO_FORCE_FEEDBACK_PLAYER_MAX  = 7
};


// Enum BIOC_Base.BioGameEffect.EBioGameEffectClassPriority
enum class EBioGameEffectClassPriority : uint8_t
{
	BIO_GAME_EFFECT_CLASS_PRIORITY_STANDARD = 0,
	BIO_GAME_EFFECT_CLASS_PRIORITY_ADD_POWER_PARAMETER = 1,
	BIO_GAME_EFFECT_CLASS_PRIORITY_GIVE_POWER = 2,
	BIO_GAME_EFFECT_CLASS_PRIORITY_MAX = 3
};


// Enum BIOC_Base.BioGameEffectAttributeNumeric.EBioGameEffectAttributeAspect
enum class EBioGameEffectAttributeAspect : uint8_t
{
	BIO_ATTRIBUTE_ASPECT_BASE      = 0,
	BIO_ATTRIBUTE_ASPECT_MODIFIER  = 1,
	BIO_ATTRIBUTE_ASPECT_MAX       = 2
};


// Enum BIOC_Base.BioGameProperty.EBioGamePropertyType
enum class EBioGamePropertyType : uint8_t
{
	GPT_Static                     = 0,
	GPT_Timed                      = 1,
	GPT_Instant                    = 2,
	GPT_Frame                      = 3,
	GPT_StaticFrame                = 4,
	GPT_MAX                        = 5
};


// Enum BIOC_Base.BioItemEnumerations.EBioItemWeaponMeleeType
enum class EBioItemWeaponMeleeType : uint8_t
{
	ITEM_WEAPON_MELEE_KNIFE        = 0,
	ITEM_WEAPON_MELEE_SWORD        = 1,
	ITEM_WEAPON_MELEE_AXE          = 2,
	ITEM_WEAPON_MELEE_POLEARM      = 3,
	ITEM_WEAPON_MELEE_SPEAR        = 4,
	ITEM_WEAPON_MELEE_BLUNT        = 5,
	ITEM_WEAPON_MELEE_COUNT        = 6,
	ITEM_WEAPON_MELEE_MAX          = 7
};


// Enum BIOC_Base.BioGamePropertyImporter.EBioCharacterImporterGameProperty2DA
enum class EBioCharacterImporterGameProperty2DA : uint8_t
{
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_GAMEPROPERTIES = 0,
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_CONDITIONALS = 1,
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_GAMEPROPERTY_CONDITIONALS = 2,
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_GAMEEFFECTS = 3,
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_EVENTSETS = 4,
	GAMEPROP_IMPORTER_2DA_GAMEPROPERTY_MAX = 5
};


// Enum BIOC_Base.BioGamerProfile.EOption
enum class EOption : uint8_t
{
	OPTION_TYPE_COMBAT_DIFFICULTY  = 0,
	OPTION_TYPE_DIALOG_MODE        = 1,
	OPTION_TYPE_AUTO_LEVELUP       = 2,
	OPTION_TYPE_AUTO_EQUIP         = 3,
	OPTION_TYPE_TUTORIAL_FLAG      = 4,
	OPTION_TYPE_SUBTITLES          = 5,
	OPTION_TYPE_AUTOPAUSE_ENEMY_SIGHTED = 6,
	OPTION_TYPE_AUTOPAUSE_SQUADMEMBER_DOWN = 7,
	OPTION_TYPE_BRIGHTNESS         = 8,
	OPTION_TYPE_DISPLAY_SETTING    = 9,
	OPTION_TYPE_MUSIC_VOLUME       = 10,
	OPTION_TYPE_FX_VOLUME          = 11,
	OPTION_TYPE_DIALOG_VOLUME      = 12,
	OPTION_TYPE_INVERT_YAXIS       = 13,
	OPTION_TYPE_SOUTHPAW_FLAG      = 14,
	OPTION_TYPE_TARGET_ASSIST_MODE = 15,
	OPTION_TYPE_H_COMBAT_SENSITIVITY = 16,
	OPTION_TYPE_V_COMBAT_SENSITIVITY = 17,
	OPTION_TYPE_H_EXPLORATION_SENSITIVITY = 18,
	OPTION_TYPE_V_EXPLORATION_SENSITIVITY = 19,
	OPTION_TYPE_RUMBLE_FLAG        = 20,
	OPTION_TYPE_AUTOPAUSE_BLEEDOUT = 21,
	OPTION_TYPE_MOTION_BLUR        = 22,
	OPTION_TYPE_FILM_GRAIN         = 23,
	OPTION_TYPE_SQUAD_POWER_USE    = 24,
	OPTION_TYPE_AUTO_SAVE          = 25,
	OPTION_TYPE_MOUSE_SENSITIVITY  = 26,
	OPTION_TYPE_ANALOG_ENSITIVITY  = 27,
	OPTION_TYPE_MAX                = 28
};


// Enum BIOC_Base.BioGamerProfile.EOptionDialogMode
enum class EOptionDialogMode : uint8_t
{
	DIALOG_MODE_NORMAL             = 0,
	DIALOG_MODE_MOVIE              = 1,
	DIALOG_MODE_MAX                = 2
};


// Enum BIOC_Base.BioGamerProfile.EOptionCombatDifficulty
enum class EOptionCombatDifficulty : uint8_t
{
	COMBAT_DIFFICULTY_CASUAL       = 0,
	COMBAT_DIFFICULTY_NORMAL       = 1,
	COMBAT_DIFFICULTY_VETERAN      = 2,
	COMBAT_DIFFICULTY_HARDCORE     = 3,
	COMBAT_DIFFICULTY_INSANITY     = 4,
	COMBAT_DIFFICULTY_MAX          = 5
};


// Enum BIOC_Base.BioGamerProfile.EOptionDisplaySetting
enum class EOptionDisplaySetting : uint8_t
{
	DISPLAY_SETTING_EPICDEFAULT    = 0,
	DISPLAY_SETTING_DEFAULT        = 1,
	DISPLAY_SETTING_SOFT           = 2,
	DISPLAY_SETTING_LUCENT         = 3,
	DISPLAY_SETTING_VIBRANT        = 4,
	DISPLAY_SETTING_MAX            = 5
};


// Enum BIOC_Base.BioGamerProfile.EOptionBoolean
enum class EOptionBoolean : uint8_t
{
	OPTION_BOOLEAN_FALSE           = 0,
	OPTION_BOOLEAN_TRUE            = 1,
	OPTION_BOOLEAN_MAX             = 2
};


// Enum BIOC_Base.BioGamerProfile.EOptionTargetAssist
enum class EOptionTargetAssist : uint8_t
{
	TARGET_ASSIST_HIGH             = 0,
	TARGET_ASSIST_NORMAL           = 1,
	TARGET_ASSIST_LOW              = 2,
	TARGET_ASSIST_MAX              = 3
};


// Enum BIOC_Base.BioGamerProfile.EOptionAutoLevelUp
enum class EOptionAutoLevelUp : uint8_t
{
	AUTO_LEVEL_UP_NONE             = 0,
	AUTO_LEVEL_UP_SQUAD_MEMBERS    = 1,
	AUTO_LEVEL_UP_ALL              = 2,
	AUTO_LEVEL_UP_MAX              = 3
};


// Enum BIOC_Base.BioGamerProfile.EOptionSquadPowerUse
enum class EOptionSquadPowerUse : uint8_t
{
	POWER_USE_NONE                 = 0,
	POWER_USE_NORMAL               = 1,
	POWER_USE_AGRESSIVE            = 2,
	POWER_USE_MAX                  = 3
};


// Enum BIOC_Base.BioItemImporter.EBioItem2DA
enum class EBioItem2DA : uint8_t
{
	ITEM_IMPORTER_ITEM             = 0,
	ITEM_IMPORTER_ITEM_EFFECT_LEVELS = 1,
	ITEM_IMPORTER_2DA_COUNT        = 2,
	ITEM_IMPORTER_MAX              = 3
};


// Enum BIOC_Base.BioLayers.EBioLayer
enum class EBioLayer : uint8_t
{
	LAYER_DAMAGE_CONCENTRATION     = 0,
	LAYER_SUPPRESSION_CONCENTRATION = 1,
	LAYER_BIOTIC_HARDENING         = 2,
	LAYER_TECH_HARDENING           = 3,
	LAYER_TOXIC_RESISTANCE         = 4,
	LAYER_DISABLING_EFFECTS_RESISTANCE = 5,
	LAYER_DAMAGE_RESISTANCE        = 6,
	LAYER_COMBAT_KICKBACK_REDUCTION = 7,
	LAYER_BIOTIC_KICKBACK_REDUCTION = 8,
	LAYER_TECH_KICKBACK_REDUCTION  = 9,
	LAYER_COUNT                    = 10,
	LAYER_MAX                      = 11
};


// Enum BIOC_Base.BioLevelUpSystem.EBioLevelUp2DA
enum class EBioLevelUp2DA : uint8_t
{
	LEVEL_UP_2DA_LEVEL_UP          = 0,
	LEVEL_UP_2DA_RANK              = 1,
	LEVEL_UP_2DA_CHALLENGE_SCALING = 2,
	LEVEL_UP_2DA_EXPERIENCE        = 3,
	LEVEL_UP_2DA_TEMPLATE          = 4,
	LEVEL_UP_2DA_MAX               = 5
};


// Enum BIOC_Base.BioMorphUtility.EBioMorphUtilityComponentType
enum class EBioMorphUtilityComponentType : uint8_t
{
	BMU_Component_Unknown          = 0,
	BMU_Component_Picker           = 1,
	BMU_Component_Slider           = 2,
	BMU_Component_Combo            = 3,
	BMU_Component_RGBA             = 4,
	BMU_Component_Compound         = 5,
	BMU_Component_MAX              = 6
};


// Enum BIOC_Base.BioMorphUtility.EBioMorphUtilityHairComponentType
enum class EBioMorphUtilityHairComponentType : uint8_t
{
	BMU_HairComponent_Hair         = 0,
	BMU_HairComponent_Other        = 1,
	BMU_HairComponent_MAX          = 2
};


// Enum BIOC_Base.BioMorphFaceFrontEnd.EBioMorphFrontendSliderType
enum class EBioMorphFrontendSliderType : uint8_t
{
	BMFE_SLIDER_MORPH_SINGLE       = 0,
	BMFE_SLIDER_MORPH_DOUBLE       = 1,
	BMFE_SLIDER_MATERIAL           = 2,
	BMFE_SLIDER_MAX                = 3
};


// Enum BIOC_Base.BioOp.EBioOp
enum class EBioOp : uint8_t
{
	BIO_OP_NULL                    = 0,
	BIO_OP_ADD                     = 1,
	BIO_OP_MULTIPLY                = 2,
	BIO_OP_MULTIPLY_COMPLEMENT     = 3,
	BIO_OP_ASSIGN                  = 4,
	BIO_OP_COUNT                   = 5,
	BIO_OP_MAX                     = 6
};


// Enum BIOC_Base.BioParticleModuleLocationAttachedMesh.EmissionAreaSpecificationType
enum class EmissionAreaSpecificationType : uint8_t
{
	EAST_UniformDensityPerVertex   = 0,
	EAST_UniformDensityPerBone     = 1,
	EAST_WeightedDensityPerBone    = 2,
	EAST_WeightedDensityPerEmissionArea = 3,
	EAST_UniformDensityPerEmissionArea = 4,
	EAST_MAX                       = 5
};


// Enum BIOC_Base.BioParticleModuleLocationPrimitiveNearestSurface.ELocationNearestSurface
enum class ELocationNearestSurface : uint8_t
{
	eLocationNearestSurface_Stay   = 0,
	eLocationNearestSurface_StayAtRadius = 1,
	eLocationNearestSurface_Kill   = 2,
	eLocationNearestSurface_MAX    = 3
};


// Enum BIOC_Base.BioParticleModuleLocationPrimitiveNearestSurface.EBioParticleCollisionComplete
enum class EBioParticleCollisionComplete : uint8_t
{
	EBPCC_DoNothing                = 0,
	EBPCC_Kill                     = 1,
	EBPCC_Freeze                   = 2,
	EBPCC_FreezeTranslation        = 3,
	EBPCC_FreezeRotation           = 4,
	EBPCC_FreezeMovement           = 5,
	EBPCC_MAX                      = 6
};


// Enum BIOC_Base.BioParticleModuleMultiplyByEmitterSpeed.MultiplyByEmitterSpeedProperty
enum class EMultiplyByEmitterSpeedProperty : uint8_t
{
	MESProperty_SpawnRate          = 0,
	MESProperty_MAX                = 1
};


// Enum BIOC_Base.BioPathNodeVolume.EBioPathNodeGenerators
enum class EBioPathNodeGenerators : uint8_t
{
	PATHNODE_SQUARE                = 0,
	PATHNODE_MAX                   = 1
};


// Enum BIOC_Base.BioPathNodeVolume.EBioPathNodeAlignment
enum class EBioPathNodeAlignment : uint8_t
{
	ALIGN_NONE                     = 0,
	ALIGN_CENTER                   = 1,
	ALIGN_JUSTIFY                  = 2,
	ALIGN_MAX                      = 3
};


// Enum BIOC_Base.BioVFXTemplate.EBioVFXCost
enum class EBioVFXCost : uint8_t
{
	EBioVFXCost                    = 0,
	EBioVFXCost01                  = 1,
	EBioVFXCost02                  = 2,
	EBioVFXCost03                  = 3,
	EBioVFXCost04                  = 4,
	EBioVFXCost_MAX                = 5
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimStartState
enum class EBioAnimStartState : uint8_t
{
	eBioAnimStart_NoState          = 0,
	eBioAnimStart_StartingMove     = 1,
	eBioAnimStart_FinishStartMove  = 2,
	eBioAnimStart_DoneStartMove    = 3,
	eBioAnimStart_RotationUnlocked = 4,
	eBioAnimStart_PlayingMove      = 5,
	eBioAnimStart_MAX              = 6
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimCombatState
enum class EBioAnimCombatState : uint8_t
{
	eBioAnimCombat_NoState         = 0,
	eBioAnimCombat_FireAuto        = 1,
	eBioAnimCombat_FireAutoStop    = 2,
	eBioAnimCombat_FireManual      = 3,
	eBioAnimCombat_ThrowGrenade    = 4,
	eBioAnimCombat_DoneFireManual  = 5,
	eBioAnimCombat_MAX             = 6
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimSkidTurnState
enum class EBioAnimSkidTurnState : uint8_t
{
	eBioAnimSkid_NoState           = 0,
	eBioAnimSkid_StartingLeft      = 1,
	eBioAnimSkid_StartingRight     = 2,
	eBioAnimSkid_TurningLeft       = 3,
	eBioAnimSkid_TurningRight      = 4,
	eBioAnimSkid_FinishingLeft     = 5,
	eBioAnimSkid_FinishingRight    = 6,
	eBioAnimSkid_MAX               = 7
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimStopState
enum class EBioAnimStopState : uint8_t
{
	eBioAnimStop_NoState           = 0,
	eBioAnimStop_StopLeftMove      = 1,
	eBioAnimStop_StopRightMove     = 2,
	eBioAnimStop_FinishLeftMove    = 3,
	eBioAnimStop_FinishRightMove   = 4,
	eBioAnimStop_InterruptLeftMove = 5,
	eBioAnimStop_InterruptRightMove = 6,
	eBioAnimStop_DoneFinishLeftMove = 7,
	eBioAnimStop_DoneFinishRightMove = 8,
	eBioAnimStop_DoneIntLeftMove   = 9,
	eBioAnimStop_DoneIntRightMove  = 10,
	eBioAnimStop_MAX               = 11
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimTurnDirState
enum class EBioAnimTurnDirState : uint8_t
{
	eBioAnimTurn_NoTurn            = 0,
	eBioAnimTurn_ReqStartLeft      = 1,
	eBioAnimTurn_ReqStartRight     = 2,
	eBioAnimTurn_AckStartLeft      = 3,
	eBioAnimTurn_AckStartRight     = 4,
	eBioAnimTurn_ProcessLeft       = 5,
	eBioAnimTurn_ProcessRight      = 6,
	eBioAnimTurn_MAX               = 7
};


// Enum BIOC_Base.BioPawnBehavior.EBioAnimGetUpState
enum class EBioAnimGetUpState : uint8_t
{
	eBioAnimGetUp_Idle             = 0,
	eBioAnimGetUp_Start            = 1,
	eBioAnimGetUp_Processing       = 2,
	eBioAnimGetUp_MAX              = 3
};


// Enum BIOC_Base.BioPawnBehavior.EPawnLootGUIMechanism
enum class EPawnLootGUIMechanism : uint8_t
{
	eBioLootGUINever               = 0,
	eBioLootGUIPerPawn             = 1,
	eBioLootGUISquadThreshold      = 2,
	EPawnLootGUIMechanism_MAX      = 3
};


// Enum BIOC_Base.BioPawnBehavior.EBioPlaySoundMode
enum class EBioPlaySoundMode : uint8_t
{
	PLAY_SOUND_MODE_LOCAL          = 0,
	PLAY_SOUND_MODE_GLOBAL         = 1,
	PLAY_SOUND_MODE_MAX            = 2
};


// Enum BIOC_Base.BioPawnType.EBioPawnSound
enum class EBioPawnSound : uint8_t
{
	PAWN_SOUND_ENTER_BIOTIC_MODE   = 0,
	PAWN_SOUND_USE_BIOTIC          = 1,
	PAWN_SOUND_EXIT_BIOTIC_MODE    = 2,
	PAWN_SOUND_COUNT               = 3,
	PAWN_SOUND_MAX                 = 4
};


// Enum BIOC_Base.BioPawnType.EBioPawnParticleSystem
enum class EBioPawnParticleSystem : uint8_t
{
	PAWN_PARTICLE_SYSTEM_BIOTIC_CHARGE = 0,
	PAWN_PARTICLE_SYSTEM_BIOTIC_RELEASE = 1,
	PAWN_PARTICLE_SYSTEM_TELEKINESIS_BLAST = 2,
	PAWN_PARTICLE_SYSTEM_TELEKINESIS_THROW = 3,
	PAWN_PARTICLE_SYSTEM_BIOTIC_TARGETING = 4,
	PAWN_PARTICLE_SYSTEM_COUNT     = 5,
	PAWN_PARTICLE_SYSTEM_MAX       = 6
};


// Enum BIOC_Base.BioPawn.EBioCoverAnimState
enum class EBioCoverAnimState : uint8_t
{
	eBioAnimCover_NoState          = 0,
	eBioAnimCover_Entering         = 1,
	eBioAnimCover_InCover          = 2,
	eBioAnimCover_Exiting          = 3,
	eBioAnimCover_MAX              = 4
};


// Enum BIOC_Base.BioPawn.EBioRagdollRecoverState
enum class EBioRagdollRecoverState : uint8_t
{
	eBioAnimRBRecover_Sleep        = 0,
	eBioAnimRBRecover_Idle         = 1,
	eBioAnimRBRecover_Starting     = 2,
	eBioAnimRBRecover_BlendFromPhys = 3,
	eBioAnimRBRecover_RunningAnim  = 4,
	eBioAnimRBRecover_Finished     = 5,
	eBioAnimRBRecover_MAX          = 6
};


// Enum BIOC_Base.BioPawn.EBioGesturePriority
enum class EBioGesturePriority : uint8_t
{
	eBioGesturePriority_None       = 0,
	eBioGesturePriority_Kismet     = 1,
	eBioGesturePriority_Conversations = 2,
	eBioGesturePriority_ActionStations = 3,
	eBioGesturePriority_Always     = 4,
	eBioGesturePriority_MAX        = 5
};


// Enum BIOC_Base.BioPawn.ELookAtTransitionType
enum class ELookAtTransitionType : uint8_t
{
	LookAt_Default                 = 0,
	LookAt_Snap                    = 1,
	LookAt_MAX                     = 2
};


// Enum BIOC_Base.BioPawn.EBioSoundSetType
enum class EBioSoundSetType : uint8_t
{
	BIO_SOUNDSET_None              = 0,
	BIO_SOUNDSET_AttackGrunt       = 1,
	BIO_SOUNDSET_TargetDown        = 2,
	BIO_SOUNDSET_PainGrunt         = 3,
	BIO_SOUNDSET_LowHealth         = 4,
	BIO_SOUNDSET_ShieldsDown       = 5,
	BIO_SOUNDSET_DeathCry          = 6,
	BIO_SOUNDSET_UNUSED_SpecialAttackPistol = 7,
	BIO_SOUNDSET_UNUSED_SpecialAttackAssaultRifle = 8,
	BIO_SOUNDSET_UNUSED_SpecialAttackShotgun = 9,
	BIO_SOUNDSET_UNUSED_SpecialAttackSniperRifle = 10,
	BIO_SOUNDSET_UNUSED_SpecialAbilityImmunity = 11,
	BIO_SOUNDSET_UNUSED_SpecialAbilityAssassination = 12,
	BIO_SOUNDSET_UNUSED_SpecialAbilityShieldBoost = 13,
	BIO_SOUNDSET_UNUSED_SpecialAbilityAdrenalineRush = 14,
	BIO_SOUNDSET_UNUSED_SpecialAbilityTakeDown = 15,
	BIO_SOUNDSET_SpecialAbilityRacial1 = 16,
	BIO_SOUNDSET_SpecialAbilityRacial2 = 17,
	BIO_SOUNDSET_UNUSED_SpecialAbilityRacial3 = 18,
	BIO_SOUNDSET_UNUSED_BioticThrow = 19,
	BIO_SOUNDSET_UNUSED_BioticLift = 20,
	BIO_SOUNDSET_UNUSED_BioticWarp = 21,
	BIO_SOUNDSET_UNUSED_BioticWeaken = 22,
	BIO_SOUNDSET_UNUSED_BioticBarrier = 23,
	BIO_SOUNDSET_UNUSED_BioticStasis = 24,
	BIO_SOUNDSET_UNUSED_TechEMP    = 25,
	BIO_SOUNDSET_UNUSED_TechSabotage = 26,
	BIO_SOUNDSET_UNUSED_TechDampeningField = 27,
	BIO_SOUNDSET_UNUSED_TechAIHacking = 28,
	BIO_SOUNDSET_UNUSED_TechHeal   = 29,
	BIO_SOUNDSET_UNUSED_TechNeuralShock = 30,
	BIO_SOUNDSET_UNUSED_SpecialAbilityTaunt = 31,
	BIO_SOUNDSET_ThrowGrenade      = 32,
	BIO_SOUNDSET_UNUSED_PerceptionHearEnemy = 33,
	BIO_SOUNDSET_UNUSED_PerceptionSeeEnemy = 34,
	BIO_SOUNDSET_PerceptionAttackedByEnemy = 35,
	BIO_SOUNDSET_DebuffToxic       = 36,
	BIO_SOUNDSET_UNUSED_DebuffBodyDisabled = 37,
	BIO_SOUNDSET_UNUSED_DebuffWeaponDisabled = 38,
	BIO_SOUNDSET_UNUSED_DebuffSuppressed = 39,
	BIO_SOUNDSET_LostCover         = 40,
	BIO_SOUNDSET_IncomingGrenade   = 41,
	BIO_SOUNDSET_UNUSED_AcceptedAttack = 42,
	BIO_SOUNDSET_UNUSED_AcceptedLockTarget = 43,
	BIO_SOUNDSET_UNUSED_AcceptedMove = 44,
	BIO_SOUNDSET_UNUSED_CompletedAttack = 45,
	BIO_SOUNDSET_UNUSED_CompletedMove = 46,
	BIO_SOUNDSET_UNUSED_CompletedTakingCover = 47,
	BIO_SOUNDSET_GiveCommandFollow = 48,
	BIO_SOUNDSET_UNUSED_GiveCommandAttack = 49,
	BIO_SOUNDSET_UNUSED_GiveCommandMove = 50,
	BIO_SOUNDSET_UNUSED_TechUseElectronics = 51,
	BIO_SOUNDSET_UNUSED_TechUseDecryption = 52,
	BIO_SOUNDSET_UNUSED_selected   = 53,
	BIO_SOUNDSET_UNUSED_ambient    = 54,
	BIO_SOUNDSET_UNUSED_AbilityNotReady = 55,
	BIO_SOUNDSET_Alert             = 56,
	BIO_SOUNDSET_BuffActivated     = 57,
	BIO_SOUNDSET_HealingSquad      = 58,
	BIO_SOUNDSET_HoldingPosition   = 59,
	BIO_SOUNDSET_Investigate       = 60,
	BIO_SOUNDSET_LOSestablished    = 61,
	BIO_SOUNDSET_LOSunavailable    = 62,
	BIO_SOUNDSET_MoveToFailure     = 63,
	BIO_SOUNDSET_MoveToSuccess     = 64,
	BIO_SOUNDSET_UNUSED_ResourcesScarce = 65,
	BIO_SOUNDSET_UNUSED_ResourcesToLow = 66,
	BIO_SOUNDSET_UNUSED_SkillInitiation = 67,
	BIO_SOUNDSET_UNUSED_SkillUseFailure = 68,
	BIO_SOUNDSET_UNUSED_SkillUseSuccess = 69,
	BIO_SOUNDSET_StartMoveToConfirmation = 70,
	BIO_SOUNDSET_TacticalDeathRecovery = 71,
	BIO_SOUNDSET_TechBeaconDeployed = 72,
	BIO_SOUNDSET_Jump              = 73,
	BIO_SOUNDSET_Land              = 74,
	BIO_SOUNDSET_VehicleDamaged    = 75,
	BIO_SOUNDSET_VehicleShieldsDown = 76,
	BIO_SOUNDSET_Allclear          = 77,
	BIO_SOUNDSET_PlayerRecovery    = 78,
	BIO_SOUNDSET_ChargeAtPlayer    = 79,
	BIO_SOUNDSET_MAX               = 80
};


// Enum BIOC_Base.BioPlayerController.EBioSide
enum class EBioSide : uint8_t
{
	BIO_SIDE_RIGHT                 = 0,
	BIO_SIDE_LEFT                  = 1,
	BIO_SIDE_MAX                   = 2
};


// Enum BIOC_Base.BioPlayerController.EBioActionMappingSlot
enum class EBioActionMappingSlot : uint8_t
{
	BIO_MAPSLOT_RIGHT              = 0,
	BIO_MAPSLOT_UP                 = 1,
	BIO_MAPSLOT_LEFT               = 2,
	BIO_MAPSLOT_DOWN               = 3,
	BIO_MAPSLOT_HENCH1             = 4,
	BIO_MAPSLOT_HENCH2             = 5,
	BIO_MAPSLOT_MAX                = 6
};


// Enum BIOC_Base.BioPlayerController.EBioActionType
enum class EBioActionType : uint8_t
{
	BIO_ACTMAP_NONE                = 0,
	BIO_ACTMAP_POWER               = 1,
	BIO_ACTMAP_GRENADE             = 2,
	BIO_ACTMAP_RANGED              = 3,
	BIO_ACTMAP_MAX                 = 4
};


// Enum BIOC_Base.BioPlayerSelection.EGeneralSelectionMode
enum class EGeneralSelectionMode : uint8_t
{
	BIO_SELECTION_MODE_INACTIVE    = 0,
	BIO_SELECTION_MODE_NORMAL      = 1,
	BIO_SELECTION_MODE_SPECTATOR   = 2,
	BIO_SELECTION_MODE_MAX         = 3
};


// Enum BIOC_Base.BioPlayerController.EPlayerRank
enum class EPlayerRank : uint8_t
{
	BIO_CO                         = 0,
	BIO_NCO                        = 1,
	BIO_MAX                        = 2
};


// Enum BIOC_Base.BioPlayerController.EBioPlayerControllerCameraBehavior
enum class EBioPlayerControllerCameraBehavior : uint8_t
{
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_EXPLORE = 0,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_COMBAT = 1,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_ZOOM = 2,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_SNIPER = 3,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_CONVERSATION = 4,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_VEHICLE = 5,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_SPECTATOR = 6,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_FREE = 7,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_LOCKED = 8,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_DEATH = 9,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_GALAXY = 10,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_COMBAT_COVER = 11,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_ZOOM_COVER = 12,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_STORM = 13,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_SQUADCOMMAND = 14,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_VEHICLE_ZOOM = 15,
	BIO_PLAYER_CONTROLLER_CAMERA_BEHAVIOR_MAX = 16
};


// Enum BIOC_Base.BioPlayerController.ETVType
enum class ETVType : uint8_t
{
	TVT_EpicDefault                = 0,
	TVT_Default                    = 1,
	TVT_Soft                       = 2,
	TVT_Lucent                     = 3,
	TVT_MAX                        = 4
};


// Enum BIOC_Base.BioPlayerInput.EButtons
enum class EButtons : uint8_t
{
	BIO_BUTTON_DPAD_RIGHT          = 0,
	BIO_BUTTON_DPAD_UP             = 1,
	BIO_BUTTON_DPAD_LEFT           = 2,
	BIO_BUTTON_DPAD_DOWN           = 3,
	BIO_BUTTON_BACK                = 4,
	BIO_BUTTON_START               = 5,
	BIO_BUTTON_LEFTTRIGGER         = 6,
	BIO_BUTTON_RIGHTTRIGGER        = 7,
	BIO_BUTTON_LEFTSHOULDER        = 8,
	BIO_BUTTON_RIGHTSHOULDER       = 9,
	BIO_BUTTON_X                   = 10,
	BIO_BUTTON_Y                   = 11,
	BIO_BUTTON_B                   = 12,
	BIO_BUTTON_A                   = 13,
	BIO_BUTTON_LEFTTHUMBSTICK      = 14,
	BIO_BUTTON_RIGHTTHUMBSTICK     = 15,
	BIO_BUTTON_MAX                 = 16
};


// Enum BIOC_Base.BioPlayerInput.eAttackTriggereBy
enum class EeAttackTriggereBy : uint8_t
{
	BIO_ATB_None                   = 0,
	BIO_ATB_Weapon                 = 1,
	BIO_ATB_Grenade                = 2,
	BIO_ATB_Power1                 = 3,
	BIO_ATB_Power2                 = 4,
	BIO_ATB_MAX                    = 5
};


// Enum BIOC_Base.BioPlayerSquad.EBioGameOverCondition
enum class EBioGameOverCondition : uint8_t
{
	BIO_GAME_OVER_CONDITION_PLAYER_PAWN_DIES = 0,
	BIO_GAME_OVER_CONDITION_PLAYER_SQUAD_DIES = 1,
	BIO_GAME_OVER_CONDITION_PLAYER_SQUAD_MAX = 2,
	BIO_GAME_OVER_CONDITION_PLAYER_MAX = 3
};


// Enum BIOC_Base.BioPlayerSquad.EExperienceSourceType
enum class EExperienceSourceType : uint8_t
{
	EXPSourceType_SimpleDeath      = 0,
	EXPSourceType_SkillUse         = 1,
	EXPSourceType_QuestCompletion  = 2,
	EXPSourceType_Generic          = 3,
	EXPSourceType_MAX              = 4
};


// Enum BIOC_Base.BioPower.EPowerIcons
enum class EPowerIcons : uint8_t
{
	BIO_POWERICON_INVALID          = 0,
	BIO_POWERICON_EMPTYSLOT        = 1,
	BIO_POWERICON_SHOTGUN          = 2,
	BIO_POWERICON_ASSAULTRIFLE     = 3,
	BIO_POWERICON_PISTOL           = 4,
	BIO_POWERICON_SNIPERRIFLE      = 5,
	BIO_POWERICON_AIHACKING        = 6,
	BIO_POWERICON_DAMPINGFIELD     = 7,
	BIO_POWERICON_EMPBURST         = 8,
	BIO_POWERICON_HEAL             = 9,
	BIO_POWERICON_NEURALSHOCK      = 10,
	BIO_POWERICON_SABOTAGE         = 11,
	BIO_POWERICON_SHIELDBOOST      = 12,
	BIO_POWERICON_TAUNT            = 13,
	BIO_POWERICON_ADRENALINEBURST  = 14,
	BIO_POWERICON_GRENADE          = 15,
	BIO_POWERICON_CARNAGE          = 16,
	BIO_POWERICON_CRITICAL         = 17,
	BIO_POWERICON_IMMUNITY         = 18,
	BIO_POWERICON_MARKSMAN         = 19,
	BIO_POWERICON_SUPPRESSION      = 20,
	BIO_POWERICON_INSPIRATION      = 21,
	BIO_POWERICON_BARRIER          = 22,
	BIO_POWERICON_LIFT             = 23,
	BIO_POWERICON_STASIS           = 24,
	BIO_POWERICON_THROW            = 25,
	BIO_POWERICON_WARP             = 26,
	BIO_POWERICON_SINGULARITY      = 27,
	BIO_POWERICON_LOCKED           = 28,
	BIO_POWERICON_UNLOCKED         = 29,
	BIO_POWERICON_MINIGUN          = 30,
	BIO_POWERICON_CANNON           = 31,
	BIO_POWERICON_THRUSTERS        = 32,
	BIO_POWERICON_UNASSIGNED33     = 33,
	BIO_POWERICON_GRENADEDETONATOR = 34,
	BIO_POWERICON_MAX              = 35
};


// Enum BIOC_Base.BioPower.EBioPowerType
enum class EBioPowerType : uint8_t
{
	BIO_POWER_TYPE_UNKNOWN         = 0,
	BIO_POWER_TYPE_CYLINDER        = 1,
	BIO_POWER_TYPE_TARGET          = 2,
	BIO_POWER_TYPE_PARTY           = 3,
	BIO_POWER_TYPE_IMPACT_VOLUME   = 4,
	BIO_POWER_TYPE_ACTIVATION      = 5,
	BIO_POWER_TYPE_MELEE           = 6,
	BIO_POWER_TYPE_MAX             = 7
};


// Enum BIOC_Base.BioPower.EBioPowerImpactShape
enum class EBioPowerImpactShape : uint8_t
{
	BIO_POWER_IMPACT_NONE          = 0,
	BIO_POWER_IMPACT_CONE          = 1,
	BIO_POWER_IMPACT_VERTICAL_CYLINDER = 2,
	BIO_POWER_IMPACT_MAX           = 3
};


// Enum BIOC_Base.BioPower.EBioPowerLocation
enum class EBioPowerLocation : uint8_t
{
	BIO_POWER_LOCATION_UNKNOWN     = 0,
	BIO_POWER_LOCATION_CASTER      = 1,
	BIO_POWER_LOCATION_TARGET      = 2,
	BIO_POWER_LOCATION_MAX         = 3
};


// Enum BIOC_Base.BioPower.EBioPowerDualType
enum class EBioPowerDualType : uint8_t
{
	BIO_POWER_DUAL_TYPE_INVALID    = 0,
	BIO_POWER_DUAL_TYPE_DELIVERY   = 1,
	BIO_POWER_DUAL_TYPE_ACTIVATION = 2,
	BIO_POWER_DUAL_TYPE_MAX        = 3
};


// Enum BIOC_Base.BioPower.EBioPowerAimType
enum class EBioPowerAimType : uint8_t
{
	BIO_POWER_AIM_CAMERA_TRACE     = 0,
	BIO_POWER_AIM_SELECTED_TARGET  = 1,
	BIO_POWER_AIM_SELECTED_TARGET_AT_CASTING = 2,
	BIO_POWER_AIM_MAX              = 3
};


// Enum BIOC_Base.BioPower.EBioPowerHUDType
enum class EBioPowerHUDType : uint8_t
{
	BIO_POWER_HUD_TYPE_STANDARD    = 0,
	BIO_POWER_HUD_TYPE_WEAPON      = 1,
	BIO_POWER_HUD_TYPE_HEALING_PRIMARY = 2,
	BIO_POWER_HUD_TYPE_HEALING_SECONDARY = 3,
	BIO_POWER_HUD_TYPE_ARMOR_EMITTER = 4,
	BIO_POWER_HUD_TYPE_NOT_MAPPABLE = 5,
	BIO_POWER_HUD_TYPE_MAX         = 6
};


// Enum BIOC_Base.BioProbeCombat.EBioProbeCombatResult
enum class EBioProbeCombatResult : uint8_t
{
	BioPCR_Disengaged              = 0,
	BioPCR_PlayerKilled            = 1,
	BioPCR_SquadKilled             = 2,
	BioPCR_MAX                     = 3
};


// Enum BIOC_Base.BioSeqAct_ActionStation.EBioActionStationExitCondition
enum class EBioActionStationExitCondition : uint8_t
{
	BIO_AS_NONE                    = 0,
	BIO_AS_EXIT                    = 1,
	BIO_AS_COMBAT_EXIT             = 2,
	BIO_AS_INTERRUPT               = 3,
	BIO_AS_FAIL                    = 4,
	BIO_AS_ABORT_TWITCHES          = 5,
	BIO_AS_MAX                     = 6
};


// Enum BIOC_Base.BioSeqAct_ActionStation.EBioActionStationEntrancePose
enum class EBioActionStationEntrancePose : uint8_t
{
	BIO_AS_ENTRANCEPOSE_UNSET      = 0,
	BIO_AS_ENTRANCEPOSE_MAX        = 1
};


// Enum BIOC_Base.BioSeqAct_ActionStation.EBioActionStationExitPose
enum class EBioActionStationExitPose : uint8_t
{
	BIO_AS_EXITPOSE_UNSET          = 0,
	BIO_AS_EXITPOSE_MAX            = 1
};


// Enum BIOC_Base.BioSeqAct_ActionStation.EBioActionStationCombatPose
enum class EBioActionStationCombatPose : uint8_t
{
	BIO_AS_COMBATPOSE_UNSET        = 0,
	BIO_AS_COMBATPOSE_MAX          = 1
};


// Enum BIOC_Base.BioSeqAct_BlackScreen.BlackScreenActionSet
enum class EBlackScreenActionSet : uint8_t
{
	BlackScreenAction_TurnBlackOn  = 0,
	BlackScreenAction_TurnBlackOff = 1,
	BlackScreenAction_FadeToBlack  = 2,
	BlackScreenAction_FadeFromBlack = 3,
	BlackScreenAction_MAX          = 4
};


// Enum BIOC_Base.BioSFHandler_DesignerUI.BioDUIElements
enum class EBioDUIElements : uint8_t
{
	BIO_DUI_PassiveTimer           = 0,
	BIO_DUI_PassiveCounter         = 1,
	BIO_DUI_PassiveText            = 2,
	BIO_DUI_PassiveBar             = 3,
	BIO_DUI_PassiveBarMarker1      = 4,
	BIO_DUI_PassiveBarMarker2      = 5,
	BIO_DUI_ModalBar               = 6,
	BIO_DUI_ModalBarMarker1        = 7,
	BIO_DUI_ModalBarMarker2        = 8,
	BIO_DUI_ModalCounter           = 9,
	BIO_DUI_ModalTimer             = 10,
	BIO_DUI_ModalText              = 11,
	BIO_DUI_ModalBackground        = 12,
	BIO_DUI_ButtonA                = 13,
	BIO_DUI_ButtonAText            = 14,
	BIO_DUI_ButtonB                = 15,
	BIO_DUI_ButtonBText            = 16,
	BIO_DUI_ButtonX                = 17,
	BIO_DUI_ButtonXText            = 18,
	BIO_DUI_ButtonY                = 19,
	BIO_DUI_ButtonYText            = 20,
	BIO_DUI_ModalBackground2       = 21,
	BIO_DUI_PC_Passive             = 22,
	BIO_DUI_PC_PassiveText         = 23,
	BIO_DUI_MAX                    = 24
};


// Enum BIOC_Base.BioSeqAct_FaceOnlyVO.EBioFOVOLines
enum class EBioFOVOLines : uint8_t
{
	FOVOLines_Unset                = 0,
	FOVOLines_MAX                  = 1
};


// Enum BIOC_Base.BioSeqAct_FaceOnlyVO.EBioFOVOSpeakers
enum class EBioFOVOSpeakers : uint8_t
{
	FOVOSpeakers_Unset             = 0,
	FOVOSpeakers_MAX               = 1
};


// Enum BIOC_Base.BioSeqAct_FireWeaponAt.EFireWeaponAtOutputPins
enum class EFireWeaponAtOutputPins : uint8_t
{
	OL_Success                     = 0,
	OL_Failed                      = 1,
	OL_MAX                         = 2
};


// Enum BIOC_Base.BioSeqAct_InteractProperty.EBioPropertyType
enum class EBioPropertyType : uint8_t
{
	BPT_INVALID                    = 0,
	BPT_OBJECT_PROPERTY            = 1,
	BPT_BEHAVIOR_PROPERTY          = 2,
	BPT_BEHAVIOR_FUNCTION          = 3,
	BPT_OBJECT_FUNCTION            = 4,
	BPT_MAX                        = 5
};


// Enum BIOC_Base.BioSeqAct_GetTalentRank.EBioSeqActGetTalentRankInput
enum class EBioSeqActGetTalentRankInput : uint8_t
{
	EBioSeqActGetTalentRankInput_TalentID = 0,
	EBioSeqActGetTalentRankInput_Pawn = 1,
	EBioSeqActGetTalentRankInput_ResultRank = 2,
	EBioSeqActGetTalentRankInput_MAX = 3
};


// Enum BIOC_Base.BioSeqAct_GetTalentRank.EBioSeqActGetTalentRankOutput
enum class EBioSeqActGetTalentRankOutput : uint8_t
{
	EBioSeqActGetTalentRankOutput_Success = 0,
	EBioSeqActGetTalentRankOutput_Failure = 1,
	EBioSeqActGetTalentRankOutput_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_GrantBonusTalent.EBioSeqActGrantBonusTalentInput
enum class EBioSeqActGrantBonusTalentInput : uint8_t
{
	EBioSeqActGrantBonusTalentInput_BonusID = 0,
	EBioSeqActGrantBonusTalentInput_MAX = 1
};


// Enum BIOC_Base.BioSeqAct_GrantBonusTalent.EBioSeqActGrantBonusTalentOutput
enum class EBioSeqActGrantBonusTalentOutput : uint8_t
{
	EBioSeqActGrantBonusTalentOutput_Success = 0,
	EBioSeqActGrantBonusTalentOutput_Failure = 1,
	EBioSeqActGrantBonusTalentOutput_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_HideAllWeapons.EBioSeqActHideAllWeaponsInput
enum class EBioSeqActHideAllWeaponsInput : uint8_t
{
	EBioSeqActHideAllWeaponsInput_PawnList = 0,
	EBioSeqActHideAllWeaponsInput_ShouldHide = 1,
	EBioSeqActHideAllWeaponsInput_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_HideAllWeapons.EBioSeqActHideAllWeaponsOutput
enum class EBioSeqActHideAllWeaponsOutput : uint8_t
{
	EBioSeqActHideAllWeaponsOutput_Success = 0,
	EBioSeqActHideAllWeaponsOutput_Failure = 1,
	EBioSeqActHideAllWeaponsOutput_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_IncreaseTalentMaxRank.EBioSeqActIncreaseTalentMaxRankInput
enum class EBioSeqActIncreaseTalentMaxRankInput : uint8_t
{
	EBioSeqActIncreaseTalentMaxRankInput_TalentID = 0,
	EBioSeqActIncreaseTalentMaxRankInput_MaxRank = 1,
	EBioSeqActIncreaseTalentMaxRankInput_ExtraPoints = 2,
	EBioSeqActIncreaseTalentMaxRankInput_MAX = 3
};


// Enum BIOC_Base.BioSeqAct_IncreaseTalentMaxRank.EBioSeqActIncreaseTalentMaxRankOutput
enum class EBioSeqActIncreaseTalentMaxRankOutput : uint8_t
{
	EBioSeqActIncreaseTalentMaxRankOutput_Success = 0,
	EBioSeqActIncreaseTalentMaxRankOutput_Failure = 1,
	EBioSeqActIncreaseTalentMaxRankOutput_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_MoveToObject.EMoveToObjectOutputPins
enum class EMoveToObjectOutputPins : uint8_t
{
	MTO_Success                    = 0,
	MTO_Failed                     = 1,
	MTO_MAX                        = 2
};


// Enum BIOC_Base.BioSeqAct_OpenShop.EBioSeqAct_OpenShopVariableLinks
enum class EBioSeqAct_OpenShopVariableLinks : uint8_t
{
	BIOSEQACT_OPENSHOP_VARIABLE_LINK_PRICE_ADJUSTMENT = 0,
	BIOSEQACT_OPENSHOP_VARIABLE_LINK_SHOP = 1,
	BIOSEQACT_OPENSHOP_VARIABLE_LINK_OVERRIDE = 2,
	BIOSEQACT_OPENSHOP_VARIABLE_LINK_MAX = 3
};


// Enum BIOC_Base.BioSeqAct_OpenShop.EBioSeqAct_OpenShopOutputLinks
enum class EBioSeqAct_OpenShopOutputLinks : uint8_t
{
	BIOSEQACT_OPENSHOPOUTPUTLINK_SUCCESS = 0,
	BIOSEQACT_OPENSHOPOUTPUTLINK_FAILURE = 1,
	BIOSEQACT_OPENSHOPOUTPUTLINK_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_PlayFaceFXAnim.EBioAutoSetFXGroup
enum class EBioAutoSetFXGroup : uint8_t
{
	FaceFXGroup_Unset              = 0,
	FaceFXGroup_MAX                = 1
};


// Enum BIOC_Base.BioSeqAct_PlayFaceFXAnim.EBioAutoSetFXAnim
enum class EBioAutoSetFXAnim : uint8_t
{
	FaceFXAnim_Unset               = 0,
	FaceFXAnim_MAX                 = 1
};


// Enum BIOC_Base.BioSeqAct_PlayFaceFXAnim.EBioAutoSetFXAnimSet
enum class EBioAutoSetFXAnimSet : uint8_t
{
	FaceFXAnimSet_Unset            = 0,
	FaceFXAnimSet_MAX              = 1
};


// Enum BIOC_Base.BioSeqAct_ScalarMathUnit.EScalarMathOps
enum class EScalarMathOps : uint8_t
{
	SMO_Add                        = 0,
	SMO_Subtract                   = 1,
	SMO_Multiply                   = 2,
	SMO_Divide                     = 3,
	SMO_Exponent                   = 4,
	SMO_Modulo                     = 5,
	SMO_MAX                        = 6
};


// Enum BIOC_Base.BioSeqAct_SelectWeapon.EBioSeqActSelectWeaponLinks
enum class EBioSeqActSelectWeaponLinks : uint8_t
{
	EBioSeqActSelectWeaponLinks_Success = 0,
	EBioSeqActSelectWeaponLinks_Failure = 1,
	EBioSeqActSelectWeaponLinks_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_SetGestureMode.EBioSetGestureModes
enum class EBioSetGestureModes : uint8_t
{
	GestureMode_On                 = 0,
	GestureMode_Off                = 1,
	GestureMode_MAX                = 2
};


// Enum BIOC_Base.BioSeqAct_SetOverrideTipText.EBioSeqActSetOverrideTipTextInput
enum class EBioSeqActSetOverrideTipTextInput : uint8_t
{
	EBioSeqActSetOverrideTipTextInput_OverrideStringRef = 0,
	EBioSeqActSetOverrideTipTextInput_MAX = 1
};


// Enum BIOC_Base.BioSeqAct_SetOverrideTipText.EBioSeqActSetOverrideTipTextOutput
enum class EBioSeqActSetOverrideTipTextOutput : uint8_t
{
	EBioSeqActSetOverrideTipTextOutput_Success = 0,
	EBioSeqActSetOverrideTipTextOutput_Failure = 1,
	EBioSeqActSetOverrideTipTextOutput_MAX = 2
};


// Enum BIOC_Base.BioWorldInfo.BioLocalVariableObjectType
enum class EBioLocalVariableObjectType : uint8_t
{
	BIO_LVOT_PLAYER                = 0,
	BIO_LVOT_OWNER                 = 1,
	BIO_LVOT_TARGET                = 2,
	BIO_LVOT_BYTAG                 = 3,
	BIO_LVOT_SPEAKER               = 4,
	BIO_LVOT_MAX                   = 5
};


// Enum BIOC_Base.BioWorldInfo.BioLevelTypeObjectType
enum class EBioLevelTypeObjectType : uint8_t
{
	BIO_LTYPE_HUB                  = 0,
	BIO_LTYPE_COMBAT               = 1,
	BIO_LTYPE_MAX                  = 2
};


// Enum BIOC_Base.BioWorldInfo.EPlayerRenderStateSetting
enum class EPlayerRenderStateSetting : uint8_t
{
	PRSS_NEARCLIP                  = 0,
	PRSS_MAX                       = 1
};


// Enum BIOC_Base.BioWorldInfo.JournalSortMethods
enum class EJournalSortMethods : uint8_t
{
	JSM_Newest                     = 0,
	JSM_Name                       = 1,
	JSM_Oldest                     = 2,
	JSM_MAX                        = 3
};


// Enum BIOC_Base.BioWorldInfo.MEBrowserWheelSubPages
enum class EMEBrowserWheelSubPages : uint8_t
{
	MBW_SP_Map                     = 0,
	MBW_SP_Save                    = 1,
	MBW_SP_CharacterRecord         = 2,
	MBW_SP_Load                    = 3,
	MBW_SP_Journal                 = 4,
	MBW_SP_DataPad                 = 5,
	MBW_SP_Inventory               = 6,
	MBW_SP_Options                 = 7,
	MBW_SP_MAX                     = 8
};


// Enum BIOC_Base.BioWorldInfo.BioBrowserStates
enum class EBioBrowserStates : uint8_t
{
	BBS_NORMAL                     = 0,
	BBS_ALERT                      = 1,
	BBS_DISABLED                   = 2,
	BBS_MAX                        = 3
};


// Enum BIOC_Base.BioSeqAct_SetSuperMode.EModes
enum class EModes : uint8_t
{
	MOD_Ready                      = 0,
	MOD_Explore                    = 1,
	MOD_MAX                        = 2
};


// Enum BIOC_Base.BioSeqAct_SetWeapon.EBioSeqActSetWeaponLinks
enum class EBioSeqActSetWeaponLinks : uint8_t
{
	EBioSeqActSetWeaponLinks_Success = 0,
	EBioSeqActSetWeaponLinks_Failure = 1,
	EBioSeqActSetWeaponLinks_MAX   = 2
};


// Enum BIOC_Base.BioSFHandler_MessageBox.BioMessageBoxIconSets
enum class EBioMessageBoxIconSets : uint8_t
{
	ICONSET_None                   = 0,
	ICONSET_Manufacturer           = 1,
	ICONSET_Combat                 = 2,
	ICONSET_Plot                   = 3,
	ICONSET_ItemProperties         = 4,
	ICONSET_MAX                    = 5
};


// Enum BIOC_Base.BioSeqAct_SkillGame.ECustomSkillGameComplete
enum class ECustomSkillGameComplete : uint8_t
{
	CUSTOM_SK_CANCEL               = 0,
	CUSTOM_SK_SUCCESS              = 1,
	CUSTOM_SK_FAIL                 = 2,
	CUSTOM_SK_UNDEFINED            = 3,
	CUSTOM_SK_MAX                  = 4
};


// Enum BIOC_Base.BioSeqAct_SpawnHenchman.EBioSeqAct_SpawnHenchmanSide
enum class EBioSeqAct_SpawnHenchmanSide : uint8_t
{
	BIOSEQACT_SPAWNHENCHMAN_SIDE_LEFT = 0,
	BIOSEQACT_SPAWNHENCHMAN_SIDE_RIGHT = 1,
	BIOSEQACT_SPAWNHENCHMAN_SIDE_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_SpawnHenchman.EBioSeqActSpawnHenchmanLinks
enum class EBioSeqActSpawnHenchmanLinks : uint8_t
{
	EBioSeqActSpawnHenchmanLinks_Success = 0,
	EBioSeqActSpawnHenchmanLinks_Failure = 1,
	EBioSeqActSpawnHenchmanLinks_MAX = 2
};


// Enum BIOC_Base.BioSeqAct_StatLog.EBioStatGroup
enum class EBioStatGroup : uint8_t
{
	STATGROUP_NONE                 = 0,
	STATGROUP_MAX                  = 1
};


// Enum BIOC_Base.BioSeqAct_ThrowGrenadeAt.EThrowGrenadeAtOutputPins
enum class EThrowGrenadeAtOutputPins : uint8_t
{
	TGAOL_Success                  = 0,
	TGAOL_Failed                   = 1,
	TGAOL_MAX                      = 2
};


// Enum BIOC_Base.BioSeqAct_ToggleLightEnv.ToggleLightEnvType
enum class EToggleLightEnvType : uint8_t
{
	TLET_ENABLE                    = 0,
	TLET_DISABLE                   = 1,
	TLET_TOGGLE                    = 2,
	TLET_MAX                       = 3
};


// Enum BIOC_Base.BioSeqAct_UseCover.EUseCoverOutputPins
enum class EUseCoverOutputPins : uint8_t
{
	UCO_Success                    = 0,
	UCO_Failed                     = 1,
	UCO_MAX                        = 2
};


// Enum BIOC_Base.BioSeqAct_UsePowerOn.EPowerOnOutputPins
enum class EPowerOnOutputPins : uint8_t
{
	POL_Success                    = 0,
	POL_Failed                     = 1,
	POL_MAX                        = 2
};


// Enum BIOC_Base.BioSeqAct_WalkWaypointSet.EWalkWaypointSetOutputPins
enum class EWalkWaypointSetOutputPins : uint8_t
{
	WWS_Success                    = 0,
	WWS_Failed                     = 1,
	WWS_MAX                        = 2
};


// Enum BIOC_Base.BioSeqCond_CheckChunkStatus.EBioSeqCondCheckChunkStatusCriteria
enum class EBioSeqCondCheckChunkStatusCriteria : uint8_t
{
	EBioSeqCondCheckChunkStatusCriteria_Loaded = 0,
	EBioSeqCondCheckChunkStatusCriteria_LoadedAndVisible = 1,
	EBioSeqCondCheckChunkStatusCriteria_MAX = 2
};


// Enum BIOC_Base.BioSeqData.eCompletionEventType
enum class EeCompletionEventType : uint8_t
{
	CET_None                       = 0,
	CET_Combat                     = 1,
	CET_Movement                   = 2,
	CET_MAX                        = 3
};


// Enum BIOC_Base.BioSeqData_DoWorldInteraction.EWI_Mode
enum class EWI_Mode : uint8_t
{
	WIM_Entering                   = 0,
	WIM_Active                     = 1,
	WIM_Exiting                    = 2,
	WIM_StartingConv               = 3,
	WIM_Conv                       = 4,
	WIM_EndingConv                 = 5,
	WIM_MAX                        = 6
};


// Enum BIOC_Base.BioSeqEvt_Conversation.EConversationScriptType
enum class EConversationScriptType : uint8_t
{
	NodeEnd                        = 0,
	NodeStart                      = 1,
	StartConversationScript        = 2,
	EndConversationScript          = 3,
	EConversationScriptType_MAX    = 4
};


// Enum BIOC_Base.BioSeqEvt_OnLookingAt.eLookingAtType
enum class EeLookingAtType : uint8_t
{
	LAT_Both                       = 0,
	LAT_CO                         = 1,
	LAT_NCO                        = 2,
	LAT_MAX                        = 3
};


// Enum BIOC_Base.BioSeqEvt_OnNotLookingAt.eNotLookingAtType
enum class EeNotLookingAtType : uint8_t
{
	LNAT_Both                      = 0,
	LNAT_CO                        = 1,
	LNAT_NCO                       = 2,
	LNAT_MAX                       = 3
};


// Enum BIOC_Base.BioSFHandler_BlackScreen.BlackScreenFadeModes
enum class EBlackScreenFadeModes : uint8_t
{
	BlackScreenFadeMode_NoFade     = 0,
	BlackScreenFadeMode_FadeToBlack = 1,
	BlackScreenFadeMode_FadeFromBlack = 2,
	BlackScreenFadeMode_MAX        = 3
};


// Enum BIOC_Base.BioSFHandler_CharacterRecord.EBioTalentRankState
enum class EBioTalentRankState : uint8_t
{
	BioTalentRankState_Locked      = 0,
	BioTalentRankState_Buyable     = 1,
	BioTalentRankState_Bought      = 2,
	BioTalentRankState_MAX         = 3
};


// Enum BIOC_Base.BioSFHandler_Conversation.BioConvWheelPositions
enum class EBioConvWheelPositions : uint8_t
{
	REPLY_WHEEL_MIDDLE_RIGHT       = 0,
	REPLY_WHEEL_BOTTOM_RIGHT       = 1,
	REPLY_WHEEL_BOTTOM_LEFT        = 2,
	REPLY_WHEEL_MIDDLE_LEFT        = 3,
	REPLY_WHEEL_TOP_LEFT           = 4,
	REPLY_WHEEL_TOP_RIGHT          = 5,
	REPLY_WHEEL_MAX                = 6
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDInvokeLabel
enum class EHUDInvokeLabel : uint8_t
{
	HUD_INVOKELABEL_UpdateHUDMode  = 0,
	HUD_INVOKELABEL_UpdateTargetStatus = 1,
	HUD_INVOKELABEL_ChangeSelectedWeapon = 2,
	HUD_INVOKELABEL_UpdateWeaponHeat = 3,
	HUD_INVOKELABEL_UpdateVehicleStatus = 4,
	HUD_INVOKELABEL_UpdateVehicleStatusSquad = 5,
	HUD_INVOKELABEL_UpdateSquadStatus = 6,
	HUD_INVOKELABEL_ChangeSelectedSquadOrder = 7,
	HUD_INVOKELABEL_UpdateSquadFormation = 8,
	HUD_INVOKELABEL_UpdatePowerPadMode = 9,
	HUD_INVOKELABEL_UpdateCustomButtons = 10,
	HUD_INVOKELABEL_UpdateStorm    = 11,
	HUD_INVOKELABEL_updateRadarArrow = 12,
	HUD_INVOKELABEL_setRadarParameters = 13,
	HUD_INVOKELABEL_updateRadarBoundaries = 14,
	HUD_INVOKELABEL_RETICULE_updateCombatReticule = 15,
	HUD_INVOKELABEL_RETICULE_updateSelectionReticule = 16,
	HUD_INVOKELABEL_RETICULE_updateLosReticule = 17,
	HUD_INVOKELABEL_updateNorthIndicator = 18,
	HUD_INVOKELABEL_MAX            = 19
};


// Enum BIOC_Base.BioSFHandler_HUD.EHudPowerPadModes
enum class EHudPowerPadModes : uint8_t
{
	HUD_POWER_PAD_MODE_EXPLORE     = 0,
	HUD_POWER_PAD_MODE_COMBAT      = 1,
	HUD_POWER_PAD_MODE_PAUSED_POWERS = 2,
	HUD_POWER_PAD_MODE_PAUSED_WEAPONS = 3,
	HUD_POWER_PAD_MODE_PAUSED_COMMANDS = 4,
	HUD_POWER_PAD_MODE_MAX         = 5
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDStatusConditionTypes
enum class EHUDStatusConditionTypes : uint8_t
{
	HUD_STATUS_TYPE_NONE           = 0,
	HUD_STATUS_TYPE_MISCTEXT       = 1,
	HUD_STATUS_TYPE_POISON         = 2,
	HUD_STATUS_TYPE_IMMUNE         = 3,
	HUD_STATUS_TYPE_SHOCK          = 4,
	HUD_STATUS_TYPE_HACK           = 5,
	HUD_STATUS_TYPE_MAX            = 6
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDSquadDisplaySlots
enum class EHUDSquadDisplaySlots : uint8_t
{
	HUD_SQUAD_DISPLAY_SLOT_BOTTOM  = 0,
	HUD_SQUAD_DISPLAY_SLOT_MIDDLE  = 1,
	HUD_SQUAD_DISPLAY_SLOT_TOP     = 2,
	HUD_SQUAD_DISPLAY_SLOT_MAX     = 3
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDShoulderTriggerButtons
enum class EHUDShoulderTriggerButtons : uint8_t
{
	HUD_BUTTON_UNASSIGNED          = 0,
	HUD_BUTTON_LEFT_SHOULDER       = 1,
	HUD_BUTTON_LEFT_TRIGGER        = 2,
	HUD_BUTTON_RIGHT_SHOULDER      = 3,
	HUD_BUTTON_RIGHT_TRIGGER       = 4,
	HUD_BUTTON_MAX                 = 5
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDPowerMapSlots
enum class EHUDPowerMapSlots : uint8_t
{
	HUD_POWERMAP_SLOT_UNASSIGNED   = 0,
	HUD_POWERMAP_SLOT_DPADLEFT     = 1,
	HUD_POWERMAP_SLOT_DPADTOP      = 2,
	HUD_POWERMAP_SLOT_DPADRIGHT    = 3,
	HUD_POWERMAP_SLOT_DPADBOTTOM   = 4,
	HUD_POWERMAP_SLOT_BUMPLEFT     = 5,
	HUD_POWERMAP_SLOT_BUMPRIGHT    = 6,
	HUD_POWERMAP_SLOT_MAX          = 7
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDDPadSlots
enum class EHUDDPadSlots : uint8_t
{
	HUD_DPAD_SLOT_UNASSIGNED       = 0,
	HUD_DPAD_SLOT_LEFT             = 1,
	HUD_DPAD_SLOT_TOP              = 2,
	HUD_DPAD_SLOT_RIGHT            = 3,
	HUD_DPAD_SLOT_BOTTOM           = 4,
	HUD_DPAD_SLOT_MAX              = 5
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDPowerBehaviorTypes
enum class EHUDPowerBehaviorTypes : uint8_t
{
	HUD_POWER_BEHAVIOR_TYPE_NONE   = 0,
	HUD_POWER_BEHAVIOR_TYPE_STANDARD = 1,
	HUD_POWER_BEHAVIOR_TYPE_ACTIVATION = 2,
	HUD_POWER_BEHAVIOR_TYPE_DELIVERY = 3,
	HUD_POWER_BEHAVIOR_TYPE_WEAPON = 4,
	HUD_POWER_BEHAVIOR_TYPE_WEAPONALT = 5,
	HUD_POWER_BEHAVIOR_TYPE_GRENADEAMMO = 6,
	HUD_POWER_BEHAVIOR_TYPE_WEAPONALT_OVERLOAD = 7,
	HUD_POWER_BEHAVIOR_TYPE_MAX    = 8
};


// Enum BIOC_Base.BioSFHandler_HUD.EHUDHenchNameIconRefs
enum class EHUDHenchNameIconRefs : uint8_t
{
	HUD_HENCHNAME_ICON_UNASSIGNED  = 0,
	HUD_HENCHNAME_ICON_ASHLEY      = 1,
	HUD_HENCHNAME_ICON_KAIDAN      = 2,
	HUD_HENCHNAME_ICON_LIARA       = 3,
	HUD_HENCHNAME_ICON_WREX        = 4,
	HUD_HENCHNAME_ICON_GARRUS      = 5,
	HUD_HENCHNAME_ICON_TALI        = 6,
	HUD_HENCHNAME_ICON_JENKINS     = 7,
	HUD_HENCHNAME_ICON_MAX         = 8
};


// Enum BIOC_Base.BioSFHandler_SaveLoadBase.ESaveLoadGuiMode
enum class ESaveLoadGuiMode : uint8_t
{
	SAVELOAD_GUI_BROWSER_WHEEL     = 0,
	SAVELOAD_GUI_MAINMENU          = 1,
	SAVELOAD_GUI_GAMEOVER          = 2,
	SAVELOAD_GUI_MAX               = 3
};


// Enum BIOC_Base.MassEffectGuiManager.EGuiHandlers
enum class EGuiHandlers : uint8_t
{
	GUI_HANDLER_NONE               = 0,
	GUI_HANDLER_INVENTORY          = 1,
	GUI_HANDLER_INGAMEGUI          = 2,
	GUI_HANDLER_CHARACTER_RECORD   = 3,
	GUI_HANDLER_LOOT               = 4,
	GUI_HANDLER_CONVERSATION       = 5,
	GUI_HANDLER_SHOP               = 6,
	GUI_HANDLER_GALAXYMAP          = 7,
	GUI_HANDLER_MAINMENU           = 8,
	GUI_HANDLER_NEW_CHARACTER      = 9,
	GUI_HANDLER_SELECT_CHARACTER   = 10,
	GUI_HANDLER_JOURNAL            = 11,
	GUI_HANDLER_HUD                = 12,
	GUI_HANDLER_PARTYSELECT        = 13,
	GUI_HANDLER_XMODS              = 14,
	GUI_HANDLER_SQUADCOMMAND       = 15,
	GUI_HANDLER_DATACODEX          = 16,
	GUI_HANDLER_SAVELOAD           = 17,
	GUI_HANDLER_ACHIEVEMENT        = 18,
	GUI_HANDLER_AREAMAP            = 19,
	GUI_HANDLER_SHAREDINGAMEGUI    = 20,
	GUI_HANDLER_MENUBROWSER        = 21,
	GUI_HANDLER_GAMEOVER           = 22,
	GUI_HANDLER_SPECIALIZATION     = 23,
	GUI_HANDLER_MESSAGEBOX         = 24,
	GUI_HANDLER_INTROTEXT          = 25,
	GUI_HANDLER_BLACKSCREEN        = 26,
	GUI_HANDLER_CREDITS            = 27,
	GUI_HANDLER_OPTIONS            = 28,
	GUI_HANDLER_PCOPTIONS          = 29,
	GUI_HANDLER_PCPAUSEMENU        = 30,
	GUI_HANDLER_PCCONVERSATION     = 31,
	GUI_HANDLER_ADDITONALCONTENT   = 32,
	GUI_HANDLER_SKILLGAME          = 33,
	GUI_HANDLER_SPLASH_SCREEN      = 34,
	GUI_HANDLER_PC_PAUSE           = 35,
	GUI_HANDLER_PC_CONVERSATION    = 36,
	GUI_HANDLER_PC_DESIGNER_UI     = 37,
	GUI_HANDLER_MAX                = 38
};


// Enum BIOC_Base.MassEffectGuiManager.BioTutorialPosition
enum class EBioTutorialPosition : uint8_t
{
	BTP_Top                        = 0,
	BTP_Bottom                     = 1,
	BTP_MessageBox                 = 2,
	BTP_MAX                        = 3
};


// Enum BIOC_Base.BioSFHandler_MainMenu.MainMenuEntries
enum class EMainMenuEntries : uint8_t
{
	MM_ENTRY_DEFAULT               = 0,
	MM_ENTRY_NEWGAME               = 1,
	MM_ENTRY_LOADGAME              = 2,
	MM_ENTRY_EXTRAS                = 3,
	MM_ENTRY_ACHIEVEMENTS          = 4,
	MM_ENTRY_LIVECONTENT           = 5,
	MM_ENTRY_OPTIONS               = 6,
	MM_ENTRY_CREDITS               = 7,
	MM_ENTRY_MAX                   = 8
};


// Enum BIOC_Base.BioSFHandler_NewCharacter.BioNewCharacterTemplates
enum class EBioNewCharacterTemplates : uint8_t
{
	BNCT_ICONIC_MALE               = 0,
	BNCT_ICONIC_FEMALE             = 1,
	BNCT_CUSTOM_MALE               = 2,
	BNCT_CUSTOM_FEMALE             = 3,
	BNCT_MAX                       = 4
};


// Enum BIOC_Base.BioSFHandler_Options.EOptionMessageID
enum class EOptionMessageID : uint8_t
{
	OPTION_NONE                    = 0,
	OPTION_CLOSE                   = 1,
	OPTION_QUIT                    = 2,
	OPTION_RESET_DEFAULTS          = 3,
	OPTION_INITIALIZE              = 4,
	OPTION_SET_OPTION              = 5,
	OPTION_GOTO_MAINMENU           = 6,
	OPTION_RESET_TUTORIALS         = 7,
	OPTION_COMMIT                  = 8,
	OPTION_CANCEL_PROMPT           = 9,
	OPTION_MAX                     = 10
};


// Enum BIOC_Base.BioSFHandler_Options.EOptionsGuiMode
enum class EOptionsGuiMode : uint8_t
{
	OPTION_GUI_BROWSER_WHEEL       = 0,
	OPTION_GUI_MAINMENU            = 1,
	OPTION_GUI_CHARACTER_CREATION  = 2,
	OPTION_GUI_MAX                 = 3
};


// Enum BIOC_Base.BioSFHandler_PCSettings.EPCOptionsGuiMode
enum class EPCOptionsGuiMode : uint8_t
{
	PCOPTION_GUI_BROWSER_WHEEL     = 0,
	PCOPTION_GUI_MAINMENU          = 1,
	PCOPTION_GUI_CHARACTER_CREATION = 2,
	PCOPTION_GUI_MAX               = 3
};


// Enum BIOC_Base.BioSFHandler_PCSettings.DeatilLevels
enum class EDeatilLevels : uint8_t
{
	DETAIL_LEVEL_LOW               = 0,
	DETAIL_LEVEL_MEDIUM            = 1,
	DETAIL_LEVEL_HIGH              = 2,
	DETAIL_LEVEL_ULTRA_HIGH        = 3,
	DETAIL_LEVEL_MAX               = 4
};


// Enum BIOC_Base.BioSFHandler_PCSettings.SettingsChecksBoxes
enum class ESettingsChecksBoxes : uint8_t
{
	CB_VIDEO_WIN                   = 0,
	CB_VIDEO_VSYNC                 = 1,
	CB_AUDIO_CAPTIONING            = 2,
	CB_MOUSE_INVERT                = 3,
	CB_MOUSE_HARDWARE              = 4,
	CB_GAMEPAD_RUMBLE              = 5,
	CB_GAMEPLAY_TUTORIALS          = 6,
	CB_AUTO_ENEMY_SIGHTED          = 7,
	CB_AUTO_BLEED_OUT              = 8,
	CB_AUTO_MEMBERDOWN             = 9,
	CB_GAMEPLAY_AUTOSAVE           = 10,
	CB_TUT_TUTORIALS               = 11,
	CB_VIDEO_SHADOW                = 12,
	CB_VIDEO_SHADER_BLUR           = 13,
	CB_VIDEO_SHADER_FILM           = 14,
	CB_SOUND_HARDWARE              = 15,
	CB_MAX                         = 16
};


// Enum BIOC_Base.BioSFHandler_PCSettings.SettingsSliders
enum class ESettingsSliders : uint8_t
{
	PCSLIDER_VIDEO_GAMMA           = 0,
	PCSLIDER_AUDIO_VOICE           = 1,
	PCSLIDER_AUDIO_FX              = 2,
	PCSLIDER_AUDIO_MUSIC           = 3,
	PCSLIDER_MOUSE_SENSE           = 4,
	PCSLIDER_GAMEPAD_ANALOG_SENS   = 5,
	PCSLIDER_MAX                   = 6
};


// Enum BIOC_Base.BioSFHandler_PCSettings.SettingsDropDowns
enum class ESettingsDropDowns : uint8_t
{
	DD_VIDEO_EFFECTS               = 0,
	DD_VIDEO_RESOLUTION            = 1,
	DD_VIDEO_TEXTURE_DETAIL        = 2,
	DD_VIDEO_FILTERING             = 3,
	DD_GAMEPLAY_COMBAT_DIFF        = 4,
	DD_GAMEPLAY_AUTO_LEVEL         = 5,
	DD_GAMEPLAY_TARGET_ASSIST      = 6,
	DD_GAMEPLAY_SQUAD_POWER        = 7,
	DD_MAX                         = 8
};


// Enum BIOC_Base.BioSFHandler_PCSettings.PanelIndexs
enum class EPanelIndexs : uint8_t
{
	SETTINGS_PANEL_MAIN            = 0,
	SETTINGS_PANEL_GRPAHICS        = 1,
	SETTINGS_PANEL_SOUND           = 2,
	SETTINGS_PANEL_INPUT           = 3,
	SETTINGS_PANEL_CONTROLS        = 4,
	SETTINGS_PANEL_GAMEPLAY        = 5,
	SETTINGS_PANEL_AUTOS           = 6,
	SETTINGS_PANEL_MAX             = 7
};


// Enum BIOC_Base.BioSFHandler_Reticule.EReticuleMode
enum class EReticuleMode : uint8_t
{
	RETICULE_MODE_OFF              = 0,
	RETICULE_MODE_STANDARD         = 1,
	RETICULE_MODE_SNIPER           = 2,
	RETICULE_MODE_MARKSMAN         = 3,
	RETICULE_MODE_SUPPRESSION      = 4,
	RETICULE_MODE_ASSASSINATION    = 5,
	RETICULE_MODE_VEHICLE          = 6,
	RETICULE_MODE_VEHICLE_ZOOM     = 7,
	RETICULE_MODE_CARNAGE          = 8,
	RETICULE_MODE_MAX              = 9
};


// Enum BIOC_Base.BioSFHandler_Reticule.EHUDObjectType
enum class EHUDObjectType : uint8_t
{
	HUD_OBJECT_TYPE_PAWN           = 0,
	HUD_OBJECT_TYPE_PLACEABLE      = 1,
	HUD_OBJECT_TYPE_MAX            = 2
};


// Enum BIOC_Base.BioShop.EBioShopInventory
enum class EBioShopInventory : uint8_t
{
	BIO_SHOP_INVENTORY_PERMANENT   = 0,
	BIO_SHOP_INVENTORY_PREMIUM     = 1,
	BIO_SHOP_INVENTORY_LIMITED     = 2,
	BIO_SHOP_INVENTORY_MAX         = 3
};


// Enum BIOC_Base.BioSFHandler_XBoxMessageBox.MessageBoxIcon
enum class EMessageBoxIcon : uint8_t
{
	MBI_None                       = 0,
	MBI_Error                      = 1,
	MBI_Warning                    = 2,
	MBI_Alert                      = 3,
	MBI_MAX                        = 4
};


// Enum BIOC_Base.BioShield.EBioShieldState
enum class EBioShieldState : uint8_t
{
	BIO_SHIELD_STATE_INVALID       = 0,
	BIO_SHIELD_STATE_FULLY_CHARGED = 1,
	BIO_SHIELD_STATE_DAMAGED       = 2,
	BIO_SHIELD_STATE_RECHARGING    = 3,
	BIO_SHIELD_STATE_COUNT         = 4,
	BIO_SHIELD_STATE_MAX           = 5
};


// Enum BIOC_Base.BioShieldView.EBioShieldEvent
enum class EBioShieldEvent : uint8_t
{
	BIO_SHIELD_EVENT_FULLY_CHARGED = 0,
	BIO_SHIELD_EVENT_PENETRATED    = 1,
	BIO_SHIELD_EVENT_IMPACT        = 2,
	BIO_SHIELD_EVENT_EMP           = 3,
	BIO_SHIELD_EVENT_SHUT_DOWN     = 4,
	BIO_SHIELD_EVENT_RESET         = 5,
	BIO_SHIELD_EVENT_COUNT         = 6,
	BIO_SHIELD_EVENT_MAX           = 7
};


// Enum BIOC_Base.BioShieldView.EBioShieldVFXPosition
enum class EBioShieldVFXPosition : uint8_t
{
	BIO_SHIELD_VFX_POSITION_IMPACT_POINT = 0,
	BIO_SHIELD_VFX_POSITION_OWNER_LOCATION = 1,
	BIO_SHIELD_VFX_POSITION_BOUNDING_BOX_BASE = 2,
	BIO_SHIELD_VFX_POSITION_MAX    = 3
};


// Enum BIOC_Base.BioShieldView.EBioShieldVFXOrientation
enum class EBioShieldVFXOrientation : uint8_t
{
	BIO_SHIELD_VFX_ORIENTATION_IMPACT_NORMAL = 0,
	BIO_SHIELD_VFX_ORIENTATION_OWNER_ORIENTATION = 1,
	BIO_SHIELD_VFX_ORIENTATION_MAX = 2
};


// Enum BIOC_Base.BioShieldView.EBioShieldVFXScale
enum class EBioShieldVFXScale : uint8_t
{
	BIO_SHIELD_VFX_SCALE_NONE      = 0,
	BIO_SHIELD_VFX_SCALE_TO_OWNER  = 1,
	BIO_SHIELD_VFX_SCALE_MAX       = 2
};


// Enum BIOC_Base.BioSkillGame_Handler.ESkillGameButtons
enum class ESkillGameButtons : uint8_t
{
	SKILL_GAME_BUTTON_A            = 0,
	SKILL_GAME_BUTTON_B            = 1,
	SKILL_GAME_BUTTON_X            = 2,
	SKILL_GAME_BUTTON_Y            = 3,
	SKILL_GAME_BUTTON_MAX          = 4
};


// Enum BIOC_Base.BioSoundNodeFootsteps.eFootStepType
enum class EeFootStepType : uint8_t
{
	FST_Heel                       = 0,
	FST_Toe                        = 1,
	FST_VFX                        = 2,
	FST_MAX                        = 3
};


// Enum BIOC_Base.BioSpectatorModeAppr.EApprOptions
enum class EApprOptions : uint8_t
{
	Appr_ArmorType                 = 0,
	Appr_ModelVariant              = 1,
	Appr_BodyMaterial              = 2,
	Appr_HeadAppearance            = 3,
	Appr_HeadMaterial              = 4,
	Appr_HairAppearance            = 5,
	Appr_HairMaterial              = 6,
	Appr_HideHeadgear              = 7,
	Appr_HeadgearModel             = 8,
	Appr_HeadgearMaterial          = 9,
	Appr_MAX                       = 10
};


// Enum BIOC_Base.BioSubtitles.ESubtitlesRenderMode
enum class ESubtitlesRenderMode : uint8_t
{
	SUBTITLE_RENDER_NONE           = 0,
	SUBTITLE_RENDER_DEFAULT        = 1,
	SUBTITLE_RENDER_TOP            = 2,
	SUBTITLE_RENDER_BOTTOM         = 3,
	SUBTITLE_RENDER_AMBIENT        = 4,
	SUBTITLE_RENDER_LOADSCREEN     = 5,
	SUBTITLE_RENDER_MAX            = 6
};


// Enum BIOC_Base.BioSuperMode.EBioSophistication2DAColumnName
enum class EBioSophistication2DAColumnName : uint8_t
{
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_TBASE = 0,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_CBASE = 1,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_TMAX = 2,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_CMAX = 3,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_TAR = 4,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_CAR = 5,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_MOVEMENT_AR = 6,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_COUNT = 7,
	BIO_SOPHISTICATION_2DA_COLUMN_NAME_MAX = 8
};


// Enum BIOC_Base.BioSuperMode.EBioRangeInfoStatus
enum class EBioRangeInfoStatus : uint8_t
{
	BIO_RANGE_INFO_STATUS_INVALID  = 0,
	BIO_RANGE_INFO_STATUS_INTERPOLATE = 1,
	BIO_RANGE_INFO_STATUS_VALID    = 2,
	BIO_RANGE_INFO_STATUS_MAX      = 3
};


// Enum BIOC_Base.BioSuperMode.EBioReticule
enum class EBioReticule : uint8_t
{
	RETICULE_COMBAT                = 0,
	RETICULE_BIOTIC                = 1,
	RETICULE_TECH                  = 2,
	RETICULE_COUNT                 = 3,
	RETICULE_MAX                   = 4
};


// Enum BIOC_Base.BioTalentImporter.EBioCharacterImporterTalent2DA
enum class EBioCharacterImporterTalent2DA : uint8_t
{
	TALENT_IMPORTER_2DA_TALENT_DEPRECATED = 0,
	TALENT_IMPORTER_2DA_TALENT_TREE_DEPRECATED = 1,
	TALENT_IMPORTER_2DA_TALENT_POOL_DEPRECATED = 2,
	TALENT_IMPORTER_2DA_TALENT_EFFECT_LEVELS = 3,
	TALENT_IMPORTER_2DA_TALENT_GUI = 4,
	TALENT_IMPORTER_2DA_BONUS_TALENTS = 5,
	TALENT_IMPORTER_2DA_MAX        = 6
};


// Enum BIOC_Base.BioWeaponRanged.EBioWeaponHit
enum class EBioWeaponHit : uint8_t
{
	BIOWEAPON_HIT_INVALID          = 0,
	BIOWEAPON_HIT_NONE             = 1,
	BIOWEAPON_HIT_PAWN             = 2,
	BIOWEAPON_HIT_SHIELD           = 3,
	BIOWEAPON_HIT_SCENERY          = 4,
	BIOWEAPON_HIT_COUNT            = 5,
	BIOWEAPON_HIT_MAX              = 6
};


// Enum BIOC_Base.BioWeaponRanged.EBioWeaponVisualEffect
enum class EBioWeaponVisualEffect : uint8_t
{
	BIO_WEAPON_VISUAL_EFFECT_MESH  = 0,
	BIO_WEAPON_VISUAL_EFFECT_MUZZLE_FLASH = 1,
	BIO_WEAPON_VISUAL_EFFECT_SECONDARY_MUZZLE_FLASH = 2,
	BIO_WEAPON_VISUAL_EFFECT_COOL_DOWN = 3,
	BIO_WEAPON_VISUAL_EFFECT_SABOTAGE = 4,
	BIO_WEAPON_VISUAL_EFFECT_WHILE_FIRING = 5,
	BIO_WEAPON_VISUAL_EFFECT_MAX   = 6
};


// Enum BIOC_Base.BioWp_ActionStation.ePoses
enum class EePoses : uint8_t
{
	Sit                            = 0,
	Crouch                         = 1,
	Tele                           = 2,
	ePoses_MAX                     = 3
};


// Enum BIOC_Base.UnVince.EBioTestSeverity
enum class EBioTestSeverity : uint8_t
{
	BIOSEVERITY_FATAL              = 0,
	BIOSEVERITY_ERROR              = 1,
	BIOSEVERITY_WARNING            = 2,
	BIOSEVERITY_INFORMATION        = 3,
	BIOSEVERITY_MAX                = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BIOC_Base.Bio_Appr_Character_HeadGear_Settings.BioHeadGearComponentSettings
// 0x000C
struct FBioHeadGearComponentSettings
{
	int                                                m_nMeshIndex;                                             // 0x0000(0x0004) (Edit)
	int                                                m_nMaterialIndex;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      m_bUseBodyMaterialConfig : 1;                             // 0x0008(0x0004) (Edit)
	unsigned long                                      m_bIsHidden : 1;                                          // 0x0008(0x0004) (Edit)
	unsigned long                                      m_bIsLoaded : 1;                                          // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioDEBUGMarkerComponent.LineData
// 0x001B
struct FLineData
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C)
	struct FVector                                     End;                                                      // 0x000C(0x000C)
	unsigned char                                      R;                                                        // 0x0018(0x0001)
	unsigned char                                      G;                                                        // 0x0019(0x0001)
	unsigned char                                      B;                                                        // 0x001A(0x0001)
};

// ScriptStruct BIOC_Base.BioDEBUGMarkerComponent.MarkerData
// 0x0013
struct FMarkerData
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C)
	int                                                Size;                                                     // 0x000C(0x0004)
	unsigned char                                      R;                                                        // 0x0010(0x0001)
	unsigned char                                      G;                                                        // 0x0011(0x0001)
	unsigned char                                      B;                                                        // 0x0012(0x0001)
};

// ScriptStruct BIOC_Base.BioGamerProfile.GameOptions
// 0x0090
struct FGameOptions
{
	unsigned long                                      bYAxisInverted : 1;                                       // 0x0000(0x0004)
	int                                                m_GammaPostProcessTemplate;                               // 0x0004(0x0004)
	int                                                m_nCombatDifficulty;                                      // 0x0008(0x0004)
	int                                                m_nDialogMode;                                            // 0x000C(0x0004)
	int                                                m_nAutoLevelUp;                                           // 0x0010(0x0004)
	int                                                m_nAutoEquip;                                             // 0x0014(0x0004)
	int                                                m_nTutorialFlag;                                          // 0x0018(0x0004)
	int                                                m_nSubTitles;                                             // 0x001C(0x0004)
	int                                                m_nAutoPauseEnemySighted;                                 // 0x0020(0x0004)
	int                                                m_nAutoPauseSquadMemberDown;                              // 0x0024(0x0004)
	int                                                m_nMusicVolume;                                           // 0x0028(0x0004)
	int                                                m_nFXVolume;                                              // 0x002C(0x0004)
	int                                                m_nDialogVolume;                                          // 0x0030(0x0004)
	int                                                m_nSouthpawFlag;                                          // 0x0034(0x0004)
	int                                                m_nTargetingAssistMode;                                   // 0x0038(0x0004)
	float                                              m_nTargetingAssistModifier;                               // 0x003C(0x0004)
	int                                                m_nHorizontalCombatSensitivity;                           // 0x0040(0x0004)
	int                                                m_nVerticalCombatSensitivity;                             // 0x0044(0x0004)
	int                                                m_nHorizontalExplorationSensitivity;                      // 0x0048(0x0004)
	int                                                m_nVerticalExplorationSensitivity;                        // 0x004C(0x0004)
	int                                                m_nRumbleFlag;                                            // 0x0050(0x0004)
	int                                                m_nAutoPauseBleedOut;                                     // 0x0054(0x0004)
	int                                                m_nMotionBlur;                                            // 0x0058(0x0004)
	int                                                m_nFilmGrain;                                             // 0x005C(0x0004)
	int                                                m_nSquadPowerUse;                                         // 0x0060(0x0004)
	int                                                m_nAutoSave;                                              // 0x0064(0x0004)
	unsigned long                                      m_bHardwareMouseState : 1;                                // 0x0068(0x0004)
	int                                                m_nMouseSensePerc;                                        // 0x006C(0x0004)
	int                                                m_nAnalogSensePerc;                                       // 0x0070(0x0004)
	unsigned long                                      m_bVSync : 1;                                             // 0x0074(0x0004)
	unsigned long                                      m_bWindowModeState : 1;                                   // 0x0074(0x0004)
	float                                              m_nGammaValue;                                            // 0x0078(0x0004)
	int                                                m_nEffectsState;                                          // 0x007C(0x0004)
	int                                                m_nTextureDetailLevel;                                    // 0x0080(0x0004)
	int                                                m_nShaderDetailLevel;                                     // 0x0084(0x0004)
	int                                                m_nFilterLevel;                                           // 0x0088(0x0004)
	unsigned long                                      m_nShadowDetailLevel : 1;                                 // 0x008C(0x0004)
	unsigned long                                      m_nHardwareSound : 1;                                     // 0x008C(0x0004)
	unsigned long                                      m_nCooldown : 1;                                          // 0x008C(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.UnlockedBonusTalentInfo
// 0x000C
struct FUnlockedBonusTalentInfo
{
	int                                                nBonusTalentID;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioGamerProfile.UnlockedBonusTalentInfo.srTitle
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioGamerProfile.UnlockedBonusTalentInfo.srDesc
};

// ScriptStruct BIOC_Base.BioGamerProfile.AchievementInfo
// 0x0018
struct FAchievementInfo
{
	int                                                nAchievementID;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioGamerProfile.AchievementInfo.srTitle
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioGamerProfile.AchievementInfo.srIncomplete
	unsigned char                                      UnknownData02[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioGamerProfile.AchievementInfo.srComplete
	int                                                nIconRef;                                                 // 0x0010(0x0004)
	unsigned long                                      bEarned : 1;                                              // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ItemAppearanceData
// 0x0010
struct FItemAppearanceData
{
	unsigned long                                      bEquipped : 1;                                            // 0x0000(0x0004)
	int                                                nItemID;                                                  // 0x0004(0x0004)
	unsigned char                                      eSophistication;                                          // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                nManufacturer;                                            // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.CharacterAppearanceData
// 0x0054
struct FCharacterAppearanceData
{
	struct FItemAppearanceData                         lstWeapons[0x4];                                          // 0x0000(0x0010)
	struct FItemAppearanceData                         stArmor;                                                  // 0x0040(0x0010)
	unsigned long                                      bHelmetVisible : 1;                                       // 0x0050(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.CharacterStatisticsData
// 0x0010
struct FCharacterStatisticsData
{
	int                                                m_Stamina;                                                // 0x0000(0x0004)
	int                                                m_Focus;                                                  // 0x0004(0x0004)
	int                                                m_Precision;                                              // 0x0008(0x0004)
	int                                                m_Coordination;                                           // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.CharacterProfile
// 0x00B4
struct FCharacterProfile
{
	struct FString                                     sCharacterID;                                             // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     sFullName;                                                // 0x000C(0x000C) (NeedCtorLink)
	int                                                nLastPlayedSlot;                                          // 0x0018(0x0004)
	struct FCharacterAppearanceData                    stCharacterAppearance;                                    // 0x001C(0x0054)
	struct FCharacterStatisticsData                    stCharacterStatistics;                                    // 0x0070(0x0010)
	TEnumAsByte<EBioPartyMemberClassBase>              m_ClassBase;                                              // 0x0080(0x0001)
	TEnumAsByte<EBioPlayerCharacterBackgroundOrigin>   m_origin;                                                 // 0x0081(0x0001)
	TEnumAsByte<EBioPlayerCharacterBackgroundNotoriety> m_Reputation;                                             // 0x0082(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	int                                                m_CharacterLevel;                                         // 0x0084(0x0004)
	int                                                m_CreationYear;                                           // 0x0088(0x0004)
	int                                                m_CreationMonth;                                          // 0x008C(0x0004)
	int                                                m_CreationDayOfWeek;                                      // 0x0090(0x0004)
	int                                                m_CreationDay;                                            // 0x0094(0x0004)
	int                                                m_CreationHour;                                           // 0x0098(0x0004)
	int                                                m_CreationMin;                                            // 0x009C(0x0004)
	int                                                m_CreationSec;                                            // 0x00A0(0x0004)
	int                                                m_CreationMSec;                                           // 0x00A4(0x0004)
	int                                                m_PlayedHours;                                            // 0x00A8(0x0004)
	int                                                m_PlayedMin;                                              // 0x00AC(0x0004)
	int                                                m_PlayedSec;                                              // 0x00B0(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ProfileBOOL
// 0x0008
struct FProfileBOOL
{
	int                                                PMIndex;                                                  // 0x0000(0x0004)
	int                                                Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ProfileINT
// 0x0008
struct FProfileINT
{
	int                                                PMIndex;                                                  // 0x0000(0x0004)
	int                                                Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ProfileFLOAT
// 0x0008
struct FProfileFLOAT
{
	int                                                PMIndex;                                                  // 0x0000(0x0004)
	float                                              Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.PlotManagerAchievement
// 0x000C
struct FPlotManagerAchievement
{
	int                                                PMIndex;                                                  // 0x0000(0x0004)
	int                                                nAchievementID;                                           // 0x0004(0x0004)
	int                                                UnlockedAt;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ProfilePlaythrough
// 0x0008
struct FProfilePlaythrough
{
	int                                                nPlaythroughID;                                           // 0x0000(0x0004)
	int                                                nDifficultySetting;                                       // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.ProfileRewardStat
// 0x0020
struct FProfileRewardStat
{
	struct FString                                     sName;                                                    // 0x0000(0x000C) (NeedCtorLink)
	int                                                Value;                                                    // 0x000C(0x0004)
	int                                                UnlockedAt;                                               // 0x0010(0x0004)
	int                                                AchievementId;                                            // 0x0014(0x0004)
	unsigned long                                      IsAchievementUnlocked : 1;                                // 0x0018(0x0004)
	int                                                TalenTreeID;                                              // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioGamerProfile.BonusTalent
// 0x0008
struct FBonusTalent
{
	int                                                nAchievementID;                                           // 0x0000(0x0004)
	int                                                nBonusTalentID;                                           // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioPhysicsSounds.BioPhysicsSoundsInfo
// 0x000C
struct FBioPhysicsSoundsInfo
{
	int                                                nPriority;                                                // 0x0000(0x0004)
	class UAudioComponent*                             oAudioComp;                                               // 0x0004(0x0004) (ExportObject, Component, EditInline)
	float                                              fLastTimePlayed;                                          // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioProceduralCameraBasic.ActorInfo
// 0x0054
struct FActorInfo
{
	struct FVector                                     myPosition;                                               // 0x0000(0x000C)
	struct FRotator                                    myRotation;                                               // 0x000C(0x000C)
	struct FVector                                     headBaseBonePosition;                                     // 0x0018(0x000C)
	struct FVector                                     headBonePosition;                                         // 0x0024(0x000C)
	struct FVector                                     vCameraFocusPoint;                                        // 0x0030(0x000C)
	struct FVector                                     vProceduralCameraPosition;                                // 0x003C(0x000C)
	struct FRotator                                    rProceduralCameraRotation;                                // 0x0048(0x000C)
};

// ScriptStruct BIOC_Base.BioProceduralCameraBasic.CameraInfo
// 0x0020
struct FCameraInfo
{
	struct FVector                                     vPosition;                                                // 0x0000(0x000C)
	struct FRotator                                    rRotation;                                                // 0x000C(0x000C)
	float                                              fFov;                                                     // 0x0018(0x0004)
	float                                              fNearPlane;                                               // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioTriggerStream.BioStreamingState
// 0x0040
struct FBioStreamingState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (Edit)
	struct FString                                     StateDescription;                                         // 0x0008(0x000C) (Edit, NeedCtorLink)
	struct FName                                       InChunkName;                                              // 0x0014(0x0008) (Edit)
	unsigned long                                      ColorChunks : 1;                                          // 0x001C(0x0004) (Edit, Transient)
	TArray<struct FName>                               VisibleChunkNames;                                        // 0x0020(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               LoadChunkNames;                                           // 0x002C(0x000C) (Edit, NeedCtorLink)
	float                                              DesignFudget;                                             // 0x0038(0x0004) (Edit)
	float                                              ArtFudget;                                                // 0x003C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendByAction.BlendTime
// 0x0008
struct FBlendTime
{
	TEnumAsByte<EBioActionAnimNode>                    m_eAnimNode;                                              // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_fTime;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendByAnimationStateTracking.BioAnimationNode
// 0x0014
struct FBioAnimationNode
{
	struct FName                                       nmState;                                                  // 0x0000(0x0008) (Edit)
	struct FName                                       nmToState;                                                // 0x0008(0x0008) (Edit)
	float                                              fBlendTime;                                               // 0x0010(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendPoseAndGestures.BioChildPinData
// 0x0020
struct FBioChildPinData
{
	float                                              fEndBlendStartTime;                                       // 0x0000(0x0004)
	float                                              fEndBlendDuration;                                        // 0x0004(0x0004)
	float                                              fEndTime;                                                 // 0x0008(0x0004)
	unsigned long                                      bPlayUntilNext : 1;                                       // 0x000C(0x0004)
	TArray<class UBioGestChainTree*>                   aChainedTrees;                                            // 0x0010(0x000C) (NeedCtorLink)
	unsigned long                                      bUseDynAnimSets : 1;                                      // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendScalar.BioScalarBlendParams
// 0x000C
struct FBioScalarBlendParams
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit)
	float                                              Peak;                                                     // 0x0004(0x0004) (Edit)
	float                                              Max;                                                      // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendScalar.BioScalarPrecomputedValues
// 0x0008
struct FBioScalarPrecomputedValues
{
	float                                              fRangeLowerRatio;                                         // 0x0000(0x0004)
	float                                              fRangeUpperRatio;                                         // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeChildDef
// 0x0014
struct FBioAnimScalarNodeChildDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	struct FBioScalarBlendParams                       BlendParams;                                              // 0x0008(0x000C)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeBehaviorDef
// 0x0024
struct FBioAnimScalarNodeBehaviorDef
{
	TArray<struct FBioAnimScalarNodeChildDef>          Children;                                                 // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      BlendInstant : 1;                                         // 0x000C(0x0004)
	float                                              BlendPctPerSecond;                                        // 0x0010(0x0004)
	float                                              DefaultScalar;                                            // 0x0014(0x0004)
	struct FString                                     Description;                                              // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendState.BioAnimBlendParams
// 0x000D
struct FBioAnimBlendParams
{
	TArray<float>                                      BlendToChildTimes;                                        // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EBioBlendStatePlayMode>                PlayMode;                                                 // 0x000C(0x0001) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendStateBehavior.BioAnimStateNodeChildDef
// 0x001C
struct FBioAnimStateNodeChildDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	float                                              DefaultWeight;                                            // 0x0008(0x0004)
	struct FBioAnimBlendParams                         BlendParams;                                              // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendStateBehavior.BioAnimStateNodeBehaviorDef
// 0x0018
struct FBioAnimStateNodeBehaviorDef
{
	TArray<struct FBioAnimStateNodeChildDef>           Children;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                          // 0x0000(0x000C) (Edit)
	struct FName                                       AnimName;                                                 // 0x000C(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                          // 0x0000(0x0004) (Edit)
	int                                                YawConstraint;                                            // 0x0004(0x0004) (Edit)
	int                                                RollConstraint;                                           // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioVehicleTrackSet.TrackParticleSystem
// 0x0008
struct FTrackParticleSystem
{
	class UPhysicalMaterial*                           oPhysMat;                                                 // 0x0000(0x0004) (Edit)
	class UParticleSystem*                             oParticleSystem;                                          // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioSeqAct_ActionStation.BioActionStationGestureData
// 0x0028
struct FBioActionStationGestureData
{
	struct FName                                       nmPoseSet;                                                // 0x0000(0x0008)
	struct FName                                       nmPoseAnim;                                               // 0x0008(0x0008)
	struct FName                                       nmTransitionSet;                                          // 0x0010(0x0008)
	struct FName                                       nmTransitionAnim;                                         // 0x0018(0x0008)
	struct FName                                       nmEnumName;                                               // 0x0020(0x0008)
};

// ScriptStruct BIOC_Base.BioSeqAct_InteractProperty.BioPropertyMap
// 0x0010
struct FBioPropertyMap
{
	struct FName                                       sDisplayName;                                             // 0x0000(0x0008)
	struct FName                                       sFuncPropName;                                            // 0x0008(0x0008)
};

// ScriptStruct BIOC_Base.BioSeqAct_InteractProperty.BioPropertyInfo
// 0x0015
struct FBioPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FName                                       ActualPropertyName;                                       // 0x0008(0x0008)
	unsigned long                                      bDisplayProperty : 1;                                     // 0x0010(0x0004) (Edit)
	unsigned long                                      bOldDisplayProperty : 1;                                  // 0x0010(0x0004)
	TEnumAsByte<EBioPropertyType>                      ePropertyType;                                            // 0x0014(0x0001)
};

// ScriptStruct BIOC_Base.BioWorldInfo.WorldStreamingState
// 0x000C
struct FWorldStreamingState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	unsigned long                                      Enabled : 1;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioSeqData_DEBUGInfo.AvoidanceLocations
// 0x002C
struct FAvoidanceLocations
{
	struct FVector                                     vLoc;                                                     // 0x0000(0x000C)
	struct FVector                                     vVel;                                                     // 0x000C(0x000C)
	struct FRotator                                    rRot;                                                     // 0x0018(0x000C)
	float                                              fCollision;                                               // 0x0024(0x0004)
	float                                              fExtendedCollision;                                       // 0x0028(0x0004)
};

// ScriptStruct BIOC_Base.BioSeqData_DEBUGInfo.AvoidanceLocationsArray
// 0x0034
struct FAvoidanceLocationsArray
{
	struct FVector                                     vPawnLoc;                                                 // 0x0000(0x000C)
	struct FVector                                     vStearing;                                                // 0x000C(0x000C)
	struct FVector                                     vAdjustPoint;                                             // 0x0018(0x000C)
	float                                              fSearchDist;                                              // 0x0024(0x0004)
	TArray<struct FAvoidanceLocations>                 aoObsticals;                                              // 0x0028(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSeqData_DEBUGInfo.LastCompletionRecords
// 0x0014
struct FLastCompletionRecords
{
	struct FName                                       nmAction;                                                 // 0x0000(0x0008)
	struct FName                                       nmtech;                                                   // 0x0008(0x0008)
	int                                                nReason;                                                  // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioSeqData_DEBUGInfo.LOSLinesRecord
// 0x001C
struct FLOSLinesRecord
{
	struct FVector                                     vStart;                                                   // 0x0000(0x000C)
	struct FVector                                     vEnd;                                                     // 0x000C(0x000C)
	unsigned long                                      bSaw : 1;                                                 // 0x0018(0x0004)
	unsigned long                                      bEnemy : 1;                                               // 0x0018(0x0004)
};

// ScriptStruct BIOC_Base.BioEffectsMaterialsPriorityMap.EffectMaterialPriority
// 0x0008
struct FEffectMaterialPriority
{
	TEnumAsByte<EEffectsMaterialType>                  eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nPriority;                                                // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioPowerVFXAppearance.PowerVFXData
// 0x0008
struct FPowerVFXData
{
	unsigned long                                      bUsePowerTime : 1;                                        // 0x0000(0x0004) (Edit)
	class UBioVFXTemplate*                             m_EffectTemplate;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioVISSimple.BioVISSData
// 0x000C
struct FBioVISSData
{
	class UPhysicalMaterial*                           oPhysMat;                                                 // 0x0000(0x0004) (Edit)
	class UBioVFXTemplate*                             oVFXTemplate;                                             // 0x0004(0x0004) (Edit)
	class UBioVFXTemplate*                             oImpactOverrideVFXTemplate;                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioVISFootstep.BioVISFootstepData
// 0x0010
struct FBioVISFootstepData
{
	float                                              fDirtValue;                                               // 0x0000(0x0004) (Edit)
	float                                              fGrimeValue;                                              // 0x0004(0x0004) (Edit)
	float                                              fCombatValue;                                             // 0x0008(0x0004) (Edit)
	class UPhysicalMaterial*                           oPhysMat;                                                 // 0x000C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioVISXModSet.BioVISXData
// 0x000C
struct FBioVISXData
{
	class UPhysicalMaterial*                           oPhysMat;                                                 // 0x0000(0x0004)
	unsigned long                                      bOverrideWeapon : 1;                                      // 0x0004(0x0004)
	class UBioVFXTemplate*                             oVFXTemplate;                                             // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioEmissionAreaListBoneList.BoneAndWeight
// 0x000C
struct FBoneAndWeight
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	float                                              BoneWeight;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioEmissionAreaListBoneList.BoneListEmissionArea
// 0x0018
struct FBoneListEmissionArea
{
	struct FName                                       AreaTag;                                                  // 0x0000(0x0008) (Edit)
	unsigned long                                      UseNumVertsAsWeights : 1;                                 // 0x0008(0x0004) (Edit)
	TArray<struct FBoneAndWeight>                      Bones;                                                    // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioParticleModuleLocationAttachedMesh.EmissionAreaWeight
// 0x000C
struct FEmissionAreaWeight
{
	struct FName                                       AreaTag;                                                  // 0x0000(0x0008) (Edit)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioConvNodeTrack.BioTrackKey
// 0x000C
struct FBioTrackKey
{
	float                                              fTime;                                                    // 0x0000(0x0004)
	struct FName                                       KeyName;                                                  // 0x0004(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackDOF.BioDOFTrackData
// 0x0030
struct FBioDOFTrackData
{
	unsigned long                                      bEnableDOF : 1;                                           // 0x0000(0x0004) (Edit)
	float                                              fFalloffExponent;                                         // 0x0004(0x0004) (Edit)
	float                                              fBlurKernelSize;                                          // 0x0008(0x0004) (Edit)
	float                                              fMaxNearBlurAmount;                                       // 0x000C(0x0004) (Edit)
	float                                              fMaxFarBlurAmount;                                        // 0x0010(0x0004) (Edit)
	struct FColor                                      cModulateBlurColor;                                       // 0x0014(0x0004) (Edit)
	float                                              fFocusInnerRadius;                                        // 0x0018(0x0004) (Edit)
	float                                              fFocusDistance;                                           // 0x001C(0x0004) (Edit)
	struct FVector                                     vFocusPosition;                                           // 0x0020(0x000C) (Edit)
	float                                              fInterpolateSeconds;                                      // 0x002C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackFuncShot.BioFuncShotData
// 0x0038
struct FBioFuncShotData
{
	TEnumAsByte<EBioFuncShotType>                      eShotType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     sActor1;                                                  // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FString                                     sActor2;                                                  // 0x0010(0x000C) (Edit, NeedCtorLink)
	struct FString                                     sStage;                                                   // 0x001C(0x000C) (Edit, NeedCtorLink)
	int                                                nActor1PosNode;                                           // 0x0028(0x0004) (Edit)
	unsigned long                                      bUseCamera : 1;                                           // 0x002C(0x0004) (Edit)
	struct FName                                       nmShotName;                                               // 0x0030(0x0008)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackLookAt.BioLookAtTrackData
// 0x0020
struct FBioLookAtTrackData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (Edit)
	struct FName                                       nmTargetTag;                                              // 0x0004(0x0008) (Edit)
	float                                              fDuration;                                                // 0x000C(0x0004) (Edit)
	unsigned long                                      bEnableEyes : 1;                                          // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableHead : 1;                                          // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableTorso : 1;                                         // 0x0010(0x0004) (Edit)
	float                                              fEyeWeight;                                               // 0x0014(0x0004) (Edit)
	float                                              fHeadWeight;                                              // 0x0018(0x0004) (Edit)
	float                                              fTorsoWeight;                                             // 0x001C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackSetFacing.BioSetFacingData
// 0x0009
struct FBioSetFacingData
{
	unsigned long                                      bApplyOrientation : 1;                                    // 0x0000(0x0004) (Edit)
	float                                              fOrientation;                                             // 0x0004(0x0004) (Edit)
	TEnumAsByte<EStageNodes>                           eStageNode;                                               // 0x0008(0x0001) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackSubtitles.BioSubtitleTrackData
// 0x0008
struct FBioSubtitleTrackData
{
	int                                                nStrRefID;                                                // 0x0000(0x0004) (Edit)
	float                                              fLength;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackSwitchCamera.BioCameraSwitchData
// 0x0020
struct FBioCameraSwitchData
{
	unsigned long                                      bForceCrossingLineOfAction : 1;                           // 0x0000(0x0004) (Edit)
	struct FName                                       nmExplicitCamera;                                         // 0x0004(0x0008) (Edit)
	int                                                nIntimacy;                                                // 0x000C(0x0004) (Edit)
	TEnumAsByte<EBioCommonStageCameras>                eStandardCamera;                                          // 0x0010(0x0001) (Edit)
	TEnumAsByte<EBioAutoSet>                           eStageSpecificCam;                                        // 0x0011(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FName                                       nmStageSpecificCam;                                       // 0x0014(0x0008)
	unsigned long                                      bUseForNextCamera : 1;                                    // 0x001C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackVOElements.FaceFXInfo
// 0x0020
struct FFaceFXInfo
{
	class ABioPawn*                                    Pawn;                                                     // 0x0000(0x0004)
	class UFaceFXAsset*                                Asset;                                                    // 0x0004(0x0004)
	class UFaceFXAnimSet*                              AnimSet;                                                  // 0x0008(0x0004)
	struct FString                                     AnimName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	float                                              AnimPos;                                                  // 0x0018(0x0004)
	unsigned long                                      Dirty : 1;                                                // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackVOElementsInst.BioVOActorType
// 0x0018
struct FBioVOActorType
{
	struct FString                                     sTag;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     sActorType;                                               // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioVisualEffectTrack.BioVisualEffectTrackKey
// 0x000C
struct FBioVisualEffectTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	class ABioVisualEffect*                            m_Effect;                                                 // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character.FootStepAttachment
// 0x000C
struct FFootStepAttachment
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	float                                              MinPeriodTime;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character.LookAtBoneDef
// 0x0024
struct FLookAtBoneDef
{
	struct FName                                       m_nBoneName;                                              // 0x0000(0x0008) (Edit)
	float                                              m_fLimit;                                                 // 0x0008(0x0004) (Edit)
	float                                              m_fUpDownLimit;                                           // 0x000C(0x0004) (Edit)
	float                                              m_fDelay;                                                 // 0x0010(0x0004) (Edit)
	unsigned char                                      m_nLookAxis;                                              // 0x0014(0x0001) (Edit)
	unsigned char                                      m_nUpAxis;                                                // 0x0015(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	unsigned long                                      m_bSeparateUpDownLimit : 1;                               // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUseUpAxis : 1;                                         // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bLookAtInverted : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUpAxisInverted : 1;                                    // 0x0018(0x0004) (Edit)
	float                                              m_fSpeedFactor;                                           // 0x001C(0x0004) (Edit)
	float                                              m_fConversationStrength;                                  // 0x0020(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Body.ModelVariation
// 0x000C
struct FModelVariation
{
	int                                                NumVariations;                                            // 0x0000(0x0004) (Edit)
	int                                                MaterialsPerVariation;                                    // 0x0004(0x0004) (Edit)
	unsigned long                                      m_bHasHeadGear : 1;                                       // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Body.ArmorTypes
// 0x0024
struct FArmorTypes
{
	TEnumAsByte<EBioArmorType>                         ArmorType;                                                // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       m_meshPackageName;                                        // 0x0004(0x0008) (Edit)
	struct FName                                       m_materialPackageName;                                    // 0x000C(0x0008) (Edit)
	TArray<struct FModelVariation>                     Variations;                                               // 0x0014(0x000C) (Edit, NeedCtorLink)
	class UPhysicsAsset*                               ArmorPhysicsAsset;                                        // 0x0020(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Body.OverrideAnimTreeTemplate
// 0x0008
struct FOverrideAnimTreeTemplate
{
	TEnumAsByte<EBioPawnClassification>                eClassification;                                          // 0x0000(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UAnimTree*                                   AnimTreeTemplate;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Body.WeaponAnimSpec
// 0x0014
struct FWeaponAnimSpec
{
	TEnumAsByte<EBioItemWeaponRangedType>              m_weaponType;                                             // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UAnimSet*>                            m_animSets;                                               // 0x0004(0x000C) (Edit, NeedCtorLink)
	class UAnimSet*                                    m_drawAnimSet;                                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Head.BioCharacterHeadAppearanceMaterialConfig
// 0x000C
struct FBioCharacterHeadAppearanceMaterialConfig
{
	TArray<class UMaterialInterface*>                  m_aMaterials;                                             // 0x0000(0x000C) (Edit, ExportObject, NeedCtorLink)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_Head.BioWrinkleConfig
// 0x0010
struct FBioWrinkleConfig
{
	struct FString                                     WrinkleParameterName;                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UTexture2D*                                  WrinkleTexture;                                           // 0x000C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceModelSpec
// 0x000C
struct FBioHeadGearAppearanceModelSpec
{
	int                                                m_nMaterialConfigCount;                                   // 0x0000(0x0004) (Edit)
	int                                                m_nMaterialCountPerConfig;                                // 0x0004(0x0004) (Edit)
	unsigned long                                      m_bIsHairHidden : 1;                                      // 0x0008(0x0004) (Edit)
	unsigned long                                      m_bIsHeadHidden : 1;                                      // 0x0008(0x0004) (Edit)
	unsigned long                                      m_bSuppressFacePlate : 1;                                 // 0x0008(0x0004) (Edit)
	unsigned long                                      m_bSuppressVisor : 1;                                     // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceArmorSpec
// 0x0018
struct FBioHeadGearAppearanceArmorSpec
{
	TEnumAsByte<EBioArmorType>                         m_eArmorType;                                             // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FBioHeadGearAppearanceModelSpec>     m_aModelSpec;                                             // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FName                                       m_nmPackage;                                              // 0x0010(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.Bio_Appr_Character_HeadGear.BioFacePlateMeshSpec
// 0x0008
struct FBioFacePlateMeshSpec
{
	unsigned long                                      m_bHidesVisor : 1;                                        // 0x0000(0x0004) (Edit)
	class USkeletalMesh*                               m_pMesh;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioBaseAppearancePlaceable.AudioAPLStatePair
// 0x000C
struct FAudioAPLStatePair
{
	struct FName                                       m_nmAPLState;                                             // 0x0000(0x0008) (Edit)
	class USoundCue*                                   m_SoundCue;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioBaseAppearancePlaceable.VFXAPLStatePair
// 0x0009
struct FVFXAPLStatePair
{
	struct FName                                       m_nmAPLState;                                             // 0x0000(0x0008) (Edit)
	TEnumAsByte<EBioVFXState>                          m_VFXState;                                               // 0x0008(0x0001) (Edit)
};

// ScriptStruct BIOC_Base.BioBaseAppearancePlaceable.VisualEffectAttachment
// 0x0018
struct FVisualEffectAttachment
{
	class UBioVFXTemplate*                             m_oEffectTemplate;                                        // 0x0000(0x0004) (Edit)
	struct FName                                       m_nmSocket;                                               // 0x0004(0x0008) (Edit)
	TArray<struct FVFXAPLStatePair>                    m_States;                                                 // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAppearanceItemSophisticated.BioAppearanceItemSophisticatedVariant
// 0x0020
struct FBioAppearanceItemSophisticatedVariant
{
	int                                                m_Label;                                                  // 0x0000(0x0004) (Edit)
	class UAnimSet*                                    m_oWeaponAnimSet;                                         // 0x0004(0x0004) (Edit)
	class UAnimTree*                                   m_oWeaponAnimTree;                                        // 0x0008(0x0004) (Edit)
	class UPhysicsAsset*                               m_oPhysicsAsset;                                          // 0x000C(0x0004) (Edit)
	class USkeletalMesh*                               m_oModelMesh;                                             // 0x0010(0x0004) (Edit)
	TArray<class UMaterialInterface*>                  m_aMaterials;                                             // 0x0014(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAppearanceItemWeapon.BioAppearanceItemWeaponVFXSpec
// 0x000C
struct FBioAppearanceItemWeaponVFXSpec
{
	int                                                m_type;                                                   // 0x0000(0x0004)
	TEnumAsByte<EBioAppearanceItemWeaponVFXDamageEnum> m_Damage;                                                 // 0x0004(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UBioWeaponVFXAppearance*                     m_appearance;                                             // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAppearanceVehicle.BioVehicleAttachmentInfo
// 0x0018
struct FBioVehicleAttachmentInfo
{
	class UActorComponent*                             oComponentToAttach;                                       // 0x0000(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       nmAttachSocket;                                           // 0x0004(0x0008) (Edit)
	TArray<class UMaterialInterface*>                  aMeshMaterials;                                           // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioAppearanceVehicle.BioVehicleTurretInfo
// 0x0028
struct FBioVehicleTurretInfo
{
	struct FName                                       nmAttachSocket;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       nmTurretYawBone;                                          // 0x0008(0x0008) (Edit)
	struct FName                                       nmTurretPitchBone;                                        // 0x0010(0x0008) (Edit)
	struct FName                                       nmYawController;                                          // 0x0018(0x0008) (Edit)
	struct FName                                       nmPitchController;                                        // 0x0020(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioAppearanceVehicle.BioVehicleThrusterInfo
// 0x0008
struct FBioVehicleThrusterInfo
{
	struct FName                                       nmThrusterSocket;                                         // 0x0000(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioAppearanceVehicle.BioVehicleSoundEntityStateInfo
// 0x0018
struct FBioVehicleSoundEntityStateInfo
{
	struct FString                                     sStateName;                                               // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     sStateValue;                                              // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioInterface_Appearance_Pawn.CreatureSpeeds
// 0x0060
struct FCreatureSpeeds
{
	float                                              fGroundSpeed;                                             // 0x0000(0x0004) (Edit)
	float                                              fAirSpeed;                                                // 0x0004(0x0004) (Edit)
	float                                              fWaterSpeed;                                              // 0x0008(0x0004) (Edit)
	float                                              fClimbSpeed;                                              // 0x000C(0x0004) (Edit)
	float                                              fWalkSpeed;                                               // 0x0010(0x0004) (Edit)
	float                                              fSprintSpeed;                                             // 0x0014(0x0004) (Edit)
	float                                              fExploreSprintSpeed;                                      // 0x0018(0x0004) (Edit)
	float                                              fTacticalSpeed;                                           // 0x001C(0x0004) (Edit)
	float                                              fTacWalkSpeed;                                            // 0x0020(0x0004) (Edit)
	float                                              fTacCrouchSpeed;                                          // 0x0024(0x0004) (Edit)
	float                                              fTacCrouchWalkSpeed;                                      // 0x0028(0x0004) (Edit)
	float                                              fTurnSpeedHigh;                                           // 0x002C(0x0004) (Edit)
	float                                              fTurnSpeedLow;                                            // 0x0030(0x0004) (Edit)
	float                                              fTurnSpeedCombat;                                         // 0x0034(0x0004) (Edit)
	float                                              fTurnSpeedCombatCrouch;                                   // 0x0038(0x0004) (Edit)
	float                                              fTurnSpeedCombatSprint;                                   // 0x003C(0x0004) (Edit)
	float                                              fStandardFriction;                                        // 0x0040(0x0004) (Edit)
	float                                              fAccelRate;                                               // 0x0044(0x0004) (Edit)
	float                                              fMaxDSAccel;                                              // 0x0048(0x0004) (Edit)
	float                                              fMaxDSDecel;                                              // 0x004C(0x0004) (Edit)
	float                                              fMaxDSAccelTac;                                           // 0x0050(0x0004) (Edit)
	float                                              fMaxDSDecelTac;                                           // 0x0054(0x0004) (Edit)
	float                                              fMaxDSAccelTacCrouch;                                     // 0x0058(0x0004) (Edit)
	float                                              fMaxDSDecelTacCrouch;                                     // 0x005C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioInterface_Appearance_Pawn.BioPawnLabelledHeadGearBool
// 0x0008
struct FBioPawnLabelledHeadGearBool
{
	TEnumAsByte<EBioPawnHeadGearComponent>             m_eComponent;                                             // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      m_bIsVisible : 1;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioInterface_Appearance_Pawn.BioPawnHeadGearVisibility
// 0x001C
struct FBioPawnHeadGearVisibility
{
	unsigned long                                      m_bOverride : 1;                                          // 0x0000(0x0004) (Edit)
	struct FBioPawnLabelledHeadGearBool                m_a[0x3];                                                 // 0x0004(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioInterfaceAppearanceVehicle.BioVehicleTurretRunTimeInfo
// 0x000C
struct FBioVehicleTurretRunTimeInfo
{
	unsigned long                                      m_bTurretAutoTrackYaw : 1;                                // 0x0000(0x0004)
	unsigned long                                      m_bTurretAutoTrackPitch : 1;                              // 0x0000(0x0004)
	float                                              m_fCurrentTurretRelativeYaw;                              // 0x0004(0x0004)
	float                                              m_fCurrentTurretRelativePitch;                            // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioItem.BioItemPropertyInfo
// 0x000C
struct FBioItemPropertyInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioItem.BioItemPropertyInfo.srName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioItem.BioItemPropertyInfo.srDescription
	int                                                nIconIndex;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioItem.BioItemPropertyStatus
// 0x0008
struct FBioItemPropertyStatus
{
	int                                                m_nID;                                                    // 0x0000(0x0004)
	int                                                m_nCount;                                                 // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioItemSophisticated.BioManufacturerDetails
// 0x000C
struct FBioManufacturerDetails
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioItemSophisticated.BioManufacturerDetails.srName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioItemSophisticated.BioManufacturerDetails.srDescription
	int                                                nIcon;                                                    // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioItemXModdable.BioItemXModVirtualSlot
// 0x0008
struct FBioItemXModVirtualSlot
{
	int                                                m_type;                                                   // 0x0000(0x0004)
	class UBioItemXMod*                                m_oXMod;                                                  // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioItemXModdable.BioItemXModdableSlotSpec
// 0x0010
struct FBioItemXModdableSlotSpec
{
	int                                                m_type;                                                   // 0x0000(0x0004)
	TArray<class UBioItemXMod*>                        m_xMods;                                                  // 0x0004(0x000C) (ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioWeaponSoundsSet.BioSoundSet
// 0x001C
struct FBioSoundSet
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      m_bRandomize : 1;                                         // 0x000C(0x0004) (Edit)
	TArray<class USoundCue*>                           m_aSounds;                                                // 0x0010(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioShieldView.BioShieldViewParticleSystemSpec
// 0x001C
struct FBioShieldViewParticleSystemSpec
{
	class ABioVisualEffect*                            m_pEffect;                                                // 0x0000(0x0004) (Transient)
	TEnumAsByte<EBioShieldVFXPosition>                 m_ePosition;                                              // 0x0004(0x0001) (Edit)
	TEnumAsByte<EBioShieldVFXOrientation>              m_eOrientation;                                           // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     m_vSize;                                                  // 0x0008(0x000C) (Edit)
	TEnumAsByte<EBioShieldVFXScale>                    m_aScale[0x3];                                            // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class UBioVFXTemplate*                             m_oEffect;                                                // 0x0018(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioShieldView.BioShieldViewEventSpec
// 0x0010
struct FBioShieldViewEventSpec
{
	TEnumAsByte<EBioShieldEvent>                       m_eEvent;                                                 // 0x0000(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FBioShieldViewParticleSystemSpec>    m_aVisualEffects;                                         // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioArtPlaceableType.CoverInformation
// 0x002C
struct FCoverInformation
{
	TEnumAsByte<ECoverType>                            CoverType;                                                // 0x0000(0x0001) (Edit)
	TEnumAsByte<EBioCoverDirection>                    CoverDirection;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              fStepLeftDistance;                                        // 0x0004(0x0004) (Edit)
	float                                              fStepRightDistance;                                       // 0x0008(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverridePosition : 1;                                    // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverrideRotation : 1;                                    // 0x000C(0x0004) (Edit)
	struct FVector                                     vOverridenPosition;                                       // 0x0010(0x000C) (Edit)
	struct FRotator                                    rOverridenRotation;                                       // 0x001C(0x000C) (Edit)
	unsigned long                                      bDisableWhenOnTop : 1;                                    // 0x0028(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioArtPlaceableRoles.ArtPlaceableProperty
// 0x0018
struct FArtPlaceableProperty
{
	struct FString                                     sPropertyName;                                            // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     sPropertyValue;                                           // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioArtPlaceableRoles.ArtPlaceableRole
// 0x0018
struct FArtPlaceableRole
{
	struct FString                                     sRoleName;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FArtPlaceableProperty>               aProperties;                                              // 0x000C(0x000C) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioPawnType.SoundSpec
// 0x0008
struct FSoundSpec
{
	TEnumAsByte<EBioPawnSound>                         m_ePawnSound;                                             // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class USoundCue*                                   m_oSoundCue;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioPawnType.ParticleSystemSpec
// 0x0014
struct FParticleSystemSpec
{
	TEnumAsByte<EBioPawnParticleSystem>                m_ePawnParticleSystem;                                    // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UParticleSystem*                             m_oParticleSystem;                                        // 0x0004(0x0004) (Edit)
	TArray<struct FName>                               m_aBoneName;                                              // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioStageType.BioStageCamera
// 0x001C
struct FBioStageCamera
{
	struct FName                                       sCameraTag;                                               // 0x0000(0x0008) (Edit)
	float                                              fFov;                                                     // 0x0008(0x0004) (Edit)
	float                                              fNearPlane;                                               // 0x000C(0x0004) (Edit)
	struct FBioStageDOFData                            tDOFData;                                                 // 0x0010(0x000C) (Edit)
};

// ScriptStruct BIOC_Base.BioActorBehavior.BioVOSettings
// 0x000C
struct FBioVOSettings
{
	struct FColor                                      cSubtitleColour;                                          // 0x0000(0x0004)
	unsigned char                                      nSubtitleMode;                                            // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bSuppressSubtitlesIfVO : 1;                               // 0x0008(0x0004)
	unsigned long                                      bAlert : 1;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioActorBehavior.BioDamageReporter
// 0x001C
struct FBioDamageReporter
{
	float                                              fShieldDamage;                                            // 0x0000(0x0004)
	float                                              fShieldDamageCapacity;                                    // 0x0004(0x0004)
	float                                              fHealthDamage;                                            // 0x0008(0x0004)
	float                                              fToxicDamage;                                             // 0x000C(0x0004)
	float                                              fStabilityDamage;                                         // 0x0010(0x0004)
	float                                              fDamageResistance;                                        // 0x0014(0x0004)
	float                                              fToxicResistance;                                         // 0x0018(0x0004)
};

// ScriptStruct BIOC_Base.BioActorBehavior.BioActorBehaviorWeaponLOSCache
// 0x0034
struct FBioActorBehaviorWeaponLOSCache
{
	int                                                m_flags;                                                  // 0x0000(0x0004)
	float                                              m_fHitTarget_Time;                                        // 0x0004(0x0004)
	struct FVector                                     m_vHitTarget_Location;                                    // 0x0008(0x000C)
	class AActor*                                      m_oHitTarget_Actor;                                       // 0x0014(0x0004)
	unsigned long                                      m_bHitTarget_Result : 1;                                  // 0x0018(0x0004)
	float                                              m_fHitLocation_Time;                                      // 0x001C(0x0004)
	struct FVector                                     m_vHitLocation_Location;                                  // 0x0020(0x000C)
	class AActor*                                      m_oHitLocation_Actor;                                     // 0x002C(0x0004)
	unsigned long                                      m_bHitLocation_Result : 1;                                // 0x0030(0x0004)
};

// ScriptStruct BIOC_Base.BioActorBehavior.BioActorPawnBehaviorLOSCache
// 0x000C
struct FBioActorPawnBehaviorLOSCache
{
	TArray<struct FBioActorBehaviorWeaponLOSCache>     m_WeaponLOSCaches;                                        // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioEpicPawnBehavior.BioEpicPawnBehaviorWeaponCache
// 0x0058
struct FBioEpicPawnBehaviorWeaponCache
{
	class ABioWeaponRanged*                            m_weapon;                                                 // 0x0000(0x0004)
	int                                                m_flags;                                                  // 0x0004(0x0004)
	struct FVector                                     m_targetPoint;                                            // 0x0008(0x000C)
	struct FVector                                     m_muzzleLocation;                                         // 0x0014(0x000C)
	struct FVector                                     m_muzzleToTargetDisplacement;                             // 0x0020(0x000C)
	struct FRotator                                    m_muzzleToTargetDirection;                                // 0x002C(0x000C)
	class AActor*                                      m_traceHitActor;                                          // 0x0038(0x0004)
	struct FVector                                     m_traceHitLocation;                                       // 0x003C(0x000C)
	struct FVector                                     m_traceHitNormal;                                         // 0x0048(0x000C)
	float                                              m_traceHitDistance;                                       // 0x0054(0x0004)
};

// ScriptStruct BIOC_Base.BioEpicPawnBehavior.BioEpicPawnBehaviorCache
// 0x000C
struct FBioEpicPawnBehaviorCache
{
	TArray<struct FBioEpicPawnBehaviorWeaponCache>     m_weaponCaches;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioEpicPawnBehavior.EpicPawnVisualEffect
// 0x0014
struct FEpicPawnVisualEffect
{
	struct FName                                       m_nmLabel;                                                // 0x0000(0x0008) (Edit)
	class UBioVFXTemplate*                             m_oVFXTemplate;                                           // 0x0008(0x0004) (Edit)
	struct FName                                       m_nmTagOfActorAtVFXLocation;                              // 0x000C(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioPawnBehavior.ParticleSystemComponentSpec
// 0x000C
struct FParticleSystemComponentSpec
{
	TArray<class UParticleSystemComponent*>            m_aParticleSystemComponent;                               // 0x0000(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioPawnBehavior.BioPawnBehaviorCache
// 0x000C
struct FBioPawnBehaviorCache
{
	int                                                m_flags;                                                  // 0x0000(0x0004)
	float                                              m_driftAngle;                                             // 0x0004(0x0004)
	float                                              m_driftZoneRadius;                                        // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioVehicleBehaviorBase.BioVehicleWeaponInfo
// 0x0014
struct FBioVehicleWeaponInfo
{
	int                                                nTurretIndex;                                             // 0x0000(0x0004)
	unsigned long                                      bClampToTurret : 1;                                       // 0x0004(0x0004)
	float                                              fTurretYawHalfAngleInDeg;                                 // 0x0008(0x0004)
	float                                              fTurretPitchHalfAngleInDeg;                               // 0x000C(0x0004)
	class ABioWeapon*                                  oVehicleWeaponPtr;                                        // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioCameraUtility.BioCameraUtilityOrientation
// 0x0008
struct FBioCameraUtilityOrientation
{
	float                                              m_yaw;                                                    // 0x0000(0x0004) (Edit)
	float                                              m_pitch;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioCameraBehavior.BioCameraUtilityStickInputSpec
// 0x0008
struct FBioCameraUtilityStickInputSpec
{
	float                                              m_result;                                                 // 0x0000(0x0004) (Edit)
	float                                              m_rawMax;                                                 // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioCameraManager.BioCameraManagerBehaviorSpec
// 0x0010
struct FBioCameraManagerBehaviorSpec
{
	class UBioCameraBehavior*                          m_pBehavior;                                              // 0x0000(0x0004)
	TArray<class UBioCameraBehavior*>                  m_apToBehaviorsNotPreservingTargetPoint;                  // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioCameraManager.BioCameraManagerTraceInfo
// 0x0024
struct FBioCameraManagerTraceInfo
{
	struct FVector                                     m_vCollVectorLocation;                                    // 0x0000(0x000C)
	struct FVector                                     m_vCollVectorNormal;                                      // 0x000C(0x000C)
	class AActor*                                      m_oCollVectorActor;                                       // 0x0018(0x0004)
	unsigned long                                      m_bCollDetected : 1;                                      // 0x001C(0x0004)
	unsigned long                                      m_bCollisionDirty : 1;                                    // 0x001C(0x0004)
	unsigned long                                      m_bDebugDraw : 1;                                         // 0x001C(0x0004)
	struct FColor                                      m_clrDebugDraw;                                           // 0x0020(0x0004)
};

// ScriptStruct BIOC_Base.BioCameraZoom.BioZoomFocusConfig
// 0x0028
struct FBioZoomFocusConfig
{
	float                                              m_fNearClipFactor;                                        // 0x0000(0x0004)
	float                                              m_fNearClipMax;                                           // 0x0004(0x0004)
	float                                              m_fMinRate;                                               // 0x0008(0x0004)
	float                                              m_fDuration;                                              // 0x000C(0x0004)
	float                                              m_fInnerRadiusFactor;                                     // 0x0010(0x0004)
	float                                              m_fFalloffExponent;                                       // 0x0014(0x0004)
	float                                              m_fBlurKernelSize;                                        // 0x0018(0x0004)
	float                                              m_fMaxNearBlurAmount;                                     // 0x001C(0x0004)
	float                                              m_fMaxFarBlurAmount;                                      // 0x0020(0x0004)
	struct FColor                                      m_clrModulateBlur;                                        // 0x0024(0x0004)
};

// ScriptStruct BIOC_Base.BioCameraZoom.BioZoomMagnificationConfig
// 0x0010
struct FBioZoomMagnificationConfig
{
	float                                              m_fCamSpeedFactor;                                        // 0x0000(0x0004)
	float                                              m_fFOVFactor;                                             // 0x0004(0x0004)
	int                                                m_nLevelCount;                                            // 0x0008(0x0004)
	float                                              m_fTransitionDuration;                                    // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioWorldInteractionType.ActivityRecord
// 0x0030
struct FActivityRecord
{
	struct FName                                       m_nmActivityName;                                         // 0x0000(0x0008) (Edit)
	TArray<class UAnimSet*>                            m_oMaleAnimations;                                        // 0x0008(0x000C) (Edit, NeedCtorLink)
	TArray<class UAnimSet*>                            m_oFemaleAnimations;                                      // 0x0014(0x000C) (Edit, NeedCtorLink)
	class USoundCue*                                   m_oActivitySoundCue;                                      // 0x0020(0x0004) (Edit)
	TArray<float>                                      m_faActivityTwitchWeighting;                              // 0x0024(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioArtPlaceable.CoverLinkRecord
// 0x0008
struct FCoverLinkRecord
{
	class AActor*                                      oCover;                                                   // 0x0000(0x0004) (Edit)
	int                                                nSlotIndex;                                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioProjectile.BioProjectilePhysicsCollisionContext
// 0x001C
struct FBioProjectilePhysicsCollisionContext
{
	class AActor*                                      m_oActor;                                                 // 0x0000(0x0004)
	struct FVector                                     m_vHitLocation;                                           // 0x0004(0x000C)
	struct FVector                                     m_vHitNormal;                                             // 0x0010(0x000C)
};

// ScriptStruct BIOC_Base.BioAttributes.BioComplexIntStructAttribute
// 0x0074
struct FBioComplexIntStructAttribute
{
	int                                                m_Base;                                                   // 0x0000(0x0004)
	int                                                m_modifiers[0x4];                                         // 0x0004(0x0004)
	unsigned long                                      m_isBaseOverrideInEffect : 1;                             // 0x0014(0x0004)
	TArray<int>                                        m_baseOverrides;                                          // 0x0018(0x000C) (NeedCtorLink)
	TArray<unsigned long>                              m_isBaseOverrideValid;                                    // 0x0024(0x000C) (NeedCtorLink)
	int                                                m_Current;                                                // 0x0030(0x0004)
	unsigned long                                      m_Dirty : 1;                                              // 0x0034(0x0004)
	int                                                m_Max;                                                    // 0x0038(0x0004)
	int                                                m_Min;                                                    // 0x003C(0x0004)
	int                                                m_isModifierEnabled[0x4];                                 // 0x0040(0x0004)
	struct FPointer                                    m_Parent;                                                 // 0x0050(0x0004) (Native)
	class UBio2DA*                                     m_LookupTable;                                            // 0x0054(0x0004)
	int                                                m_TableColumn;                                            // 0x0058(0x0004)
	TArray<struct FPointer>                            m_Children;                                               // 0x005C(0x000C) (Native)
	TArray<struct FPointer>                            m_FloatChildren;                                          // 0x0068(0x000C) (Native)
};

// ScriptStruct BIOC_Base.BioAttributes.BioComplexFloatStructAttribute
// 0x005C
struct FBioComplexFloatStructAttribute
{
	float                                              m_Base;                                                   // 0x0000(0x0004)
	float                                              m_modifiers[0x4];                                         // 0x0004(0x0004)
	unsigned long                                      m_isBaseOverrideInEffect : 1;                             // 0x0014(0x0004)
	TArray<int>                                        m_baseOverrides;                                          // 0x0018(0x000C) (NeedCtorLink)
	TArray<unsigned long>                              m_isBaseOverrideValid;                                    // 0x0024(0x000C) (NeedCtorLink)
	float                                              m_Current;                                                // 0x0030(0x0004)
	unsigned long                                      m_Dirty : 1;                                              // 0x0034(0x0004)
	float                                              m_Max;                                                    // 0x0038(0x0004)
	float                                              m_Min;                                                    // 0x003C(0x0004)
	int                                                m_isModifierEnabled[0x4];                                 // 0x0040(0x0004)
	struct FPointer                                    m_Parent;                                                 // 0x0050(0x0004) (Native)
	class UBio2DA*                                     m_LookupTable;                                            // 0x0054(0x0004)
	int                                                m_TableColumn;                                            // 0x0058(0x0004)
};

// ScriptStruct BIOC_Base.BioPower.BioPowerParam
// 0x0064
struct FBioPowerParam
{
	struct FName                                       nmParamName;                                              // 0x0000(0x0008)
	struct FBioComplexFloatStructAttribute             m_value;                                                  // 0x0008(0x005C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMaterialOverride.TextureParameter
// 0x000C
struct FTextureParameter
{
	struct FName                                       nName;                                                    // 0x0000(0x0008)
	class UTexture*                                    m_pTexture;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioMaterialOverride.ColorParameter
// 0x0018
struct FColorParameter
{
	struct FName                                       nName;                                                    // 0x0000(0x0008)
	struct FLinearColor                                cValue;                                                   // 0x0008(0x0010)
};

// ScriptStruct BIOC_Base.BioMaterialOverride.ScalarParameter
// 0x000C
struct FScalarParameter
{
	struct FName                                       nName;                                                    // 0x0000(0x0008)
	float                                              sValue;                                                   // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogNode
// 0x0044
struct FBioDialogNode
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioConversation.BioDialogNode.srText
	struct FString                                     sText;                                                    // 0x0004(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bFireConditional : 1;                                     // 0x0010(0x0004) (Edit)
	int                                                nConditionalFunc;                                         // 0x0014(0x0004) (Edit)
	int                                                nConditionalParam;                                        // 0x0018(0x0004) (Edit)
	int                                                nStateTransition;                                         // 0x001C(0x0004) (Edit)
	int                                                nStateTransitionParam;                                    // 0x0020(0x0004) (Edit)
	int                                                nExportID;                                                // 0x0024(0x0004) (Edit, EditConst)
	int                                                nScriptIndex;                                             // 0x0028(0x0004) (Edit)
	unsigned long                                      bAmbient : 1;                                             // 0x002C(0x0004) (Edit)
	unsigned long                                      bNonTextLine : 1;                                         // 0x002C(0x0004) (Edit)
	class USoundCue*                                   pCue;                                                     // 0x0030(0x0004) (Transient)
	unsigned long                                      bSoundLoaded : 1;                                         // 0x0034(0x0004) (Transient)
	TEnumAsByte<EConvGUIStyles>                        eGUIStyle;                                                // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                nCameraIntimacy;                                          // 0x003C(0x0004) (Edit)
	unsigned long                                      bIgnoreBodyGestures : 1;                                  // 0x0040(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogReplyListDetails
// 0x0015
struct FBioDialogReplyListDetails
{
	int                                                nIndex;                                                   // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioConversation.BioDialogReplyListDetails.srParaphrase
	struct FString                                     sParaphrase;                                              // 0x0008(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EReplyCategory>                        Category;                                                 // 0x0014(0x0001) (Edit)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogEntryNode
// 0x0024 (0x0068 - 0x0044)
struct FBioDialogEntryNode : public FBioDialogNode
{
	TArray<struct FBioDialogReplyListDetails>          ReplyListNew;                                             // 0x0044(0x000C) (Edit, NeedCtorLink)
	int                                                nSpeakerIndex;                                            // 0x0050(0x0004) (Edit)
	int                                                nListenerIndex;                                           // 0x0054(0x0004) (Edit)
	unsigned long                                      bSkippable : 1;                                           // 0x0058(0x0004) (Edit)
	TArray<int>                                        aSpeakerList;                                             // 0x005C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogReplyNode
// 0x0018 (0x005C - 0x0044)
struct FBioDialogReplyNode : public FBioDialogNode
{
	TArray<int>                                        EntryList;                                                // 0x0044(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EReplyTypes>                           ReplyType;                                                // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                nListenerIndex;                                           // 0x0054(0x0004) (Edit)
	unsigned long                                      bUnskippable : 1;                                         // 0x0058(0x0004) (Edit)
	unsigned long                                      bIllegal : 1;                                             // 0x0058(0x0004) (Transient)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogSpeaker
// 0x000C
struct FBioDialogSpeaker
{
	struct FName                                       sSpeakerTag;                                              // 0x0000(0x0008) (Edit)
	class AActor*                                      aSpeaker;                                                 // 0x0008(0x0004) (Transient)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogLookat
// 0x000C
struct FBioDialogLookat
{
	class AActor*                                      pActor;                                                   // 0x0000(0x0004) (Transient)
	float                                              fLookAtDelay;                                             // 0x0004(0x0004) (Transient)
	class AActor*                                      pLookAtTarget;                                            // 0x0008(0x0004) (Transient)
};

// ScriptStruct BIOC_Base.BioConversation.BioDialogScript
// 0x0008
struct FBioDialogScript
{
	struct FName                                       sScriptTag;                                               // 0x0000(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioConversation.BioNextCamData
// 0x0038
struct FBioNextCamData
{
	float                                              fFov;                                                     // 0x0000(0x0004) (Edit)
	struct FVector                                     vPos;                                                     // 0x0004(0x000C) (Edit)
	struct FRotator                                    rRot;                                                     // 0x0010(0x000C) (Edit)
	unsigned long                                      bUseThis : 1;                                             // 0x001C(0x0004) (Edit)
	float                                              fNearPlane;                                               // 0x0020(0x0004) (Edit)
	struct FName                                       sCameraName;                                              // 0x0024(0x0008) (Edit)
	struct FBioStageDOFData                            tDOFData;                                                 // 0x002C(0x000C) (Edit)
};

// ScriptStruct BIOC_Base.BioConversation.BioSavedActorPos
// 0x001C
struct FBioSavedActorPos
{
	class AActor*                                      pActor;                                                   // 0x0000(0x0004)
	struct FVector                                     vPos;                                                     // 0x0004(0x000C)
	struct FRotator                                    rRot;                                                     // 0x0010(0x000C)
};

// ScriptStruct BIOC_Base.BioStage.BioStageCameraCustom
// 0x0028
struct FBioStageCameraCustom
{
	struct FString                                     m_sCameraName;                                            // 0x0000(0x000C) (NeedCtorLink)
	float                                              m_fCameraHeightDelta;                                     // 0x000C(0x0004)
	float                                              m_fCameraPitchDelta;                                      // 0x0010(0x0004)
	float                                              m_fCameraYawDelta;                                        // 0x0014(0x0004)
	float                                              m_fCameraFOVDelta;                                        // 0x0018(0x0004)
	float                                              m_fCameraNearPlaneDelta;                                  // 0x001C(0x0004)
	float                                              m_fCameraFocusInnerRadiusDelta;                           // 0x0020(0x0004)
	float                                              m_fCameraFocusDistanceDelta;                              // 0x0024(0x0004)
};

// ScriptStruct BIOC_Base.BioEquipmentBase.BioEquipmentBaseSlotType
// 0x001C
struct FBioEquipmentBaseSlotType
{
	class UBioItem*                                    oEquippedItem;                                            // 0x0000(0x0004)
	struct FScriptDelegate                             EquipAction;                                              // 0x0004(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             UnEquipAction;                                            // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioGUIBox.CanvasProperties
// 0x0020
struct FCanvasProperties
{
	class UFont*                                       m_font;                                                   // 0x0000(0x0004)
	int                                                m_nCurX;                                                  // 0x0004(0x0004)
	int                                                m_nCurY;                                                  // 0x0008(0x0004)
	int                                                m_nOrgX;                                                  // 0x000C(0x0004)
	int                                                m_nOrgY;                                                  // 0x0010(0x0004)
	int                                                m_nClipX;                                                 // 0x0014(0x0004)
	int                                                m_nClipY;                                                 // 0x0018(0x0004)
	struct FColor                                      m_color;                                                  // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioTlkFile.TlkHashEntry
// 0x000C
struct FTlkHashEntry
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTlkFile.TlkHashEntry.srID_NATIVE_MIRROR
	int                                                nFlags_NATIVE_MIRROR;                                     // 0x0004(0x0004) (Const, Native)
	int                                                nStringIndex_NATIVE_MIRROR;                               // 0x0008(0x0004) (Const, Native)
};

// ScriptStruct BIOC_Base.BioTlkFile.BioHuffmanDecodeNode
// 0x0005
struct FBioHuffmanDecodeNode
{
	int                                                nData_NATIVE_MIRROR;                                      // 0x0000(0x0004) (Const, Native)
	unsigned char                                      bLeaf_NATIVE_MIRROR;                                      // 0x0004(0x0001) (Const, Native)
};

// ScriptStruct BIOC_Base.BioTlkFile.BioHuffmanEntry
// 0x0010
struct FBioHuffmanEntry
{
	int                                                nLength_NATIVE_MIRROR;                                    // 0x0000(0x0004) (Const, Native)
	TArray<unsigned char>                              aBitStream_NATIVE_MIRROR;                                 // 0x0004(0x000C) (Const, Native)
};

// ScriptStruct BIOC_Base.BioCharacterImporter.PlayerInfo
// 0x0028
struct FPlayerInfo
{
	struct FString                                     m_Label;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<EBioAttributePawnGender>               m_Gender;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     m_FirstName;                                              // 0x0010(0x000C) (NeedCtorLink)
	TEnumAsByte<EBioPlayerCharacterBackgroundOrigin>   m_origin;                                                 // 0x001C(0x0001)
	TEnumAsByte<EBioPlayerCharacterBackgroundNotoriety> m_notoriety;                                              // 0x001D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	class UBioMorphFace*                               m_oMorph;                                                 // 0x0020(0x0004)
	int                                                nBonusTalentID;                                           // 0x0024(0x0004)
};

// ScriptStruct BIOC_Base.BioCharacterImporter.BioIntArray
// 0x000C
struct FBioIntArray
{
	TArray<int>                                        m_a;                                                      // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioCharacterImporter.BioSpecializationData
// 0x0010
struct FBioSpecializationData
{
	int                                                m_bonusID;                                                // 0x0000(0x0004)
	int                                                m_replaceTalentID;                                        // 0x0004(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioSpecializationData.m_LocalizedName
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioSpecializationData.m_LocalizedDesc
};

// ScriptStruct BIOC_Base.BioCharacterImporter.BioClassGuiInfo
// 0x001C
struct FBioClassGuiInfo
{
	struct FString                                     sLabel;                                                   // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioClassGuiInfo.srClassName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioClassGuiInfo.srDescription
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioClassGuiInfo.srPrimaryAbilityDescription
	unsigned char                                      UnknownData03[0x4];                                       // 0x0018(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioCharacterImporter.BioClassGuiInfo.srSecondaryAbilityDescription
};

// ScriptStruct BIOC_Base.BioInventory.BioPlotPseudoItem
// 0x0018
struct FBioPlotPseudoItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventory.BioPlotPseudoItem.m_LocalizedName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventory.BioPlotPseudoItem.m_LocalizedDesc
	int                                                m_exportID;                                               // 0x0008(0x0004)
	int                                                m_basePrice;                                              // 0x000C(0x0004)
	int                                                m_shopGUIImageID;                                         // 0x0010(0x0004)
	int                                                m_plotConditional;                                        // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.ResourceInfo
// 0x0008
struct FResourceInfo
{
	TEnumAsByte<EInventoryResourceTypes>               eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              fQty;                                                     // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.BioInventoryGuiInterfaceItemStat
// 0x0009
struct FBioInventoryGuiInterfaceItemStat
{
	float                                              Current;                                                  // 0x0000(0x0004)
	int                                                nAbsolute;                                                // 0x0004(0x0004)
	TEnumAsByte<EGuiItemStatTypes>                     eType;                                                    // 0x0008(0x0001)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.BioInventoryGuiInterfaceItemStats
// 0x0030
struct FBioInventoryGuiInterfaceItemStats
{
	struct FBioInventoryGuiInterfaceItemStat           lstStats[0x3];                                            // 0x0000(0x000C)
	TArray<struct FBioItemPropertyInfo>                lstModifiers;                                             // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.XModInfo
// 0x0018
struct FXModInfo
{
	class UBioItemXMod*                                m_oXMod;                                                  // 0x0000(0x0004)
	int                                                m_nType;                                                  // 0x0004(0x0004)
	struct FString                                     ItemName;                                                 // 0x0008(0x000C) (NeedCtorLink)
	int                                                sophistication;                                           // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.ItemInfo
// 0x0090
struct FItemInfo
{
	struct FString                                     ItemName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.ItemCategoryDescription
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.ItemCategoryName
	int                                                nItemCategoryGuiIcon;                                     // 0x0014(0x0004)
	TEnumAsByte<EBioAttributesItemRaceType>            ItemSubcategoryRace;                                      // 0x0018(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData03[0x4];                                       // 0x0019(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.ItemSubcategoryRacialLabel
	unsigned char                                      UnknownData04[0x4];                                       // 0x0020(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.ManufacturerName
	unsigned char                                      UnknownData05[0x4];                                       // 0x0024(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.ManufacturerDescription
	int                                                nManufacturerIcon;                                        // 0x0028(0x0004)
	unsigned char                                      UnknownData06[0x4];                                       // 0x002C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.ItemInfo.BonusesDescription
	int                                                sophistication;                                           // 0x0030(0x0004)
	TEnumAsByte<EGuiEquipSlots>                        m_eSlot;                                                  // 0x0034(0x0001)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FBioInventoryGuiInterfaceItemStats          m_rawStats;                                               // 0x0038(0x0030) (NeedCtorLink)
	TArray<struct FXModInfo>                           m_lstXMods;                                               // 0x0068(0x000C) (NeedCtorLink)
	float                                              m_price;                                                  // 0x0074(0x0004)
	unsigned long                                      m_bIsEquippable : 1;                                      // 0x0078(0x0004)
	int                                                m_plotConditional;                                        // 0x007C(0x0004)
	int                                                InvIndex;                                                 // 0x0080(0x0004)
	int                                                FilteredIndexOverride;                                    // 0x0084(0x0004)
	int                                                m_nmShopGUIImageID;                                       // 0x0088(0x0004)
	unsigned long                                      m_bIsNew : 1;                                             // 0x008C(0x0004)
};

// ScriptStruct BIOC_Base.BioInventoryGuiInterface.GuiEquipSlotDetails
// 0x0014
struct FGuiEquipSlotDetails
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: ArrayProperty BIOC_Base.BioInventoryGuiInterface.GuiEquipSlotDetails.lstStatLabels
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioInventoryGuiInterface.GuiEquipSlotDetails.srSlotName
	int                                                nEmptyIcon;                                               // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioEventNotifier.BioDisplayNotice
// 0x002C
struct FBioDisplayNotice
{
	int                                                nEventType;                                               // 0x0000(0x0004)
	int                                                nTimeToLive;                                              // 0x0004(0x0004)
	int                                                nIconIndex;                                               // 0x0008(0x0004)
	int                                                nContext;                                                 // 0x000C(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioEventNotifier.BioDisplayNotice.srTitle
	struct FString                                     strTitle;                                                 // 0x0014(0x000C) (NeedCtorLink)
	int                                                nQuantity;                                                // 0x0020(0x0004)
	int                                                nQuantMin;                                                // 0x0024(0x0004)
	int                                                nQuantMax;                                                // 0x0028(0x0004)
};

// ScriptStruct BIOC_Base.BioEventNotifier.BioTalentNotice
// 0x000C
struct FBioTalentNotice
{
	int                                                nIcon;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioEventNotifier.BioTalentNotice.srName
	class ABioPawn*                                    oCharacter;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioWorldInfo.SlowMotionRequestType
// 0x0014
struct FSlowMotionRequestType
{
	int                                                nReqID;                                                   // 0x0000(0x0004)
	unsigned long                                      bIndefinite : 1;                                          // 0x0004(0x0004)
	float                                              fSpeed;                                                   // 0x0008(0x0004)
	float                                              fLifeTime;                                                // 0x000C(0x0004)
	int                                                nPriority;                                                // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioWorldInfo.VFXTemplatePoolSizeSpec
// 0x000C
struct FVFXTemplatePoolSizeSpec
{
	class UBioVFXTemplate*                             Template;                                                 // 0x0000(0x0004) (Edit)
	int                                                MaxPoolSize;                                              // 0x0004(0x0004) (Edit)
	int                                                MinPoolSize;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioWorldInfo.VFXListNode
// 0x0010
struct FVFXListNode
{
	class ABioVisualEffect*                            Effect;                                                   // 0x0000(0x0004)
	int                                                NextNode;                                                 // 0x0004(0x0004)
	int                                                PrevNode;                                                 // 0x0008(0x0004)
	unsigned long                                      ValidNode : 1;                                            // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioWorldInfo.BoughtVFXListEnds
// 0x0008
struct FBoughtVFXListEnds
{
	int                                                HeadIndex;                                                // 0x0000(0x0004)
	int                                                TailIndex;                                                // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioWorldInfo.WorldEnvironmentEffect
// 0x0028
struct FWorldEnvironmentEffect
{
	class ABioVisualEffect*                            m_Effect;                                                 // 0x0000(0x0004) (Transient)
	struct FVector                                     m_vOffset;                                                // 0x0004(0x000C)
	float                                              m_fBlendDuration;                                         // 0x0010(0x0004)
	float                                              m_fBlendTime;                                             // 0x0014(0x0004)
	float                                              m_fDesiredIntensity;                                      // 0x0018(0x0004)
	float                                              m_fCurrentIntensity;                                      // 0x001C(0x0004)
	class AController*                                 m_TargetController;                                       // 0x0020(0x0004)
	unsigned long                                      m_bAttachToCamera : 1;                                    // 0x0024(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_PartySelection.PartySelectMemberInfo
// 0x0024
struct FPartySelectMemberInfo
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	int                                                ImageIndex;                                               // 0x0008(0x0004)
	struct FName                                       DiscoveredLabel;                                          // 0x000C(0x0008)
	struct FName                                       AvailableLabel;                                           // 0x0014(0x0008)
	struct FName                                       InPartyLabel;                                             // 0x001C(0x0008)
};

// ScriptStruct BIOC_Base.BioSoundNodeAPActivity.APActivityEntry
// 0x000C
struct FAPActivityEntry
{
	struct FName                                       nmActivity;                                               // 0x0000(0x0008) (Edit)
	unsigned long                                      bOneShot : 1;                                             // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioSoundNodeAPTransition.TransitionData
// 0x0018
struct FTransitionData
{
	struct FName                                       FromState;                                                // 0x0000(0x0008) (Edit)
	struct FName                                       ToState;                                                  // 0x0008(0x0008) (Edit)
	struct FName                                       TransName;                                                // 0x0010(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioSoundNodeFootsteps.FootstepData
// 0x0010
struct FFootstepData
{
	int                                                nFoot;                                                    // 0x0000(0x0004) (Edit)
	TEnumAsByte<EeFootStepType>                        nHeel_Toe;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bActive : 1;                                              // 0x0008(0x0004) (Edit)
	int                                                nNodeIdx;                                                 // 0x000C(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioSimpleTalentSave
// 0x0008
struct FBioSimpleTalentSave
{
	int                                                m_TalentID;                                               // 0x0000(0x0004)
	int                                                m_Ranks;                                                  // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioComplexTalentSave
// 0x0030
struct FBioComplexTalentSave
{
	int                                                m_TalentID;                                               // 0x0000(0x0004)
	int                                                m_Ranks;                                                  // 0x0004(0x0004)
	int                                                m_MaxRank;                                                // 0x0008(0x0004)
	int                                                m_LevelOffset;                                            // 0x000C(0x0004)
	int                                                m_LevelsPerRank;                                          // 0x0010(0x0004)
	int                                                m_VisualOrder;                                            // 0x0014(0x0004)
	TArray<int>                                        m_PrereqTalentIDArray;                                    // 0x0018(0x000C) (NeedCtorLink)
	TArray<int>                                        m_PrereqTalentRankArray;                                  // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioTalentDebugData
// 0x000C
struct FBioTalentDebugData
{
	int                                                m_ID;                                                     // 0x0000(0x0004)
	int                                                m_Rank;                                                   // 0x0004(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentDebugData.m_Name
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioTalentDynamicData
// 0x0040
struct FBioTalentDynamicData
{
	unsigned long                                      m_IsUnlocked : 1;                                         // 0x0000(0x0004)
	int                                                m_CurrentRank;                                            // 0x0004(0x0004)
	int                                                m_AvailableRank;                                          // 0x0008(0x0004)
	int                                                m_MaxRank;                                                // 0x000C(0x0004)
	TArray<int>                                        m_RankIconArray;                                          // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) UNKNOWN PROPERTY: ArrayProperty BIOC_Base.BioTalentContainer.BioTalentDynamicData.m_RankNameArray
	unsigned char                                      UnknownData01[0xC];                                       // 0x0028(0x000C) UNKNOWN PROPERTY: ArrayProperty BIOC_Base.BioTalentContainer.BioTalentDynamicData.m_RankDescArray
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) UNKNOWN PROPERTY: ArrayProperty BIOC_Base.BioTalentContainer.BioTalentDynamicData.m_RankUnlockBlurbArray
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioTalentStaticData
// 0x0018
struct FBioTalentStaticData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentStaticData.m_TalentName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentStaticData.m_TalentDesc
	int                                                m_MaxRank;                                                // 0x0008(0x0004)
	struct FString                                     m_sUnlockDetails;                                         // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioTalentContainer.BioTalentSpecification
// 0x0040
struct FBioTalentSpecification
{
	class UBioTalent*                                  m_Talent;                                                 // 0x0000(0x0004) (ExportObject, NeedCtorLink, EditInline)
	TArray<int>                                        m_PrereqTalentIDArray;                                    // 0x0004(0x000C) (ExportObject, NeedCtorLink, EditInline)
	TArray<int>                                        m_PrereqTalentRankArray;                                  // 0x0010(0x000C) (ExportObject, NeedCtorLink, EditInline)
	int                                                m_MaxRank;                                                // 0x001C(0x0004)
	int                                                m_LevelOffset;                                            // 0x0020(0x0004)
	int                                                m_LevelsPerRank;                                          // 0x0024(0x0004)
	int                                                m_OriginalRank;                                           // 0x0028(0x0004)
	int                                                m_VisualOrder;                                            // 0x002C(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentSpecification.m_LocalizedName
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentSpecification.m_LocalizedDesc
	unsigned char                                      UnknownData02[0x4];                                       // 0x0038(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentSpecification.m_StringForUnlockReferences
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioTalentContainer.BioTalentSpecification.m_BlurbForUnlockReferences
};

// ScriptStruct BIOC_Base.BioPlayerController.BioActionMapping
// 0x0010
struct FBioActionMapping
{
	TEnumAsByte<EBioActionType>                        eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       nmPower;                                                  // 0x0004(0x0008)
	class APawn*                                       oPawn;                                                    // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioPlayerController.BioPlayerControllerTwistThresholdSpec
// 0x0008
struct FBioPlayerControllerTwistThresholdSpec
{
	TEnumAsByte<EActionStateVariable>                  m_eActionState;                                           // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_fTwistThreshold;                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioPlayerController.PostProcessInfo
// 0x0014
struct FPostProcessInfo
{
	TEnumAsByte<ETVType>                               Preset;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Shadows;                                                  // 0x0004(0x0004)
	float                                              MidTones;                                                 // 0x0008(0x0004)
	float                                              HighLights;                                               // 0x000C(0x0004)
	float                                              Desaturation;                                             // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioCheatManager.PowerAimingInfo
// 0x0030
struct FPowerAimingInfo
{
	struct FVector                                     m_vStartLocation1;                                        // 0x0000(0x000C)
	struct FVector                                     m_vEndLocation1;                                          // 0x000C(0x000C)
	struct FVector                                     m_vStartLocation2;                                        // 0x0018(0x000C)
	struct FVector                                     m_vEndLocation2;                                          // 0x0024(0x000C)
};

// ScriptStruct BIOC_Base.BioCheatManager.BioDebugMessage
// 0x0014
struct FBioDebugMessage
{
	struct FString                                     sMessage;                                                 // 0x0000(0x000C) (NeedCtorLink)
	float                                              fStartTime;                                               // 0x000C(0x0004)
	float                                              fDisplayTime;                                             // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioPlayerInput.DebugMenuEntry
// 0x0018
struct FDebugMenuEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Command;                                                  // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioPlayerInput.TutorialCommandsDetails
// 0x0018
struct FTutorialCommandsDetails
{
	struct FString                                     srParseString;                                            // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Action;                                                   // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioPlayerSelection.BioSelection
// 0x000C
struct FBioSelection
{
	float                                              m_fAngle;                                                 // 0x0000(0x0004)
	float                                              m_fRange;                                                 // 0x0004(0x0004)
	class AActor*                                      m_pTarget;                                                // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioSquadAPI.SLocation
// 0x0010
struct FSLocation
{
	int                                                nNode;                                                    // 0x0000(0x0004)
	struct FVector                                     vPoint;                                                   // 0x0004(0x000C)
};

// ScriptStruct BIOC_Base.BioBaseSquad.MemberData
// 0x0070
struct FMemberData
{
	class APawn*                                       SquadMember;                                              // 0x0000(0x0004)
	struct FSLocation                                  EscapeLocation;                                           // 0x0004(0x0010)
	class ABioTacticalMoveToIndicator*                 oDestinationIndicator;                                    // 0x0014(0x0004)
	unsigned long                                      bMoveOrderAssigned : 1;                                   // 0x0018(0x0004)
	struct FVector                                     vMoveLocation;                                            // 0x001C(0x000C)
	float                                              fMoveDelayTime;                                           // 0x0028(0x0004)
	unsigned long                                      bCurrentlyMoving : 1;                                     // 0x002C(0x0004)
	unsigned long                                      bCoverAssigned : 1;                                       // 0x002C(0x0004)
	struct FCoverRecord                                stCoverToUse;                                             // 0x0030(0x0014)
	unsigned long                                      bActionOrderAssigned : 1;                                 // 0x0044(0x0004)
	TEnumAsByte<EBioTacticalAction>                    eAction;                                                  // 0x0048(0x0001)
	TEnumAsByte<EBioItemWeaponRangedType>              eSwitchWeapon;                                            // 0x0049(0x0001)
	TEnumAsByte<EFollowFormation>                      eFormation;                                               // 0x004A(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	struct FName                                       nmPower;                                                  // 0x004C(0x0008)
	struct FVector                                     vTarget;                                                  // 0x0054(0x000C)
	struct FVector                                     vHoldPosition;                                            // 0x0060(0x000C)
	class APawn*                                       oOrderedAttackTarget;                                     // 0x006C(0x0004)
};

// ScriptStruct BIOC_Base.BioBaseSquad.PathNodeData
// 0x0030
struct FPathNodeData
{
	TEnumAsByte<EPathNodeAction>                       NodeAction;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       NodeActionOn;                                             // 0x0004(0x0008)
	struct FVector                                     vPathNode;                                                // 0x000C(0x000C)
	struct FRotator                                    rRotation;                                                // 0x0018(0x000C)
	struct FRotator                                    rDirectionOfTravel;                                       // 0x0024(0x000C)
};

// ScriptStruct BIOC_Base.BioBaseSquad.StrategyChoice
// 0x0010
struct FStrategyChoice
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (Edit, EditConst)
	float                                              MaxLikelihood;                                            // 0x0008(0x0004) (Edit)
	float                                              CurrentLikelihood;                                        // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioBaseSquad.CapacityFilteringRecord
// 0x000C
struct FCapacityFilteringRecord
{
	TEnumAsByte<EBioCapMode>                           nCapMode;                                                 // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       nmTechnique;                                              // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct BIOC_Base.BioFormations.FormationPosition
// 0x0034
struct FFormationPosition
{
	int                                                EscapeDistance;                                           // 0x0000(0x0004)
	struct FVector                                     Formation;                                                // 0x0004(0x000C)
	struct FRotator                                    facing;                                                   // 0x0010(0x000C)
	struct FVector                                     InvFormation;                                             // 0x001C(0x000C)
	struct FRotator                                    InvFacing;                                                // 0x0028(0x000C)
};

// ScriptStruct BIOC_Base.BioPlayerSquad.SquadTargetData
// 0x0020
struct FSquadTargetData
{
	class AActor*                                      oTarget;                                                  // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	int                                                nActionIcon;                                              // 0x0010(0x0004)
	int                                                nSquadIcon;                                               // 0x0014(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0018(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0018(0x0004)
	float                                              fTimeOut;                                                 // 0x001C(0x0004)
};

// ScriptStruct BIOC_Base.BioPawn.BioGestDataKey
// 0x006C
struct FBioGestDataKey
{
	struct FBioGestureData                             tRawData;                                                 // 0x0000(0x0064) (NeedCtorLink)
	class UBioGestChainTree*                           pChainTree;                                               // 0x0064(0x0004)
	unsigned long                                      bUseDynamicAnimSets : 1;                                  // 0x0068(0x0004)
};

// ScriptStruct BIOC_Base.BioPawn.PawnFootStepData
// 0x0010
struct FPawnFootStepData
{
	int                                                BoneIndex;                                                // 0x0000(0x0004)
	float                                              TimeOutRemaining;                                         // 0x0004(0x0004)
	unsigned long                                      FootStepRequested : 1;                                    // 0x0008(0x0004)
	class UBioVISFootstep*                             FootStepVIS;                                              // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioWeaponRanged.BioWeaponTraceInfo
// 0x0048
struct FBioWeaponTraceInfo
{
	TEnumAsByte<EBioWeaponHit>                         m_eHit;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      m_pHitActor;                                              // 0x0004(0x0004)
	struct FVector                                     m_vHitPoint;                                              // 0x0008(0x000C)
	struct FVector                                     m_vHitNormal;                                             // 0x0014(0x000C)
	struct FTraceHitInfo                               m_hitInfo;                                                // 0x0020(0x001C) (Component)
	struct FVector                                     m_vTrace;                                                 // 0x003C(0x000C)
};

// ScriptStruct BIOC_Base.BioWeaponRanged.ImpactDelayInfo
// 0x0010
struct FImpactDelayInfo
{
	TArray<struct FBioWeaponTraceInfo>                 aImpactTraceInfo;                                         // 0x0000(0x000C) (Component, NeedCtorLink)
	float                                              fTimeRemaining;                                           // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioGamePropertyEffectLevelIterator.BioEffectLevelIteratorPair
// 0x0010
struct FBioEffectLevelIteratorPair
{
	int                                                m_nGameProperty;                                          // 0x0000(0x0004)
	TArray<int>                                        m_aGPEffectRows;                                          // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioGamePropertyImporter.BioGPLoadData
// 0x0024
struct FBioGPLoadData
{
	class UObject*                                     oOwner;                                                   // 0x0000(0x0004)
	class UBioGamePropertyContainer*                   oContainer;                                               // 0x0004(0x0004)
	int                                                nGamePropId;                                              // 0x0008(0x0004)
	class UBio2DA*                                     oFXLevelTable;                                            // 0x000C(0x0004)
	int                                                m_nPowerLevel;                                            // 0x0010(0x0004)
	TArray<int>                                        aEffectLevelRows;                                         // 0x0014(0x000C) (NeedCtorLink)
	int                                                m_nMaxRanks;                                              // 0x0020(0x0004)
};

// ScriptStruct BIOC_Base.BioGamePropertyManager.BioGamePropertyManagerTimedOutTicked
// 0x0008
struct FBioGamePropertyManagerTimedOutTicked
{
	class UBioGameProperty*                            m_pGP;                                                    // 0x0000(0x0004)
	float                                              m_fTimeRemaining;                                         // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGamePropertyTimer.BioGPTimingData
// 0x0010
struct FBioGPTimingData
{
	float                                              fTime;                                                    // 0x0000(0x0004)
	class UBioGameProperty*                            oGP;                                                      // 0x0004(0x0004)
	TEnumAsByte<EBioGPTimingType>                      eTimingType;                                              // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      bFrameTicked : 1;                                         // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioGestureLangOverride.BioGestLangOverride
// 0x0018
struct FBioGestLangOverride
{
	struct FName                                       nmAnimToOverride;                                         // 0x0000(0x0008)
	struct FName                                       nmOverrideSet;                                            // 0x0008(0x0008)
	struct FName                                       nmOverrideSeq;                                            // 0x0010(0x0008)
};

// ScriptStruct BIOC_Base.BioGestureRulesData.BioGestRuleItem
// 0x0028
struct FBioGestRuleItem
{
	struct FName                                       nmPose1;                                                  // 0x0000(0x0008)
	struct FName                                       nmPose2;                                                  // 0x0008(0x0008)
	struct FName                                       nmGesture;                                                // 0x0010(0x0008)
	struct FName                                       nmAnimSet;                                                // 0x0018(0x0008)
	struct FName                                       nmAnimSeq;                                                // 0x0020(0x0008)
};

// ScriptStruct BIOC_Base.BioGestureRulesData.BioARPUBodyConfig
// 0x0024
struct FBioARPUBodyConfig
{
	struct FName                                       nmCurveName;                                              // 0x0000(0x0008)
	unsigned long                                      bUsesSingleKeyframe : 1;                                  // 0x0008(0x0004)
	struct FName                                       nmAnimSet;                                                // 0x000C(0x0008)
	struct FName                                       nmAnimSeq;                                                // 0x0014(0x0008)
	float                                              fStartBlendDuration;                                      // 0x001C(0x0004)
	float                                              fEndBlendDuration;                                        // 0x0020(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphFace.MorphFeature
// 0x000C
struct FMorphFeature
{
	struct FName                                       sFeatureName;                                             // 0x0000(0x0008)
	float                                              Offset;                                                   // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphFace.OffsetBonePos
// 0x0014
struct FOffsetBonePos
{
	struct FName                                       nName;                                                    // 0x0000(0x0008)
	struct FVector                                     vPos;                                                     // 0x0008(0x000C)
};

// ScriptStruct BIOC_Base.BioMorphUtility.TextureData
// 0x000C
struct FTextureData
{
	struct FName                                       m_nParamName;                                             // 0x0000(0x0008)
	class UTexture*                                    m_oTexture;                                               // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphUtility.ScalarData
// 0x000C
struct FScalarData
{
	struct FName                                       m_nParamName;                                             // 0x0000(0x0008)
	float                                              m_fScalarValue;                                           // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphUtility.HairComponent
// 0x0048
struct FHairComponent
{
	struct FString                                     StyleName;                                                // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     MeshName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	class USkeletalMesh*                               HairMesh;                                                 // 0x0018(0x0004)
	struct FString                                     ScalpMorphName;                                           // 0x001C(0x000C) (NeedCtorLink)
	float                                              ScalpMorphWeight;                                         // 0x0028(0x0004)
	TEnumAsByte<EBioMorphUtilityHairComponentType>     HairType;                                                 // 0x002C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TArray<struct FTextureData>                        m_aHairTextures;                                          // 0x0030(0x000C) (NeedCtorLink)
	TArray<struct FScalarData>                         m_aHairScalars;                                           // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.HairData
// 0x0024
struct FHairData
{
	struct FString                                     PackageName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     HairMorphSpecMaskName;                                    // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FHairComponent>                      HairComponents;                                           // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.AdditionalData
// 0x0024
struct FAdditionalData
{
	struct FHairData                                   Hair;                                                     // 0x0000(0x0024) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.SliderModifierSliderData
// 0x001C
struct FSliderModifierSliderData
{
	TArray<class UBioMorphFaceFESliderBase*>           m_aoSliderData;                                           // 0x0000(0x000C) (NeedCtorLink)
	TArray<float>                                      m_fRandWeights;                                           // 0x000C(0x000C) (NeedCtorLink)
	float                                              m_fRandWeightsTotal;                                      // 0x0018(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.SliderModifier
// 0x0030
struct FSliderModifier
{
	struct FString                                     m_sName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<float>                                      m_aRandMin;                                               // 0x000C(0x000C) (NeedCtorLink)
	TArray<float>                                      m_aRandMax;                                               // 0x0018(0x000C) (NeedCtorLink)
	TArray<struct FSliderModifierSliderData>           m_aSliders;                                               // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.Slider
// 0x0054
struct FSlider
{
	struct FString                                     m_sName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	int                                                m_iIndex;                                                 // 0x000C(0x0004)
	int                                                m_iValue;                                                 // 0x0010(0x0004)
	unsigned long                                      m_bNotched : 1;                                           // 0x0014(0x0004)
	int                                                m_iSteps;                                                 // 0x0018(0x0004)
	int                                                m_iStringRef;                                             // 0x001C(0x0004)
	int                                                m_iDescriptionStringRef;                                  // 0x0020(0x0004)
	TArray<class UBioMorphFaceFESliderBase*>           m_aoSliderData;                                           // 0x0024(0x000C) (NeedCtorLink)
	TArray<float>                                      m_fRandWeights;                                           // 0x0030(0x000C) (NeedCtorLink)
	float                                              m_fRandWeightsTotal;                                      // 0x003C(0x0004)
	float                                              m_fRandMin;                                               // 0x0040(0x0004)
	float                                              m_fRandMax;                                               // 0x0044(0x0004)
	TArray<struct FSliderModifier>                     m_aSliderModifiers;                                       // 0x0048(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.Category
// 0x0024
struct FCategory
{
	struct FString                                     m_sCatName;                                               // 0x0000(0x000C) (NeedCtorLink)
	int                                                m_iCatIndex;                                              // 0x000C(0x0004)
	int                                                m_iStringRef;                                             // 0x0010(0x0004)
	int                                                m_iDescriptionStringRef;                                  // 0x0014(0x0004)
	TArray<struct FSlider>                             m_aoSliders;                                              // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.FaceData
// 0x0030
struct FFaceData
{
	struct FAdditionalData                             m_pAdditionalParams;                                      // 0x0000(0x0024) (NeedCtorLink)
	TArray<struct FCategory>                           m_oCategories;                                            // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.BaseSliders
// 0x0010
struct FBaseSliders
{
	struct FString                                     m_sSliderName;                                            // 0x0000(0x000C) (NeedCtorLink)
	float                                              m_fValue;                                                 // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioMorphFaceFrontEnd.BaseHeads
// 0x000C
struct FBaseHeads
{
	TArray<struct FBaseSliders>                        m_fBaseHeadSettings;                                      // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioLookAtDefinition.LookAtBoneDefinition
// 0x0040
struct FLookAtBoneDefinition
{
	struct FName                                       m_nBoneName;                                              // 0x0000(0x0008) (Edit)
	float                                              m_fLimit;                                                 // 0x0008(0x0004) (Edit)
	float                                              m_fUpDownLimit;                                           // 0x000C(0x0004) (Edit)
	float                                              m_fDelay;                                                 // 0x0010(0x0004) (Edit)
	unsigned char                                      m_nLookAxis;                                              // 0x0014(0x0001) (Edit)
	unsigned char                                      m_nUpAxis;                                                // 0x0015(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	unsigned long                                      m_bSeparateUpDownLimit : 1;                               // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUseUpAxis : 1;                                         // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUpAxisInLocalSpace : 1;                                // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bLookAtInverted : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUpAxisInverted : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUseAcceleration : 1;                                   // 0x0018(0x0004) (Edit)
	float                                              m_fSpeedFactor;                                           // 0x001C(0x0004) (Edit)
	float                                              m_fMaxAcceleration;                                       // 0x0020(0x0004) (Edit)
	float                                              m_fConversationStrength;                                  // 0x0024(0x0004) (Edit)
	unsigned long                                      m_bUseMasterBone : 1;                                     // 0x0028(0x0004) (Edit)
	struct FName                                       m_nmMasterBoneName;                                       // 0x002C(0x0008) (Edit)
	TArray<struct FName>                               m_anTargetBones;                                          // 0x0034(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSFHandler_BrowserWheel.BWPageStruct
// 0x0010
struct FBWPageStruct
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_BrowserWheel.BWPageStruct.srLabel
	class UBioSFHandler*                               oHandler;                                                 // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_Credits.BioCreditsDetails
// 0x000C
struct FBioCreditsDetails
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_Credits.BioCreditsDetails.srHeading
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_Credits.BioCreditsDetails.srTitle
	unsigned char                                      UnknownData02[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_Credits.BioCreditsDetails.srNames
};

// ScriptStruct BIOC_Base.BioSFHandler_DesignerUI.BioDUITimerDetails
// 0x0014
struct FBioDUITimerDetails
{
	float                                              fCurTime;                                                 // 0x0000(0x0004)
	float                                              fEndTime;                                                 // 0x0004(0x0004)
	float                                              fIntervalTime;                                            // 0x0008(0x0004)
	float                                              fNextInterval;                                            // 0x000C(0x0004)
	unsigned long                                      bIncrementing : 1;                                        // 0x0010(0x0004)
	unsigned long                                      bIntervalTriggered : 1;                                   // 0x0010(0x0004)
	unsigned long                                      bCompleted : 1;                                           // 0x0010(0x0004)
	unsigned long                                      bRunning : 1;                                             // 0x0010(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0010(0x0004)
	unsigned long                                      bFirstUpdate : 1;                                         // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_DesignerUI.BioDUIPulseDetails
// 0x0010
struct FBioDUIPulseDetails
{
	TEnumAsByte<EBioDUIElements>                       nElement;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              fHalfCycleTime;                                           // 0x0004(0x0004)
	float                                              fMinAlpha;                                                // 0x0008(0x0004)
	float                                              fCurCycle;                                                // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_DesignerUI.BioDUIElementStatus
// 0x0004
struct FBioDUIElementStatus
{
	unsigned long                                      bVisible : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bFading : 1;                                              // 0x0000(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_HUD.CustomMappingDisplayInfo
// 0x0024
struct FCustomMappingDisplayInfo
{
	struct FString                                     sTitle;                                                   // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<EHUDPowerMapSlots>                     eMapSlot;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nActivatable;                                             // 0x0010(0x0004)
	int                                                nIconRef;                                                 // 0x0014(0x0004)
	int                                                nBarBehaviorType;                                         // 0x0018(0x0004)
	int                                                nBarPercentage;                                           // 0x001C(0x0004)
	int                                                nQtyConsumable;                                           // 0x0020(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_Journal.GuiQuestInfo
// 0x0018
struct FGuiQuestInfo
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nAdded;                                                   // 0x0004(0x0004)
	struct FString                                     sName;                                                    // 0x0008(0x000C) (NeedCtorLink)
	unsigned long                                      bComplete : 1;                                            // 0x0014(0x0004)
	unsigned long                                      bUpdated : 1;                                             // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.BioSaveGame.SaveGameAreaInfo
// 0x002C
struct FSaveGameAreaInfo
{
	int                                                m_nAreaId;                                                // 0x0000(0x0004)
	struct FString                                     m_sMap;                                                   // 0x0004(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSaveGame.SaveGameAreaInfo.m_nMapNameRef
	struct FString                                     m_sImageResource;                                         // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     m_sSWFStopPoint;                                          // 0x0020(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSaveGame.SaveGameRecord
// 0x00C4
struct FSaveGameRecord
{
	struct FString                                     m_filename;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     m_saveName;                                               // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     m_saveNameShort;                                          // 0x0018(0x000C) (NeedCtorLink)
	int                                                m_sec;                                                    // 0x0024(0x0004)
	int                                                m_Min;                                                    // 0x0028(0x0004)
	int                                                m_hr;                                                     // 0x002C(0x0004)
	int                                                m_day;                                                    // 0x0030(0x0004)
	int                                                m_mo;                                                     // 0x0034(0x0004)
	int                                                m_year;                                                   // 0x0038(0x0004)
	int                                                m_secPlayed;                                              // 0x003C(0x0004)
	int                                                m_minPlayed;                                              // 0x0040(0x0004)
	int                                                m_hrPlayed;                                               // 0x0044(0x0004)
	struct FSaveGameAreaInfo                           m_SaveAreaInfo;                                           // 0x0048(0x002C) (NeedCtorLink)
	struct FSaveGameAreaInfo                           m_ParentSaveAreaInfo;                                     // 0x0074(0x002C) (NeedCtorLink)
	struct FString                                     m_charId;                                                 // 0x00A0(0x000C) (NeedCtorLink)
	int                                                m_ClassId;                                                // 0x00AC(0x0004)
	int                                                m_CharcterLevel;                                          // 0x00B0(0x0004)
	unsigned long                                      m_bCanDelete : 1;                                         // 0x00B4(0x0004)
	int                                                m_DeviceId;                                               // 0x00B8(0x0004)
	int                                                m_SaveGameNumber;                                         // 0x00BC(0x0004)
	unsigned long                                      m_bIsAutoSave : 1;                                        // 0x00C0(0x0004)
	unsigned long                                      m_bIsQuickSave : 1;                                       // 0x00C0(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_MessageBox.BioMessageBoxOptionalParams
// 0x0018
struct FBioMessageBoxOptionalParams
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_MessageBox.BioMessageBoxOptionalParams.srAText
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_MessageBox.BioMessageBoxOptionalParams.srBText
	unsigned long                                      bNoFade : 1;                                              // 0x0008(0x0004)
	TEnumAsByte<EBioMessageBoxIconSets>                nIconSet;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nIconIndex;                                               // 0x0010(0x0004)
	unsigned long                                      bModal : 1;                                               // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.MassEffectGuiManager.BioTutorialParams
// 0x0038
struct FBioTutorialParams
{
	struct FName                                       nmTutorial;                                               // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.MassEffectGuiManager.BioTutorialParams.srTutorial
	float                                              fTime;                                                    // 0x000C(0x0004)
	TEnumAsByte<EBioTutorialPosition>                  nPosition;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       nmHilightElement;                                         // 0x0014(0x0008)
	class UObject*                                     oCallbackObject;                                          // 0x001C(0x0004)
	struct FName                                       nmCallbackFunction;                                       // 0x0020(0x0008)
	unsigned long                                      bDoNotCacheInputMode : 1;                                 // 0x0028(0x0004)
	struct FString                                     sTutorial;                                                // 0x002C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSFHandler_PCSettings.BioScreenResolution
// 0x000C
struct FBioScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004)
	int                                                Height;                                                   // 0x0004(0x0004)
	int                                                SizeID;                                                   // 0x0008(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_PCSettings.BindingSetupDetails
// 0x003C
struct FBindingSetupDetails
{
	struct FString                                     srTitle;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Action;                                                   // 0x000C(0x000C) (NeedCtorLink)
	struct FName                                       DefaultKeyPrimary;                                        // 0x0018(0x0008)
	struct FName                                       DefaultKeySecondary;                                      // 0x0020(0x0008)
	struct FName                                       KeyPrimary;                                               // 0x0028(0x0008)
	struct FName                                       KeySecondary;                                             // 0x0030(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioSFHandler_PCSettings.BindingSetupDetails.HelpText
};

// ScriptStruct BIOC_Base.BioSFHandler_PCSettings.sConstBinding
// 0x0014
struct FsConstBinding
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	struct FString                                     Command;                                                  // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSFHandler_Reticule.ReticuleInfo
// 0x002C
struct FReticuleInfo
{
	struct FVector                                     m_vPosition;                                              // 0x0000(0x000C)
	float                                              m_fRadius;                                                // 0x000C(0x0004)
	unsigned long                                      m_bDisplayCrosshair : 1;                                  // 0x0010(0x0004)
	TEnumAsByte<EReticuleMode>                         m_eMode;                                                  // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              m_fModeTotalTime;                                         // 0x0018(0x0004)
	float                                              m_fModeTimeRemaining;                                     // 0x001C(0x0004)
	float                                              m_fDistanceToTarget;                                      // 0x0020(0x0004)
	float                                              m_fMagnificationLevel;                                    // 0x0024(0x0004)
	unsigned long                                      m_bIsMagneticLocked : 1;                                  // 0x0028(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_Reticule.SelectionIndicatorInfo
// 0x0024
struct FSelectionIndicatorInfo
{
	struct FVector                                     m_vPosition;                                              // 0x0000(0x000C)
	unsigned long                                      m_bVisible : 1;                                           // 0x000C(0x0004)
	unsigned long                                      m_bActivatable : 1;                                       // 0x000C(0x0004)
	unsigned long                                      m_bHostile : 1;                                           // 0x000C(0x0004)
	int                                                m_nScale;                                                 // 0x0010(0x0004)
	TEnumAsByte<EHUDObjectType>                        m_eObjectType;                                            // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              m_fTimeSinceSelectionChanged;                             // 0x0018(0x0004)
	float                                              m_fTimeOnPreviousSelection;                               // 0x001C(0x0004)
	unsigned long                                      m_bResetTargeting : 1;                                    // 0x0020(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_Reticule.LOSIndicatorInfo
// 0x0015
struct FLOSIndicatorInfo
{
	struct FVector                                     m_vPosition;                                              // 0x0000(0x000C)
	unsigned long                                      m_bLOS : 1;                                               // 0x000C(0x0004)
	int                                                m_nScale;                                                 // 0x0010(0x0004)
	TEnumAsByte<EHUDObjectType>                        m_eObjectType;                                            // 0x0014(0x0001)
};

// ScriptStruct BIOC_Base.MassEffectGuiManager.BioMessageBoxData
// 0x0010
struct FBioMessageBoxData
{
	class UObject*                                     m_pCallbackObject;                                        // 0x0000(0x0004)
	struct FName                                       m_nmCallbackFunction;                                     // 0x0004(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.MassEffectGuiManager.BioMessageBoxData.m_srTutorial
};

// ScriptStruct BIOC_Base.BioDeathVFXCore.BioDeathVFXSpec
// 0x0028
struct FBioDeathVFXSpec
{
	struct FName                                       m_nmLabel;                                                // 0x0000(0x0008) (Edit)
	class UBioVFXTemplate*                             m_pExplosionVFXTemplate;                                  // 0x0008(0x0004) (Edit)
	class UBioVFXTemplate*                             m_pCrustVFXTemplate;                                      // 0x000C(0x0004) (Edit)
	unsigned long                                      m_bIsTargetDeletedOnCrustEffectCompletion : 1;            // 0x0010(0x0004) (Edit)
	unsigned long                                      m_bIsImpulseEnabled : 1;                                  // 0x0010(0x0004) (Edit)
	float                                              m_fImpulseRadius;                                         // 0x0014(0x0004) (Edit)
	float                                              m_fImpulseMagnitude;                                      // 0x0018(0x0004) (Edit)
	struct FVector                                     m_vImpulseOriginOffset;                                   // 0x001C(0x000C) (Edit)
};

// ScriptStruct BIOC_Base.BioShop.ResourceShopInfo
// 0x0014
struct FResourceShopInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioShop.ResourceShopInfo.m_Name
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) UNKNOWN PROPERTY: StringRefProperty BIOC_Base.BioShop.ResourceShopInfo.m_Description
	int                                                m_lotSize;                                                // 0x0008(0x0004)
	float                                              m_unitPrice;                                              // 0x000C(0x0004)
	int                                                m_iconIndex;                                              // 0x0010(0x0004)
};

// ScriptStruct BIOC_Base.BioLevelSaveObject.SavedLootBag
// 0x0018
struct FSavedLootBag
{
	struct FVector                                     m_vPosition;                                              // 0x0000(0x000C)
	struct FString                                     m_sActorType;                                             // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSaveGame.HenchmanLookup
// 0x0014
struct FHenchmanLookup
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	class UBioBaseSaveObject*                          Save;                                                     // 0x0008(0x0004)
	struct FName                                       nmMappedPower;                                            // 0x000C(0x0008)
};

// ScriptStruct BIOC_Base.BioWorldSaveObject.LevelLookup
// 0x0010
struct FLevelLookup
{
	struct FString                                     m_Name;                                                   // 0x0000(0x000C) (NeedCtorLink)
	class UBioLevelSaveObject*                         m_Save;                                                   // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioForceFeedbackPlayer.BioForceFeedbackPlayerSpec
// 0x0008
struct FBioForceFeedbackPlayerSpec
{
	TEnumAsByte<EBioForceFeedbackPlayer>               m_eLabel;                                                 // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UForceFeedbackWaveform*                      m_pWaveform;                                              // 0x0004(0x0004) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioForceFeedbackPlayer.BioForceFeedbackPlayerWeaponSpec
// 0x0008
struct FBioForceFeedbackPlayerWeaponSpec
{
	TEnumAsByte<EBioItemWeaponRangedType>              m_eLabel;                                                 // 0x0000(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UForceFeedbackWaveform*                      m_pWaveform;                                              // 0x0004(0x0004) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioBaseAppearance.MorphFeatureModelType
// 0x0010
struct FMorphFeatureModelType
{
	struct FName                                       sFeatureName;                                             // 0x0000(0x0008)
	class USkeletalMeshComponent*                      MinModel;                                                 // 0x0008(0x0004) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      MaxModel;                                                 // 0x000C(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct BIOC_Base.BioBaseAppearance.MorphFeatureType
// 0x0008
struct FMorphFeatureType
{
	struct FName                                       sFeatureName;                                             // 0x0000(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioBaseAppearancePlaceable.StaticAttachments
// 0x000C
struct FStaticAttachments
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendMultiAdditive.BioChildActivateData
// 0x0010
struct FBioChildActivateData
{
	unsigned long                                      bApplyData : 1;                                           // 0x0000(0x0004)
	float                                              fFinalWeight;                                             // 0x0004(0x0004)
	float                                              fRemainingTime;                                           // 0x0008(0x0004)
	float                                              fTotalBlendTime;                                          // 0x000C(0x0004)
};

// ScriptStruct BIOC_Base.BioAnimNodeBlendPoseAndGestures.BioEndBlendData
// 0x0008
struct FBioEndBlendData
{
	float                                              fEndBlendStartTime;                                       // 0x0000(0x0004)
	float                                              fEndBlendDuration;                                        // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioAppearanceItemSophisticated.WeaponEffects
// 0x0018
struct FWeaponEffects
{
	class UBioVISWeapon*                               VisualImpactSet;                                          // 0x0000(0x0004) (Edit)
	class UBioVFXTemplate*                             vfxMuzzleFlash;                                           // 0x0004(0x0004) (Edit)
	class UBioVFXTemplate*                             vfxMuzzleFlash2;                                          // 0x0008(0x0004) (Edit)
	class UBioVFXTemplate*                             vfxTracer;                                                // 0x000C(0x0004) (Edit)
	class UBioVFXTemplate*                             vfxCoolDown;                                              // 0x0010(0x0004) (Edit)
	class UBioVFXTemplate*                             vfxSabotage;                                              // 0x0014(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioBaseActivity.ActivityProp
// 0x000C
struct FActivityProp
{
	class UStaticMesh*                                 m_oStaticMesh;                                            // 0x0000(0x0004) (Edit)
	struct FName                                       m_nAttachlocation;                                        // 0x0004(0x0008) (Edit)
};

// ScriptStruct BIOC_Base.BioCameraBehaviorGalaxy.BioMassRelayLine
// 0x006C
struct FBioMassRelayLine
{
	int                                                m_nStartClusterIdx;                                       // 0x0000(0x0004) (Edit)
	int                                                m_nEndClusterIdx;                                         // 0x0004(0x0004) (Edit)
	struct FString                                     m_sStartClusterLabel;                                     // 0x0008(0x000C) (Edit, NeedCtorLink)
	struct FString                                     m_sEndClusterLabel;                                       // 0x0014(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     m_vLeftEndPosition;                                       // 0x0020(0x000C) (Edit)
	struct FVector                                     m_vRightEndPosition;                                      // 0x002C(0x000C) (Edit)
	struct FVector                                     m_vMiddlePosition;                                        // 0x0038(0x000C) (Edit)
	struct FVector                                     m_vDrawScale;                                             // 0x0044(0x000C) (Edit)
	struct FRotator                                    m_rOrientation;                                           // 0x0050(0x000C) (Edit)
	class AActor*                                      m_pLeftEndActor;                                          // 0x005C(0x0004) (Edit)
	class AActor*                                      m_pRighEndActor;                                          // 0x0060(0x0004) (Edit)
	class AActor*                                      m_pMiddleActor;                                           // 0x0064(0x0004) (Edit)
	unsigned long                                      m_bIsGlowing : 1;                                         // 0x0068(0x0004) (Edit)
};

// ScriptStruct BIOC_Base.BioCameraManager.BioCameraManagerTransitionSpec
// 0x0008
struct FBioCameraManagerTransitionSpec
{
	int                                                m_nBehaviorHandle;                                        // 0x0000(0x0004)
	class UBioCameraTransition*                        m_pTransition;                                            // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackGesture.BioGestTrackPriority
// 0x0008
struct FBioGestTrackPriority
{
	int                                                nTrackIndex;                                              // 0x0000(0x0004)
	int                                                nPriority;                                                // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackGesture.BioGestureRenameData
// 0x0018
struct FBioGestureRenameData
{
	struct FName                                       nmOldAnim;                                                // 0x0000(0x0008)
	struct FName                                       nmNewSet;                                                 // 0x0008(0x0008)
	struct FName                                       nmNewAnim;                                                // 0x0010(0x0008)
};

// ScriptStruct BIOC_Base.BioEvtSysTrackVOElementsInst.BioVOActorData
// 0x0028
struct FBioVOActorData
{
	class AActor*                                      pActor;                                                   // 0x0000(0x0004)
	unsigned long                                      bSpawned : 1;                                             // 0x0004(0x0004)
	struct FVector                                     vLastPos;                                                 // 0x0008(0x000C)
	struct FRotator                                    rLastRot;                                                 // 0x0014(0x000C)
	struct FName                                       nmStageNode;                                              // 0x0020(0x0008)
};

// ScriptStruct BIOC_Base.BioGameProperty.BioGamePropertyApplication
// 0x0008
struct FBioGamePropertyApplication
{
	class UObject*                                     m_pActualTarget;                                          // 0x0000(0x0004)
	class UBioGameEffect*                              m_pGE;                                                    // 0x0004(0x0004)
};

// ScriptStruct BIOC_Base.BioGestureRuntimeData.BioGestCharOverride
// 0x0048
struct FBioGestCharOverride
{
	struct FName                                       nmFemale_NATIVE_MIRROR;                                   // 0x0000(0x0008) (Const, Native)
	struct FName                                       nmAsari_NATIVE_MIRROR;                                    // 0x0008(0x0008) (Const, Native)
	struct FName                                       nmTurian_NATIVE_MIRROR;                                   // 0x0010(0x0008) (Const, Native)
	struct FName                                       nmSalarian_NATIVE_MIRROR;                                 // 0x0018(0x0008) (Const, Native)
	struct FName                                       nmQuarian_NATIVE_MIRROR;                                  // 0x0020(0x0008) (Const, Native)
	struct FName                                       nmOther_NATIVE_MIRROR;                                    // 0x0028(0x0008) (Const, Native)
	struct FName                                       nmKrogan_NATIVE_MIRROR;                                   // 0x0030(0x0008) (Const, Native)
	struct FName                                       nmGeth_NATIVE_MIRROR;                                     // 0x0038(0x0008) (Const, Native)
	struct FName                                       nmOther_Artificial_NATIVE_MIRROR;                         // 0x0040(0x0008) (Const, Native)
};

// ScriptStruct BIOC_Base.BioItemXModdableSaveObject.BioItemXModdableSaveObjectSlotSpec
// 0x0010
struct FBioItemXModdableSaveObjectSlotSpec
{
	int                                                m_nType;                                                  // 0x0000(0x0004)
	TArray<class UBioItemXModSaveObject*>              m_aXMod;                                                  // 0x0004(0x000C) (ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct BIOC_Base.BioMorphFace.BioDummyRenderCommandFence
// 0x0008
struct FBioDummyRenderCommandFence
{
	int                                                nDummy;                                                   // 0x0000(0x0004) (Const, Native)
	int                                                nDummy2;                                                  // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct BIOC_Base.BioMorphFaceSaveObject.VertexBuffer
// 0x000C
struct FVertexBuffer
{
	TArray<struct FVector>                             m_vPosition;                                              // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.MaterialComponent
// 0x0040
struct FMaterialComponent
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<EBioMorphUtilityComponentType>         Type;                                                     // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     Panel;                                                    // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     ParameterName;                                            // 0x0028(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Params;                                                   // 0x0034(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.MaterialGroup
// 0x0018
struct FMaterialGroup
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FMaterialComponent>                  Components;                                               // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.MaterialPanel
// 0x0018
struct FMaterialPanel
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FMaterialGroup>                      Groups;                                                   // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioMorphUtility.MaterialData
// 0x000C
struct FMaterialData
{
	TArray<struct FMaterialPanel>                      Panels;                                                   // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioPawn.BioGestDataCopy
// 0x004C
struct FBioGestDataCopy
{
	struct FName                                       nmPoseSet;                                                // 0x0000(0x0008)
	struct FName                                       nmPoseAnim;                                               // 0x0008(0x0008)
	struct FName                                       nmGestureSet;                                             // 0x0010(0x0008)
	struct FName                                       nmGestureAnim;                                            // 0x0018(0x0008)
	struct FName                                       nmTransitionSet;                                          // 0x0020(0x0008)
	struct FName                                       nmTransitionAnim;                                         // 0x0028(0x0008)
	float                                              fPlayRate;                                                // 0x0030(0x0004)
	float                                              fStartOffset;                                             // 0x0034(0x0004)
	float                                              fEndOffset;                                               // 0x0038(0x0004)
	unsigned long                                      bOneShotAnim : 1;                                         // 0x003C(0x0004)
	float                                              fStartBlendDuration;                                      // 0x0040(0x0004)
	float                                              fEndBlendDuration;                                        // 0x0044(0x0004)
	float                                              fWeight;                                                  // 0x0048(0x0004)
};

// ScriptStruct BIOC_Base.BioPlayerController.BioRadarData
// 0x003C
struct FBioRadarData
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	float                                              fPassTime;                                                // 0x0004(0x0004)
	TEnumAsByte<EBioRadarType>                         eRadarType;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     vPosition;                                                // 0x000C(0x000C)
	int                                                nSize;                                                    // 0x0018(0x0004)
	unsigned long                                      bPlayerLockedOn : 1;                                      // 0x001C(0x0004)
	int                                                nLast_Index;                                              // 0x0020(0x0004)
	TEnumAsByte<EBioRadarType>                         eLast_RadarType;                                          // 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     vLast_Position;                                           // 0x0028(0x000C)
	int                                                nLast_Size;                                               // 0x0034(0x0004)
	unsigned long                                      bLast_PlayerLockedOn : 1;                                 // 0x0038(0x0004)
};

// ScriptStruct BIOC_Base.BioPlayerController.BioRadarCacheUpdateData
// 0x0010
struct FBioRadarCacheUpdateData
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	struct FVector                                     vPosition;                                                // 0x0004(0x000C)
};

// ScriptStruct BIOC_Base.BioPlayerController.BioDamageIndicatorData
// 0x0004
struct FBioDamageIndicatorData
{
	float                                              fCoolDownTime;                                            // 0x0000(0x0004)
};

// ScriptStruct BIOC_Base.BioSeqAct_ActionStation.ActionStationOffsetData
// 0x0020
struct FActionStationOffsetData
{
	struct FName                                       nmAnimSet;                                                // 0x0000(0x0008) (Edit)
	struct FVector                                     vOffset;                                                  // 0x0008(0x000C) (Edit)
	struct FRotator                                    rRotation;                                                // 0x0014(0x000C) (Edit)
};

// ScriptStruct BIOC_Base.BioTimerList.BioTimer
// 0x0020
struct FBioTimer
{
	struct FScriptDelegate                             OnTimer;                                                  // 0x0000(0x000C) (NeedCtorLink)
	class UObject*                                     Params;                                                   // 0x000C(0x0004)
	float                                              fTickTime;                                                // 0x0010(0x0004)
	struct FString                                     sTimerName;                                               // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSFHandler_DataCodex.DataCodexEntryDetails
// 0x0018
struct FDataCodexEntryDetails
{
	int                                                nSectionID;                                               // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x000C) (NeedCtorLink)
	unsigned long                                      bUpdated : 1;                                             // 0x0010(0x0004)
	struct FPointer                                    pEntry;                                                   // 0x0014(0x0004)
};

// ScriptStruct BIOC_Base.BioSFHandler_HUD.BioHUDCachedInvoke
// 0x0014
struct FBioHUDCachedInvoke
{
	TEnumAsByte<EHUDInvokeLabel>                       eLabel;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nFramesTheSame;                                           // 0x0004(0x0004)
	TArray<struct FASParams>                           lstParams;                                                // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct BIOC_Base.BioSpectatorModeCamera.BioModelViewerCamera
// 0x0030
struct FBioModelViewerCamera
{
	struct FString                                     sName;                                                    // 0x0000(0x000C) (NeedCtorLink)
	struct FVector                                     vLocation;                                                // 0x000C(0x000C)
	struct FRotator                                    rRotation;                                                // 0x0018(0x000C)
	struct FRotator                                    rLockRotation;                                            // 0x0024(0x000C)
};

// ScriptStruct BIOC_Base.BioTimedActivity.TwitchRec
// 0x0008
struct FTwitchRec
{
	int                                                nTwitchAnim;                                              // 0x0000(0x0004) (Edit)
	float                                              fDelay;                                                   // 0x0004(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
