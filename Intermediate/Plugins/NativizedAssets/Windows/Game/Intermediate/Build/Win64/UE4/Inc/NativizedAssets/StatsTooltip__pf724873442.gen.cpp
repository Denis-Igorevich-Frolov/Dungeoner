// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/StatsTooltip__pf724873442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsTooltip__pf724873442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStatsTooltip_C__pf724873442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStatsTooltip_C__pf724873442();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	DUNGEONER_API UScriptStruct* Z_Construct_UScriptStruct_FIncrease();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBGWithFramesx2_C__pfG948159406_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__DeleteFormula__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DeleteFormula__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__UpdateIncreases__pf)
	{
		P_GET_TARRAY_REF(FIncrease,Z_Param_Out_bpp__Increases__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateIncreases__pf(Z_Param_Out_bpp__Increases__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__FillingIncrease__pf)
	{
		P_GET_TARRAY_REF(FIncrease,Z_Param_Out_bpp__increanses__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FillingIncrease__pf(Z_Param_Out_bpp__increanses__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__CreateNewIncrease__pf)
	{
		P_GET_STRUCT_REF(FIncrease,Z_Param_Out_bpp__Increase__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Row__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Column__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CreateNewIncrease__pf(Z_Param_Out_bpp__Increase__pf,Z_Param_bpp__Row__pf,Z_Param_bpp__Column__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsTooltip_C__pf724873442::execbpf__OnInitialized__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnInitialized__pf();
		P_NATIVE_END;
	}
	static FName NAME_UStatsTooltip_C__pf724873442_bpf__Construct__pf = FName(TEXT("Construct"));
	void UStatsTooltip_C__pf724873442::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStatsTooltip_C__pf724873442_bpf__Construct__pf),NULL);
	}
	static FName NAME_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf = FName(TEXT("OnInitialized"));
	void UStatsTooltip_C__pf724873442::eventbpf__OnInitialized__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf),NULL);
	}
	static FName NAME_UStatsTooltip_C__pf724873442_bpf__Tick__pf = FName(TEXT("Tick"));
	void UStatsTooltip_C__pf724873442::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		StatsTooltip_C__pf724873442_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UStatsTooltip_C__pf724873442_bpf__Tick__pf),&Parms);
	}
	void UStatsTooltip_C__pf724873442::StaticRegisterNativesUStatsTooltip_C__pf724873442()
	{
		UClass* Class = UStatsTooltip_C__pf724873442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UStatsTooltip_C__pf724873442::execbpf__Construct__pf },
			{ "CreateNewIncrease", &UStatsTooltip_C__pf724873442::execbpf__CreateNewIncrease__pf },
			{ "DeleteFormula", &UStatsTooltip_C__pf724873442::execbpf__DeleteFormula__pf },
			{ "FillingIncrease", &UStatsTooltip_C__pf724873442::execbpf__FillingIncrease__pf },
			{ "OnInitialized", &UStatsTooltip_C__pf724873442::execbpf__OnInitialized__pf },
			{ "Tick", &UStatsTooltip_C__pf724873442::execbpf__Tick__pf },
			{ "UpdateIncreases", &UStatsTooltip_C__pf724873442::execbpf__UpdateIncreases__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics
	{
		struct StatsTooltip_C__pf724873442_eventbpf__CreateNewIncrease__pf_Parms
		{
			FIncrease bpp__Increase__pf;
			int32 bpp__Row__pf;
			int32 bpp__Column__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Increase__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Row__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Column__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Increase__pf = { "bpp__Increase__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__CreateNewIncrease__pf_Parms, bpp__Increase__pf), Z_Construct_UScriptStruct_FIncrease, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Row__pf = { "bpp__Row__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__CreateNewIncrease__pf_Parms, bpp__Row__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Column__pf = { "bpp__Column__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__CreateNewIncrease__pf_Parms, bpp__Column__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Increase__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Row__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::NewProp_bpp__Column__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "CreateNewIncrease" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "CreateNewIncrease", nullptr, nullptr, sizeof(StatsTooltip_C__pf724873442_eventbpf__CreateNewIncrease__pf_Parms), Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CreateNewIncrease" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "DeleteFormula" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "DeleteFormula", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DeleteFormula" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics
	{
		struct StatsTooltip_C__pf724873442_eventbpf__FillingIncrease__pf_Parms
		{
			TArray<FIncrease> bpp__increanses__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__increanses__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__increanses__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::NewProp_bpp__increanses__pf_Inner = { "bpp__increanses__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FIncrease, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::NewProp_bpp__increanses__pf = { "bpp__increanses__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__FillingIncrease__pf_Parms, bpp__increanses__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::NewProp_bpp__increanses__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::NewProp_bpp__increanses__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "FillingIncrease" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "FillingIncrease", nullptr, nullptr, sizeof(StatsTooltip_C__pf724873442_eventbpf__FillingIncrease__pf_Parms), Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "FillingIncrease" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** t * Called once only at game time on non-template instances.t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "OnInitialized" },
		{ "ToolTip", "Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnInitialized" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "Tick", nullptr, nullptr, sizeof(StatsTooltip_C__pf724873442_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics
	{
		struct StatsTooltip_C__pf724873442_eventbpf__UpdateIncreases__pf_Parms
		{
			TArray<FIncrease> bpp__Increases__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Increases__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__Increases__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::NewProp_bpp__Increases__pf_Inner = { "bpp__Increases__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FIncrease, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::NewProp_bpp__Increases__pf = { "bpp__Increases__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(StatsTooltip_C__pf724873442_eventbpf__UpdateIncreases__pf_Parms, bpp__Increases__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::NewProp_bpp__Increases__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::NewProp_bpp__Increases__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "UpdateIncreases" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsTooltip_C__pf724873442, nullptr, "UpdateIncreases", nullptr, nullptr, sizeof(StatsTooltip_C__pf724873442_eventbpf__UpdateIncreases__pf_Parms), Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStatsTooltip_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateIncreases" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatsTooltip_C__pf724873442_NoRegister()
	{
		return UStatsTooltip_C__pf724873442::StaticClass();
	}
	struct Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BGWithFramesx2__pfG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BGWithFramesx2__pfG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Border__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Border__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DecorativeEllement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DecorativeEllement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Description__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Description__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Formula__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Formula__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IncreasesPanel__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__IncreasesPanel__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IncreaseTemplate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__IncreaseTemplate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Name__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Name__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Value__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Value__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HasFormula__pf_MetaData[];
#endif
		static void NewProp_bpv__HasFormula__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HasFormula__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Increases__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Increases__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Increases__pf;
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
	UObject* (*const Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Construct__pf, "Construct" }, // 2883868521
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__CreateNewIncrease__pf, "CreateNewIncrease" }, // 1982238101
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__DeleteFormula__pf, "DeleteFormula" }, // 658081554
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__FillingIncrease__pf, "FillingIncrease" }, // 1545577953
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__OnInitialized__pf, "OnInitialized" }, // 2290719540
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__Tick__pf, "Tick" }, // 293737301
		{ &Z_Construct_UFunction_UStatsTooltip_C__pf724873442_bpf__UpdateIncreases__pf, "UpdateIncreases" }, // 3734430247
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsTooltip__pf724873442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "StatsTooltip_C" },
		{ "ReplaceConverted", "/Game/UI/View/StatsTooltip.StatsTooltip_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__BGWithFramesx2__pfG_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "BGWithFrames-2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "BGWithFrames-2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__BGWithFramesx2__pfG = { "BGWithFrames-2", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__BGWithFramesx2__pfG), Z_Construct_UClass_UBGWithFramesx2_C__pfG948159406_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__BGWithFramesx2__pfG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__BGWithFramesx2__pfG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Border__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "Border" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Border" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Border__pf = { "Border", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Border__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Border__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Border__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__DecorativeEllement__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "DecorativeEllement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "DecorativeEllement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__DecorativeEllement__pf = { "DecorativeEllement", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__DecorativeEllement__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__DecorativeEllement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__DecorativeEllement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Description__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "Description" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Description" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Description__pf = { "Description", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Description__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Description__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Description__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Formula__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "Formula" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Formula" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Formula__pf = { "Formula", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Formula__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Formula__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Formula__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreasesPanel__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "IncreasesPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "IncreasesPanel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreasesPanel__pf = { "IncreasesPanel", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__IncreasesPanel__pf), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreasesPanel__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreasesPanel__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreaseTemplate__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "IncreaseTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "IncreaseTemplate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreaseTemplate__pf = { "IncreaseTemplate", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__IncreaseTemplate__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreaseTemplate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreaseTemplate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Name__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "Name" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Name" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Name__pf = { "Name", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Name__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Name__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Name__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Value__pf_MetaData[] = {
		{ "Category", "StatsTooltip" },
		{ "DisplayName", "Value" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Value__pf = { "Value", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Value__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Value__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Value__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Has Formula" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HasFormula" },
	};
#endif
	void Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf_SetBit(void* Obj)
	{
		((UStatsTooltip_C__pf724873442*)Obj)->bpv__HasFormula__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf = { "HasFormula", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatsTooltip_C__pf724873442), &Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf_Inner = { "bpv__Increases__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIncrease, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Increases" },
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Increases" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf = { "Increases", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, bpv__Increases__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsTooltip__pf724873442.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsTooltip_C__pf724873442, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__BGWithFramesx2__pfG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Border__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__DecorativeEllement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Description__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Formula__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreasesPanel__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__IncreaseTemplate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Name__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Value__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__HasFormula__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_bpv__Increases__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsTooltip_C__pf724873442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::ClassParams = {
		&UStatsTooltip_C__pf724873442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsTooltip_C__pf724873442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/View/StatsTooltip"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("StatsTooltip_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatsTooltip_C__pf724873442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UStatsTooltip_C__pf724873442, TEXT("StatsTooltip_C"), 788469530);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UStatsTooltip_C__pf724873442>()
	{
		return UStatsTooltip_C__pf724873442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatsTooltip_C__pf724873442(Z_Construct_UClass_UStatsTooltip_C__pf724873442, &UStatsTooltip_C__pf724873442::StaticClass, TEXT("/Game/UI/View/StatsTooltip"), TEXT("StatsTooltip_C"), true, TEXT("/Game/UI/View/StatsTooltip"), TEXT("/Game/UI/View/StatsTooltip.StatsTooltip_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsTooltip_C__pf724873442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
