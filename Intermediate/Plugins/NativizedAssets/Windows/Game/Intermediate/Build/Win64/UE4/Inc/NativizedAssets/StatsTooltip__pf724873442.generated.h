// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIncrease;
struct FGeometry;
#ifdef NATIVIZEDASSETS_StatsTooltip__pf724873442_generated_h
#error "StatsTooltip__pf724873442.generated.h already included, missing '#pragma once' in StatsTooltip__pf724873442.h"
#endif
#define NATIVIZEDASSETS_StatsTooltip__pf724873442_generated_h

#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_SPARSE_DATA
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__DeleteFormula__pf); \
	DECLARE_FUNCTION(execbpf__UpdateIncreases__pf); \
	DECLARE_FUNCTION(execbpf__FillingIncrease__pf); \
	DECLARE_FUNCTION(execbpf__CreateNewIncrease__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__OnInitialized__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__DeleteFormula__pf); \
	DECLARE_FUNCTION(execbpf__UpdateIncreases__pf); \
	DECLARE_FUNCTION(execbpf__FillingIncrease__pf); \
	DECLARE_FUNCTION(execbpf__CreateNewIncrease__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__OnInitialized__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_EVENT_PARMS \
	struct StatsTooltip_C__pf724873442_eventbpf__Tick__pf_Parms \
	{ \
		FGeometry bpp__MyGeometry__pf; \
		float bpp__InDeltaTime__pf; \
	};


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \
 \
	void eventbpf__OnInitialized__pf(); \
 \
	void eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf); \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsTooltip_C__pf724873442(); \
	friend struct Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(UStatsTooltip_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/StatsTooltip"), NO_API) \
	DECLARE_SERIALIZER(UStatsTooltip_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStatsTooltip_C__pf724873442(); \
	friend struct Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(UStatsTooltip_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/StatsTooltip"), NO_API) \
	DECLARE_SERIALIZER(UStatsTooltip_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsTooltip_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsTooltip_C__pf724873442) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsTooltip_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsTooltip_C__pf724873442); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsTooltip_C__pf724873442(UStatsTooltip_C__pf724873442&&); \
	NO_API UStatsTooltip_C__pf724873442(const UStatsTooltip_C__pf724873442&); \
public:


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsTooltip_C__pf724873442(UStatsTooltip_C__pf724873442&&); \
	NO_API UStatsTooltip_C__pf724873442(const UStatsTooltip_C__pf724873442&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsTooltip_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsTooltip_C__pf724873442); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsTooltip_C__pf724873442)


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_PRIVATE_PROPERTY_OFFSET
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_12_PROLOG \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_EVENT_PARMS


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_RPC_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_CALLBACK_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_INCLASS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_CALLBACK_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_INCLASS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UStatsTooltip_C__pf724873442>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_StatsTooltip__pf724873442_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
