#pragma once

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IFlashLightInteractible.IFlashLightInteractible_C
// 0x0000 (0x0028 - 0x0028)
class UIFlashLightInteractible_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IFlashLightInteractible.IFlashLightInteractible_C");
		return ptr;
	}


	void OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight);
	void OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
