#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UCanvasPanel;
class UTextBlock;
#include "TextAreax1__pfG724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/TextArea-1.TextArea-1_C", OverrideNativeName="TextArea-1_C"))
class UTextAreax1_C__pfG724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="background", Category="TextArea-1", OverrideNativeName="background"))
	UImage* bpv__background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderBottom", Category="TextArea-1", OverrideNativeName="BorderBottom"))
	UImage* bpv__BorderBottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderTop", Category="TextArea-1", OverrideNativeName="BorderTop"))
	UImage* bpv__BorderTop__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CanvasPanel_0", Category="TextArea-1", OverrideNativeName="CanvasPanel_0"))
	UCanvasPanel* bpv__CanvasPanel_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FigureBottom", Category="TextArea-1", OverrideNativeName="FigureBottom"))
	UImage* bpv__FigureBottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FigureLeft", Category="TextArea-1", OverrideNativeName="FigureLeft"))
	UImage* bpv__FigureLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FigureRight", Category="TextArea-1", OverrideNativeName="FigureRight"))
	UImage* bpv__FigureRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FigureTop", Category="TextArea-1", OverrideNativeName="FigureTop"))
	UImage* bpv__FigureTop__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ValueBlock", Category="TextArea-1", OverrideNativeName="ValueBlock"))
	UTextBlock* bpv__ValueBlock__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="wraper", Category="TextArea-1", OverrideNativeName="wraper"))
	UCanvasPanel* bpv__wraper__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Show Figure Top", Category="Default", MultiLine="true", OverrideNativeName="ShowFigureTop"))
	bool bpv__ShowFigureTop__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Show Figure Bottom", Category="Default", MultiLine="true", OverrideNativeName="ShowFigureBottom"))
	bool bpv__ShowFigureBottom__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Default", MultiLine="true", OverrideNativeName="Text"))
	FText bpv__Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UTextAreax1_C__pfG724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TextAreax1__pfG_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TextAreax1__pfG_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TextAreax1__pfG_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetText"))
	virtual void bpf__SetText__pf(const FText& bpp__Text__pf__const);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
