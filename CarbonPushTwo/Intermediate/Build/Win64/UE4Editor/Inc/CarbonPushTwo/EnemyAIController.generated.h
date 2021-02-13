// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARBONPUSHTWO_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define CARBONPUSHTWO_EnemyAIController_generated_h

#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_SPARSE_DATA
#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_RPC_WRAPPERS
#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarbonPushTwo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController)


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(AEnemyAIController, Waypoints); } \
	FORCEINLINE static uint32 __PPO__EnemyBehaviourTree() { return STRUCT_OFFSET(AEnemyAIController, EnemyBehaviourTree); }


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_12_PROLOG
#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_RPC_WRAPPERS \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_INCLASS \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_SPARSE_DATA \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
	CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARBONPUSHTWO_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarbonPushTwo_Source_CarbonPushTwo_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
