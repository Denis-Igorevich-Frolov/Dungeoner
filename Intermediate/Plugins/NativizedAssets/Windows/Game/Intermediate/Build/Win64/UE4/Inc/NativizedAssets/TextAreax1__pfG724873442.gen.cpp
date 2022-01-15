// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TextAreax1__pfG724873442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAreax1__pfG724873442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTextAreax1_C__pfG724873442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTextAreax1_C__pfG724873442();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTextAreax1_C__pfG724873442::execbpf__SetText__pf)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_bpp__Text__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetText__pf(Z_Param_Out_bpp__Text__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextAreax1_C__pfG724873442::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextAreax1_C__pfG724873442::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextAreax1_C__pfG724873442::execbpf__OnInitialized__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnInitialized__pf();
		P_NATIVE_END;
	}
	static FName NAME_UTextAreax1_C__pfG724873442_bpf__Construct__pf = FName(TEXT("Construct"));
	void UTextAreax1_C__pfG724873442::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTextAreax1_C__pfG724873442_bpf__Construct__pf),NULL);
	}
	static FName NAME_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf = FName(TEXT("OnInitialized"));
	void UTextAreax1_C__pfG724873442::eventbpf__OnInitialized__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf),NULL);
	}
	static FName NAME_UTextAreax1_C__pfG724873442_bpf__Tick__pf = FName(TEXT("Tick"));
	void UTextAreax1_C__pfG724873442::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		TextAreax1_C__pfG724873442_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UTextAreax1_C__pfG724873442_bpf__Tick__pf),&Parms);
	}
	void UTextAreax1_C__pfG724873442::StaticRegisterNativesUTextAreax1_C__pfG724873442()
	{
		UClass* Class = UTextAreax1_C__pfG724873442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UTextAreax1_C__pfG724873442::execbpf__Construct__pf },
			{ "OnInitialized", &UTextAreax1_C__pfG724873442::execbpf__OnInitialized__pf },
			{ "SetText", &UTextAreax1_C__pfG724873442::execbpf__SetText__pf },
			{ "Tick", &UTextAreax1_C__pfG724873442::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextAreax1_C__pfG724873442, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTextAreax1_C__pfG724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** t * Called once only at game time on non-template instances.t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "OnInitialized" },
		{ "ToolTip", "Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextAreax1_C__pfG724873442, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTextAreax1_C__pfG724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnInitialized" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics
	{
		struct TextAreax1_C__pfG724873442_eventbpf__SetText__pf_Parms
		{
			FText bpp__Text__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Text__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__Text__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const = { "bpp__Text__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TextAreax1_C__pfG724873442_eventbpf__SetText__pf_Parms, bpp__Text__pf__const), METADATA_PARAMS(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "SetText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextAreax1_C__pfG724873442, nullptr, "SetText", nullptr, nullptr, sizeof(TextAreax1_C__pfG724873442_eventbpf__SetText__pf_Parms), Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTextAreax1_C__pfG724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetText" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TextAreax1_C__pfG724873442_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TextAreax1_C__pfG724873442_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextAreax1_C__pfG724873442, nullptr, "Tick", nullptr, nullptr, sizeof(TextAreax1_C__pfG724873442_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UTextAreax1_C__pfG724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextAreax1_C__pfG724873442_NoRegister()
	{
		return UTextAreax1_C__pfG724873442::StaticClass();
	}
	struct Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__background__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__background__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderBottom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderBottom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BorderTop__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BorderTop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CanvasPanel_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CanvasPanel_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FigureBottom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FigureBottom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FigureLeft__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FigureLeft__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FigureRight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FigureRight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FigureTop__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FigureTop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ValueBlock__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ValueBlock__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__wraper__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__wraper__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShowFigureTop__pf_MetaData[];
#endif
		static void NewProp_bpv__ShowFigureTop__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ShowFigureTop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShowFigureBottom__pf_MetaData[];
#endif
		static void NewProp_bpv__ShowFigureBottom__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ShowFigureBottom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Text__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Text__pf;
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
	UObject* (*const Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Construct__pf, "Construct" }, // 2862258969
		{ &Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__OnInitialized__pf, "OnInitialized" }, // 3992780053
		{ &Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__SetText__pf, "SetText" }, // 308922680
		{ &Z_Construct_UFunction_UTextAreax1_C__pfG724873442_bpf__Tick__pf, "Tick" }, // 4274642454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TextAreax1__pfG724873442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TextArea-1_C" },
		{ "ReplaceConverted", "/Game/UI/View/TextArea-1.TextArea-1_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__background__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "background" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "background" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__background__pf = { "background", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__background__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__background__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__background__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderBottom__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "BorderBottom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "BorderBottom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderBottom__pf = { "BorderBottom", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__BorderBottom__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderBottom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderBottom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderTop__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "BorderTop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "BorderTop" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderTop__pf = { "BorderTop", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__BorderTop__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderTop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderTop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "CanvasPanel_0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "CanvasPanel_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__CanvasPanel_0__pf = { "CanvasPanel_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__CanvasPanel_0__pf), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__CanvasPanel_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureBottom__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "FigureBottom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "FigureBottom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureBottom__pf = { "FigureBottom", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__FigureBottom__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureBottom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureBottom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureLeft__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "FigureLeft" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "FigureLeft" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureLeft__pf = { "FigureLeft", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__FigureLeft__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureLeft__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureLeft__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureRight__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "FigureRight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "FigureRight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureRight__pf = { "FigureRight", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__FigureRight__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureRight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureRight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureTop__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "FigureTop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "FigureTop" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureTop__pf = { "FigureTop", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__FigureTop__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureTop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureTop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ValueBlock__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "ValueBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "ValueBlock" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ValueBlock__pf = { "ValueBlock", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__ValueBlock__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ValueBlock__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ValueBlock__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__wraper__pf_MetaData[] = {
		{ "Category", "TextArea-1" },
		{ "DisplayName", "wraper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "wraper" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__wraper__pf = { "wraper", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__wraper__pf), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__wraper__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__wraper__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Show Figure Top" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ShowFigureTop" },
	};
#endif
	void Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf_SetBit(void* Obj)
	{
		((UTextAreax1_C__pfG724873442*)Obj)->bpv__ShowFigureTop__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf = { "ShowFigureTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextAreax1_C__pfG724873442), &Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Show Figure Bottom" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ShowFigureBottom" },
	};
#endif
	void Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf_SetBit(void* Obj)
	{
		((UTextAreax1_C__pfG724873442*)Obj)->bpv__ShowFigureBottom__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf = { "ShowFigureBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextAreax1_C__pfG724873442), &Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__Text__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Text" },
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Text" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__Text__pf = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, bpv__Text__pf), METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__Text__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__Text__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TextAreax1__pfG724873442.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAreax1_C__pfG724873442, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__background__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderBottom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__BorderTop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__CanvasPanel_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureBottom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureLeft__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureRight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__FigureTop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ValueBlock__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__wraper__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureTop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__ShowFigureBottom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_bpv__Text__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAreax1_C__pfG724873442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::ClassParams = {
		&UTextAreax1_C__pfG724873442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAreax1_C__pfG724873442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/View/TextArea-1"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TextArea-1_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextAreax1_C__pfG724873442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UTextAreax1_C__pfG724873442, TEXT("TextArea-1_C"), 828494510);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UTextAreax1_C__pfG724873442>()
	{
		return UTextAreax1_C__pfG724873442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextAreax1_C__pfG724873442(Z_Construct_UClass_UTextAreax1_C__pfG724873442, &UTextAreax1_C__pfG724873442::StaticClass, TEXT("/Game/UI/View/TextArea-1"), TEXT("TextArea-1_C"), true, TEXT("/Game/UI/View/TextArea-1"), TEXT("/Game/UI/View/TextArea-1.TextArea-1_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAreax1_C__pfG724873442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
