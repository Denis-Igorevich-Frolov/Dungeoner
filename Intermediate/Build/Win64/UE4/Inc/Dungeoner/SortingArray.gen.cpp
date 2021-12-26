// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeoner/SortingArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSortingArray() {}
// Cross Module References
	DUNGEONER_API UClass* Z_Construct_UClass_USortingArray_NoRegister();
	DUNGEONER_API UClass* Z_Construct_UClass_USortingArray();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Dungeoner();
// End Cross Module References
	DEFINE_FUNCTION(USortingArray::execStringSort)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ArrayToSort);
		P_GET_UBOOL(Z_Param_Descending);
		P_GET_TARRAY_REF(FString,Z_Param_Out_SortedArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortingArray::StringSort(Z_Param_Out_ArrayToSort,Z_Param_Descending,Z_Param_Out_SortedArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortingArray::execFloatSort)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_ArrayToSort);
		P_GET_UBOOL(Z_Param_Descending);
		P_GET_TARRAY_REF(float,Z_Param_Out_SortedArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortingArray::FloatSort(Z_Param_Out_ArrayToSort,Z_Param_Descending,Z_Param_Out_SortedArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USortingArray::execIntegerSort)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_ArrayToSort);
		P_GET_UBOOL(Z_Param_Descending);
		P_GET_TARRAY_REF(int32,Z_Param_Out_SortedArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		USortingArray::IntegerSort(Z_Param_Out_ArrayToSort,Z_Param_Descending,Z_Param_Out_SortedArray);
		P_NATIVE_END;
	}
	void USortingArray::StaticRegisterNativesUSortingArray()
	{
		UClass* Class = USortingArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FloatSort", &USortingArray::execFloatSort },
			{ "IntegerSort", &USortingArray::execIntegerSort },
			{ "StringSort", &USortingArray::execStringSort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USortingArray_FloatSort_Statics
	{
		struct SortingArray_eventFloatSort_Parms
		{
			TArray<float> ArrayToSort;
			bool Descending;
			TArray<float> SortedArray;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrayToSort_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayToSort;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SortedArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_ArrayToSort_Inner = { "ArrayToSort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_ArrayToSort = { "ArrayToSort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventFloatSort_Parms, ArrayToSort), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingArray_eventFloatSort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingArray_eventFloatSort_Parms), &Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_SortedArray_Inner = { "SortedArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_SortedArray = { "SortedArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventFloatSort_Parms, SortedArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingArray_FloatSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_ArrayToSort_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_ArrayToSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_SortedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_FloatSort_Statics::NewProp_SortedArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingArray_FloatSort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingArray.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingArray_FloatSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingArray, nullptr, "FloatSort", nullptr, nullptr, sizeof(SortingArray_eventFloatSort_Parms), Z_Construct_UFunction_USortingArray_FloatSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_FloatSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingArray_FloatSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_FloatSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingArray_FloatSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingArray_FloatSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortingArray_IntegerSort_Statics
	{
		struct SortingArray_eventIntegerSort_Parms
		{
			TArray<int32> ArrayToSort;
			bool Descending;
			TArray<int32> SortedArray;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayToSort_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayToSort;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortedArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_ArrayToSort_Inner = { "ArrayToSort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_ArrayToSort = { "ArrayToSort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventIntegerSort_Parms, ArrayToSort), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingArray_eventIntegerSort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingArray_eventIntegerSort_Parms), &Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_SortedArray_Inner = { "SortedArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_SortedArray = { "SortedArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventIntegerSort_Parms, SortedArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingArray_IntegerSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_ArrayToSort_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_ArrayToSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_SortedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_IntegerSort_Statics::NewProp_SortedArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingArray_IntegerSort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingArray.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingArray_IntegerSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingArray, nullptr, "IntegerSort", nullptr, nullptr, sizeof(SortingArray_eventIntegerSort_Parms), Z_Construct_UFunction_USortingArray_IntegerSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_IntegerSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingArray_IntegerSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_IntegerSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingArray_IntegerSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingArray_IntegerSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USortingArray_StringSort_Statics
	{
		struct SortingArray_eventStringSort_Parms
		{
			TArray<FString> ArrayToSort;
			bool Descending;
			TArray<FString> SortedArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArrayToSort_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayToSort;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortedArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_ArrayToSort_Inner = { "ArrayToSort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_ArrayToSort = { "ArrayToSort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventStringSort_Parms, ArrayToSort), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((SortingArray_eventStringSort_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortingArray_eventStringSort_Parms), &Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_SortedArray_Inner = { "SortedArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_SortedArray = { "SortedArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortingArray_eventStringSort_Parms, SortedArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortingArray_StringSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_ArrayToSort_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_ArrayToSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_SortedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortingArray_StringSort_Statics::NewProp_SortedArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortingArray_StringSort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "SortingArray.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortingArray_StringSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortingArray, nullptr, "StringSort", nullptr, nullptr, sizeof(SortingArray_eventStringSort_Parms), Z_Construct_UFunction_USortingArray_StringSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_StringSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortingArray_StringSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortingArray_StringSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortingArray_StringSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortingArray_StringSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USortingArray_NoRegister()
	{
		return USortingArray::StaticClass();
	}
	struct Z_Construct_UClass_USortingArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USortingArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeoner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USortingArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USortingArray_FloatSort, "FloatSort" }, // 772749080
		{ &Z_Construct_UFunction_USortingArray_IntegerSort, "IntegerSort" }, // 763566316
		{ &Z_Construct_UFunction_USortingArray_StringSort, "StringSort" }, // 660932022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USortingArray_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SortingArray.h" },
		{ "ModuleRelativePath", "SortingArray.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USortingArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USortingArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USortingArray_Statics::ClassParams = {
		&USortingArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USortingArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USortingArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USortingArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USortingArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USortingArray, 1236948847);
	template<> DUNGEONER_API UClass* StaticClass<USortingArray>()
	{
		return USortingArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USortingArray(Z_Construct_UClass_USortingArray, &USortingArray::StaticClass, TEXT("/Script/Dungeoner"), TEXT("USortingArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USortingArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
