// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARBONPUSHTWO_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define CARBONPUSHTWO_MainPlayerController_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnPlayersHealthPercentage); \
	DECLARE_FUNCTION(execReturnTotalAmmo); \
	DECLARE_FUNCTION(execReturnCurrentClip);


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnPlayersHealthPercentage); \
	DECLARE_FUNCTION(execReturnTotalAmmo); \
	DECLARE_FUNCTION(execReturnCurrentClip);


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerController)


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartWidget() { return STRUCT_OFFSET(AMainPlayerController, StartWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerInterfaceWidget() { return STRUCT_OFFSET(AMainPlayerController, PlayerInterfaceWidget); } \
	FORCEINLINE static uint32 __PPO__EndScreenWidget() { return STRUCT_OFFSET(AMainPlayerController, EndScreenWidget); } \
	FORCEINLINE static uint32 __PPO__StartDisplay() { return STRUCT_OFFSET(AMainPlayerController, StartDisplay); } \
	FORCEINLINE static uint32 __PPO__PlayerInterfaceDisplay() { return STRUCT_OFFSET(AMainPlayerController, PlayerInterfaceDisplay); } \
	FORCEINLINE static uint32 __PPO__EndScreenDisplay() { return STRUCT_OFFSET(AMainPlayerController, EndScreenDisplay); } \
	FORCEINLINE static uint32 __PPO__PlayerMaxHealth() { return STRUCT_OFFSET(AMainPlayerController, PlayerMaxHealth); } \
	FORCEINLINE static uint32 __PPO__AmmoClip() { return STRUCT_OFFSET(AMainPlayerController, AmmoClip); } \
	FORCEINLINE static uint32 __PPO__CurrentClip() { return STRUCT_OFFSET(AMainPlayerController, CurrentClip); } \
	FORCEINLINE static uint32 __PPO__TotalGunAmmo() { return STRUCT_OFFSET(AMainPlayerController, TotalGunAmmo); } \
	FORCEINLINE static uint32 __PPO__TotalThrowableAmmo() { return STRUCT_OFFSET(AMainPlayerController, TotalThrowableAmmo); } \
	FORCEINLINE static uint32 __PPO__GunSound() { return STRUCT_OFFSET(AMainPlayerController, GunSound); } \
	FORCEINLINE static uint32 __PPO__ReloadSound() { return STRUCT_OFFSET(AMainPlayerController, ReloadSound); } \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(AMainPlayerController, Level); }


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_13_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
