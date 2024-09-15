// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYDEMO_MyDemoGameModeBase_generated_h
#error "MyDemoGameModeBase.generated.h already included, missing '#pragma once' in MyDemoGameModeBase.h"
#endif
#define MYDEMO_MyDemoGameModeBase_generated_h

#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_SPARSE_DATA
#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_RPC_WRAPPERS
#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDemoGameModeBase(); \
	friend struct Z_Construct_UClass_AMyDemoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyDemoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyDemo"), NO_API) \
	DECLARE_SERIALIZER(AMyDemoGameModeBase)


#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyDemoGameModeBase(); \
	friend struct Z_Construct_UClass_AMyDemoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyDemoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyDemo"), NO_API) \
	DECLARE_SERIALIZER(AMyDemoGameModeBase)


#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyDemoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyDemoGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDemoGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDemoGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDemoGameModeBase(AMyDemoGameModeBase&&); \
	NO_API AMyDemoGameModeBase(const AMyDemoGameModeBase&); \
public:


#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyDemoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDemoGameModeBase(AMyDemoGameModeBase&&); \
	NO_API AMyDemoGameModeBase(const AMyDemoGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDemoGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDemoGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyDemoGameModeBase)


#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_12_PROLOG
#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_SPARSE_DATA \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_RPC_WRAPPERS \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_INCLASS \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_SPARSE_DATA \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	MyDemo_Source_MyDemo_MyDemoGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYDEMO_API UClass* StaticClass<class AMyDemoGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyDemo_Source_MyDemo_MyDemoGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
