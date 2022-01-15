#include "NativizedAssets.h"
#include "AddingSeparatorsToGroupingNumber__pf503790866.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UAddingSeparatorsToGroupingNumber_C__pf503790866::UAddingSeparatorsToGroupingNumber_C__pf503790866(const FObjectInitializer& ObjectInitializer) : Super()
{
	
}
PRAGMA_ENABLE_OPTIMIZATION
void UAddingSeparatorsToGroupingNumber_C__pf503790866::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UAddingSeparatorsToGroupingNumber_C__pf503790866::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ FText& bpp__NumberText__pf, const FString& bpp__SeparatingMark__pf__const, UObject* bpp____WorldContext__pf, /*out*/ FText& bpp__SeparatingNumber__pf)
{
	typedef FString  T__Local__0;
	T__Local__0& bpp__SeparatingMark__pf = *const_cast<T__Local__0 *>(&bpp__SeparatingMark__pf__const);
	int32 bpfv__i__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Left_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Mid_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Replace_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__i__pf = 3;
			}
		case 2:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__NumberText__pf);
				bpfv__CallFunc_Left_ReturnValue__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_Left_ReturnValue__pf, FString(TEXT("-")));
				if (!bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpfv__i__pf = 3;
			}
		case 4:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__NumberText__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, bpfv__i__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__NumberText__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 4);
				bpfv__CallFunc_Mid_ReturnValue__pf = UKismetStringLibrary::Mid(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 1);
				bpfv__CallFunc_Replace_ReturnValue__pf = UKismetStringLibrary::Replace(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, bpfv__CallFunc_Mid_ReturnValue__pf, bpp__SeparatingMark__pf, ESearchCase::IgnoreCase);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Replace_ReturnValue__pf);
				bpp__SeparatingNumber__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__i__pf = 4;
				__CurrentState = 4;
				break;
			}
		case 7:
			{
				bpp__SeparatingNumber__pf = bpp__NumberText__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UAddingSeparatorsToGroupingNumber_C__pf503790866::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UAddingSeparatorsToGroupingNumber_C__pf503790866::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UAddingSeparatorsToGroupingNumber_C__pf503790866
{
	FRegisterHelper__UAddingSeparatorsToGroupingNumber_C__pf503790866()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprint/AddingSeparatorsToGroupingNumber"), &UAddingSeparatorsToGroupingNumber_C__pf503790866::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UAddingSeparatorsToGroupingNumber_C__pf503790866 Instance;
};
FRegisterHelper__UAddingSeparatorsToGroupingNumber_C__pf503790866 FRegisterHelper__UAddingSeparatorsToGroupingNumber_C__pf503790866::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
