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

// BlueprintGeneratedClass Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C
// 0x01C7 (0x05C2 - 0x03FB)
class AOffice03_MonitorBoard_BP_C : public AMonitorBoard_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            NONVR_VentButton;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NONVR_VoiceButton;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ZoomLoc2;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ZoomLoc1;                                                 // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            VentMonitorErrors;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            MainMonitorErrors;                                        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               MonitorVent_ClickCollision;                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Monitor_ClickCollision;                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Error;                                              // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ENV_MOD_Monitor;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        AlarmLight;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Breathing;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Alarm;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_WaitingLoop;                                        // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Mon_VisionCollision;                                      // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Vent_VisionCollision;                                     // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Vent_AudioError;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Vent_VideoError;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Mon_AudioError;                                           // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Mon_VideoError;                                           // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Vent_SwitchboardPlate;                                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Vent_Switchboard;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Vent_MonitorScreen;                                       // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_FlickerIntensity_E08F324F4E192C916D6E19B4911422FE;// 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E08F324F4E192C916D6E19B4911422FE;   // 0x04CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DelayBetween;                                             // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableAudio;                                             // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableCameras;                                           // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableVentilation;                                       // 0x04DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfAudioPlaysBeforeError;                               // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfCameraTransitionsBeforeError;                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1_1;                                               // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForAudio;                                             // 0x04E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04E6(0x0002) MISSED OFFSET
	class UMaintenenceComputer_C*                      Ref_To_MaintanceBoard;                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Ref_To_RoomDataTable;                                     // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class ARoomInfo_Bp_C*                              VisibleRoom;                                              // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMaintenceBoard_BP_C*                        MaintenceComputer;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaintenenceComputer_C*                      VentLight;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterial*                                   StoreVentMonitorMaterial;                                 // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentVentID;                                            // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UMaterial*                                   CurrentMonitorID;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMonitorButton_BP_C*                         StoredMonitorButton;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimerForCameraUsage;                                      // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredDeltaTime;                                          // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AJumpScare_C*                                JumpscareRef;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterial*                                   StoredStaticMaterial;                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ARoomInfo_Bp_C*                              StoreLockedVent;                                          // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FOffice03_VentRoomLockOff_struct>    VentInfo;                                                 // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               MonitorIsOn;                                              // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	float                                              TimerForVentilation;                                      // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ResourceManagementDataTable;                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OfficeNightNumber;                                        // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FOffice03_ResourceManagement_struct         RMData;                                                   // 0x0574(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredTimeForVent;                                        // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredTimeForCam;                                         // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VentilationIsReset;                                       // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class AMonitorButton_Interactable_BP_C*            AudioButtonReference;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AMonitorButton_Interactable_BP_C*            VentButtonReference;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               WaitForVent;                                              // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class AHiddenCoin_C*                               HiddenCoin;                                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpringtrapAccelerate;                                     // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	int                                                StoreMonitorID;                                           // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EControllerButtonsEnum>                DS4VoiceButton;                                           // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerButtonsEnum>                DS4VentButton;                                            // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C");
		return ptr;
	}


	void NonVR_StoringMonitorInteractions(bool IsVent, int* ReturnButtonID);
	void DisableCoin();
	void EnableCoin();
	void TurnOffVentLights();
	void UpdateVentLights();
	void GetLockedVentInfo(TArray<struct FOffice03_VentRoomLockOff_struct>* BlockedRooms);
	void PhantomAttack();
	void TriggerVentilation();
	void RebootVentilation();
	void RebootCameras();
	void RebootAudio();
	void AudioDelay(float NewParam);
	void OpenVent();
	void ClosingVent();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera);
	void Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown);
	void ReceiveTick(float* DeltaSeconds);
	void VentilationDamaged();
	void Flash_Alarm_Light();
	void RandomPhantomAttacks();
	void AttackTrigger();
	void VentTriggerToAccelerateSpringtrap();
	void SetVisualStatic(bool* EnableStatic);
	void ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component);
	void VoiceButtonChange(bool Is_Pressed);
	void VentButtonChange(bool Is_Pressed);
	void ExecuteUbergraph_Office03_MonitorBoard_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
