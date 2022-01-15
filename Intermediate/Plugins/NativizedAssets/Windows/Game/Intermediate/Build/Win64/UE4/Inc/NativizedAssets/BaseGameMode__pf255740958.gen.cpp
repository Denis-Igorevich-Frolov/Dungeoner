// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BaseGameMode__pf255740958.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameMode__pf255740958() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABaseGameMode_C__pf255740958_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABaseGameMode_C__pf255740958();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseGameMode_C__pf255740958::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABaseGameMode_C__pf255740958::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABaseGameMode_C__pf255740958::StaticRegisterNativesABaseGameMode_C__pf255740958()
	{
		UClass* Class = ABaseGameMode_C__pf255740958::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABaseGameMode_C__pf255740958::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BaseGameMode__pf255740958.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode_C__pf255740958, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABaseGameMode_C__pf255740958();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseGameMode_C__pf255740958_NoRegister()
	{
		return ABaseGameMode_C__pf255740958::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGameMode_C__pf255740958_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3991367086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BaseGameMode__pf255740958.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseGameMode__pf255740958.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BaseGameMode_C" },
		{ "ReplaceConverted", "/Game/GameMode/BaseGameMode.BaseGameMode_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGameMode__pf255740958.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGameMode_C__pf255740958, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::NewProp_bpv__DefaultSceneRoot__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGameMode_C__pf255740958>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::ClassParams = {
		&ABaseGameMode_C__pf255740958::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGameMode_C__pf255740958()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/GameMode/BaseGameMode"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BaseGameMode_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGameMode_C__pf255740958_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABaseGameMode_C__pf255740958, TEXT("BaseGameMode_C"), 3527207603);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABaseGameMode_C__pf255740958>()
	{
		return ABaseGameMode_C__pf255740958::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGameMode_C__pf255740958(Z_Construct_UClass_ABaseGameMode_C__pf255740958, &ABaseGameMode_C__pf255740958::StaticClass, TEXT("/Game/GameMode/BaseGameMode"), TEXT("BaseGameMode_C"), true, TEXT("/Game/GameMode/BaseGameMode"), TEXT("/Game/GameMode/BaseGameMode.BaseGameMode_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameMode_C__pf255740958);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
