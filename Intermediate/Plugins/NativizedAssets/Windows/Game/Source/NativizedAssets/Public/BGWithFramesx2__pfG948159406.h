#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "BGWithFramesx2__pfG948159406.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Blanks/PanelDecoration/BGWithFrames-2.BGWithFrames-2_C", OverrideNativeName="BGWithFrames-2_C"))
class UBGWithFramesx2_C__pfG948159406 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleBL", Category="BGWithFrames-2", OverrideNativeName="AngleBL"))
	UImage* bpv__AngleBL__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleBR", Category="BGWithFrames-2", OverrideNativeName="AngleBR"))
	UImage* bpv__AngleBR__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleTL", Category="BGWithFrames-2", OverrideNativeName="AngleTL"))
	UImage* bpv__AngleTL__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleTR", Category="BGWithFrames-2", OverrideNativeName="AngleTR"))
	UImage* bpv__AngleTR__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="BGWithFrames-2", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderBottom", Category="BGWithFrames-2", OverrideNativeName="BorderBottom"))
	UImage* bpv__BorderBottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderLeft", Category="BGWithFrames-2", OverrideNativeName="BorderLeft"))
	UImage* bpv__BorderLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderRight", Category="BGWithFrames-2", OverrideNativeName="BorderRight"))
	UImage* bpv__BorderRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderTop", Category="BGWithFrames-2", OverrideNativeName="BorderTop"))
	UImage* bpv__BorderTop__pf;
	UBGWithFramesx2_C__pfG948159406(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
