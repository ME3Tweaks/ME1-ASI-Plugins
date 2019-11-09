#pragma once

// Mass Effect (1.2.20820.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "ME1_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_DegToUU                                            182.044444444444
#define CONST_INDEX_NONE                                         -1
#define CONST_UUToDeg                                            0.005493164063
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_INVALID_STRINGREF                                  0
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_MaxInt                                             0x7fffffff
#define CONST_Pi                                                 3.1415926535897932
#define CONST_TICKPRIORITY_NUM                                   6
#define CONST_TICKPRIORITY_VERYLOW                               5
#define CONST_TICKPRIORITY_LOW                                   4
#define CONST_TICKPRIORITY_NORMAL                                3
#define CONST_TICKPRIORITY_HIGH                                  2
#define CONST_TICKPRIORITY_VERYHIGH                              1
#define CONST_TICKPRIORITY_ALWAYS                                0
#define CONST_TICKPRIORITY_INVALID                               -1

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                = 0,
	TG_DuringAsyncWork             = 1,
	TG_PostAsyncWork               = 2,
	TG_PostDirtyComponentsWork     = 3,
	TG_MAX                         = 4
};


// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_MAX                        = 5
};


// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEval        = 0,
	IMT_UseBrokenTangentEval       = 1,
	IMT_MAX                        = 2
};


// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                      = 0,
	AXIS_X                         = 1,
	AXIS_Y                         = 2,
	AXIS_BLANK                     = 3,
	AXIS_Z                         = 4,
	AXIS_MAX                       = 5
};


// Enum Core.BioPackageNamesInterface.EBioPackageNameCause
enum class EBioPackageNameCause : uint8_t
{
	BIO_PACKAGENAME_SUCCESS        = 0,
	BIO_PACKAGENAME_LENGTH         = 1,
	BIO_PACKAGENAME_RULE           = 2,
	BIO_PACKAGENAME_MAX            = 3
};


// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit)
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                                    // 0x0000(0x0004) (Edit)
	int                                                Yaw;                                                      // 0x0004(0x0004) (Edit)
	int                                                Roll;                                                     // 0x0008(0x0004) (Edit)
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit)
	float                                              G;                                                        // 0x0004(0x0004) (Edit)
	float                                              B;                                                        // 0x0008(0x0004) (Edit)
	float                                              A;                                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit)

	inline FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit)
	float                                              W;                                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct Core.Object.BioStrRes
// 0x0028
struct FBioStrRes
{
	struct FString                                     sText;                                                    // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     sSoundRef;                                                // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     sLipsyncRef;                                              // 0x0018(0x000C) (NeedCtorLink)
	float                                              fSoundLength;                                             // 0x0024(0x0004)
};

