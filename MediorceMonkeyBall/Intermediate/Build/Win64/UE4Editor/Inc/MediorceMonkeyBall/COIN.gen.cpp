// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediorceMonkeyBall/Public/COIN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOIN() {}
// Cross Module References
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_ACOIN_NoRegister();
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_ACOIN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MediorceMonkeyBall();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACOIN::StaticRegisterNativesACOIN()
	{
	}
	UClass* Z_Construct_UClass_ACOIN_NoRegister()
	{
		return ACOIN::StaticClass();
	}
	struct Z_Construct_UClass_ACOIN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOIN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MediorceMonkeyBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOIN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "COIN.h" },
		{ "ModuleRelativePath", "Public/COIN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOIN_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "COIN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/COIN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACOIN_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACOIN, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACOIN_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACOIN_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACOIN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOIN_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOIN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOIN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOIN_Statics::ClassParams = {
		&ACOIN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACOIN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACOIN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACOIN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOIN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOIN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOIN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOIN, 3777591505);
	template<> MEDIORCEMONKEYBALL_API UClass* StaticClass<ACOIN>()
	{
		return ACOIN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOIN(Z_Construct_UClass_ACOIN, &ACOIN::StaticClass, TEXT("/Script/MediorceMonkeyBall"), TEXT("ACOIN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOIN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
