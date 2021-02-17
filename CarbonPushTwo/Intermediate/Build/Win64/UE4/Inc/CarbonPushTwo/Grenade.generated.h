// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef CARBONPUSHTWO_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define CARBONPUSHTWO_Grenade_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade)


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AGrenade, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AGrenade, Damage); } \
	FORCEINLINE static uint32 __PPO__GrenadeMesh() { return STRUCT_OFFSET(AGrenade, GrenadeMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGrenade, ProjectileMovement); }


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_11_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_Grenade_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
