// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEST/GamePlayModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayModeBase() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_AGamePlayModeBase_NoRegister();
	TEST_API UClass* Z_Construct_UClass_AGamePlayModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TEST();
// End Cross Module References
	void AGamePlayModeBase::StaticRegisterNativesAGamePlayModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGamePlayModeBase_NoRegister()
	{
		return AGamePlayModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGamePlayModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePlayModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TEST,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GamePlayModeBase.h" },
		{ "ModuleRelativePath", "GamePlayModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePlayModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePlayModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGamePlayModeBase_Statics::ClassParams = {
		&AGamePlayModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGamePlayModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePlayModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamePlayModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGamePlayModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamePlayModeBase, 1341131729);
	template<> TEST_API UClass* StaticClass<AGamePlayModeBase>()
	{
		return AGamePlayModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamePlayModeBase(Z_Construct_UClass_AGamePlayModeBase, &AGamePlayModeBase::StaticClass, TEXT("/Script/TEST"), TEXT("AGamePlayModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePlayModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
