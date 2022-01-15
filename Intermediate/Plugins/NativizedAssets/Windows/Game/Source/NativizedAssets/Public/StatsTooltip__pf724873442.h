#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Dungeoner/Structure/Increase.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UBGWithFramesx2_C__pfG948159406;
class UImage;
class UTextBlock;
class UGridPanel;
#include "StatsTooltip__pf724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/StatsTooltip.StatsTooltip_C", OverrideNativeName="StatsTooltip_C"))
class UStatsTooltip_C__pf724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BGWithFrames-2", Category="StatsTooltip", OverrideNativeName="BGWithFrames-2"))
	UBGWithFramesx2_C__pfG948159406* bpv__BGWithFramesx2__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Border", Category="StatsTooltip", OverrideNativeName="Border"))
	UImage* bpv__Border__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DecorativeEllement", Category="StatsTooltip", OverrideNativeName="DecorativeEllement"))
	UImage* bpv__DecorativeEllement__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Description", Category="StatsTooltip", OverrideNativeName="Description"))
	UTextBlock* bpv__Description__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Formula", Category="StatsTooltip", OverrideNativeName="Formula"))
	UTextBlock* bpv__Formula__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="IncreasesPanel", Category="StatsTooltip", OverrideNativeName="IncreasesPanel"))
	UGridPanel* bpv__IncreasesPanel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="IncreaseTemplate", Category="StatsTooltip", OverrideNativeName="IncreaseTemplate"))
	UTextBlock* bpv__IncreaseTemplate__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name", Category="StatsTooltip", OverrideNativeName="Name"))
	UTextBlock* bpv__Name__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Value", Category="StatsTooltip", OverrideNativeName="Value"))
	UTextBlock* bpv__Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Has Formula", Category="Default", MultiLine="true", OverrideNativeName="HasFormula"))
	bool bpv__HasFormula__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Increases", Category="Default", MultiLine="true", OverrideNativeName="Increases"))
	TArray<FIncrease> bpv__Increases__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UStatsTooltip_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_StatsTooltip__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StatsTooltip__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StatsTooltip__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateNewIncrease"))
	virtual void bpf__CreateNewIncrease__pf(/*out*/ FIncrease& bpp__Increase__pf, int32 bpp__Row__pf, int32 bpp__Column__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FillingIncrease"))
	virtual void bpf__FillingIncrease__pf(/*out*/ TArray<FIncrease>& bpp__increanses__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateIncreases"))
	virtual void bpf__UpdateIncreases__pf(/*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeleteFormula"))
	virtual void bpf__DeleteFormula__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
