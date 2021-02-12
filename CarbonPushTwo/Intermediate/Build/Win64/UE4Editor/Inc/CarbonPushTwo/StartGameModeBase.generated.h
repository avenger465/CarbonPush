// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARBONPUSHTWO_StartGameModeBase_generated_h
#error "StartGameModeBase.generated.h already included, missing '#pragma once' in StartGameModeBase.h"
#endif
#define CARBONPUSHTWO_StartGameModeBase_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeLevel);


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeLevel);


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartGameModeBase(); \
	friend struct Z_Construct_UClass_AStartGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStartGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AStartGameModeBase)


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAStartGameModeBase(); \
	friend struct Z_Construct_UClass_AStartGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStartGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AStartGameModeBase)


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartGameModeBase(AStartGameModeBase&&); \
	NO_API AStartGameModeBase(const AStartGameModeBase&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartGameModeBase(AStartGameModeBase&&); \
	NO_API AStartGameModeBase(const AStartGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartGameModeBase)


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SwitchLevelTimer() { return STRUCT_OFFSET(AStartGameModeBase, SwitchLevelTimer); } \
	FORCEINLINE static uint32 __PPO__LevelDuration() { return STRUCT_OFFSET(AStartGameModeBase, LevelDuration); }


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_14_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class AStartGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_StartGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
