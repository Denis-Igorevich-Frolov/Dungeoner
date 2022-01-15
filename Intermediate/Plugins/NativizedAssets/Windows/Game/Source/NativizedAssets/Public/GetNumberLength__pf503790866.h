#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "GetNumberLength__pf503790866.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprint/GetNumberLength.GetNumberLength_C", OverrideNativeName="GetNumberLength_C"))
class UGetNumberLength_C__pf503790866 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UGetNumberLength_C__pf503790866(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", WorldContext="__WorldContext", OverrideNativeName="Get Number Length"))
	virtual void bpf__GetxNumberxLength__pfTT(int32 bpp__Int__pf, UObject* bpp____WorldContext__pf, /*out*/ int32& bpp__Size__pf);
public:
};
