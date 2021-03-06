
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

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.GetHoverCursorState");

	ABonnie_BTN_Sound_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Create_Material_Instance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::Create_Material_Instance(class UMaterialInstance* Material, float Value, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Create_Material_Instance");

	ABonnie_BTN_Sound_C_Create_Material_Instance_Params params;
	params.Material = Material;
	params.Value = Value;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Move BTN
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::Move_BTN(float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Move BTN");

	ABonnie_BTN_Sound_C_Move_BTN_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABonnie_BTN_Sound_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.UserConstructionScript");

	ABonnie_BTN_Sound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__FinishedFunc
// (BlueprintEvent)

void ABonnie_BTN_Sound_C::Press_BTN_Down__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__FinishedFunc");

	ABonnie_BTN_Sound_C_Press_BTN_Down__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__UpdateFunc
// (BlueprintEvent)

void ABonnie_BTN_Sound_C::Press_BTN_Down__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__UpdateFunc");

	ABonnie_BTN_Sound_C_Press_BTN_Down__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__FinishedFunc
// (BlueprintEvent)

void ABonnie_BTN_Sound_C::Material_Instance_Param__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__FinishedFunc");

	ABonnie_BTN_Sound_C_Material_Instance_Param__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__UpdateFunc
// (BlueprintEvent)

void ABonnie_BTN_Sound_C::Material_Instance_Param__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__UpdateFunc");

	ABonnie_BTN_Sound_C_Material_Instance_Param__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverEnd");

	ABonnie_BTN_Sound_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABonnie_BTN_Sound_C::BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABonnie_BTN_Sound_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentEnd");

	ABonnie_BTN_Sound_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentBegin");

	ABonnie_BTN_Sound_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Reset_BTN
// (BlueprintCallable, BlueprintEvent)

void ABonnie_BTN_Sound_C::Reset_BTN()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Reset_BTN");

	ABonnie_BTN_Sound_C_Reset_BTN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverBegin");

	ABonnie_BTN_Sound_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABonnie_BTN_Sound_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ReceiveBeginPlay");

	ABonnie_BTN_Sound_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ButtonBypass
// (BlueprintCallable, BlueprintEvent)

void ABonnie_BTN_Sound_C::ButtonBypass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ButtonBypass");

	ABonnie_BTN_Sound_C_ButtonBypass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.NonVRClickButton
// (BlueprintCallable, BlueprintEvent)

void ABonnie_BTN_Sound_C::NonVRClickButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.NonVRClickButton");

	ABonnie_BTN_Sound_C_NonVRClickButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnNonVRLineTraceInteract");

	ABonnie_BTN_Sound_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ExecuteUbergraph_Bonnie_BTN_Sound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABonnie_BTN_Sound_C::ExecuteUbergraph_Bonnie_BTN_Sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ExecuteUbergraph_Bonnie_BTN_Sound");

	ABonnie_BTN_Sound_C_ExecuteUbergraph_Bonnie_BTN_Sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
