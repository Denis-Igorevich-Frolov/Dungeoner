// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIncrease;
#ifdef DUNGEONER_SortingArray_generated_h
#error "SortingArray.generated.h already included, missing '#pragma once' in SortingArray.h"
#endif
#define DUNGEONER_SortingArray_generated_h

#define Dungeoner_Source_Dungeoner_SortingArray_h_16_SPARSE_DATA
#define Dungeoner_Source_Dungeoner_SortingArray_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncreaseSort); \
	DECLARE_FUNCTION(execStringSort); \
	DECLARE_FUNCTION(execFloatSort); \
	DECLARE_FUNCTION(execIntegerSort);


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncreaseSort); \
	DECLARE_FUNCTION(execStringSort); \
	DECLARE_FUNCTION(execFloatSort); \
	DECLARE_FUNCTION(execIntegerSort);


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSortingArray(); \
	friend struct Z_Construct_UClass_USortingArray_Statics; \
public: \
	DECLARE_CLASS(USortingArray, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dungeoner"), NO_API) \
	DECLARE_SERIALIZER(USortingArray)


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSortingArray(); \
	friend struct Z_Construct_UClass_USortingArray_Statics; \
public: \
	DECLARE_CLASS(USortingArray, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dungeoner"), NO_API) \
	DECLARE_SERIALIZER(USortingArray)


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortingArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortingArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortingArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortingArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortingArray(USortingArray&&); \
	NO_API USortingArray(const USortingArray&); \
public:


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortingArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortingArray(USortingArray&&); \
	NO_API USortingArray(const USortingArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortingArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortingArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortingArray)


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_PRIVATE_PROPERTY_OFFSET
#define Dungeoner_Source_Dungeoner_SortingArray_h_13_PROLOG
#define Dungeoner_Source_Dungeoner_SortingArray_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_SPARSE_DATA \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_RPC_WRAPPERS \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_INCLASS \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeoner_Source_Dungeoner_SortingArray_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_SPARSE_DATA \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_INCLASS_NO_PURE_DECLS \
	Dungeoner_Source_Dungeoner_SortingArray_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONER_API UClass* StaticClass<class USortingArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeoner_Source_Dungeoner_SortingArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
