// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEST/PlayLevelController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayLevelController() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_APlayLevelController_NoRegister();
	TEST_API UClass* Z_Construct_UClass_APlayLevelController();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_TEST();
// End Cross Module References
	void APlayLevelController::StaticRegisterNativesAPlayLevelController()
	{
	}
	UClass* Z_Construct_UClass_APlayLevelController_NoRegister()
	{
		return APlayLevelController::StaticClass();
	}
	struct Z_Construct_UClass_APlayLevelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayLevelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TEST,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayLevelController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayLevelController.h" },
		{ "ModuleRelativePath", "PlayLevelController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayLevelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayLevelController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayLevelController_Statics::ClassParams = {
		&APlayLevelController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayLevelController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayLevelController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayLevelController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayLevelController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayLevelController, 3490538312);
	template<> TEST_API UClass* StaticClass<APlayLevelController>()
	{
		return APlayLevelController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayLevelController(Z_Construct_UClass_APlayLevelController, &APlayLevelController::StaticClass, TEXT("/Script/TEST"), TEXT("APlayLevelController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayLevelController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
