#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Dungeoner/Structure/Increase.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UBGWithFramesx1_C__pfG948159406;
class UCanvasPanel;
class UTextBlock;
class UAnimatedNumberTextBlock_C__pf724873442;
#include "SecondaryStatPanel__pf724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/SecondaryStatPanel.SecondaryStatPanel_C", OverrideNativeName="SecondaryStatPanel_C"))
class USecondaryStatPanel_C__pf724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnHover__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHover__pf__SecondaryStatPanel_C__pf__MulticastDelegate , int64 , bpp__Value__pf, int64 , bpp__TotalIncrease__pf, const FText& , bpp__Name__pf, const FText& , bpp__Formula__pf, const FText& , bpp__Description__pf, TArray<FIncrease>& , bpp__Increases__pf);
	UDELEGATE(meta=(OverrideNativeName="OnNoHover__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNoHover__pf__SecondaryStatPanel_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="AddedIncreases__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAddedIncreases__pf__SecondaryStatPanel_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BGWithFrames-1", Category="SecondaryStatPanel", OverrideNativeName="BGWithFrames-1"))
	UBGWithFramesx1_C__pfG948159406* bpv__BGWithFramesx1__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CanvasPanel_0", Category="SecondaryStatPanel", OverrideNativeName="CanvasPanel_0"))
	UCanvasPanel* bpv__CanvasPanel_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CanvasPanel_1", Category="SecondaryStatPanel", OverrideNativeName="CanvasPanel_1"))
	UCanvasPanel* bpv__CanvasPanel_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DescriptionBlock", Category="SecondaryStatPanel", OverrideNativeName="DescriptionBlock"))
	UTextBlock* bpv__DescriptionBlock__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ValueBlock", Category="SecondaryStatPanel", OverrideNativeName="ValueBlock"))
	UAnimatedNumberTextBlock_C__pf724873442* bpv__ValueBlock__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value", Category="Default", MultiLine="true", OverrideNativeName="Value"))
	FText bpv__Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Category="Default", MultiLine="true", OverrideNativeName="Name"))
	FText bpv__Name__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Hover", Category="Default", MultiLine="true", OverrideNativeName="OnHover"))
	FOnHover__pf__SecondaryStatPanel_C__pf__MulticastDelegate bpv__OnHover__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Increases", Category="Default", MultiLine="true", OverrideNativeName="Increases"))
	TArray<FIncrease> bpv__Increases__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On No Hover", Category="Default", MultiLine="true", OverrideNativeName="OnNoHover"))
	FOnNoHover__pf__SecondaryStatPanel_C__pf__MulticastDelegate bpv__OnNoHover__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Hover", Category="Default", MultiLine="true", OverrideNativeName="IsHover"))
	bool bpv__IsHover__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value Int", Category="Default", MultiLine="true", OverrideNativeName="ValueInt"))
	int64 bpv__ValueInt__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Increase", Category="Default", MultiLine="true", OverrideNativeName="TotalIncrease"))
	int64 bpv__TotalIncrease__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Value", Category="Default", MultiLine="true", OverrideNativeName="TotalValue"))
	int64 bpv__TotalValue__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Formula", Category="Default", MultiLine="true", OverrideNativeName="Formula"))
	FText bpv__Formula__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Category="Default", MultiLine="true", OverrideNativeName="Description"))
	FText bpv__Description__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Full Name", Category="Default", MultiLine="true", OverrideNativeName="FullName"))
	FText bpv__FullName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Added Increases", Category="Default", MultiLine="true", OverrideNativeName="AddedIncreases"))
	FAddedIncreases__pf__SecondaryStatPanel_C__pf__MulticastDelegate bpv__AddedIncreases__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	USecondaryStatPanel_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SecondaryStatPanel__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SecondaryStatPanel__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetValue"))
	virtual void bpf__SetValue__pf(int64 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddIncreas"))
	virtual void bpf__AddIncreas__pf(FIncrease bpp__Increases__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddIncreasArray"))
	virtual void bpf__AddIncreasArray__pf(/*out*/ TArray<FIncrease>& bpp__Increases__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
