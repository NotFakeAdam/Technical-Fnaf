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

// BlueprintGeneratedClass Prize_Common_Candy04.Prize_Common_Candy04_C
// 0x0010 (0x0400 - 0x03F0)
class APrize_Common_Candy04_C : public APrize_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Common_Candy04.Prize_Common_Candy04_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void ExecuteUbergraph_Prize_Common_Candy04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
