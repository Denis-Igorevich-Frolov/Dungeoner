#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Dungeoner/Structure/Increase.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextAreax1_C__pfG724873442;
class UOffsetNumberTextPanelx1_C__pfG724873442;
#include "PrimaryStat__pf724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/PrimaryStat.PrimaryStat_C", OverrideNativeName="PrimaryStat_C"))
class UPrimaryStat_C__pf724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnValueChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate , int32 , bpp__ValueInt__pf);
	UDELEGATE(meta=(OverrideNativeName="OnHover__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHover__pf__PrimaryStat_C__pf__MulticastDelegate , int32 , bpp__Value__pf, int32 , bpp__TotalIncrease__pf, const FText& , bpp__Name__pf, const FText& , bpp__Description__pf, TArray<FIncrease>& , bpp__Increases__pf);
	UDELEGATE(meta=(OverrideNativeName="OnNoHover__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNoHover__pf__PrimaryStat_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="OnAddedToFocus__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAddedToFocus__pf__PrimaryStat_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="OnRemovedFromFocus__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRemovedFromFocus__pf__PrimaryStat_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StatName", Category="PrimaryStat", OverrideNativeName="StatName"))
	UTextAreax1_C__pfG724873442* bpv__StatName__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StatValueArea", Category="PrimaryStat", OverrideNativeName="StatValueArea"))
	UOffsetNumberTextPanelx1_C__pfG724873442* bpv__StatValueArea__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Hidden Delimiter", Category="Default", MultiLine="true", OverrideNativeName="IsHiddenDelimiter"))
	bool bpv__IsHiddenDelimiter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Category="Default", MultiLine="true", OverrideNativeName="Name"))
	FText bpv__Name__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Value Changed", Category="Default", MultiLine="true", OverrideNativeName="OnValueChanged"))
	FOnValueChanged__pf__PrimaryStat_C__pf__MulticastDelegate bpv__OnValueChanged__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value Int", Category="Default", MultiLine="true", OverrideNativeName="ValueInt"))
	int32 bpv__ValueInt__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Increase", Category="Default", MultiLine="true", OverrideNativeName="TotalIncrease"))
	int32 bpv__TotalIncrease__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Value", Category="Default", MultiLine="true", OverrideNativeName="TotalValue"))
	int32 bpv__TotalValue__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Category="Default", MultiLine="true", OverrideNativeName="Description"))
	FText bpv__Description__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Full Name", Category="Default", MultiLine="true", OverrideNativeName="FullName"))
	FText bpv__FullName__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Increases", Category="Default", MultiLine="true", OverrideNativeName="Increases"))
	TArray<FIncrease> bpv__Increases__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Hover", Category="Default", MultiLine="true", OverrideNativeName="OnHover"))
	FOnHover__pf__PrimaryStat_C__pf__MulticastDelegate bpv__OnHover__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On No Hover", Category="Default", MultiLine="true", OverrideNativeName="OnNoHover"))
	FOnNoHover__pf__PrimaryStat_C__pf__MulticastDelegate bpv__OnNoHover__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Hover", Category="Default", MultiLine="true", OverrideNativeName="IsHover"))
	bool bpv__IsHover__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Added to Focus", Category="Default", MultiLine="true", OverrideNativeName="OnAddedToFocus"))
	FOnAddedToFocus__pf__PrimaryStat_C__pf__MulticastDelegate bpv__OnAddedToFocus__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Removed from Focus", Category="Default", MultiLine="true", OverrideNativeName="OnRemovedFromFocus"))
	FOnRemovedFromFocus__pf__PrimaryStat_C__pf__MulticastDelegate bpv__OnRemovedFromFocus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalValue"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InFocusEvent_1"))
	FFocusEvent b0l__K2Node_Event_InFocusEvent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InFocusEvent"))
	FFocusEvent b0l__K2Node_Event_InFocusEvent__pf;
	UPrimaryStat_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PrimaryStat__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Input", Comment="/**\t * If focus is lost on on this widget or on a child widget and this widget is\t * no longer part of the focus path.\t *\t * @param  InFocusEvent  FocusEvent\t */", ToolTip="If focus is lost on on this widget or on a child widget and this widget isno longer part of the focus path.@param  InFocusEvent  FocusEvent", CppFromBpEvent, OverrideNativeName="OnRemovedFromFocusPath"))
	virtual void bpf__OnRemovedFromFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Input", Comment="/**\t * If focus is gained on on this widget or on a child widget and this widget is added\t * to the focus path, and wasn\'t previously part of it, this event is called.\t *\t * @param  InFocusEvent  FocusEvent\t */", ToolTip="If focus is gained on on this widget or on a child widget and this widget is addedto the focus path, and wasn\'t previously part of it, this event is called.@param  InFocusEvent  FocusEvent", CppFromBpEvent, OverrideNativeName="OnAddedToFocusPath"))
	virtual void bpf__OnAddedToFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PrimaryStat_StatValueArea_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__PrimaryStat_StatValueArea_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf, int32 bpp__TotalValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetValue"))
	virtual void bpf__SetValue__pf(int32 bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="AddIncreasArray"))
	virtual void bpf__AddIncreasArray__pf(/*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetFocusLossTextColor"))
	virtual void bpf__SetFocusLossTextColor__pf(int32 bpp__Value__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
