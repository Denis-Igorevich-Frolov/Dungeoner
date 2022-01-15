#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "PhysicalDamageScaling__pf2358337580.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Dungeoner/Structure/Increase.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USecondaryStatPanel_C__pf724873442;
class UPrimaryStat_C__pf724873442;
class UImage;
class UCanvasPanel;
class UScrollBox;
class USlider_C__pf724873442;
class UTextBlock;
#include "CharacterWindow__pf3035829248.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Windows/CharacterWindow.CharacterWindow_C", OverrideNativeName="CharacterWindow_C"))
class UCharacterWindow_C__pf3035829248 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AccuracyOfMagicValue", Category="CharacterWindow", OverrideNativeName="AccuracyOfMagicValue"))
	USecondaryStatPanel_C__pf724873442* bpv__AccuracyOfMagicValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AgilityValue", Category="CharacterWindow", OverrideNativeName="AgilityValue"))
	UPrimaryStat_C__pf724873442* bpv__AgilityValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AttentionValue", Category="CharacterWindow", OverrideNativeName="AttentionValue"))
	USecondaryStatPanel_C__pf724873442* bpv__AttentionValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BackGround", Category="CharacterWindow", OverrideNativeName="BackGround"))
	UImage* bpv__BackGround__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CarryingCapacityValue", Category="CharacterWindow", OverrideNativeName="CarryingCapacityValue"))
	USecondaryStatPanel_C__pf724873442* bpv__CarryingCapacityValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ChanceOfRealizingCombatTechniqueValue", Category="CharacterWindow", OverrideNativeName="ChanceOfRealizingCombatTechniqueValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ChanceOfRealizingCombatTechniqueValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ChanceToCastMagicTechniqueValue", Category="CharacterWindow", OverrideNativeName="ChanceToCastMagicTechniqueValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ChanceToCastMagicTechniqueValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ConstitutionValue", Category="CharacterWindow", OverrideNativeName="ConstitutionValue"))
	UPrimaryStat_C__pf724873442* bpv__ConstitutionValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EnhancedMagicEffectsValue", Category="CharacterWindow", OverrideNativeName="EnhancedMagicEffectsValue"))
	USecondaryStatPanel_C__pf724873442* bpv__EnhancedMagicEffectsValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EnhancedPhysicalEffectsValue", Category="CharacterWindow", OverrideNativeName="EnhancedPhysicalEffectsValue"))
	USecondaryStatPanel_C__pf724873442* bpv__EnhancedPhysicalEffectsValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EvasionValue", Category="CharacterWindow", OverrideNativeName="EvasionValue"))
	USecondaryStatPanel_C__pf724873442* bpv__EvasionValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Incrase Panel", Category="CharacterWindow", OverrideNativeName="IncrasePanel"))
	UCanvasPanel* bpv__IncrasePanel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InitiativeValue", Category="CharacterWindow", OverrideNativeName="InitiativeValue"))
	USecondaryStatPanel_C__pf724873442* bpv__InitiativeValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="IntelligenceValue", Category="CharacterWindow", OverrideNativeName="IntelligenceValue"))
	UPrimaryStat_C__pf724873442* bpv__IntelligenceValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MagicCastChanceValue", Category="CharacterWindow", OverrideNativeName="MagicCastChanceValue"))
	USecondaryStatPanel_C__pf724873442* bpv__MagicCastChanceValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MagicDamageValue", Category="CharacterWindow", OverrideNativeName="MagicDamageValue"))
	USecondaryStatPanel_C__pf724873442* bpv__MagicDamageValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MagicValue", Category="CharacterWindow", OverrideNativeName="MagicValue"))
	UPrimaryStat_C__pf724873442* bpv__MagicValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MeleeAccuracyValue", Category="CharacterWindow", OverrideNativeName="MeleeAccuracyValue"))
	USecondaryStatPanel_C__pf724873442* bpv__MeleeAccuracyValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MovementValue", Category="CharacterWindow", OverrideNativeName="MovementValue"))
	USecondaryStatPanel_C__pf724873442* bpv__MovementValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Physical DamageValue", Category="CharacterWindow", OverrideNativeName="PhysicalDamageValue"))
	USecondaryStatPanel_C__pf724873442* bpv__PhysicalDamageValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RangedAccuracyValue", Category="CharacterWindow", OverrideNativeName="RangedAccuracyValue"))
	USecondaryStatPanel_C__pf724873442* bpv__RangedAccuracyValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResistanceToMagicDamageValue", Category="CharacterWindow", OverrideNativeName="ResistanceToMagicDamageValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ResistanceToMagicDamageValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResistanceToMagicEffectsValue", Category="CharacterWindow", OverrideNativeName="ResistanceToMagicEffectsValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ResistanceToMagicEffectsValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResistanceToPhysicalDamageValue", Category="CharacterWindow", OverrideNativeName="ResistanceToPhysicalDamageValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ResistanceToPhysicalDamageValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResistanceToPhysicalEffectsValue", Category="CharacterWindow", OverrideNativeName="ResistanceToPhysicalEffectsValue"))
	USecondaryStatPanel_C__pf724873442* bpv__ResistanceToPhysicalEffectsValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_0", Category="CharacterWindow", OverrideNativeName="ScrollBox_0"))
	UScrollBox* bpv__ScrollBox_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SecondaryStatsBar", Category="CharacterWindow", OverrideNativeName="SecondaryStatsBar"))
	UCanvasPanel* bpv__SecondaryStatsBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider", Category="CharacterWindow", OverrideNativeName="Slider"))
	USlider_C__pf724873442* bpv__Slider__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StealthValue", Category="CharacterWindow", OverrideNativeName="StealthValue"))
	USecondaryStatPanel_C__pf724873442* bpv__StealthValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StrengthValue", Category="CharacterWindow", OverrideNativeName="StrengthValue"))
	UPrimaryStat_C__pf724873442* bpv__StrengthValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock", Category="CharacterWindow", OverrideNativeName="TextBlock"))
	UTextBlock* bpv__TextBlock__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_0", Category="CharacterWindow", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TopBorderElement-1", Category="CharacterWindow", OverrideNativeName="TopBorderElement-1"))
	UImage* bpv__TopBorderElementx1__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TopBorderElement-2", Category="CharacterWindow", OverrideNativeName="TopBorderElement-2"))
	UImage* bpv__TopBorderElementx2__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WillValue", Category="CharacterWindow", OverrideNativeName="WillValue"))
	UPrimaryStat_C__pf724873442* bpv__WillValue__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Physical Damage Scaling", Category="Default", MultiLine="true", OverrideNativeName="PhysicalDamageScaling"))
	E__PhysicalDamageScaling__pf bpv__PhysicalDamageScaling__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Equipment Debuff on Stealth", Category="Default", MultiLine="true", OverrideNativeName="EquipmentDebuffOnStealth"))
	int32 bpv__EquipmentDebuffOnStealth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Pointer Event", Category="Default", MultiLine="true", OverrideNativeName="CurrentPointerEvent"))
	FPointerEvent bpv__CurrentPointerEvent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Strength", Category="Default", MultiLine="true", OverrideNativeName="Strength"))
	int32 bpv__Strength__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Agility", Category="Default", MultiLine="true", OverrideNativeName="Agility"))
	int32 bpv__Agility__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Intelligence", Category="Default", MultiLine="true", OverrideNativeName="Intelligence"))
	int32 bpv__Intelligence__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Magic", Category="Default", MultiLine="true", OverrideNativeName="Magic"))
	int32 bpv__Magic__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Constitution", Category="Default", MultiLine="true", OverrideNativeName="Constitution"))
	int32 bpv__Constitution__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Will", Category="Default", MultiLine="true", OverrideNativeName="Will"))
	int32 bpv__Will__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_17"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_16"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_16"))
	FText b0l__K2Node_ComponentBoundEvent_Name_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_10"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_16"))
	FText b0l__K2Node_ComponentBoundEvent_Description_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_16"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_16"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_15"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_15"))
	FText b0l__K2Node_ComponentBoundEvent_Name_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_9"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_15"))
	FText b0l__K2Node_ComponentBoundEvent_Description_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_15"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_15"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_14"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_14"))
	FText b0l__K2Node_ComponentBoundEvent_Name_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_8"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_14"))
	FText b0l__K2Node_ComponentBoundEvent_Description_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_14"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_14"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_13"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_13"))
	FText b0l__K2Node_ComponentBoundEvent_Name_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_7"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_13"))
	FText b0l__K2Node_ComponentBoundEvent_Description_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_13"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_13"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_12"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_12"))
	FText b0l__K2Node_ComponentBoundEvent_Name_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_6"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_12"))
	FText b0l__K2Node_ComponentBoundEvent_Description_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_12"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_12"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_11"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_11"))
	FText b0l__K2Node_ComponentBoundEvent_Name_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_5"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_11"))
	FText b0l__K2Node_ComponentBoundEvent_Description_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_11"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_11"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_10"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_10"))
	FText b0l__K2Node_ComponentBoundEvent_Name_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_4"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_10"))
	FText b0l__K2Node_ComponentBoundEvent_Description_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_10"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_10"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_9"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_9"))
	FText b0l__K2Node_ComponentBoundEvent_Name_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_3"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_9"))
	FText b0l__K2Node_ComponentBoundEvent_Description_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_9"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_9"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_8"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_8"))
	FText b0l__K2Node_ComponentBoundEvent_Name_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_2"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_8"))
	FText b0l__K2Node_ComponentBoundEvent_Description_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_8"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_8"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_7"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_7"))
	FText b0l__K2Node_ComponentBoundEvent_Name_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_1"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_7"))
	FText b0l__K2Node_ComponentBoundEvent_Description_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_7"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_7"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_6"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_6"))
	FText b0l__K2Node_ComponentBoundEvent_Name_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula"))
	FText b0l__K2Node_ComponentBoundEvent_Formula__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_6"))
	FText b0l__K2Node_ComponentBoundEvent_Description_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_6"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt_5"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt_4"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt_3"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt_2"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt_1"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ValueInt"))
	int32 b0l__K2Node_ComponentBoundEvent_ValueInt__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_6"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_5"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_5"))
	FText b0l__K2Node_ComponentBoundEvent_Name_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_5"))
	FText b0l__K2Node_ComponentBoundEvent_Description_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_5"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_18"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_17"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_17"))
	FText b0l__K2Node_ComponentBoundEvent_Name_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_11"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_17"))
	FText b0l__K2Node_ComponentBoundEvent_Description_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_17"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_19"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_18"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_18"))
	FText b0l__K2Node_ComponentBoundEvent_Name_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_12"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_18"))
	FText b0l__K2Node_ComponentBoundEvent_Description_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_18"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_5"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_4"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_4"))
	FText b0l__K2Node_ComponentBoundEvent_Name_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_4"))
	FText b0l__K2Node_ComponentBoundEvent_Description_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_4"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_4"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_3"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_3"))
	FText b0l__K2Node_ComponentBoundEvent_Name_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_3"))
	FText b0l__K2Node_ComponentBoundEvent_Description_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_3"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_20"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_19"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_19"))
	FText b0l__K2Node_ComponentBoundEvent_Name_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_13"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_19"))
	FText b0l__K2Node_ComponentBoundEvent_Description_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_19"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_21"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_20"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_20"))
	FText b0l__K2Node_ComponentBoundEvent_Name_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_14"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_20"))
	FText b0l__K2Node_ComponentBoundEvent_Description_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_20"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_3"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_2"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_2"))
	FText b0l__K2Node_ComponentBoundEvent_Name_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_2"))
	FText b0l__K2Node_ComponentBoundEvent_Description_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_2"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_22"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_21"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_21"))
	FText b0l__K2Node_ComponentBoundEvent_Name_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_15"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_21"))
	FText b0l__K2Node_ComponentBoundEvent_Description_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_21"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_2"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_1"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_1"))
	FText b0l__K2Node_ComponentBoundEvent_Name_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_1"))
	FText b0l__K2Node_ComponentBoundEvent_Description_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_1"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_23"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_22"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_22"))
	FText b0l__K2Node_ComponentBoundEvent_Name_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_16"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_22"))
	FText b0l__K2Node_ComponentBoundEvent_Description_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_22"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	int32 b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease"))
	int32 b0l__K2Node_ComponentBoundEvent_TotalIncrease__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name"))
	FText b0l__K2Node_ComponentBoundEvent_Name__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description"))
	FText b0l__K2Node_ComponentBoundEvent_Description__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_24"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_23"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_23"))
	FText b0l__K2Node_ComponentBoundEvent_Name_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_17"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_23"))
	FText b0l__K2Node_ComponentBoundEvent_Description_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_23"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_25"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_24"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_24"))
	FText b0l__K2Node_ComponentBoundEvent_Name_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_18"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_24"))
	FText b0l__K2Node_ComponentBoundEvent_Description_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_24"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry_1"))
	FGeometry b0l__K2Node_Event_MyGeometry_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MouseEvent"))
	FPointerEvent b0l__K2Node_Event_MouseEvent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_CurrentOffset"))
	float b0l__K2Node_ComponentBoundEvent_CurrentOffset__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_26"))
	int64 b0l__K2Node_ComponentBoundEvent_Value_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TotalIncrease_25"))
	int64 b0l__K2Node_ComponentBoundEvent_TotalIncrease_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Name_25"))
	FText b0l__K2Node_ComponentBoundEvent_Name_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Formula_19"))
	FText b0l__K2Node_ComponentBoundEvent_Formula_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Description_25"))
	FText b0l__K2Node_ComponentBoundEvent_Description_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Increases_25"))
	TArray<FIncrease> b0l__K2Node_ComponentBoundEvent_Increases_25__pf;
	UCharacterWindow_C__pf3035829248(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_32(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_33(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_34(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_35(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_36(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_37(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_38(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_39(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_40(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_41(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_42(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_43(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_44(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_45(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_46(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_47(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_48(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_49(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_50(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_51(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_52(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_53(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_54(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_55(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_56(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_57(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_58(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_59(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_60(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_61(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_62(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_63(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_64(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_65(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_66(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_67(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_68(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_69(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_70(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_71(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_72(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_73(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_74(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_75(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_76(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_77(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_78(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_79(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_80(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_81(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_82(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_83(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_84(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_85(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_86(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_87(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_88(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_89(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterWindow__pf_90(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_Slider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_Slider_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_92_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_92_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_91_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_91_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_90_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_90_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_89_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_89_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_88_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_88_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_87_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_87_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_86_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_86_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_85_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_85_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_84_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_84_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_83_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_83_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_82_OnRemovedFromFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_82_OnRemovedFromFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_81_OnAddedToFocus__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_81_OnAddedToFocus__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature__pf(float bpp__CurrentOffset__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Mouse", Comment="/**\t * The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.\t *\t * @param MyGeometry The Geometry of the widget receiving the event\t * @param MouseEvent Information about the input event\t */", ToolTip="The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.@param MyGeometry The Geometry of the widget receiving the event@param MouseEvent Information about the input event", CppFromBpEvent, OverrideNativeName="OnMouseEnter"))
	virtual void bpf__OnMouseEnter__pf(FGeometry bpp__MyGeometry__pf, FPointerEvent const& bpp__MouseEvent__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_79_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_79_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_78_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_78_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_77_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_77_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_76_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_76_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_75_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_75_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_74_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_74_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_73_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_73_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_72_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_72_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_71_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_71_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_70_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_70_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_69_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_69_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_68_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_68_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_67_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_67_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_66_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_66_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_65_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_65_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_64_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_64_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_63_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_63_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_62_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_62_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_61_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_61_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_60_AddedIncreases__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_60_AddedIncreases__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_59_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_59_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_58_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_58_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_57_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_57_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_56_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_56_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_11_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_11_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_7_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_7_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_5_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_5_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_3_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_3_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature__pf(int32 bpp__Value__pf, int32 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_55_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_WillValue_K2Node_ComponentBoundEvent_55_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_54_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ConstitutionValue_K2Node_ComponentBoundEvent_54_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicValue_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_IntelligenceValue_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AgilityValue_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StrengthValue_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature__pf(int32 bpp__ValueInt__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_51_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_51_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_50_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MovementValue_K2Node_ComponentBoundEvent_50_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_49_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_49_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_48_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceToCastMagicTechniqueValue_K2Node_ComponentBoundEvent_48_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_47_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_47_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_46_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ChanceOfRealizingCombatTechniqueValue_K2Node_ComponentBoundEvent_46_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_45_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_45_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_44_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicCastChanceValue_K2Node_ComponentBoundEvent_44_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_43_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_43_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_42_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_InitiativeValue_K2Node_ComponentBoundEvent_42_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_41_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_41_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_40_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_CarryingCapacityValue_K2Node_ComponentBoundEvent_40_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_39_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_39_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_38_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AttentionValue_K2Node_ComponentBoundEvent_38_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_37_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_37_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_36_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_StealthValue_K2Node_ComponentBoundEvent_36_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_35_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_35_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_34_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EvasionValue_K2Node_ComponentBoundEvent_34_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_33_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_33_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_32_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_AccuracyOfMagicValue_K2Node_ComponentBoundEvent_32_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_31_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_31_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_30_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_RangedAccuracyValue_K2Node_ComponentBoundEvent_30_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_29_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_29_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_28_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MeleeAccuracyValue_K2Node_ComponentBoundEvent_28_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_27_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_27_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_26_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedMagicEffectsValue_K2Node_ComponentBoundEvent_26_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_25_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_25_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_24_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_EnhancedPhysicalEffectsValue_K2Node_ComponentBoundEvent_24_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_23_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_23_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_22_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicEffectsValue_K2Node_ComponentBoundEvent_22_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_21_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_21_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_20_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalEffectsValue_K2Node_ComponentBoundEvent_20_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_19_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_19_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_18_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToMagicDamageValue_K2Node_ComponentBoundEvent_18_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_17_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_17_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_16_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_ResistanceToPhysicalDamageValue_K2Node_ComponentBoundEvent_16_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_10_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_10_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_MagicDamageValue_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_15_OnNoHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_15_OnNoHover__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_14_OnHover__DelegateSignature"))
	virtual void bpf__BndEvt__CharacterWindow_PhysicalDamageValue_K2Node_ComponentBoundEvent_14_OnHover__DelegateSignature__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, const FText& bpp__Name__pf__const, const FText& bpp__Formula__pf__const, const FText& bpp__Description__pf__const, /*out*/ TArray<FIncrease>& bpp__Increases__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateAllSecondaryStats"))
	virtual void bpf__UpdateAllSecondaryStats__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdatePhysicalDamage"))
	virtual void bpf__UpdatePhysicalDamage__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMagicDamage"))
	virtual void bpf__UpdateMagicDamage__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateResistanceToPhysicalDamage"))
	virtual void bpf__UpdateResistanceToPhysicalDamage__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateResistanceToMagicDamage"))
	virtual void bpf__UpdateResistanceToMagicDamage__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateResistanceToPhysicalEffects"))
	virtual void bpf__UpdateResistanceToPhysicalEffects__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateResistanceToMagicEffects"))
	virtual void bpf__UpdateResistanceToMagicEffects__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateEnhancedPhysicalEffects"))
	virtual void bpf__UpdateEnhancedPhysicalEffects__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateEnhancedMagicEffects"))
	virtual void bpf__UpdateEnhancedMagicEffects__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMeleeAccuracy"))
	virtual void bpf__UpdateMeleeAccuracy__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateRangedAccuracy"))
	virtual void bpf__UpdateRangedAccuracy__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateAccuracyOfMagic"))
	virtual void bpf__UpdateAccuracyOfMagic__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateEvasion"))
	virtual void bpf__UpdateEvasion__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateStealth"))
	virtual void bpf__UpdateStealth__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateAttention"))
	virtual void bpf__UpdateAttention__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateCarryingCapacity"))
	virtual void bpf__UpdateCarryingCapacity__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateInitiative"))
	virtual void bpf__UpdateInitiative__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMagicCastChance"))
	virtual void bpf__UpdateMagicCastChance__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateChanceOfRealizingCombatTechnique"))
	virtual void bpf__UpdateChanceOfRealizingCombatTechnique__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateChanceToCastMagicTechnique"))
	virtual void bpf__UpdateChanceToCastMagicTechnique__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMovement"))
	virtual void bpf__UpdateMovement__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateTooltip"))
	virtual void bpf__CreateTooltip__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, /*out*/ FText& bpp__Name__pf, /*out*/ FText& bpp__Formula__pf, /*out*/ FText& bpp__Description__pf, /*out*/ TArray<FIncrease>& bpp__Increases__pf, bool bpp__HasFormula__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveTooltip"))
	virtual void bpf__MoveTooltip__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeleteTooltipSecondaryStat"))
	virtual void bpf__DeleteTooltipSecondaryStat__pf(/*out*/ USecondaryStatPanel_C__pf724873442*& bpp__SecondaryStatPanel__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitTooltip"))
	virtual void bpf__InitTooltip__pf(int64 bpp__Value__pf, int64 bpp__TotalIncrease__pf, /*out*/ FText& bpp__Name__pf, const FText& bpp__Formula__pf__const, /*out*/ FText& bpp__Description__pf, /*out*/ TArray<FIncrease>& bpp__Increases__pf, bool bpp__HasFormula__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeleteTooltipPrimaryStat"))
	virtual void bpf__DeleteTooltipPrimaryStat__pf(/*out*/ UPrimaryStat_C__pf724873442*& bpp__PrimaryStatPanel__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateAllPrimaryStats"))
	virtual void bpf__UpdateAllPrimaryStats__pf(float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateStrength"))
	virtual void bpf__UpdateStrength__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateAgility"))
	virtual void bpf__UpdateAgility__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateIntelligence"))
	virtual void bpf__UpdateIntelligence__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateMagic"))
	virtual void bpf__UpdateMagic__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateConstitution"))
	virtual void bpf__UpdateConstitution__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateWill"))
	virtual void bpf__UpdateWill__pf(int32 bpp__Value__pf, float bpp__DeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
