// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/DestructibleActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleActors() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ADestructibleActors_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_ADestructibleActors();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_ADestructibleActor();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
// End Cross Module References
	void ADestructibleActors::StaticRegisterNativesADestructibleActors()
	{
	}
	UClass* Z_Construct_UClass_ADestructibleActors_NoRegister()
	{
		return ADestructibleActors::StaticClass();
	}
	struct Z_Construct_UClass_ADestructibleActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialForceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialForceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructibleActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADestructibleActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleActors_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "DestructibleActors.h" },
		{ "ModuleRelativePath", "DestructibleActors.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleActors_Statics::NewProp_RadialForceComponent_MetaData[] = {
		{ "Category", "DestructibleActors" },
		{ "Comment", "//RadialForce Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DestructibleActors.h" },
		{ "ToolTip", "RadialForce Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleActors_Statics::NewProp_RadialForceComponent = { "RadialForceComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructibleActors, RadialForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructibleActors_Statics::NewProp_RadialForceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleActors_Statics::NewProp_RadialForceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructibleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleActors_Statics::NewProp_RadialForceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructibleActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructibleActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestructibleActors_Statics::ClassParams = {
		&ADestructibleActors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADestructibleActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleActors_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestructibleActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructibleActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestructibleActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestructibleActors, 2123259338);
	template<> CARBONPUSHTWO_API UClass* StaticClass<ADestructibleActors>()
	{
		return ADestructibleActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestructibleActors(Z_Construct_UClass_ADestructibleActors, &ADestructibleActors::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("ADestructibleActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructibleActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
