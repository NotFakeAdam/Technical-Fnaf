
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

// Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_fUNTIMEfOXY_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.Construct");

	UInstructions_fUNTIMEfOXY_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_fUNTIMEfOXY_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.OnControllerTrackingChanged");

	UInstructions_fUNTIMEfOXY_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.ExecuteUbergraph_Instructions_fUNTIMEfOXY
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_fUNTIMEfOXY_C::ExecuteUbergraph_Instructions_fUNTIMEfOXY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_fUNTIMEfOXY.Instructions_fUNTIMEfOXY_C.ExecuteUbergraph_Instructions_fUNTIMEfOXY");

	UInstructions_fUNTIMEfOXY_C_ExecuteUbergraph_Instructions_fUNTIMEfOXY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
