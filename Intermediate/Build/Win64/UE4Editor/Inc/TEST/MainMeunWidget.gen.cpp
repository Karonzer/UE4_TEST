// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEST/MainMeunWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMeunWidget() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_UMainMeunWidget_NoRegister();
	TEST_API UClass* Z_Construct_UClass_UMainMeunWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TEST();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMeunWidget::execClick_EndBtn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Click_EndBtn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMeunWidget::execClick_StartBtn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Click_StartBtn();
		P_NATIVE_END;
	}
	void UMainMeunWidget::StaticRegisterNativesUMainMeunWidget()
	{
		UClass* Class = UMainMeunWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Click_EndBtn", &UMainMeunWidget::execClick_EndBtn },
			{ "Click_StartBtn", &UMainMeunWidget::execClick_StartBtn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMeunWidget, nullptr, "Click_EndBtn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMeunWidget, nullptr, "Click_StartBtn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMeunWidget_NoRegister()
	{
		return UMainMeunWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMeunWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransferLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMeunWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TEST,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMeunWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMeunWidget_Click_EndBtn, "Click_EndBtn" }, // 4127157759
		{ &Z_Construct_UFunction_UMainMeunWidget_Click_StartBtn, "Click_StartBtn" }, // 1737089626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMeunWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainMeunWidget.h" },
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_StartBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMeunWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_StartBtn = { "StartBtn", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMeunWidget, StartBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_StartBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_StartBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_EndBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMeunWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_EndBtn = { "EndBtn", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMeunWidget, EndBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_EndBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_EndBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_TransferLevelName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LevelName" },
		{ "ModuleRelativePath", "MainMeunWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_TransferLevelName = { "TransferLevelName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMeunWidget, TransferLevelName), METADATA_PARAMS(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_TransferLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_TransferLevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMeunWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_StartBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_EndBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMeunWidget_Statics::NewProp_TransferLevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMeunWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMeunWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMeunWidget_Statics::ClassParams = {
		&UMainMeunWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMeunWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMeunWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMeunWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMeunWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMeunWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMeunWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMeunWidget, 1509229152);
	template<> TEST_API UClass* StaticClass<UMainMeunWidget>()
	{
		return UMainMeunWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMeunWidget(Z_Construct_UClass_UMainMeunWidget, &UMainMeunWidget::StaticClass, TEXT("/Script/TEST"), TEXT("UMainMeunWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMeunWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
