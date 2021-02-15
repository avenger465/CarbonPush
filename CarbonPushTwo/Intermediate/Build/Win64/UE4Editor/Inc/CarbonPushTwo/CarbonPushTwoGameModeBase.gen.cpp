// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/CarbonPushTwoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarbonPushTwoGameModeBase() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
// End Cross Module References
	DEFINE_FUNCTION(ACarbonPushTwoGameModeBase::execPointScored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointScored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACarbonPushTwoGameModeBase::execGameOver)
	{
		P_GET_UBOOL(Z_Param_PlayerWon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOver(Z_Param_PlayerWon);
		P_NATIVE_END;
	}
	void ACarbonPushTwoGameModeBase::StaticRegisterNativesACarbonPushTwoGameModeBase()
	{
		UClass* Class = ACarbonPushTwoGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOver", &ACarbonPushTwoGameModeBase::execGameOver },
			{ "PointScored", &ACarbonPushTwoGameModeBase::execPointScored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics
	{
		struct CarbonPushTwoGameModeBase_eventGameOver_Parms
		{
			bool PlayerWon;
		};
		static void NewProp_PlayerWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit(void* Obj)
	{
		((CarbonPushTwoGameModeBase_eventGameOver_Parms*)Obj)->PlayerWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::NewProp_PlayerWon = { "PlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CarbonPushTwoGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::NewProp_PlayerWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACarbonPushTwoGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(CarbonPushTwoGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACarbonPushTwoGameModeBase, nullptr, "PointScored", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase_NoRegister()
	{
		return ACarbonPushTwoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_userPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_targetPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACarbonPushTwoGameModeBase_GameOver, "GameOver" }, // 2236997978
		{ &Z_Construct_UFunction_ACarbonPushTwoGameModeBase_PointScored, "PointScored" }, // 3896948630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CarbonPushTwoGameModeBase.h" },
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_LevelDuration_MetaData[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarbonPushTwoGameModeBase, LevelDuration), METADATA_PARAMS(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_LevelDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_LevelDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_point_MetaData[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarbonPushTwoGameModeBase, point), METADATA_PARAMS(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_userPoints_MetaData[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_userPoints = { "userPoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarbonPushTwoGameModeBase, userPoints), METADATA_PARAMS(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_userPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_userPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_targetPoints_MetaData[] = {
		{ "ModuleRelativePath", "CarbonPushTwoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_targetPoints = { "targetPoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarbonPushTwoGameModeBase, targetPoints), METADATA_PARAMS(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_targetPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_targetPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_LevelDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_userPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::NewProp_targetPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarbonPushTwoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::ClassParams = {
		&ACarbonPushTwoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarbonPushTwoGameModeBase, 2740216535);
	template<> CARBONPUSHTWO_API UClass* StaticClass<ACarbonPushTwoGameModeBase>()
	{
		return ACarbonPushTwoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarbonPushTwoGameModeBase(Z_Construct_UClass_ACarbonPushTwoGameModeBase, &ACarbonPushTwoGameModeBase::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("ACarbonPushTwoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarbonPushTwoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
