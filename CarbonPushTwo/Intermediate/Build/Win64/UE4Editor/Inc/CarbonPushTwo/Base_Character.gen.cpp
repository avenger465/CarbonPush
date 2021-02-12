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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
// End Cross Module References
	void ABase_Character::StaticRegisterNativesABase_Character()
	{
	}
	UClass* Z_Construct_UClass_ABase_Character_NoRegister()
	{
		return ABase_Character::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Base_Character.h" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, SpringArmLength), METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Character_Statics::NewProp_ActionComponent_MetaData[] = {
		{ "Category", "Base_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Character_Statics::NewProp_ActionComponent = { "ActionComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Character, ActionComponent), Z_Construct_UClass_UCustomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Character_Statics::NewProp_ActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABase_Character_Statics::NewProp_ActionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Character_Statics::NewProp_ActionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Character_Statics::ClassParams = {
		&ABase_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABase_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ABase_Character, 2899408336);
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
