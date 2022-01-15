#include "NativizedAssets.h"
#include "PhysicalDamageScaling__pf270653243.h"
FText E__PhysicalDamageScaling__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__PhysicalDamageScaling__pf>(InValue);
	switch(EnumValue)
	{
		case E__PhysicalDamageScaling__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4AC221754D54741F83B538910DB1DD3B]\", \"34B1A2EC44858CB6CBDB3796E85DBD04\", \"Scaling from strength\")"), Text); break;
		case E__PhysicalDamageScaling__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4AC221754D54741F83B538910DB1DD3B]\", \"083DA1BE4688DAD8E78C39BD74416F7B\", \"Scaling from dexterity\")"), Text); break;
		case E__PhysicalDamageScaling__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4AC221754D54741F83B538910DB1DD3B]\", \"22FAD8A14C476E170401D9AC27104995\", \"Scaling from magic\")"), Text); break;
		case E__PhysicalDamageScaling__pf::E__PhysicalDamageScaling__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Physical Damage Scaling 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
