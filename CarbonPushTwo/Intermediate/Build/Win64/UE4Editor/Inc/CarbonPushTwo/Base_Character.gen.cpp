// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/Base_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Character() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ABase_Character_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ABase_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AGrenade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABase_Character::execReturnPlayerStats)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnPlayerStats(Z_Param_Out_Health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABase_Character::execThrowGrenade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowGrenade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABase_Character::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void ABase_Character::StaticRegisterNativesABase_Character()
	{
		UClass* Class = ABase_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ABase_Character::execFire },
			{ "ReturnPlayerStats", &ABase_Character::execReturnPlayerStats },
			{ "ThrowGrenade", &ABase_Character::execThrowGrenade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABase_Character_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Character_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Public functions that can be called from other objects\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Public functions that can be called from other objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Character_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Character, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Character_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABase_Character_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Character_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Character_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics
	{
		struct Base_Character_eventReturnPlayerStats_Parms
		{
			float Health;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Character_eventReturnPlayerStats_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Character, nullptr, "ReturnPlayerStats", nullptr, nullptr, sizeof(Base_Character_eventReturnPlayerStats_Parms), Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Character_ReturnPlayerStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Character_ReturnPlayerStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Character, nullptr, "ThrowGrenade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Character_ThrowGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Character_ThrowGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABase_Character_NoRegister()
	{
		return ABase_Character::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static void NewProp_MainCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MainCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grenade_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Grenade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABase_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABase_Character_Fire, "Fire" }, // 3952269937
		{ &Z_Construct_UFunction_ABase_Character_ReturnPlayerStats, "ReturnPlayerStats" }, // 2503250439
		{ &Z_Construct_UFunction_ABase_Character_ThrowGrenade, "ThrowGrenade" }, // 3862341333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Base_Character.h" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	void Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter_SetBit(void* Obj)
	{
		((ABase_Character*)Obj)->MainCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABase_Character), &Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_GameModeReference_MetaData[] = {
		{ "Comment", "//Reference to the ACarbonPushTwoGameModeBase class\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Reference to the ACarbonPushTwoGameModeBase class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_GameModeReference = { "GameModeReference", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, GameModeReference), Z_Construct_UClass_ACarbonPushTwoGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_GameModeReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_GameModeReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_CastRange_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Cast Range variable\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Cast Range variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_CastRange = { "CastRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, CastRange), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_CastRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_CastRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Damage variable\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Damage variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, Damage), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Players health variable\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Players health variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_Grenade_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Creates a Grenade object of type AGrenade\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Creates a Grenade object of type AGrenade" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, Grenade), Z_Construct_UClass_AGrenade_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_Grenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_Grenade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//SpringArm Length variable\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "SpringArm Length variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, SpringArmLength), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_ImpulseForce_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Impulse force variable\n" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Impulse force variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_ImpulseForce = { "ImpulseForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, ImpulseForce), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_ImpulseForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_ImpulseForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapCamera_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//SceneCapture Component2D\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "SceneCapture Component2D" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapCamera = { "MiniMapCamera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, MiniMapCamera), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Scene Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Scene Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapArm_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//SpringArm Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "SpringArm Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapArm = { "MiniMapArm", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, MiniMapArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//SpringArm Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "SpringArm Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "Comment", "//Camera Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
		{ "ToolTip", "Camera Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_MainCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_GameModeReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_CastRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_Grenade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_ImpulseForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_MiniMapArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Character_Statics::ClassParams = {
		&ABase_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABase_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABase_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABase_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase_Character, 2826171225);
	template<> CARBONPUSHTWO_API UClass* StaticClass<ABase_Character>()
	{
		return ABase_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Character(Z_Construct_UClass_ABase_Character, &ABase_Character::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("ABase_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
