#pragma once
#include "PhysicalDamageScaling__pf2358337580.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enums/PhysicalDamageScaling.PhysicalDamageScaling", OverrideNativeName="PhysicalDamageScaling", EnumDisplayNameFn="E__PhysicalDamageScaling__pf__GetUserFriendlyName") )
enum class E__PhysicalDamageScaling__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "PhysicalDamageScaling::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "PhysicalDamageScaling::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "PhysicalDamageScaling::NewEnumerator2"),
	E__PhysicalDamageScaling__pf_MAX = 3 UMETA(OverrideName = "PhysicalDamageScaling::PhysicalDamageScaling_MAX"),
};
FText E__PhysicalDamageScaling__pf__GetUserFriendlyName(int32 InValue);
