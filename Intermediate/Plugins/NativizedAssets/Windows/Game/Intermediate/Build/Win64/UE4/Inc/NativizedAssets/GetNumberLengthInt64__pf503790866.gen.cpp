// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GetNumberLengthInt64__pf503790866.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetNumberLengthInt64__pf503790866() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGetNumberLengthInt64_C__pf503790866::execbpf__GetxNumberxLength__pfTT)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_bpp__Int__pf);
		P_GET_OBJECT(UObject,Z_Param_bpp____WorldContext__pf);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__Size__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetxNumberxLength__pfTT(Z_Param_bpp__Int__pf,Z_Param_bpp____WorldContext__pf,Z_Param_Out_bpp__Size__pf);
		P_NATIVE_END;
	}
	void UGetNumberLengthInt64_C__pf503790866::StaticRegisterNativesUGetNumberLengthInt64_C__pf503790866()
	{
		UClass* Class = UGetNumberLengthInt64_C__pf503790866::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get Number Length", &UGetNumberLengthInt64_C__pf503790866::execbpf__GetxNumberxLength__pfTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics
	{
		struct GetNumberLengthInt64_C__pf503790866_eventbpf__GetxNumberxLength__pfTT_Parms
		{
			int64 bpp__Int__pf;
			UObject* bpp____WorldContext__pf;
			int32 bpp__Size__pf;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_bpp__Int__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp____WorldContext__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Size__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp__Int__pf = { "bpp__Int__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GetNumberLengthInt64_C__pf503790866_eventbpf__GetxNumberxLength__pfTT_Parms, bpp__Int__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp____WorldContext__pf = { "bpp____WorldContext__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GetNumberLengthInt64_C__pf503790866_eventbpf__GetxNumberxLength__pfTT_Parms, bpp____WorldContext__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp__Size__pf = { "bpp__Size__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GetNumberLengthInt64_C__pf503790866_eventbpf__GetxNumberxLength__pfTT_Parms, bpp__Size__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp__Int__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp____WorldContext__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::NewProp_bpp__Size__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/GetNumberLengthInt64__pf503790866.h" },
		{ "OverrideNativeName", "Get Number Length" },
		{ "ToolTip", "out" },
		{ "WorldContext", "__WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866, nullptr, "Get Number Length", nullptr, nullptr, sizeof(GetNumberLengthInt64_C__pf503790866_eventbpf__GetxNumberxLength__pfTT_Parms), Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get Number Length" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_NoRegister()
	{
		return UGetNumberLengthInt64_C__pf503790866::StaticClass();
	}
	struct Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetNumberLengthInt64_C__pf503790866_bpf__GetxNumberxLength__pfTT, "Get Number Length" }, // 3056942707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetNumberLengthInt64__pf503790866.h" },
		{ "ModuleRelativePath", "Public/GetNumberLengthInt64__pf503790866.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GetNumberLengthInt64_C" },
		{ "ReplaceConverted", "/Game/Blueprint/GetNumberLengthInt64.GetNumberLengthInt64_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetNumberLengthInt64_C__pf503790866>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::ClassParams = {
		&UGetNumberLengthInt64_C__pf503790866::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprint/GetNumberLengthInt64"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GetNumberLengthInt64_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UGetNumberLengthInt64_C__pf503790866, TEXT("GetNumberLengthInt64_C"), 1798099767);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UGetNumberLengthInt64_C__pf503790866>()
	{
		return UGetNumberLengthInt64_C__pf503790866::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetNumberLengthInt64_C__pf503790866(Z_Construct_UClass_UGetNumberLengthInt64_C__pf503790866, &UGetNumberLengthInt64_C__pf503790866::StaticClass, TEXT("/Game/Blueprint/GetNumberLengthInt64"), TEXT("GetNumberLengthInt64_C"), true, TEXT("/Game/Blueprint/GetNumberLengthInt64"), TEXT("/Game/Blueprint/GetNumberLengthInt64.GetNumberLengthInt64_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetNumberLengthInt64_C__pf503790866);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
