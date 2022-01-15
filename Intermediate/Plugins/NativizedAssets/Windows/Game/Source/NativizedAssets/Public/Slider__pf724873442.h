#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class USlider;
#include "Slider__pf724873442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/View/Slider.Slider_C", OverrideNativeName="Slider_C"))
class USlider_C__pf724873442 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="SetValue__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSetValue__pf__Slider_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="ValueChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChanged__pf__Slider_C__pf__MulticastDelegate , float , bpp__Value__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ImageB", Category="Slider", OverrideNativeName="ImageB"))
	UImage* bpv__ImageB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PikeT", Category="Slider", OverrideNativeName="PikeT"))
	UImage* bpv__PikeT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_0", Category="Slider", OverrideNativeName="Slider_0"))
	USlider* bpv__Slider_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SliderBody", Category="Slider", OverrideNativeName="SliderBody"))
	UImage* bpv__SliderBody__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Value", Category="Default", MultiLine="true", OverrideNativeName="Value"))
	float bpv__Value__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Set Value", Category="Default", MultiLine="true", OverrideNativeName="SetValue"))
	FSetValue__pf__Slider_C__pf__MulticastDelegate bpv__SetValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Value Changed", Category="Default", MultiLine="true", OverrideNativeName="ValueChanged"))
	FValueChanged__pf__Slider_C__pf__MulticastDelegate bpv__ValueChanged__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewParam"))
	float b0l__K2Node_CustomEvent_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SliderStyle"))
	FSliderStyle b0l__K2Node_MakeStruct_SliderStyle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SliderStyle_1"))
	FSliderStyle b0l__K2Node_MakeStruct_SliderStyle_1__pf;
	USlider_C__pf724873442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Slider__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Slider__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Slider__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSetValue"))
	virtual void bpf__OnSetValue__pf(float bpp__NewParam__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