// ScriptStruct Core.Object.Pointer
// 0x0004
struct FPointer
{
	int                                                Dummy;                                                    // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                        // 0x0000(0x0004) (Const, Native)
	int                                                B;                                                        // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct Core.BioBaseTokenParser.BioDlgToken
// 0x0010
struct FBioDlgToken
{
	struct FString                                     sToken;                                                   // 0x0000(0x000C) (NeedCtorLink)
	int                                                nActionCode;                                              // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
	int                                                C;                                                        // 0x0008(0x0004)
	int                                                D;                                                        // 0x000C(0x0004)
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit)
	float                                              W;                                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct Core.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct Core.Object.RawDistribution
// 0x0018
struct FRawDistribution
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001)
	unsigned char                                      Op;                                                       // 0x0001(0x0001)
	unsigned char                                      LookupTableNumElements;                                   // 0x0002(0x0001)
	unsigned char                                      LookupTableChunkSize;                                     // 0x0003(0x0001)
	TArray<float>                                      LookupTable;                                              // 0x0004(0x000C) (NeedCtorLink)
	float                                              LookupTableTimeScale;                                     // 0x0010(0x0004)
	float                                              LookupTableStartTime;                                     // 0x0014(0x0004)
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0035
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	struct FQuat                                       OutVal;                                                   // 0x0004(0x0010) (Edit)
	struct FQuat                                       ArriveTangent;                                            // 0x0014(0x0010) (Edit)
	struct FQuat                                       LeaveTangent;                                             // 0x0024(0x0010) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (Edit)
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x000D
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit)
	struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit)
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (Edit)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (Edit)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (Edit)
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x000D
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                                   // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (Edit)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (Edit)
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x000D
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (Edit)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (Edit)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (Edit)
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x000D
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	float                                              OutVal;                                                   // 0x0004(0x0004) (Edit)
	float                                              ArriveTangent;                                            // 0x0008(0x0004) (Edit)
	float                                              LeaveTangent;                                             // 0x000C(0x0004) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (Edit)
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x000D
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                             // 0x000C(0x0001)
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit)
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C)
	float                                              SphereRadius;                                             // 0x0018(0x0004)
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001)
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit)
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x000C
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                                     // 0x0000(0x0004) (Const, Native)
	int                                                ArrayNum;                                                 // 0x0004(0x0004) (Const, Native)
	int                                                ArrayMax;                                                 // 0x0008(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0030
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                                  // 0x0000(0x0004) (Const, Native)
	int                                                BulkDataFlags;                                            // 0x0004(0x0004) (Const, Native)
	int                                                ElementCount;                                             // 0x0008(0x0004) (Const, Native)
	int                                                BulkDataOffsetInFile;                                     // 0x000C(0x0004) (Const, Native)
	int                                                BulkDataSizeOnDisk;                                       // 0x0010(0x0004) (Const, Native)
	int                                                SavedBulkDataFlags;                                       // 0x0014(0x0004) (Const, Native)
	int                                                SavedElementCount;                                        // 0x0018(0x0004) (Const, Native)
	int                                                SavedBulkDataOffsetInFile;                                // 0x001C(0x0004) (Const, Native)
	int                                                SavedBulkDataSizeOnDisk;                                  // 0x0020(0x0004) (Const, Native)
	struct FPointer                                    BulkData;                                                 // 0x0024(0x0004) (Const, Native)
	int                                                LockStatus;                                               // 0x0028(0x0004) (Const, Native)
	struct FPointer                                    AttachedAr;                                               // 0x002C(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0014
struct FMultiMap_Mirror
{
	struct FPointer                                    Pairs;                                                    // 0x0000(0x0004) (Const, Native)
	int                                                PairNum;                                                  // 0x0004(0x0004) (Const, Native)
	int                                                PairMax;                                                  // 0x0008(0x0004) (Const, Native)
	struct FPointer                                    Hash;                                                     // 0x000C(0x0004) (Const, Native)
	int                                                HashNum;                                                  // 0x0010(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.Map_Mirror
// 0x0014
struct FMap_Mirror
{
	struct FPointer                                    Pairs;                                                    // 0x0000(0x0004) (Const, Native)
	int                                                PairNum;                                                  // 0x0004(0x0004) (Const, Native)
	int                                                PairMax;                                                  // 0x0008(0x0004) (Const, Native)
	struct FPointer                                    Hash;                                                     // 0x000C(0x0004) (Const, Native)
	int                                                HashNum;                                                  // 0x0010(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.DynamicMap_Mirror
// 0x001C
struct FDynamicMap_Mirror
{
	struct FPointer                                    Hash;                                                     // 0x0000(0x0004) (Const, Native)
	int                                                HashSize;                                                 // 0x0004(0x0004) (Const, Native)
	int                                                Count;                                                    // 0x0008(0x0004) (Const, Native)
	TArray<int>                                        Pairs;                                                    // 0x000C(0x000C) (Const, Native)
	struct FPointer                                    FreePairs;                                                // 0x0018(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                                    // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                        // 0x0000(0x0004) (Const, Native)
	int                                                B;                                                        // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.ClassFuncPointer
// 0x0004
struct FClassFuncPointer
{
	int                                                Dummy;                                                    // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct Core.Object.FuncPointer
// 0x0004
struct FFuncPointer
{
	int                                                Dummy;                                                    // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0004 (0x001C - 0x0018)
struct FRawDistributionFloat : public FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                             // 0x0018(0x0004) (Edit, ExportObject, Component, NoClear, EditInline)
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0004 (0x001C - 0x0018)
struct FRawDistributionVector : public FRawDistribution
{
	class UDistributionVector*                         Distribution;                                             // 0x0018(0x0004) (Edit, ExportObject, Component, EditInline)
};

// ScriptStruct Core.Package.BioMissingResourceList
// 0x0010
struct FBioMissingResourceList
{
	int                                                bPackageOutOfDate;                                        // 0x0000(0x0004) (Const)
	TArray<struct FString>                             MissingResources;                                         // 0x0004(0x000C) (Const, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
