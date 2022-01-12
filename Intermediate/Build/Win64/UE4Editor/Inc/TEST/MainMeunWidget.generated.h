// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_MainMeunWidget_generated_h
#error "MainMeunWidget.generated.h already included, missing '#pragma once' in MainMeunWidget.h"
#endif
#define TEST_MainMeunWidget_generated_h

#define TEST_Source_TEST_MainMeunWidget_h_13_SPARSE_DATA
#define TEST_Source_TEST_MainMeunWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClick_EndBtn); \
	DECLARE_FUNCTION(execClick_StartBtn);


#define TEST_Source_TEST_MainMeunWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClick_EndBtn); \
	DECLARE_FUNCTION(execClick_StartBtn);


#define TEST_Source_TEST_MainMeunWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMeunWidget(); \
	friend struct Z_Construct_UClass_UMainMeunWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMeunWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(UMainMeunWidget)


#define TEST_Source_TEST_MainMeunWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMainMeunWidget(); \
	friend struct Z_Construct_UClass_UMainMeunWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMeunWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(UMainMeunWidget)


#define TEST_Source_TEST_MainMeunWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMeunWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMeunWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMeunWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMeunWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMeunWidget(UMainMeunWidget&&); \
	NO_API UMainMeunWidget(const UMainMeunWidget&); \
public:


#define TEST_Source_TEST_MainMeunWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMeunWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMeunWidget(UMainMeunWidget&&); \
	NO_API UMainMeunWidget(const UMainMeunWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMeunWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMeunWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMeunWidget)


#define TEST_Source_TEST_MainMeunWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartBtn() { return STRUCT_OFFSET(UMainMeunWidget, StartBtn); } \
	FORCEINLINE static uint32 __PPO__EndBtn() { return STRUCT_OFFSET(UMainMeunWidget, EndBtn); } \
	FORCEINLINE static uint32 __PPO__TransferLevelName() { return STRUCT_OFFSET(UMainMeunWidget, TransferLevelName); }


#define TEST_Source_TEST_MainMeunWidget_h_10_PROLOG
#define TEST_Source_TEST_MainMeunWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainMeunWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainMeunWidget_h_13_SPARSE_DATA \
	TEST_Source_TEST_MainMeunWidget_h_13_RPC_WRAPPERS \
	TEST_Source_TEST_MainMeunWidget_h_13_INCLASS \
	TEST_Source_TEST_MainMeunWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TEST_Source_TEST_MainMeunWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainMeunWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainMeunWidget_h_13_SPARSE_DATA \
	TEST_Source_TEST_MainMeunWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TEST_Source_TEST_MainMeunWidget_h_13_INCLASS_NO_PURE_DECLS \
	TEST_Source_TEST_MainMeunWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class UMainMeunWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TEST_Source_TEST_MainMeunWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
