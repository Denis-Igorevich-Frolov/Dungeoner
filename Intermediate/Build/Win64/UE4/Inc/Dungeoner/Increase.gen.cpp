// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeoner/Structure/Increase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncrease() {}
// Cross Module References
	DUNGEONER_API UScriptStruct* Z_Construct_UScriptStruct_FIncrease();
	UPackage* Z_Construct_UPackage__Script_Dungeoner();
// End Cross Module References
class UScriptStruct* FIncrease::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DUNGEONER_API uint32 Get_Z_Construct_UScriptStruct_FIncrease_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIncrease, Z_Construct_UPackage__Script_Dungeoner(), TEXT("Increase"), sizeof(FIncrease), Get_Z_Construct_UScriptStruct_FIncrease_Hash());
	}
	return Singleton;
}
template<> DUNGEONER_API UScriptStruct* StaticStruct<FIncrease>()
{
	return FIncrease::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIncrease(FIncrease::StaticStruct, TEXT("/Script/Dungeoner"), TEXT("Increase"), false, nullptr, nullptr);
static struct FScriptStruct_Dungeoner_StaticRegisterNativesFIncrease
{
	FScriptStruct_Dungeoner_StaticRegisterNativesFIncrease()
	{
		UScriptStruct::DeferCppStructOps<FIncrease>(FName(TEXT("Increase")));
	}
} ScriptStruct_Dungeoner_StaticRegisterNativesFIncrease;
	struct Z_Construct_UScriptStruct_FIncrease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIncrease_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structure/Increase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIncrease_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIncrease>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Increase" },
		{ "ModuleRelativePath", "Structure/Increase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIncrease, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Increase" },
		{ "ModuleRelativePath", "Structure/Increase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIncrease, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Increase" },
		{ "ModuleRelativePath", "Structure/Increase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIncrease, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIncrease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIncrease_Statics::NewProp_Duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIncrease_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dungeoner,
		nullptr,
		&NewStructOps,
		"Increase",
		sizeof(FIncrease),
		alignof(FIncrease),
		Z_Construct_UScriptStruct_FIncrease_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIncrease_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIncrease_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIncrease_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIncrease()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIncrease_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dungeoner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Increase"), sizeof(FIncrease), Get_Z_Construct_UScriptStruct_FIncrease_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIncrease_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIncrease_Hash() { return 3457991442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
