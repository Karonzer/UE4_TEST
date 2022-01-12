// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_PlayLevelController_generated_h
#error "PlayLevelController.generated.h already included, missing '#pragma once' in PlayLevelController.h"
#endif
#define TEST_PlayLevelController_generated_h

#define TEST_Source_TEST_PlayLevelController_h_15_SPARSE_DATA
#define TEST_Source_TEST_PlayLevelController_h_15_RPC_WRAPPERS
#define TEST_Source_TEST_PlayLevelController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TEST_Source_TEST_PlayLevelController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayLevelController(); \
	friend struct Z_Construct_UClass_APlayLevelController_Statics; \
public: \
	DECLARE_CLASS(APlayLevelController, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(APlayLevelController)


#define TEST_Source_TEST_PlayLevelController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayLevelController(); \
	friend struct Z_Construct_UClass_APlayLevelController_Statics; \
public: \
	DECLARE_CLASS(APlayLevelController, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(APlayLevelController)


#define TEST_Source_TEST_PlayLevelController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayLevelController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayLevelController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayLevelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayLevelController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayLevelController(APlayLevelController&&); \
	NO_API APlayLevelController(const APlayLevelController&); \
public:


#define TEST_Source_TEST_PlayLevelController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayLevelController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayLevelController(APlayLevelController&&); \
	NO_API APlayLevelController(const APlayLevelController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayLevelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayLevelController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayLevelController)


#define TEST_Source_TEST_PlayLevelController_h_15_PRIVATE_PROPERTY_OFFSET
#define TEST_Source_TEST_PlayLevelController_h_12_PROLOG
#define TEST_Source_TEST_PlayLevelController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_PlayLevelController_h_15_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_PlayLevelController_h_15_SPARSE_DATA \
	TEST_Source_TEST_PlayLevelController_h_15_RPC_WRAPPERS \
	TEST_Source_TEST_PlayLevelController_h_15_INCLASS \
	TEST_Source_TEST_PlayLevelController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TEST_Source_TEST_PlayLevelController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_PlayLevelController_h_15_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_PlayLevelController_h_15_SPARSE_DATA \
	TEST_Source_TEST_PlayLevelController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TEST_Source_TEST_PlayLevelController_h_15_INCLASS_NO_PURE_DECLS \
	TEST_Source_TEST_PlayLevelController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class APlayLevelController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TEST_Source_TEST_PlayLevelController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
