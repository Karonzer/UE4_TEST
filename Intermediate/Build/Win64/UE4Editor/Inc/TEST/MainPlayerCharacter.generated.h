// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_MainPlayerCharacter_generated_h
#error "MainPlayerCharacter.generated.h already included, missing '#pragma once' in MainPlayerCharacter.h"
#endif
#define TEST_MainPlayerCharacter_generated_h

#define TEST_Source_TEST_MainPlayerCharacter_h_15_SPARSE_DATA
#define TEST_Source_TEST_MainPlayerCharacter_h_15_RPC_WRAPPERS
#define TEST_Source_TEST_MainPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TEST_Source_TEST_MainPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMainPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerCharacter)


#define TEST_Source_TEST_MainPlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMainPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEST"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerCharacter)


#define TEST_Source_TEST_MainPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerCharacter(AMainPlayerCharacter&&); \
	NO_API AMainPlayerCharacter(const AMainPlayerCharacter&); \
public:


#define TEST_Source_TEST_MainPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerCharacter(AMainPlayerCharacter&&); \
	NO_API AMainPlayerCharacter(const AMainPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerCharacter)


#define TEST_Source_TEST_MainPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__springArmComponent() { return STRUCT_OFFSET(AMainPlayerCharacter, springArmComponent); } \
	FORCEINLINE static uint32 __PPO__cameraComponent() { return STRUCT_OFFSET(AMainPlayerCharacter, cameraComponent); }


#define TEST_Source_TEST_MainPlayerCharacter_h_12_PROLOG
#define TEST_Source_TEST_MainPlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainPlayerCharacter_h_15_SPARSE_DATA \
	TEST_Source_TEST_MainPlayerCharacter_h_15_RPC_WRAPPERS \
	TEST_Source_TEST_MainPlayerCharacter_h_15_INCLASS \
	TEST_Source_TEST_MainPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TEST_Source_TEST_MainPlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TEST_Source_TEST_MainPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TEST_Source_TEST_MainPlayerCharacter_h_15_SPARSE_DATA \
	TEST_Source_TEST_MainPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TEST_Source_TEST_MainPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	TEST_Source_TEST_MainPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AMainPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TEST_Source_TEST_MainPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
