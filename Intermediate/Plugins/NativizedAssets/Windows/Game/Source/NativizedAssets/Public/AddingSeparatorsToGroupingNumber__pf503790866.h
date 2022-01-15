#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "AddingSeparatorsToGroupingNumber__pf503790866.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprint/AddingSeparatorsToGroupingNumber.AddingSeparatorsToGroupingNumber_C", OverrideNativeName="AddingSeparatorsToGroupingNumber_C"))
class UAddingSeparatorsToGroupingNumber_C__pf503790866 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UAddingSeparatorsToGroupingNumber_C__pf503790866(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="AddingSeparatorsToGroupingNumber"))
	static void bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ FText& bpp__NumberText__pf, const FString& bpp__SeparatingMark__pf__const, UObject* bpp____WorldContext__pf, /*out*/ FText& bpp__SeparatingNumber__pf);
public:
};
