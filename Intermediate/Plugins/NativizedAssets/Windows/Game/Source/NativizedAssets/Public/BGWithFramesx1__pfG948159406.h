#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UCanvasPanel;
#include "BGWithFramesx1__pfG948159406.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Blanks/PanelDecoration/BGWithFrames-1.BGWithFrames-1_C", OverrideNativeName="BGWithFrames-1_C"))
class UBGWithFramesx1_C__pfG948159406 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleLB", Category="BGWithFrames-1", OverrideNativeName="AngleLB"))
	UImage* bpv__AngleLB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleLT", Category="BGWithFrames-1", OverrideNativeName="AngleLT"))
	UImage* bpv__AngleLT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleRB", Category="BGWithFrames-1", OverrideNativeName="AngleRB"))
	UImage* bpv__AngleRB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleRT", Category="BGWithFrames-1", OverrideNativeName="AngleRT"))
	UImage* bpv__AngleRT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="BGWithFrames-1", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderBottom", Category="BGWithFrames-1", OverrideNativeName="BorderBottom"))
	UImage* bpv__BorderBottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderLeft", Category="BGWithFrames-1", OverrideNativeName="BorderLeft"))
	UImage* bpv__BorderLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderRight", Category="BGWithFrames-1", OverrideNativeName="BorderRight"))
	UImage* bpv__BorderRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderTop", Category="BGWithFrames-1", OverrideNativeName="BorderTop"))
	UImage* bpv__BorderTop__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CanvasPanel_0", Category="BGWithFrames-1", OverrideNativeName="CanvasPanel_0"))
	UCanvasPanel* bpv__CanvasPanel_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UBGWithFramesx1_C__pfG948159406(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BGWithFramesx1__pfG_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BGWithFramesx1__pfG_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
