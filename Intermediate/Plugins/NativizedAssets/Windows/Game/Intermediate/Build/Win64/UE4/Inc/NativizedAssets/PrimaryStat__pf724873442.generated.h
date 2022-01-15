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
struct FFocusEvent;
#ifdef NATIVIZEDASSETS_PrimaryStat__pf724873442_generated_h
#error "PrimaryStat__pf724873442.generated.h already included, missing '#pragma once' in PrimaryStat__pf724873442.h"
#endif
#define NATIVIZEDASSETS_PrimaryStat__pf724873442_generated_h

#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_25_DELEGATE \
static inline void FOnRemovedFromFocus__pf__PrimaryStat_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemovedFromFocus__pf__PrimaryStat_C__pf__MulticastDelegate) \
{ \
	OnRemovedFromFocus__pf__PrimaryStat_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_23_DELEGATE \
static inline void FOnAddedToFocus__pf__PrimaryStat_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddedToFocus__pf__PrimaryStat_C__pf__MulticastDelegate) \
{ \
	OnAddedToFocus__pf__PrimaryStat_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_21_DELEGATE \
static inline void FOnNoHover__pf__PrimaryStat_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNoHover__pf__PrimaryStat_C__pf__MulticastDelegate) \
{ \
	OnNoHover__pf__PrimaryStat_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_19_DELEGATE \
struct PrimaryStat_C__pf724873442_eventOnHover__pf__PrimaryStat_C__pf__MulticastDelegate_Parms \
{ \
	int32 bpp__Value__pf; \
	int32 bpp__TotalIncrease__pf; \
	FText bpp__Name__pf; \
	FText bpp__Description__pf; \
	TArray<FIncrease> bpp__Increases__pf; \
}; \
static inline void FOnHover__pf__PrimaryStat_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHover__pf__PrimaryStat_C__pf__MulticastDelegate, int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, FText const& bpp__Name__pf, FText const& bpp__Description__pf, TArray<FIncrease>& bpp__Increases__pf) \
{ \
	PrimaryStat_C__pf724873442_eventOnHover__pf__PrimaryStat_C__pf__MulticastDelegate_Parms Parms; \
	Parms.bpp__Value__pf=bpp__Value__pf; \
	Parms.bpp__TotalIncrease__pf=bpp__TotalIncrease__pf; \
	Parms.bpp__Name__pf=bpp__Name__pf; \
	Parms.bpp__Description__pf=bpp__Description__pf; \
	Parms.bpp__Increases__pf=bpp__Increases__pf; \
	OnHover__pf__PrimaryStat_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
	bpp__Increases__pf=Parms.bpp__Increases__pf; \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_17_DELEGATE \
struct PrimaryStat_C__pf724873442_eventOnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate_Parms \
{ \
	int32 bpp__ValueInt__pf; \
}; \
static inline void FOnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate, int32 bpp__ValueInt__pf) \
{ \
	PrimaryStat_C__pf724873442_eventOnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate_Parms Parms; \
	Parms.bpp__ValueInt__pf=bpp__ValueInt__pf; \
	OnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_SPARSE_DATA
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SetFocusLossTextColor__pf); \
	DECLARE_FUNCTION(execbpf__AddIncreasArray__pf); \
	DECLARE_FUNCTION(execbpf__SetValue__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__PrimaryStat_StatValueArea_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__OnInitialized__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__OnAddedToFocusPath__pf); \
	DECLARE_FUNCTION(execbpf__OnRemovedFromFocusPath__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SetFocusLossTextColor__pf); \
	DECLARE_FUNCTION(execbpf__AddIncreasArray__pf); \
	DECLARE_FUNCTION(execbpf__SetValue__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__PrimaryStat_StatValueArea_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__OnInitialized__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__OnAddedToFocusPath__pf); \
	DECLARE_FUNCTION(execbpf__OnRemovedFromFocusPath__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_EVENT_PARMS \
	struct PrimaryStat_C__pf724873442_eventbpf__OnAddedToFocusPath__pf_Parms \
	{ \
		FFocusEvent bpp__InFocusEvent__pf; \
	}; \
	struct PrimaryStat_C__pf724873442_eventbpf__OnRemovedFromFocusPath__pf_Parms \
	{ \
		FFocusEvent bpp__InFocusEvent__pf; \
	}; \
	struct PrimaryStat_C__pf724873442_eventbpf__Tick__pf_Parms \
	{ \
		FGeometry bpp__MyGeometry__pf; \
		float bpp__InDeltaTime__pf; \
	};


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \
 \
	void eventbpf__OnAddedToFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf); \
 \
	void eventbpf__OnInitialized__pf(); \
 \
	void eventbpf__OnRemovedFromFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf); \
 \
	void eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf); \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryStat_C__pf724873442(); \
	friend struct Z_Construct_UClass_UPrimaryStat_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(UPrimaryStat_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/PrimaryStat"), NO_API) \
	DECLARE_SERIALIZER(UPrimaryStat_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPrimaryStat_C__pf724873442(); \
	friend struct Z_Construct_UClass_UPrimaryStat_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(UPrimaryStat_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/PrimaryStat"), NO_API) \
	DECLARE_SERIALIZER(UPrimaryStat_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimaryStat_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryStat_C__pf724873442) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimaryStat_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryStat_C__pf724873442); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimaryStat_C__pf724873442(UPrimaryStat_C__pf724873442&&); \
	NO_API UPrimaryStat_C__pf724873442(const UPrimaryStat_C__pf724873442&); \
public:


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimaryStat_C__pf724873442(UPrimaryStat_C__pf724873442&&); \
	NO_API UPrimaryStat_C__pf724873442(const UPrimaryStat_C__pf724873442&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimaryStat_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryStat_C__pf724873442); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryStat_C__pf724873442)


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_PRIVATE_PROPERTY_OFFSET
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_11_PROLOG \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_EVENT_PARMS


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_RPC_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_CALLBACK_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_INCLASS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_CALLBACK_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_INCLASS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UPrimaryStat_C__pf724873442>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PrimaryStat__pf724873442_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
