// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_Slider__pf724873442_generated_h
#error "Slider__pf724873442.generated.h already included, missing '#pragma once' in Slider__pf724873442.h"
#endif
#define NATIVIZEDASSETS_Slider__pf724873442_generated_h

#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_18_DELEGATE \
struct Slider_C__pf724873442_eventValueChanged__pf__Slider_C__pf__MulticastDelegate_Parms \
{ \
	float bpp__Value__pf; \
}; \
static inline void FValueChanged__pf__Slider_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& ValueChanged__pf__Slider_C__pf__MulticastDelegate, float bpp__Value__pf) \
{ \
	Slider_C__pf724873442_eventValueChanged__pf__Slider_C__pf__MulticastDelegate_Parms Parms; \
	Parms.bpp__Value__pf=bpp__Value__pf; \
	ValueChanged__pf__Slider_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_16_DELEGATE \
static inline void FSetValue__pf__Slider_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& SetValue__pf__Slider_C__pf__MulticastDelegate) \
{ \
	SetValue__pf__Slider_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_SPARSE_DATA
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__OnSetValue__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__OnSetValue__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature__pf);


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlider_C__pf724873442(); \
	friend struct Z_Construct_UClass_USlider_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(USlider_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/Slider"), NO_API) \
	DECLARE_SERIALIZER(USlider_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSlider_C__pf724873442(); \
	friend struct Z_Construct_UClass_USlider_C__pf724873442_Statics; \
public: \
	DECLARE_CLASS(USlider_C__pf724873442, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/UI/View/Slider"), NO_API) \
	DECLARE_SERIALIZER(USlider_C__pf724873442) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider_C__pf724873442) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider_C__pf724873442); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider_C__pf724873442(USlider_C__pf724873442&&); \
	NO_API USlider_C__pf724873442(const USlider_C__pf724873442&); \
public:


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider_C__pf724873442(USlider_C__pf724873442&&); \
	NO_API USlider_C__pf724873442(const USlider_C__pf724873442&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider_C__pf724873442); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider_C__pf724873442); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider_C__pf724873442)


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_PRIVATE_PROPERTY_OFFSET
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_10_PROLOG
#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_RPC_WRAPPERS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_INCLASS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_PRIVATE_PROPERTY_OFFSET \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_SPARSE_DATA \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_INCLASS_NO_PURE_DECLS \
	Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class USlider_C__pf724873442>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dungeoner_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slider__pf724873442_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
