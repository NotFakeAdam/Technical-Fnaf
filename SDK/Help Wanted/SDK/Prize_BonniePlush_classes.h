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

// BlueprintGeneratedClass Prize_BonniePlush.Prize_BonniePlush_C
// 0x0008 (0x03F8 - 0x03F0)
class APrize_BonniePlush_C : public APrize_Parent_C
{
public:
	class UStaticMeshComponent*                        ENV_MOD_Prize_Plush_Bonnie_02a;                           // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BonniePlush.Prize_BonniePlush_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
