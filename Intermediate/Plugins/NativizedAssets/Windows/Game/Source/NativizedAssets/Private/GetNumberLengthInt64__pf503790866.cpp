#include "NativizedAssets.h"
#include "GetNumberLengthInt64__pf503790866.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UGetNumberLengthInt64_C__pf503790866::UGetNumberLengthInt64_C__pf503790866(const FObjectInitializer& ObjectInitializer) : Super()
{
	
}
PRAGMA_ENABLE_OPTIMIZATION
void UGetNumberLengthInt64_C__pf503790866::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGetNumberLengthInt64_C__pf503790866::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
void UGetNumberLengthInt64_C__pf503790866::bpf__GetxNumberxLength__pfTT(int64 bpp__Int__pf, UObject* bpp____WorldContext__pf, /*out*/ int32& bpp__Size__pf)
{
	int64 bpfv__Number__pf{};
	int32 bpfv__j__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int64 bpfv__CallFunc_Divide_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Number__pf = bpp__Int__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable_1__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable_1__pf, 30);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(10);
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__j__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 6:
			{
				bpfv__j__pf = bpfv__Temp_int_Variable__pf;
			}
		case 7:
			{
				bpfv__CallFunc_Divide_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Divide_Int64Int64(bpfv__Number__pf, 10);
				bpfv__Number__pf = bpfv__CallFunc_Divide_Int64Int64_ReturnValue__pf;
			}
		case 8:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Less_Int64Int64(bpfv__Number__pf, 1);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpp__Size__pf = bpfv__j__pf;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_1__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UGetNumberLengthInt64_C__pf503790866::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UGetNumberLengthInt64_C__pf503790866::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UGetNumberLengthInt64_C__pf503790866
{
	FRegisterHelper__UGetNumberLengthInt64_C__pf503790866()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprint/GetNumberLengthInt64"), &UGetNumberLengthInt64_C__pf503790866::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UGetNumberLengthInt64_C__pf503790866 Instance;
};
FRegisterHelper__UGetNumberLengthInt64_C__pf503790866 FRegisterHelper__UGetNumberLengthInt64_C__pf503790866::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
