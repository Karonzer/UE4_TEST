// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_MainMenuLevelController_generated_h
#error "MainMenuLevelController.generated.h already included, missing '#pragma once' in MainMenuLevelController.h"
#endif
#define TEST_MainMenuLevelController_generated_h

#define TEST_Source_TEST_MainMenuLevelController_h_13_SPARSE_DATA
#define TEST_Source_TEST_MainMenuLevelController_h_13_RPC_WRAPPERS
#define TEST_Source_TEST_MainMenuLevelController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TEST_Source_TEST_MainMenuLevelController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuLevelController(); \
	friend struct Z_Construct_UClass_AMainMenuLevelController_Statics; \
public: \
	DECLARE_CLASS(AMainMenuLevelController, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuLevelController)


#define TEST_Source_TEST_MainMenuLevelController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuLevelController(); \
	friend struct Z_Construct_UClass_AMainMenuLevelController_Statics; \
public: \
	DECLARE_CLASS(AMainMenuLevelController, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuLevelController)


#define TEST_Source_TEST_MainMenuLevelController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuLevelController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuLevelController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuLevelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuLevelController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuLevelController(AMainMenuLevelController&&); \
	NO_API AMainMenuLevelController(const AMainMenuLevelController&); \
public:


#define TEST_Source_TEST_MainMenuLevelController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuLevelController(AMainMenuLevelController&&); \
	NO_API AMainMenuLevelController(const AMainMenuLevelController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuLevelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuLevelController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuLevelController)


#define TEST_Source_TEST_MainMenuLevelController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDOverlayClass() { return STRUCT_OFFSET(AMainMenuLevelController, HUDOverlayClass); } \
	FORCEINLINE static uint32 __PPO__HUDOverlay() { return STRUCT_OFFSET(AMainMenuLevelController, HUDOverlay); }


#define TEST_Source_TEST_MainMenuLevelController_h_10_PROLOG
#define TEST_Source_TEST_MainMenuLevelController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainMenuLevelController_h_13_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainMenuLevelController_h_13_SPARSE_DATA \
	TEST_Source_TEST_MainMenuLevelController_h_13_RPC_WRAPPERS \
	TEST_Source_TEST_MainMenuLevelController_h_13_INCLASS \
	TEST_Source_TEST_MainMenuLevelController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TEST_Source_TEST_MainMenuLevelController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainMenuLevelController_h_13_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainMenuLevelController_h_13_SPARSE_DATA \
	TEST_Source_TEST_MainMenuLevelController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TEST_Source_TEST_MainMenuLevelController_h_13_INCLASS_NO_PURE_DECLS \
	TEST_Source_TEST_MainMenuLevelController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AMainMenuLevelController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TEST_Source_TEST_MainMenuLevelController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
