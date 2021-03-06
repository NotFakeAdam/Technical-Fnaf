
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

// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.AttemptGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.AttemptGrab");

	ALeft_Bonnie_Eye_C_AttemptGrab_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canGrab != nullptr)
		*canGrab = params.canGrab;
	if (SnapType != nullptr)
		*SnapType = params.SnapType;
	if (snapLocation != nullptr)
		*snapLocation = params.snapLocation;
	if (snapRotation != nullptr)
		*snapRotation = params.snapRotation;
	if (AttachmentOffsetLocation != nullptr)
		*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
	if (AttachmentOffsetRotation != nullptr)
		*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALeft_Bonnie_Eye_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.AttemptRelease");

	ALeft_Bonnie_Eye_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.UserConstructionScript");

	ALeft_Bonnie_Eye_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALeft_Bonnie_Eye_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.Pickup");

	ALeft_Bonnie_Eye_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.Drop");

	ALeft_Bonnie_Eye_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRInteract");

	ALeft_Bonnie_Eye_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverComponentBegin");

	ALeft_Bonnie_Eye_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverComponentEnd");

	ALeft_Bonnie_Eye_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRGrabbed");

	ALeft_Bonnie_Eye_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRReleased");

	ALeft_Bonnie_Eye_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALeft_Bonnie_Eye_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ALeft_Bonnie_Eye_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALeft_Bonnie_Eye_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ReceiveBeginPlay");

	ALeft_Bonnie_Eye_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverBegin");

	ALeft_Bonnie_Eye_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.OnVRHoverEnd");

	ALeft_Bonnie_Eye_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ReceiveTick");

	ALeft_Bonnie_Eye_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ExecuteUbergraph_Left_Bonnie_Eye
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_C::ExecuteUbergraph_Left_Bonnie_Eye(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.ExecuteUbergraph_Left_Bonnie_Eye");

	ALeft_Bonnie_Eye_C_ExecuteUbergraph_Left_Bonnie_Eye_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.FeedbackTest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_C::FeedbackTest__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye.Left_Bonnie_Eye_C.FeedbackTest__DelegateSignature");

	ALeft_Bonnie_Eye_C_FeedbackTest__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
