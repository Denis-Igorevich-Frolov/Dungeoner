#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UCanvasPanel;
class UAnimatedNumberTextBlock_C__pf724873442;
class UEditableText;
class UWrapBox;
class UTextBlock;
#include "OffsetNumberTextPanelx1__pfG724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/OffsetNumberTextPanel-1.OffsetNumberTextPanel-1_C", OverrideNativeName="OffsetNumberTextPanel-1_C"))
class UOffsetNumberTextPanelx1_C__pfG724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ValueChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChanged__pf__OffsetNumberTextPanelx1_C__pfG__MulticastDelegate , int32 , bpp__ValueInt__pf, int32 , bpp__TotalValue__pf);
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="HiddenDelimiter", Category="Animations", OverrideNativeName="HiddenDelimiter"))
	UWidgetAnimation* bpv__HiddenDelimiter__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="HideGradient", Category="Animations", OverrideNativeName="HideGradient"))
	UWidgetAnimation* bpv__HideGradient__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ShowGradient", Category="Animations", OverrideNativeName="ShowGradient"))
	UWidgetAnimation* bpv__ShowGradient__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleBT", Category="OffsetNumberTextPanel-1", OverrideNativeName="AngleBT"))
	UImage* bpv__AngleBT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleLB", Category="OffsetNumberTextPanel-1", OverrideNativeName="AngleLB"))
	UImage* bpv__AngleLB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleLT", Category="OffsetNumberTextPanel-1", OverrideNativeName="AngleLT"))
	UImage* bpv__AngleLT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AngleRB", Category="OffsetNumberTextPanel-1", OverrideNativeName="AngleRB"))
	UImage* bpv__AngleRB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="OffsetNumberTextPanel-1", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderBottom", Category="OffsetNumberTextPanel-1", OverrideNativeName="BorderBottom"))
	UImage* bpv__BorderBottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderLeft", Category="OffsetNumberTextPanel-1", OverrideNativeName="BorderLeft"))
	UImage* bpv__BorderLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderRight", Category="OffsetNumberTextPanel-1", OverrideNativeName="BorderRight"))
	UImage* bpv__BorderRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BorderTop", Category="OffsetNumberTextPanel-1", OverrideNativeName="BorderTop"))
	UImage* bpv__BorderTop__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CanvasPanel_2", Category="OffsetNumberTextPanel-1", OverrideNativeName="CanvasPanel_2"))
	UCanvasPanel* bpv__CanvasPanel_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Delimiter", Category="OffsetNumberTextPanel-1", OverrideNativeName="Delimiter"))
	UImage* bpv__Delimiter__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FocusLossTex", Category="OffsetNumberTextPanel-1", OverrideNativeName="FocusLossTex"))
	UAnimatedNumberTextBlock_C__pf724873442* bpv__FocusLossTex__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GradientL", Category="OffsetNumberTextPanel-1", OverrideNativeName="GradientL"))
	UImage* bpv__GradientL__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GradientR", Category="OffsetNumberTextPanel-1", OverrideNativeName="GradientR"))
	UImage* bpv__GradientR__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Shedow", Category="OffsetNumberTextPanel-1", OverrideNativeName="Shedow"))
	UImage* bpv__Shedow__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Value", Category="OffsetNumberTextPanel-1", OverrideNativeName="Value"))
	UEditableText* bpv__Value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WrapBox_1", Category="OffsetNumberTextPanel-1", OverrideNativeName="WrapBox_1"))
	UWrapBox* bpv__WrapBox_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Wrapper", Category="OffsetNumberTextPanel-1", OverrideNativeName="Wrapper"))
	UCanvasPanel* bpv__Wrapper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Right Movement", Category="Default", MultiLine="true", OverrideNativeName="IsRightMovement"))
	bool bpv__IsRightMovement__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Panel Is Skrolling", Category="Default", MultiLine="true", OverrideNativeName="PanelIsSkrolling"))
	bool bpv__PanelIsSkrolling__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Default", MultiLine="true", OverrideNativeName="Text"))
	FText bpv__Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Focuse", Category="Default", MultiLine="true", OverrideNativeName="IsFocuse"))
	bool bpv__IsFocuse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Maximum No Scrolling Number", Category="Default", MultiLine="true", OverrideNativeName="MaximumNoScrollingNumber"))
	int32 bpv__MaximumNoScrollingNumber__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Hidden Delimiter", Category="Default", MultiLine="true", OverrideNativeName="IsHiddenDelimiter"))
	bool bpv__IsHiddenDelimiter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previous Text", Category="Default", MultiLine="true", OverrideNativeName="PreviousText"))
	FText bpv__PreviousText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Value", Category="Default", MultiLine="true", OverrideNativeName="TotalValue"))
	int32 bpv__TotalValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Value Changed", Category="Default", MultiLine="true", OverrideNativeName="ValueChanged"))
	FValueChanged__pf__OffsetNumberTextPanelx1_C__pfG__MulticastDelegate bpv__ValueChanged__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value Int", Category="Default", MultiLine="true", OverrideNativeName="ValueInt"))
	int32 bpv__ValueInt__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Increase", Category="Default", MultiLine="true", OverrideNativeName="TotalIncrease"))
	int32 bpv__TotalIncrease__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	bool bpv__NewVar_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InFocusEvent_1"))
	FFocusEvent b0l__K2Node_Event_InFocusEvent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DiateCheck_OutIsSkrolling"))
	bool b0l__CallFunc_DiateCheck_OutIsSkrolling__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InFocusEvent"))
	FFocusEvent b0l__K2Node_Event_InFocusEvent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text_1"))
	FText b0l__K2Node_ComponentBoundEvent_Text_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text"))
	FText b0l__K2Node_ComponentBoundEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_CommitMethod"))
	TEnumAsByte<ETextCommit::Type> b0l__K2Node_ComponentBoundEvent_CommitMethod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DiateCheck_OutIsSkrolling_1"))
	bool b0l__CallFunc_DiateCheck_OutIsSkrolling_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ScrollingCheck_OutIsSkrolling"))
	bool b0l__CallFunc_ScrollingCheck_OutIsSkrolling__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateFontInfo"))
	FSlateFontInfo b0l__K2Node_MakeStruct_SlateFontInfo__pf;
	UOffsetNumberTextPanelx1_C__pfG724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature__pf(FText const& bpp__Text__pf__const, ETextCommit::Type bpp__CommitMethod__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Input", Comment="/**\t * If focus is lost on on this widget or on a child widget and this widget is\t * no longer part of the focus path.\t *\t * @param  InFocusEvent  FocusEvent\t */", ToolTip="If focus is lost on on this widget or on a child widget and this widget isno longer part of the focus path.@param  InFocusEvent  FocusEvent", CppFromBpEvent, OverrideNativeName="OnRemovedFromFocusPath"))
	virtual void bpf__OnRemovedFromFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Input", Comment="/**\t * If focus is gained on on this widget or on a child widget and this widget is added\t * to the focus path, and wasn\'t previously part of it, this event is called.\t *\t * @param  InFocusEvent  FocusEvent\t */", ToolTip="If focus is gained on on this widget or on a child widget and this widget is addedto the focus path, and wasn\'t previously part of it, this event is called.@param  InFocusEvent  FocusEvent", CppFromBpEvent, OverrideNativeName="OnAddedToFocusPath"))
	virtual void bpf__OnAddedToFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature__pf(FText const& bpp__Text__pf__const);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="ScrollingCheck"))
	virtual void bpf__ScrollingCheck__pf(const FText& bpp__Text__pf__const, /*out*/ bool& bpp__IsSkrolling__pf, /*out*/ bool& bpp__OutIsSkrolling__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="ScrollingContent"))
	virtual void bpf__ScrollingContent__pf(float bpp__DeltaTime__pf, /*out*/ UTextBlock*& bpp__Text__pf, bool bpp__IsSkrolling__pf, /*out*/ bool& bpp__IsRightMovement__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="IsNumeric"))
	virtual void bpf__IsNumeric__pf(const FText& bpp__Text__pf__const, const FText& bpp__ValueVariable__pf__const, /*out*/ FText& bpp__TextValid__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="Assignment Stat Text"))
	virtual void bpf__AssignmentxStatxText__pfTT(const FText& bpp__Text__pf__const, /*out*/ FText& bpp__ValueVariable__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="DiateCheck"))
	virtual void bpf__DiateCheck__pf(const FText& bpp__Text__pf__const, /*out*/ bool& bpp__OutIsSkrolling__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReturnToOriginalPosition"))
	virtual void bpf__ReturnToOriginalPosition__pf(float bpp__DeltaTime__pf, /*out*/ UTextBlock*& bpp__Text__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GradientStatus"))
	virtual void bpf__GradientStatus__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTextScrolling"))
	virtual void bpf__UpdateTextScrolling__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SelectedLarge"))
	virtual void bpf__SelectedLarge__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnselectedLarge"))
	virtual void bpf__UnselectedLarge__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SelectedSmall"))
	virtual void bpf__SelectedSmall__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnselectedSmall"))
	virtual void bpf__UnselectedSmall__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetValue"))
	virtual void bpf__SetValue__pf(int32 bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="DiateCheckByNumber"))
	virtual void bpf__DiateCheckByNumber__pf(int32 bpp__Number__pf, /*out*/ bool& bpp__OutIsSkrolling__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
