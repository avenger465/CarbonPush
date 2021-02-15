// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARBONPUSHTWO_Base_Character_generated_h
#error "Base_Character.generated.h already included, missing '#pragma once' in Base_Character.h"
#endif
#define CARBONPUSHTWO_Base_Character_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnPlayerStats); \
	DECLARE_FUNCTION(execThrowGrenade); \
	DECLARE_FUNCTION(execFire);


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnPlayerStats); \
	DECLARE_FUNCTION(execThrowGrenade); \
	DECLARE_FUNCTION(execFire);


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Character(); \
	friend struct Z_Construct_UClass_ABase_Character_Statics; \
public: \
	DECLARE_CLASS(ABase_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(ABase_Character)


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABase_Character(); \
	friend struct Z_Construct_UClass_ABase_Character_Statics; \
public: \
	DECLARE_CLASS(ABase_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(ABase_Character)


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Character(ABase_Character&&); \
	NO_API ABase_Character(const ABase_Character&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Character(ABase_Character&&); \
	NO_API ABase_Character(const ABase_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Character)


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABase_Character, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABase_Character, SpringArm); } \
	FORCEINLINE static uint32 __PPO__MiniMapArm() { return STRUCT_OFFSET(ABase_Character, MiniMapArm); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ABase_Character, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__MiniMapCamera() { return STRUCT_OFFSET(ABase_Character, MiniMapCamera); } \
	FORCEINLINE static uint32 __PPO__SpringArmLength() { return STRUCT_OFFSET(ABase_Character, SpringArmLength); } \
	FORCEINLINE static uint32 __PPO__Grenade() { return STRUCT_OFFSET(ABase_Character, Grenade); } \
	FORCEINLINE static uint32 __PPO__PlayerHealth() { return STRUCT_OFFSET(ABase_Character, PlayerHealth); } \
	FORCEINLINE static uint32 __PPO__GameModeRef() { return STRUCT_OFFSET(ABase_Character, GameModeRef); }


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_17_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class ABase_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_Base_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
