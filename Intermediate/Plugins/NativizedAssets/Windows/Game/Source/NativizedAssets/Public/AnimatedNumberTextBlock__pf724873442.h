#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UTextBlock;
#include "AnimatedNumberTextBlock__pf724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/AnimatedNumberTextBlock.AnimatedNumberTextBlock_C", OverrideNativeName="AnimatedNumberTextBlock_C"))
class UAnimatedNumberTextBlock_C__pf724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="PositiveValueChangeFromMinus", Category="Animations", OverrideNativeName="PositiveValueChangeFromMinus"))
	UWidgetAnimation* bpv__PositiveValueChangeFromMinus__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="PositiveValueChangeWithStayingMinus", Category="Animations", OverrideNativeName="PositiveValueChangeWithStayingMinus"))
	UWidgetAnimation* bpv__PositiveValueChangeWithStayingMinus__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="NegativeValueChangeWithDepartureFromMinusToMisus", Category="Animations", OverrideNativeName="NegativeValueChangeWithDepartureFromMinusToMisus"))
	UWidgetAnimation* bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="NegativeValueChangeWithDepartureToMinus", Category="Animations", OverrideNativeName="NegativeValueChangeWithDepartureToMinus"))
	UWidgetAnimation* bpv__NegativeValueChangeWithDepartureToMinus__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="NegativeValueChange", Category="Animations", OverrideNativeName="NegativeValueChange"))
	UWidgetAnimation* bpv__NegativeValueChange__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="PositiveValueChange", Category="Animations", OverrideNativeName="PositiveValueChange"))
	UWidgetAnimation* bpv__PositiveValueChange__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock", Category="AnimatedNumberTextBlock", OverrideNativeName="TextBlock"))
	UTextBlock* bpv__TextBlock__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="New Number", Category="Default", MultiLine="true", OverrideNativeName="NewNumber"))
	int64 bpv__NewNumber__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Old Number", Category="Default", MultiLine="true", OverrideNativeName="OldNumber"))
	int64 bpv__OldNumber__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tick Duration", Category="Default", MultiLine="true", OverrideNativeName="TickDuration"))
	float bpv__TickDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Number Of Iterations", Category="Default", MultiLine="true", OverrideNativeName="NumberOfIterations"))
	int64 bpv__NumberOfIterations__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer", Category="Default", MultiLine="true", OverrideNativeName="Timer"))
	FTimerHandle bpv__Timer__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="I", Category="Default", OverrideNativeName="i"))
	int64 bpv__i__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Value Of the Inc", Category="Default", MultiLine="true", OverrideNativeName="ValueOfTheInc"))
	int64 bpv__ValueOfTheInc__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", OverrideNativeName="Time"))
	float bpv__Time__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total Time", Category="Default", MultiLine="true", OverrideNativeName="TotalTime"))
	float bpv__TotalTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Default", MultiLine="true", OverrideNativeName="Text"))
	FText bpv__Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Multiline", Category="Default", MultiLine="true", OverrideNativeName="IsMultiline"))
	bool bpv__IsMultiline__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Separating Mark", Category="Default", MultiLine="true", OverrideNativeName="SeparatingMark"))
	FString bpv__SeparatingMark__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation On", Category="Default", MultiLine="true", OverrideNativeName="AnimationOn"))
	bool bpv__AnimationOn__pf;
	UAnimatedNumberTextBlock_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AnimatedNumberTextBlock__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetValue"))
	virtual void bpf__SetValue__pf(int64 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimationOfPositiveValueChange"))
	virtual void bpf__AnimationOfPositiveValueChange__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimationOfNegativeValueChange"))
	virtual void bpf__AnimationOfNegativeValueChange__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
