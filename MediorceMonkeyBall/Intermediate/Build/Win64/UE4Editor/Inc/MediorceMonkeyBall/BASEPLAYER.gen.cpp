// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediorceMonkeyBall/Public/BASEPLAYER.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBASEPLAYER() {}
// Cross Module References
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_ABASEPLAYER_NoRegister();
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_ABASEPLAYER();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MediorceMonkeyBall();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABASEPLAYER::StaticRegisterNativesABASEPLAYER()
	{
	}
	UClass* Z_Construct_UClass_ABASEPLAYER_NoRegister()
	{
		return ABASEPLAYER::StaticClass();
	}
	struct Z_Construct_UClass_ABASEPLAYER_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABASEPLAYER_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MediorceMonkeyBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABASEPLAYER_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BASEPLAYER.h" },
		{ "ModuleRelativePath", "Public/BASEPLAYER.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BASEPLAYER" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BASEPLAYER.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABASEPLAYER, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_rotSpeed_MetaData[] = {
		{ "Category", "BASEPLAYER" },
		{ "ModuleRelativePath", "Public/BASEPLAYER.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_rotSpeed = { "rotSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABASEPLAYER, rotSpeed), METADATA_PARAMS(Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_rotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_rotSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABASEPLAYER_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABASEPLAYER_Statics::NewProp_rotSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABASEPLAYER_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABASEPLAYER>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABASEPLAYER_Statics::ClassParams = {
		&ABASEPLAYER::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABASEPLAYER_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABASEPLAYER_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABASEPLAYER_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABASEPLAYER_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABASEPLAYER()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABASEPLAYER_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABASEPLAYER, 3791407915);
	template<> MEDIORCEMONKEYBALL_API UClass* StaticClass<ABASEPLAYER>()
	{
		return ABASEPLAYER::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABASEPLAYER(Z_Construct_UClass_ABASEPLAYER, &ABASEPLAYER::StaticClass, TEXT("/Script/MediorceMonkeyBall"), TEXT("ABASEPLAYER"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABASEPLAYER);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
