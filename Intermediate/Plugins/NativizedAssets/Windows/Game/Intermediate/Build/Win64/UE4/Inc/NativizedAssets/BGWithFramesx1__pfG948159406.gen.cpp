// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BGWithFramesx1__pfG948159406.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGWithFramesx1__pfG948159406() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBGWithFramesx1_C__pfG948159406::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGWithFramesx1_C__pfG948159406::execbpf__OnInitialized__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnInitialized__pf();
		P_NATIVE_END;
	}
	static FName NAME_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf = FName(TEXT("OnInitialized"));
	void UBGWithFramesx1_C__pfG948159406::eventbpf__OnInitialized__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf),NULL);
	}
	static FName NAME_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf = FName(TEXT("Tick"));
	void UBGWithFramesx1_C__pfG948159406::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		BGWithFramesx1_C__pfG948159406_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf),&Parms);
	}
	void UBGWithFramesx1_C__pfG948159406::StaticRegisterNativesUBGWithFramesx1_C__pfG948159406()
	{
		UClass* Class = UBGWithFramesx1_C__pfG948159406::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInitialized", &UBGWithFramesx1_C__pfG948159406::execbpf__OnInitialized__pf },
			{ "Tick", &UBGWithFramesx1_C__pfG948159406::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** t * Called once only at game time on non-template instances.t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "OnInitialized" },
		{ "ToolTip", "Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnInitialized" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BGWithFramesx1_C__pfG948159406_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BGWithFramesx1_C__pfG948159406_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406, nullptr, "Tick", nullptr, nullptr, sizeof(BGWithFramesx1_C__pfG948159406_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_NoRegister()
	{
		return UBGWithFramesx1_C__pfG948159406::StaticClass();
	}
	struct Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AngleLB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AngleLB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AngleLT__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AngleLT__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AngleRB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AngleRB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AngleRT__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AngleRT__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Background__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Background__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderBottom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderBottom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderLeft__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderLeft__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderRight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderRight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderTop__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderTop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CanvasPanel_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CanvasPanel_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__OnInitialized__pf, "OnInitialized" }, // 3629387433
		{ &Z_Construct_UFunction_UBGWithFramesx1_C__pfG948159406_bpf__Tick__pf, "Tick" }, // 694090799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BGWithFramesx1__pfG948159406.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BGWithFrames-1_C" },
		{ "ReplaceConverted", "/Game/UI/Blanks/PanelDecoration/BGWithFrames-1.BGWithFrames-1_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLB__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "AngleLB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "AngleLB" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLB__pf = { "AngleLB", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__AngleLB__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLT__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "AngleLT" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "AngleLT" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLT__pf = { "AngleLT", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__AngleLT__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLT__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLT__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRB__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "AngleRB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "AngleRB" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRB__pf = { "AngleRB", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__AngleRB__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRT__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "AngleRT" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "AngleRT" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRT__pf = { "AngleRT", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__AngleRT__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRT__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRT__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__Background__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "Background" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "Background" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__Background__pf = { "Background", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__Background__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__Background__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__Background__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderBottom__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "BorderBottom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "BorderBottom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderBottom__pf = { "BorderBottom", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__BorderBottom__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderBottom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderBottom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderLeft__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "BorderLeft" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "BorderLeft" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderLeft__pf = { "BorderLeft", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__BorderLeft__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderLeft__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderLeft__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderRight__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "BorderRight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "BorderRight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderRight__pf = { "BorderRight", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__BorderRight__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderRight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderRight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderTop__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "BorderTop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "BorderTop" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderTop__pf = { "BorderTop", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__BorderTop__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderTop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderTop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData[] = {
		{ "Category", "BGWithFrames-1" },
		{ "DisplayName", "CanvasPanel_0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "CanvasPanel_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__CanvasPanel_0__pf = { "CanvasPanel_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, bpv__CanvasPanel_0__pf), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BGWithFramesx1__pfG948159406.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBGWithFramesx1_C__pfG948159406, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleLT__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__AngleRT__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__Background__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderBottom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderLeft__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderRight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__BorderTop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_bpv__CanvasPanel_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBGWithFramesx1_C__pfG948159406>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::ClassParams = {
		&UBGWithFramesx1_C__pfG948159406::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/Blanks/PanelDecoration/BGWithFrames-1"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BGWithFrames-1_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBGWithFramesx1_C__pfG948159406, TEXT("BGWithFrames-1_C"), 2914306426);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBGWithFramesx1_C__pfG948159406>()
	{
		return UBGWithFramesx1_C__pfG948159406::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBGWithFramesx1_C__pfG948159406(Z_Construct_UClass_UBGWithFramesx1_C__pfG948159406, &UBGWithFramesx1_C__pfG948159406::StaticClass, TEXT("/Game/UI/Blanks/PanelDecoration/BGWithFrames-1"), TEXT("BGWithFrames-1_C"), true, TEXT("/Game/UI/Blanks/PanelDecoration/BGWithFrames-1"), TEXT("/Game/UI/Blanks/PanelDecoration/BGWithFrames-1.BGWithFrames-1_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBGWithFramesx1_C__pfG948159406);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
