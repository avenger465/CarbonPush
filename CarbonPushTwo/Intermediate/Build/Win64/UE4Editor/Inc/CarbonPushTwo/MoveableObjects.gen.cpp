// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/MoveableObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveableObjects() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AMoveableObjects_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AMoveableObjects();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMoveableObjects::StaticRegisterNativesAMoveableObjects()
	{
	}
	UClass* Z_Construct_UClass_AMoveableObjects_NoRegister()
	{
		return AMoveableObjects::StaticClass();
	}
	struct Z_Construct_UClass_AMoveableObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveableObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveableObjects_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveableObjects.h" },
		{ "ModuleRelativePath", "MoveableObjects.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveableObjects_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "MoveableObjects" },
		{ "Comment", "//StaticMesh Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveableObjects.h" },
		{ "ToolTip", "StaticMesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveableObjects_Statics::NewProp_ObjectMesh = { "ObjectMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveableObjects, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveableObjects_Statics::NewProp_ObjectMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveableObjects_Statics::NewProp_ObjectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveableObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveableObjects_Statics::NewProp_ObjectMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveableObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveableObjects>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveableObjects_Statics::ClassParams = {
		&AMoveableObjects::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveableObjects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveableObjects_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveableObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveableObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveableObjects()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveableObjects_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveableObjects, 396458408);
	template<> CARBONPUSHTWO_API UClass* StaticClass<AMoveableObjects>()
	{
		return AMoveableObjects::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveableObjects(Z_Construct_UClass_AMoveableObjects, &AMoveableObjects::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("AMoveableObjects"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveableObjects);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
