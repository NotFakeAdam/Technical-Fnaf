
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Instructions_Office3.Instructions_Office3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_Office3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Office3.Instructions_Office3_C.Construct");

	UInstructions_Office3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Office3.Instructions_Office3_C.ExecuteUbergraph_Instructions_Office3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Office3_C::ExecuteUbergraph_Instructions_Office3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Office3.Instructions_Office3_C.ExecuteUbergraph_Instructions_Office3");

	UInstructions_Office3_C_ExecuteUbergraph_Instructions_Office3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
