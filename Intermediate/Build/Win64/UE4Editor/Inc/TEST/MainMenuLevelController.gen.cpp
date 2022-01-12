// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEST/MainMenuLevelController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuLevelController() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_AMainMenuLevelController_NoRegister();
	TEST_API UClass* Z_Construct_UClass_AMainMenuLevelController();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_TEST();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMainMenuLevelController::StaticRegisterNativesAMainMenuLevelController()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuLevelController_NoRegister()
	{
		return AMainMenuLevelController::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuLevelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDOverlayClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuLevelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TEST,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuLevelController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuLevelController.h" },
		{ "ModuleRelativePath", "MainMenuLevelController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlayClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainMenuLevelController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlayClass = { "HUDOverlayClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuLevelController, HUDOverlayClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlayClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuLevelController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuLevelController, HUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuLevelController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlayClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuLevelController_Statics::NewProp_HUDOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuLevelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuLevelController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuLevelController_Statics::ClassParams = {
		&AMainMenuLevelController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainMenuLevelController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuLevelController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuLevelController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuLevelController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuLevelController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuLevelController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuLevelController, 2339444685);
	template<> TEST_API UClass* StaticClass<AMainMenuLevelController>()
	{
		return AMainMenuLevelController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuLevelController(Z_Construct_UClass_AMainMenuLevelController, &AMainMenuLevelController::StaticClass, TEXT("/Script/TEST"), TEXT("AMainMenuLevelController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuLevelController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
