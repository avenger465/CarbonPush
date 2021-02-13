// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CARBONPUSHTWO_CardboardBox_generated_h
#error "CardboardBox.generated.h already included, missing '#pragma once' in CardboardBox.h"
#endif
#define CARBONPUSHTWO_CardboardBox_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACardboardBox(); \
	friend struct Z_Construct_UClass_ACardboardBox_Statics; \
public: \
	DECLARE_CLASS(ACardboardBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(ACardboardBox)


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACardboardBox(); \
	friend struct Z_Construct_UClass_ACardboardBox_Statics; \
public: \
	DECLARE_CLASS(ACardboardBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(ACardboardBox)


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACardboardBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACardboardBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACardboardBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACardboardBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACardboardBox(ACardboardBox&&); \
	NO_API ACardboardBox(const ACardboardBox&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACardboardBox(ACardboardBox&&); \
	NO_API ACardboardBox(const ACardboardBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACardboardBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACardboardBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACardboardBox)


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cardBoardBoxMesh() { return STRUCT_OFFSET(ACardboardBox, cardBoardBoxMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ACardboardBox, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__GameModeRef() { return STRUCT_OFFSET(ACardboardBox, GameModeRef); }


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_11_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class ACardboardBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_CardboardBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
