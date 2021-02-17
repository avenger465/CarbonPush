// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/BTService_UpdatePlayerPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdatePlayerPosition() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
// End Cross Module References
	void UBTService_UpdatePlayerPosition::StaticRegisterNativesUBTService_UpdatePlayerPosition()
	{
	}
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition_NoRegister()
	{
		return UBTService_UpdatePlayerPosition::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_UpdatePlayerPosition.h" },
		{ "ModuleRelativePath", "BTService_UpdatePlayerPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdatePlayerPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::ClassParams = {
		&UBTService_UpdatePlayerPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_UpdatePlayerPosition, 3244408146);
	template<> CARBONPUSHTWO_API UClass* StaticClass<UBTService_UpdatePlayerPosition>()
	{
		return UBTService_UpdatePlayerPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_UpdatePlayerPosition(Z_Construct_UClass_UBTService_UpdatePlayerPosition, &UBTService_UpdatePlayerPosition::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("UBTService_UpdatePlayerPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdatePlayerPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
