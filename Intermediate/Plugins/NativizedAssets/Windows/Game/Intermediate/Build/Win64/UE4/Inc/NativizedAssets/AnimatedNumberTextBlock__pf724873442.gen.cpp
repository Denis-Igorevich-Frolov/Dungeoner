// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AnimatedNumberTextBlock__pf724873442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedNumberTextBlock__pf724873442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(UAnimatedNumberTextBlock_C__pf724873442::execbpf__AnimationOfNegativeValueChange__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimationOfNegativeValueChange__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedNumberTextBlock_C__pf724873442::execbpf__AnimationOfPositiveValueChange__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimationOfPositiveValueChange__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedNumberTextBlock_C__pf724873442::execbpf__SetValue__pf)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_bpp__Value__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetValue__pf(Z_Param_bpp__Value__pf,Z_Param_bpp__DeltaTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedNumberTextBlock_C__pf724873442::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	static FName NAME_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf = FName(TEXT("Construct"));
	void UAnimatedNumberTextBlock_C__pf724873442::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf),NULL);
	}
	void UAnimatedNumberTextBlock_C__pf724873442::StaticRegisterNativesUAnimatedNumberTextBlock_C__pf724873442()
	{
		UClass* Class = UAnimatedNumberTextBlock_C__pf724873442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationOfNegativeValueChange", &UAnimatedNumberTextBlock_C__pf724873442::execbpf__AnimationOfNegativeValueChange__pf },
			{ "AnimationOfPositiveValueChange", &UAnimatedNumberTextBlock_C__pf724873442::execbpf__AnimationOfPositiveValueChange__pf },
			{ "Construct", &UAnimatedNumberTextBlock_C__pf724873442::execbpf__Construct__pf },
			{ "SetValue", &UAnimatedNumberTextBlock_C__pf724873442::execbpf__SetValue__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "AnimationOfNegativeValueChange" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442, nullptr, "AnimationOfNegativeValueChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AnimationOfNegativeValueChange" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "AnimationOfPositiveValueChange" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442, nullptr, "AnimationOfPositiveValueChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AnimationOfPositiveValueChange" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics
	{
		struct AnimatedNumberTextBlock_C__pf724873442_eventbpf__SetValue__pf_Parms
		{
			int64 bpp__Value__pf;
			float bpp__DeltaTime__pf;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpp__Value__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::NewProp_bpp__Value__pf = { "bpp__Value__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AnimatedNumberTextBlock_C__pf724873442_eventbpf__SetValue__pf_Parms, bpp__Value__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::NewProp_bpp__DeltaTime__pf = { "bpp__DeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AnimatedNumberTextBlock_C__pf724873442_eventbpf__SetValue__pf_Parms, bpp__DeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::NewProp_bpp__Value__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::NewProp_bpp__DeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "SetValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442, nullptr, "SetValue", nullptr, nullptr, sizeof(AnimatedNumberTextBlock_C__pf724873442_eventbpf__SetValue__pf_Parms), Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetValue" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_NoRegister()
	{
		return UAnimatedNumberTextBlock_C__pf724873442::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositiveValueChangeFromMinus__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PositiveValueChangeFromMinus__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositiveValueChangeWithStayingMinus__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PositiveValueChangeWithStayingMinus__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NegativeValueChange__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NegativeValueChange__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositiveValueChange__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PositiveValueChange__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewNumber__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpv__NewNumber__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OldNumber__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpv__OldNumber__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TickDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TickDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NumberOfIterations__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpv__NumberOfIterations__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Timer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__i__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpv__i__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ValueOfTheInc__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpv__ValueOfTheInc__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TotalTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TotalTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Text__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Text__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsMultiline__pf_MetaData[];
#endif
		static void NewProp_bpv__IsMultiline__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsMultiline__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SeparatingMark__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__SeparatingMark__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimationOn__pf_MetaData[];
#endif
		static void NewProp_bpv__AnimationOn__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__AnimationOn__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfNegativeValueChange__pf, "AnimationOfNegativeValueChange" }, // 3948404392
		{ &Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__AnimationOfPositiveValueChange__pf, "AnimationOfPositiveValueChange" }, // 3095114732
		{ &Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__Construct__pf, "Construct" }, // 456518272
		{ &Z_Construct_UFunction_UAnimatedNumberTextBlock_C__pf724873442_bpf__SetValue__pf, "SetValue" }, // 2699435726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimatedNumberTextBlock__pf724873442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AnimatedNumberTextBlock_C" },
		{ "ReplaceConverted", "/Game/UI/View/AnimatedNumberTextBlock.AnimatedNumberTextBlock_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeFromMinus__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "PositiveValueChangeFromMinus" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "PositiveValueChangeFromMinus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeFromMinus__pf = { "PositiveValueChangeFromMinus", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__PositiveValueChangeFromMinus__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeFromMinus__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeFromMinus__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeWithStayingMinus__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "PositiveValueChangeWithStayingMinus" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "PositiveValueChangeWithStayingMinus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeWithStayingMinus__pf = { "PositiveValueChangeWithStayingMinus", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__PositiveValueChangeWithStayingMinus__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeWithStayingMinus__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeWithStayingMinus__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "NegativeValueChangeWithDepartureFromMinusToMisus" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "NegativeValueChangeWithDepartureFromMinusToMisus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf = { "NegativeValueChangeWithDepartureFromMinusToMisus", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "NegativeValueChangeWithDepartureToMinus" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "NegativeValueChangeWithDepartureToMinus" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf = { "NegativeValueChangeWithDepartureToMinus", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__NegativeValueChangeWithDepartureToMinus__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChange__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "NegativeValueChange" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "NegativeValueChange" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChange__pf = { "NegativeValueChange", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__NegativeValueChange__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChange__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChange__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChange__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "PositiveValueChange" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "PositiveValueChange" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChange__pf = { "PositiveValueChange", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__PositiveValueChange__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChange__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChange__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TextBlock__pf_MetaData[] = {
		{ "Category", "AnimatedNumberTextBlock" },
		{ "DisplayName", "TextBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "TextBlock" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TextBlock__pf = { "TextBlock", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__TextBlock__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TextBlock__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TextBlock__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NewNumber__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Number" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewNumber" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NewNumber__pf = { "NewNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__NewNumber__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NewNumber__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NewNumber__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__OldNumber__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Old Number" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "OldNumber" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__OldNumber__pf = { "OldNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__OldNumber__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__OldNumber__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__OldNumber__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TickDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tick Duration" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TickDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TickDuration__pf = { "TickDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__TickDuration__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TickDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TickDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NumberOfIterations__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Number Of Iterations" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NumberOfIterations" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NumberOfIterations__pf = { "NumberOfIterations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__NumberOfIterations__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NumberOfIterations__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NumberOfIterations__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Timer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Timer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Timer__pf = { "Timer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__Timer__pf), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Timer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Timer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__i__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "I" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "OverrideNativeName", "i" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__i__pf = { "i", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__i__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__i__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__i__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__ValueOfTheInc__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Value Of the Inc" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ValueOfTheInc" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__ValueOfTheInc__pf = { "ValueOfTheInc", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__ValueOfTheInc__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__ValueOfTheInc__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__ValueOfTheInc__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Time__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Time" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Time__pf = { "Time", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__Time__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TotalTime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Total Time" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TotalTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TotalTime__pf = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__TotalTime__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TotalTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TotalTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Text__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Text" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Text" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Text__pf = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__Text__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Text__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Text__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Multiline" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IsMultiline" },
	};
#endif
	void Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf_SetBit(void* Obj)
	{
		((UAnimatedNumberTextBlock_C__pf724873442*)Obj)->bpv__IsMultiline__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf = { "IsMultiline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimatedNumberTextBlock_C__pf724873442), &Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__SeparatingMark__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Separating Mark" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SeparatingMark" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__SeparatingMark__pf = { "SeparatingMark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedNumberTextBlock_C__pf724873442, bpv__SeparatingMark__pf), METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__SeparatingMark__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__SeparatingMark__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Animation On" },
		{ "ModuleRelativePath", "Public/AnimatedNumberTextBlock__pf724873442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AnimationOn" },
	};
#endif
	void Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf_SetBit(void* Obj)
	{
		((UAnimatedNumberTextBlock_C__pf724873442*)Obj)->bpv__AnimationOn__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf = { "AnimationOn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimatedNumberTextBlock_C__pf724873442), &Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeFromMinus__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChangeWithStayingMinus__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChangeWithDepartureToMinus__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NegativeValueChange__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__PositiveValueChange__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TextBlock__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NewNumber__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__OldNumber__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TickDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__NumberOfIterations__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Timer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__i__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__ValueOfTheInc__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__TotalTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__Text__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__IsMultiline__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__SeparatingMark__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::NewProp_bpv__AnimationOn__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedNumberTextBlock_C__pf724873442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::ClassParams = {
		&UAnimatedNumberTextBlock_C__pf724873442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UI/View/AnimatedNumberTextBlock"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AnimatedNumberTextBlock_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UAnimatedNumberTextBlock_C__pf724873442, TEXT("AnimatedNumberTextBlock_C"), 2804703462);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UAnimatedNumberTextBlock_C__pf724873442>()
	{
		return UAnimatedNumberTextBlock_C__pf724873442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimatedNumberTextBlock_C__pf724873442(Z_Construct_UClass_UAnimatedNumberTextBlock_C__pf724873442, &UAnimatedNumberTextBlock_C__pf724873442::StaticClass, TEXT("/Game/UI/View/AnimatedNumberTextBlock"), TEXT("AnimatedNumberTextBlock_C"), true, TEXT("/Game/UI/View/AnimatedNumberTextBlock"), TEXT("/Game/UI/View/AnimatedNumberTextBlock.AnimatedNumberTextBlock_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedNumberTextBlock_C__pf724873442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
