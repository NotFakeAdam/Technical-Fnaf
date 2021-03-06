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

// BlueprintGeneratedClass BedroomClosetDoor.BedroomClosetDoor_C
// 0x00C8 (0x03F0 - 0x0328)
class ABedroomClosetDoor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NONVR_ButtonDisplay;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Plane;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ClosedCollider;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DoorKnobCollider;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DoorPivot1;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DoorPivot0;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorPiece0;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorPiece1;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GrabTransform;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASWGVRCharacter*                             Grabber;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EVRHandType                                        GrabbingHand;                                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              MinX;                                                     // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxX;                                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorSegmentLength;                                        // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoorAngleChange;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              InterpAngle;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InterpEnabled;                                            // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightsEnabled;                                            // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	class UCurveFloat*                                 DoorCurveRef;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurveOutputBasedOnAngle;                                  // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canGrab;                                                  // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class ASaul_MotionControllerPawn_C*                PlayerPawnRef;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATeleportSpot_BP_C*                          AssociatedTP_Spot;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoor.BedroomClosetDoor_C");
		return ptr;
	}


	void AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
	bool AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void StopInterpAngle();
	void SetInterpAngle(float InterpAngle);
	void GetCurrentAngle(float* DoorAngle);
	void IsDoorHeld(bool* DoorIsHeld);
	void SetAngle(float DesiredAngle);
	void SetupDoorAngles();
	void UserConstructionScript();
	void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity);
	void ButtonChange(bool Is_Pressed);
	void ExecuteUbergraph_BedroomClosetDoor(int EntryPoint);
	void DoorAngleChange__DelegateSignature(float DoorAngle, class ABedroomClosetDoor_C* Door);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
