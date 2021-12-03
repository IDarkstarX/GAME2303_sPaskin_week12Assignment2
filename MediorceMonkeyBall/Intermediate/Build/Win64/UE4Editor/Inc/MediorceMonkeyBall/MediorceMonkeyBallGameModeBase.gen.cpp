// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediorceMonkeyBall/MediorceMonkeyBallGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediorceMonkeyBallGameModeBase() {}
// Cross Module References
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_NoRegister();
	MEDIORCEMONKEYBALL_API UClass* Z_Construct_UClass_AMediorceMonkeyBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MediorceMonkeyBall();
// End Cross Module References
	void AMediorceMonkeyBallGameModeBase::StaticRegisterNativesAMediorceMonkeyBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_NoRegister()
	{
		return AMediorceMonkeyBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MediorceMonkeyBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MediorceMonkeyBallGameModeBase.h" },
		{ "ModuleRelativePath", "MediorceMonkeyBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediorceMonkeyBallGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::ClassParams = {
		&AMediorceMonkeyBallGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediorceMonkeyBallGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMediorceMonkeyBallGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMediorceMonkeyBallGameModeBase, 3537285050);
	template<> MEDIORCEMONKEYBALL_API UClass* StaticClass<AMediorceMonkeyBallGameModeBase>()
	{
		return AMediorceMonkeyBallGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMediorceMonkeyBallGameModeBase(Z_Construct_UClass_AMediorceMonkeyBallGameModeBase, &AMediorceMonkeyBallGameModeBase::StaticClass, TEXT("/Script/MediorceMonkeyBall"), TEXT("AMediorceMonkeyBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediorceMonkeyBallGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
