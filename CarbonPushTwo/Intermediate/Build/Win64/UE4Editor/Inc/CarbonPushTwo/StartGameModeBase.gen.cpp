// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/StartGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartGameModeBase() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AStartGameModeBase_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AStartGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AStartGameModeBase::execChangeLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLevel();
		P_NATIVE_END;
	}
	void AStartGameModeBase::StaticRegisterNativesAStartGameModeBase()
	{
		UClass* Class = AStartGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLevel", &AStartGameModeBase::execChangeLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartGameModeBase, nullptr, "ChangeLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartGameModeBase_ChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartGameModeBase_ChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStartGameModeBase_NoRegister()
	{
		return AStartGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStartGameModeBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchLevelTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwitchLevelTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStartGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStartGameModeBase_ChangeLevel, "ChangeLevel" }, // 1688170753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StartGameModeBase.h" },
		{ "ModuleRelativePath", "StartGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_LevelDuration_MetaData[] = {
		{ "ModuleRelativePath", "StartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartGameModeBase, LevelDuration), METADATA_PARAMS(Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_LevelDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_LevelDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_SwitchLevelTimer_MetaData[] = {
		{ "ModuleRelativePath", "StartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_SwitchLevelTimer = { "SwitchLevelTimer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartGameModeBase, SwitchLevelTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_SwitchLevelTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_SwitchLevelTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_LevelDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameModeBase_Statics::NewProp_SwitchLevelTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartGameModeBase_Statics::ClassParams = {
		&AStartGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStartGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStartGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartGameModeBase, 4233159944);
	template<> CARBONPUSHTWO_API UClass* StaticClass<AStartGameModeBase>()
	{
		return AStartGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartGameModeBase(Z_Construct_UClass_AStartGameModeBase, &AStartGameModeBase::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("AStartGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
