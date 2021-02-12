// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/CustomMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMovementComponent() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_UCustomMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
// End Cross Module References
	void UCustomMovementComponent::StaticRegisterNativesUCustomMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister()
	{
		return UCustomMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomMovementComponent.h" },
		{ "ModuleRelativePath", "CustomMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "CustomMovementComponent" },
		{ "ModuleRelativePath", "CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "CustomMovementComponent" },
		{ "ModuleRelativePath", "CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams = {
		&UCustomMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomMovementComponent, 1949984310);
	template<> CARBONPUSHTWO_API UClass* StaticClass<UCustomMovementComponent>()
	{
		return UCustomMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomMovementComponent(Z_Construct_UClass_UCustomMovementComponent, &UCustomMovementComponent::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("UCustomMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
