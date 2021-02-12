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
	void ACarbonPushTwoGameModeBase::StaticRegisterNativesACarbonPushTwoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACarbonPushTwoGameModeBase_NoRegister()
	{
		return ACarbonPushTwoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarbonPushTwoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarbonPushTwoGameModeBase_Statics::ClassParams = {
		&ACarbonPushTwoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ACarbonPushTwoGameModeBase, 2320722622);
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
