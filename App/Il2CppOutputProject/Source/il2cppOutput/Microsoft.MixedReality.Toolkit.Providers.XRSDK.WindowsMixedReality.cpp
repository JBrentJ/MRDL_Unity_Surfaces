#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tD7E3F75BEB54C25D27C81E4DFA05C68B3705470A;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t6BA17B309D90AB7B34711AC8CE5E526C690AE3EF;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t0AEBD58B6195211BCBC98B2C5576CD30DF2BB34F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tF0B7D0F89A3DEAD0CAD688B84B9402AA38044579;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t0FD60DD202B941D0762773B348536203F37134F7;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t2BD3AEFE8D9ABE5F8AFA1EBECC8820DCE4E362F0;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t2FE76C4775DB4D748F76676DF7C26BD4B70700AA;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tC1D8B6BB1F885A6D9B5DAE7CE592A3DE59710A6C;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t24810B21258D7787AFA3B796CA48C51CD839672E;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t57B27173E50E6067AB0F663978796392B60620E0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tD5DD9C776B6A343B2679BC2A0714DF85E911DD06;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tF25DF52111D108E949E35EA21EEBB393307A5ED0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t377C95C3E7A907B0FFEF5AAEB06EA942F8B73D03;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t14B7E81F1AAD97B57578C5AA9078BEA26A341967;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t86ED0C3FB22027049E684576F71BB74EB80F5852;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t7D4D81968147FDE3E126F43F94D4DDAE689ED946;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_tF7756B1A3F93F921158DB5DC28C90202F203771E;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t139DD3A2002A8DF644CEA73FA7FA50F050A2655B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00313D5620A04AC7E4CF90E775FC27C1D876E6DE;
IL2CPP_EXTERN_C String_t* _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E;
IL2CPP_EXTERN_C String_t* _stringLiteral1486B1D2A3C5A6E3E69E33CD47E973270BCEAB6F;
IL2CPP_EXTERN_C String_t* _stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302;
IL2CPP_EXTERN_C String_t* _stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478;
IL2CPP_EXTERN_C String_t* _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6D4A83C9F8983F991D7257E5074C26C04E3E36E2;
IL2CPP_EXTERN_C String_t* _stringLiteral7817B81C2124EE91AE458126A3D8CDEB3D1A96CF;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C44CFC5FE4DF6EF8FEA0E3D8457CC36A8AC2C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE;
IL2CPP_EXTERN_C String_t* _stringLiteral820BD7EFF539D991C09181A98F9B7D7C072F0224;
IL2CPP_EXTERN_C String_t* _stringLiteral85148B30AAF5D51492AF120A8FE2B6E664A2EF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163;
IL2CPP_EXTERN_C String_t* _stringLiteralB05DF3F43A74F956240D2F08C2D6DA773210B627;
IL2CPP_EXTERN_C String_t* _stringLiteralB5518A23AB74B3610F265E69DEF63F60C14B5A7F;
IL2CPP_EXTERN_C String_t* _stringLiteralD25B538BA3D8C0A58420325D80D61288FD6B3E43;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A8AE7631C0518CE4467865D2B59E911D35A812;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3929EA6D50F5E7427ADE286D95F99AAE95E5D54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m67F2A3AD26B66EDDEE02AE4483B00D728E9874C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_0_0_0_var;
struct IHeadPose_t160C8BC4B0FEC9737493F4B89485C47A49459F30;
struct IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239;

struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
struct MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2FE72D341D6F8D5381069ACC05CCC57E3AFE13AC 
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m8807730474721435338F5275EDA4D05D4A02A927(ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A* ___coordinateSystem0, IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3* ___timestamp1, ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239** comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC1D8B6BB1F885A6D9B5DAE7CE592A3DE59710A6C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0FD60DD202B941D0762773B348536203F37134F7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2FE76C4775DB4D748F76676DF7C26BD4B70700AA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___entries_1)); }
	inline EntryU5BU5D_tC1D8B6BB1F885A6D9B5DAE7CE592A3DE59710A6C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC1D8B6BB1F885A6D9B5DAE7CE592A3DE59710A6C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC1D8B6BB1F885A6D9B5DAE7CE592A3DE59710A6C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___keys_7)); }
	inline KeyCollection_t0FD60DD202B941D0762773B348536203F37134F7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0FD60DD202B941D0762773B348536203F37134F7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0FD60DD202B941D0762773B348536203F37134F7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ___values_8)); }
	inline ValueCollection_t2FE76C4775DB4D748F76676DF7C26BD4B70700AA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2FE76C4775DB4D748F76676DF7C26BD4B70700AA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2FE76C4775DB4D748F76676DF7C26BD4B70700AA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct  List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____items_1)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct  XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445  : public RuntimeObject
{
public:

public:
};


// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_tDCA815E40676F2CABBEA9FAF7307DE7B177C612E  : public BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDCA815E40676F2CABBEA9FAF7307DE7B177C612E, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDCA815E40676F2CABBEA9FAF7307DE7B177C612E, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813  : public BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct  BaseDataProvider_1_t95C461ED7AF53430D719E6C5040ADB1E3DD6657B  : public BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t95C461ED7AF53430D719E6C5040ADB1E3DD6657B, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t95C461ED7AF53430D719E6C5040ADB1E3DD6657B, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct  BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08  : public BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct  InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct  InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct  InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct  InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct  InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct  InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct  InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.Bone
struct  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.XR.Hand
struct  Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// Windows.Perception.People.HeadPose
struct  HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.XR.InputDevice
struct  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct  SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* get_____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004()
	{
		ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
			}
		}
		return returnValue;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_tE1B66073AB9665793561BF8948E7BD47246BA2AD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tE1B66073AB9665793561BF8948E7BD47246BA2AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t7C449580C57FE8A3269FD039551F8E659C474005 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t7C449580C57FE8A3269FD039551F8E659C474005, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_t75E641E5BE176E3CBA83D0AAFD9C9E6553BF9520  : public BaseDataProvider_1_tDCA815E40676F2CABBEA9FAF7307DE7B177C612E
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t75E641E5BE176E3CBA83D0AAFD9C9E6553BF9520, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct  CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct  CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t6603AD78482786EDC52CE65FE013AC397592DAE3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t6603AD78482786EDC52CE65FE013AC397592DAE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.HandFinger
struct  HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t25439E75F35835A7AA48828DAB8F41CF9D636E69 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t25439E75F35835A7AA48828DAB8F41CF9D636E69, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct  InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_t80F7ECE75578818C475F940AD0106543D4B10880 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t80F7ECE75578818C475F940AD0106543D4B10880, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct  MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_t317EE874B90DF2C6E5D21EA4CE2846120CCFB50F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t317EE874B90DF2C6E5D21EA4CE2846120CCFB50F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct  SpatialAwarenessMeshDisplayOptions_tD12E3368BC36B8B21F6FFA319E8096923E1FEB90 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tD12E3368BC36B8B21F6FFA319E8096923E1FEB90, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct  SpatialAwarenessMeshLevelOfDetail_t8112EB0F57FACB0BD9D42F8734C93E94512C3FF1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t8112EB0F57FACB0BD9D42F8734C93E94512C3FF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct  SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct  SupportedControllerType_tDA5C84D9019360318867645F014B4DA034351AE7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tDA5C84D9019360318867645F014B4DA034351AE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_t2E727E38742F22D26D95709D13F29F42999A54EF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t2E727E38742F22D26D95709D13F29F42999A54EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_t139DD3A2002A8DF644CEA73FA7FA50F050A2655B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t139DD3A2002A8DF644CEA73FA7FA50F050A2655B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct  WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_1;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_2;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields, ___currentSpatialCoordinateSystemPtr_1)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_1() const { return ___currentSpatialCoordinateSystemPtr_1; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_1() { return &___currentSpatialCoordinateSystemPtr_1; }
	inline void set_currentSpatialCoordinateSystemPtr_1(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_1 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields, ___spatialCoordinateSystem_2)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_2() const { return ___spatialCoordinateSystem_2; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_2() { return &___spatialCoordinateSystem_2; }
	inline void set_spatialCoordinateSystem_2(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_2), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct  AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct  ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::inputSource
	RuntimeObject* ___inputSource_0;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::handedness
	uint8_t ___handedness_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;

public:
	inline static int32_t get_offset_of_inputSource_0() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___inputSource_0)); }
	inline RuntimeObject* get_inputSource_0() const { return ___inputSource_0; }
	inline RuntimeObject** get_address_of_inputSource_0() { return &___inputSource_0; }
	inline void set_inputSource_0(RuntimeObject* value)
	{
		___inputSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___handedness_1)); }
	inline uint8_t get_handedness_1() const { return ___handedness_1; }
	inline uint8_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(uint8_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___unityJointPoses_4)); }
	inline Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___currentIndexPose_5)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}
};

struct ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandJointsPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentIndexPosePerfMarker_12;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_StaticFields, ___UpdateHandJointsPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandJointsPerfMarker_11() const { return ___UpdateHandJointsPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandJointsPerfMarker_11() { return &___UpdateHandJointsPerfMarker_11; }
	inline void set_UpdateHandJointsPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandJointsPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_StaticFields, ___UpdateCurrentIndexPosePerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentIndexPosePerfMarker_12() const { return ___UpdateCurrentIndexPosePerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentIndexPosePerfMarker_12() { return &___UpdateCurrentIndexPosePerfMarker_12; }
	inline void set_UpdateCurrentIndexPosePerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentIndexPosePerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A  : public BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6 * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A, ___activePointersToConfig_10)); }
	inline Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6 * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6 ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6 * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_10), (void*)value);
	}
};

struct BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_13;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_StaticFields, ___RecyclePointersPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_11() const { return ___RecyclePointersPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_11() { return &___RecyclePointersPerfMarker_11; }
	inline void set_RecyclePointersPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_StaticFields, ___CreatePointerPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_12() const { return ___CreatePointerPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_12() { return &___CreatePointerPerfMarker_12; }
	inline void set_CreatePointerPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_StaticFields, ___CleanActivePointersPerfMarker_13)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_13() const { return ___CleanActivePointersPerfMarker_13; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_13() { return &___CleanActivePointersPerfMarker_13; }
	inline void set_CleanActivePointersPerfMarker_13(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct  BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D  : public BaseDataProvider_1_t95C461ED7AF53430D719E6C5040ADB1E3DD6657B
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_8;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_9;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CSpatialAwarenessSystemU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_8() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CSourceIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_9() const { return ___U3CSourceIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_9() { return &___U3CSourceIdU3Ek__BackingField_9; }
	inline void set_U3CSourceIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CSourceNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_10() const { return ___U3CSourceNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_10() { return &___U3CSourceNameU3Ek__BackingField_10; }
	inline void set_U3CSourceNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CStartupBehaviorU3Ek__BackingField_11)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_11() const { return ___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_11() { return &___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_11(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CDefaultPhysicsLayerU3Ek__BackingField_12)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_12() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_12(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CIsRunningU3Ek__BackingField_13)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_13() const { return ___U3CIsRunningU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_13() { return &___U3CIsRunningU3Ek__BackingField_13; }
	inline void set_U3CIsRunningU3Ek__BackingField_13(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CIsStationaryObserverU3Ek__BackingField_14)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_14() const { return ___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return &___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_14(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CObserverRotationU3Ek__BackingField_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_15() const { return ___U3CObserverRotationU3Ek__BackingField_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_15() { return &___U3CObserverRotationU3Ek__BackingField_15; }
	inline void set_U3CObserverRotationU3Ek__BackingField_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CObserverOriginU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_16() const { return ___U3CObserverOriginU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_16() { return &___U3CObserverOriginU3Ek__BackingField_16; }
	inline void set_U3CObserverOriginU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CObserverVolumeTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_17() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return &___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CObservationExtentsU3Ek__BackingField_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_18() const { return ___U3CObservationExtentsU3Ek__BackingField_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_18() { return &___U3CObservationExtentsU3Ek__BackingField_18; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D, ___U3CUpdateIntervalU3Ek__BackingField_19)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_19() const { return ___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_19() { return &___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_19(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct  BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE  : public BaseCameraSettingsProvider_t75E641E5BE176E3CBA83D0AAFD9C9E6553BF9520
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_tF7756B1A3F93F921158DB5DC28C90202F203771E * ___reprojectionUpdater_9;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_9() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE, ___reprojectionUpdater_9)); }
	inline WindowsMixedRealityReprojectionUpdater_tF7756B1A3F93F921158DB5DC28C90202F203771E * get_reprojectionUpdater_9() const { return ___reprojectionUpdater_9; }
	inline WindowsMixedRealityReprojectionUpdater_tF7756B1A3F93F921158DB5DC28C90202F203771E ** get_address_of_reprojectionUpdater_9() { return &___reprojectionUpdater_9; }
	inline void set_reprojectionUpdater_9(WindowsMixedRealityReprojectionUpdater_tF7756B1A3F93F921158DB5DC28C90202F203771E * value)
	{
		___reprojectionUpdater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_9), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_8;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_8() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE_StaticFields, ___isTryGetViewConfigurationSupported_8)); }
	inline bool get_isTryGetViewConfigurationSupported_8() const { return ___isTryGetViewConfigurationSupported_8; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_8() { return &___isTryGetViewConfigurationSupported_8; }
	inline void set_isTryGetViewConfigurationSupported_8(bool value)
	{
		___isTryGetViewConfigurationSupported_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct  WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::controller
	RuntimeObject* ___controller_0;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_1;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_2;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_3;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_4;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_5;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_6;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_8;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshObserver_1)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_1() const { return ___handMeshObserver_1; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_1() { return &___handMeshObserver_1; }
	inline void set_handMeshObserver_1(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_1), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshTriangleIndices_2)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_2() const { return ___handMeshTriangleIndices_2; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_2() { return &___handMeshTriangleIndices_2; }
	inline void set_handMeshTriangleIndices_2(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___vertexAndNormals_3)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_3() const { return ___vertexAndNormals_3; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_3() { return &___vertexAndNormals_3; }
	inline void set_vertexAndNormals_3(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshVerticesUnity_4)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_4() const { return ___handMeshVerticesUnity_4; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_4() { return &___handMeshVerticesUnity_4; }
	inline void set_handMeshVerticesUnity_4(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_4), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshNormalsUnity_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_5() const { return ___handMeshNormalsUnity_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_5() { return &___handMeshNormalsUnity_5; }
	inline void set_handMeshNormalsUnity_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_5), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshTriangleIndicesUnity_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_6() const { return ___handMeshTriangleIndicesUnity_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_6() { return &___handMeshTriangleIndicesUnity_6; }
	inline void set_handMeshTriangleIndicesUnity_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___handMeshUVsUnity_7)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_7() const { return ___handMeshUVsUnity_7; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_7() { return &___handMeshUVsUnity_7; }
	inline void set_handMeshUVsUnity_7(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943, ___hasRequestedHandMeshObserver_8)); }
	inline bool get_hasRequestedHandMeshObserver_8() const { return ___hasRequestedHandMeshObserver_8; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_8() { return &___hasRequestedHandMeshObserver_8; }
	inline void set_hasRequestedHandMeshObserver_8(bool value)
	{
		___hasRequestedHandMeshObserver_8 = value;
	}
};

struct WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943_StaticFields, ___UpdateHandMeshPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_9() const { return ___UpdateHandMeshPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_9() { return &___UpdateHandMeshPerfMarker_9; }
	inline void set_UpdateHandMeshPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct  BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213  : public BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t2BD3AEFE8D9ABE5F8AFA1EBECC8820DCE4E362F0 * ___meshEventData_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_21;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_31;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_32;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t6BA17B309D90AB7B34711AC8CE5E526C690AE3EF * ___meshes_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_35;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_37;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_39;

public:
	inline static int32_t get_offset_of_meshEventData_20() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___meshEventData_20)); }
	inline MixedRealitySpatialAwarenessEventData_1_t2BD3AEFE8D9ABE5F8AFA1EBECC8820DCE4E362F0 * get_meshEventData_20() const { return ___meshEventData_20; }
	inline MixedRealitySpatialAwarenessEventData_1_t2BD3AEFE8D9ABE5F8AFA1EBECC8820DCE4E362F0 ** get_address_of_meshEventData_20() { return &___meshEventData_20; }
	inline void set_meshEventData_20(MixedRealitySpatialAwarenessEventData_1_t2BD3AEFE8D9ABE5F8AFA1EBECC8820DCE4E362F0 * value)
	{
		___meshEventData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_20), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_21() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___observedObjectParent_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_21() const { return ___observedObjectParent_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_21() { return &___observedObjectParent_21; }
	inline void set_observedObjectParent_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_21), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___displayOption_31)); }
	inline int32_t get_displayOption_31() const { return ___displayOption_31; }
	inline int32_t* get_address_of_displayOption_31() { return &___displayOption_31; }
	inline void set_displayOption_31(int32_t value)
	{
		___displayOption_31 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___levelOfDetail_32)); }
	inline int32_t get_levelOfDetail_32() const { return ___levelOfDetail_32; }
	inline int32_t* get_address_of_levelOfDetail_32() { return &___levelOfDetail_32; }
	inline void set_levelOfDetail_32(int32_t value)
	{
		___levelOfDetail_32 = value;
	}

	inline static int32_t get_offset_of_meshes_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___meshes_33)); }
	inline Dictionary_2_t6BA17B309D90AB7B34711AC8CE5E526C690AE3EF * get_meshes_33() const { return ___meshes_33; }
	inline Dictionary_2_t6BA17B309D90AB7B34711AC8CE5E526C690AE3EF ** get_address_of_meshes_33() { return &___meshes_33; }
	inline void set_meshes_33(Dictionary_2_t6BA17B309D90AB7B34711AC8CE5E526C690AE3EF * value)
	{
		___meshes_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_33), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___meshPhysicsLayer_34)); }
	inline int32_t get_meshPhysicsLayer_34() const { return ___meshPhysicsLayer_34; }
	inline int32_t* get_address_of_meshPhysicsLayer_34() { return &___meshPhysicsLayer_34; }
	inline void set_meshPhysicsLayer_34(int32_t value)
	{
		___meshPhysicsLayer_34 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___U3CRecalculateNormalsU3Ek__BackingField_35)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_35() const { return ___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return &___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_35(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_36(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___occlusionMaterial_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_37() const { return ___occlusionMaterial_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_37() { return &___occlusionMaterial_37; }
	inline void set_occlusionMaterial_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_37), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___physicsMaterial_38)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_38() const { return ___physicsMaterial_38; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_38() { return &___physicsMaterial_38; }
	inline void set_physicsMaterial_38(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_38), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213, ___visibleMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_39() const { return ___visibleMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_39() { return &___visibleMaterial_39; }
	inline void set_visibleMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_39), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * ___OnMeshAdded_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * ___OnMeshUpdated_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * ___OnMeshRemoved_30;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_22() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_23() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return &___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_24() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return &___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshAddedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_25() const { return ___OnMeshAddedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_25() { return &___OnMeshAddedPerfMarker_25; }
	inline void set_OnMeshAddedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshAdded_26)); }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * get_OnMeshAdded_26() const { return ___OnMeshAdded_26; }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 ** get_address_of_OnMeshAdded_26() { return &___OnMeshAdded_26; }
	inline void set_OnMeshAdded_26(EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * value)
	{
		___OnMeshAdded_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshUpdatedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_27() const { return ___OnMeshUpdatedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_27() { return &___OnMeshUpdatedPerfMarker_27; }
	inline void set_OnMeshUpdatedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshUpdated_28)); }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * get_OnMeshUpdated_28() const { return ___OnMeshUpdated_28; }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 ** get_address_of_OnMeshUpdated_28() { return &___OnMeshUpdated_28; }
	inline void set_OnMeshUpdated_28(EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * value)
	{
		___OnMeshUpdated_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshRemovedPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_29() const { return ___OnMeshRemovedPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_29() { return &___OnMeshRemovedPerfMarker_29; }
	inline void set_OnMeshRemovedPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213_StaticFields, ___OnMeshRemoved_30)); }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * get_OnMeshRemoved_30() const { return ___OnMeshRemoved_30; }
	inline EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 ** get_address_of_OnMeshRemoved_30() { return &___OnMeshRemoved_30; }
	inline void set_OnMeshRemoved_30(EventFunction_1_t28A1B73715CEC0736D5E33822E8041D2E05C5752 * value)
	{
		___OnMeshRemoved_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_30), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct  GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1  : public BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___CurrentControllerPose_14;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___LastControllerPose_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CurrentControllerPosition_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___CurrentControllerRotation_17;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1, ___CurrentControllerPose_14)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_CurrentControllerPose_14() const { return ___CurrentControllerPose_14; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_CurrentControllerPose_14() { return &___CurrentControllerPose_14; }
	inline void set_CurrentControllerPose_14(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___CurrentControllerPose_14 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1, ___LastControllerPose_15)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_LastControllerPose_15() const { return ___LastControllerPose_15; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_LastControllerPose_15() { return &___LastControllerPose_15; }
	inline void set_LastControllerPose_15(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___LastControllerPose_15 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1, ___CurrentControllerPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CurrentControllerPosition_16() const { return ___CurrentControllerPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CurrentControllerPosition_16() { return &___CurrentControllerPosition_16; }
	inline void set_CurrentControllerPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CurrentControllerPosition_16 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1, ___CurrentControllerRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_CurrentControllerRotation_17() const { return ___CurrentControllerRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_CurrentControllerRotation_17() { return &___CurrentControllerRotation_17; }
	inline void set_CurrentControllerRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___CurrentControllerRotation_17 = value;
	}
};

struct GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_22;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields, ___UpdateControllerPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_18() const { return ___UpdateControllerPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_18() { return &___UpdateControllerPerfMarker_18; }
	inline void set_UpdateControllerPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields, ___UpdateButtonDataPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_19() const { return ___UpdateButtonDataPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_19() { return &___UpdateButtonDataPerfMarker_19; }
	inline void set_UpdateButtonDataPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields, ___UpdateSingleAxisDataPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_20() const { return ___UpdateSingleAxisDataPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_20() { return &___UpdateSingleAxisDataPerfMarker_20; }
	inline void set_UpdateSingleAxisDataPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields, ___UpdateDualAxisDataPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_21() const { return ___UpdateDualAxisDataPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_21() { return &___UpdateDualAxisDataPerfMarker_21; }
	inline void set_UpdateDualAxisDataPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_StaticFields, ___UpdatePoseDataPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_22() const { return ___UpdatePoseDataPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_22() { return &___UpdatePoseDataPerfMarker_22; }
	inline void set_UpdatePoseDataPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___inputAction_4)); }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A, ___poseData_17)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct  WindowsMixedRealityCameraSettings_t7D4D81968147FDE3E126F43F94D4DDAE689ED946  : public BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct  XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614  : public BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GenericDesiredInputCharacteristics
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___GenericDesiredInputCharacteristics_18;

public:
	inline static int32_t get_offset_of_inputDevices_15() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614, ___inputDevices_15)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_15() const { return ___inputDevices_15; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_15() { return &___inputDevices_15; }
	inline void set_inputDevices_15(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_15), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_16() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614, ___inputDevicesSubset_16)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_16() const { return ___inputDevicesSubset_16; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_16() { return &___inputDevicesSubset_16; }
	inline void set_inputDevicesSubset_16(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614, ___lastInputDevices_17)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_17() const { return ___lastInputDevices_17; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_17() { return &___lastInputDevices_17; }
	inline void set_lastInputDevices_17(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_17), (void*)value);
	}

	inline static int32_t get_offset_of_GenericDesiredInputCharacteristics_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614, ___GenericDesiredInputCharacteristics_18)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_GenericDesiredInputCharacteristics_18() const { return ___GenericDesiredInputCharacteristics_18; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_GenericDesiredInputCharacteristics_18() { return &___GenericDesiredInputCharacteristics_18; }
	inline void set_GenericDesiredInputCharacteristics_18(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___GenericDesiredInputCharacteristics_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericDesiredInputCharacteristics_18), (void*)value);
	}
};

struct XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tD7E3F75BEB54C25D27C81E4DFA05C68B3705470A * ___ActiveControllers_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_21;

public:
	inline static int32_t get_offset_of_ActiveControllers_14() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_StaticFields, ___ActiveControllers_14)); }
	inline Dictionary_2_tD7E3F75BEB54C25D27C81E4DFA05C68B3705470A * get_ActiveControllers_14() const { return ___ActiveControllers_14; }
	inline Dictionary_2_tD7E3F75BEB54C25D27C81E4DFA05C68B3705470A ** get_address_of_ActiveControllers_14() { return &___ActiveControllers_14; }
	inline void set_ActiveControllers_14(Dictionary_2_tD7E3F75BEB54C25D27C81E4DFA05C68B3705470A * value)
	{
		___ActiveControllers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_14), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_StaticFields, ___UpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_19() const { return ___UpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_19() { return &___UpdatePerfMarker_19; }
	inline void set_UpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_StaticFields, ___GetOrAddControllerPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_20() const { return ___GetOrAddControllerPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_20() { return &___GetOrAddControllerPerfMarker_20; }
	inline void set_GetOrAddControllerPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_StaticFields, ___RemoveControllerPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_21() const { return ___RemoveControllerPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_21() { return &___RemoveControllerPerfMarker_21; }
	inline void set_RemoveControllerPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t24810B21258D7787AFA3B796CA48C51CD839672E  : public BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct  BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE  : public GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_23;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_24;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___currentPointerPose_25;

public:
	inline static int32_t get_offset_of_currentPointerPosition_23() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE, ___currentPointerPosition_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_23() const { return ___currentPointerPosition_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_23() { return &___currentPointerPosition_23; }
	inline void set_currentPointerPosition_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_23 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE, ___currentPointerRotation_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_24() const { return ___currentPointerRotation_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_24() { return &___currentPointerRotation_24; }
	inline void set_currentPointerRotation_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_25() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE, ___currentPointerPose_25)); }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  get_currentPointerPose_25() const { return ___currentPointerPose_25; }
	inline MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * get_address_of_currentPointerPose_25() { return &___currentPointerPose_25; }
	inline void set_currentPointerPose_25(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  value)
	{
		___currentPointerPose_25 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_26;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_StaticFields, ___UpdatePoseDataPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_26() const { return ___UpdatePoseDataPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_26() { return &___UpdatePoseDataPerfMarker_26; }
	inline void set_UpdatePoseDataPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct  GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC  : public BaseSpatialMeshObserver_tA59A781EDEBE1C91FC66F1019D8C645AE7986213
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_41;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_42;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * ___outstandingMeshObject_43;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * ___spareMeshObject_44;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_45;

public:
	inline static int32_t get_offset_of_meshWorkQueue_41() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC, ___meshWorkQueue_41)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_41() const { return ___meshWorkQueue_41; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_41() { return &___meshWorkQueue_41; }
	inline void set_meshWorkQueue_41(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_41), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_42() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC, ___meshInfos_42)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_42() const { return ___meshInfos_42; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_42() { return &___meshInfos_42; }
	inline void set_meshInfos_42(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_42), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC, ___outstandingMeshObject_43)); }
	inline SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * get_outstandingMeshObject_43() const { return ___outstandingMeshObject_43; }
	inline SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D ** get_address_of_outstandingMeshObject_43() { return &___outstandingMeshObject_43; }
	inline void set_outstandingMeshObject_43(SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * value)
	{
		___outstandingMeshObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC, ___spareMeshObject_44)); }
	inline SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * get_spareMeshObject_44() const { return ___spareMeshObject_44; }
	inline SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D ** get_address_of_spareMeshObject_44() { return &___spareMeshObject_44; }
	inline void set_spareMeshObject_44(SpatialAwarenessMeshObject_tFE7387EB597821FCF31D4B09B29B75DA3E4F274D * value)
	{
		___spareMeshObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC, ___lastUpdated_45)); }
	inline float get_lastUpdated_45() const { return ___lastUpdated_45; }
	inline float* get_address_of_lastUpdated_45() { return &___lastUpdated_45; }
	inline void set_lastUpdated_45(float value)
	{
		___lastUpdated_45 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_55;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_40() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___UpdatePerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_40() const { return ___UpdatePerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_40() { return &___UpdatePerfMarker_40; }
	inline void set_UpdatePerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___ResumePerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_46() const { return ___ResumePerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_46() { return &___ResumePerfMarker_46; }
	inline void set_ResumePerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___SuspendPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_47() const { return ___SuspendPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_47() { return &___SuspendPerfMarker_47; }
	inline void set_SuspendPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___ClearObservationsPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_48() const { return ___ClearObservationsPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_48() { return &___ClearObservationsPerfMarker_48; }
	inline void set_ClearObservationsPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___UpdateObserverPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_49() const { return ___UpdateObserverPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_49() { return &___UpdateObserverPerfMarker_49; }
	inline void set_UpdateObserverPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___RequestMeshPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_50() const { return ___RequestMeshPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_50() { return &___RequestMeshPerfMarker_50; }
	inline void set_RequestMeshPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___RemoveMeshObjectPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_51() const { return ___RemoveMeshObjectPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_51() { return &___RemoveMeshObjectPerfMarker_51; }
	inline void set_RemoveMeshObjectPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___ReclaimMeshObjectPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_52() const { return ___ReclaimMeshObjectPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_52() { return &___ReclaimMeshObjectPerfMarker_52; }
	inline void set_ReclaimMeshObjectPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___ConfigureObserverVolumePerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_53() const { return ___ConfigureObserverVolumePerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_53() { return &___ConfigureObserverVolumePerfMarker_53; }
	inline void set_ConfigureObserverVolumePerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___UpdateMeshesPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_54() const { return ___UpdateMeshesPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_54() { return &___UpdateMeshesPerfMarker_54; }
	inline void set_UpdateMeshesPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_StaticFields, ___MeshGenerationActionPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_55() const { return ___MeshGenerationActionPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_55() { return &___MeshGenerationActionPerfMarker_55; }
	inline void set_MeshGenerationActionPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_55 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct  WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650  : public XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_22;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650, ___mixedRealityGazeProviderHeadOverride_22)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_22() const { return ___mixedRealityGazeProviderHeadOverride_22; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_22() { return &___mixedRealityGazeProviderHeadOverride_22; }
	inline void set_mixedRealityGazeProviderHeadOverride_22(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_22), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct  WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01  : public GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC
{
public:

public:
};

struct WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_56;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_56() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_StaticFields, ___ConfigureObserverVolumePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_56() const { return ___ConfigureObserverVolumePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_56() { return &___ConfigureObserverVolumePerfMarker_56; }
	inline void set_ConfigureObserverVolumePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_56 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct  WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8  : public BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * ___unityJointPoses_27;
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * ___handDefinition_28;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 * ___handMeshProvider_29;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___fingerBones_31;

public:
	inline static int32_t get_offset_of_unityJointPoses_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8, ___unityJointPoses_27)); }
	inline Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * get_unityJointPoses_27() const { return ___unityJointPoses_27; }
	inline Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 ** get_address_of_unityJointPoses_27() { return &___unityJointPoses_27; }
	inline void set_unityJointPoses_27(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * value)
	{
		___unityJointPoses_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_27), (void*)value);
	}

	inline static int32_t get_offset_of_handDefinition_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8, ___handDefinition_28)); }
	inline ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * get_handDefinition_28() const { return ___handDefinition_28; }
	inline ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD ** get_address_of_handDefinition_28() { return &___handDefinition_28; }
	inline void set_handDefinition_28(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * value)
	{
		___handDefinition_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_28), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8, ___handMeshProvider_29)); }
	inline WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 * get_handMeshProvider_29() const { return ___handMeshProvider_29; }
	inline WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 ** get_address_of_handMeshProvider_29() { return &___handMeshProvider_29; }
	inline void set_handMeshProvider_29(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 * value)
	{
		___handMeshProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_29), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8, ___fingerBones_31)); }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * get_fingerBones_31() const { return ___fingerBones_31; }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 ** get_address_of_fingerBones_31() { return &___fingerBones_31; }
	inline void set_fingerBones_31(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * value)
	{
		___fingerBones_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_31), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* ___handFingers_30;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightPalmOffset_32;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftPalmOffset_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandDataPerfMarker_35;

public:
	inline static int32_t get_offset_of_handFingers_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields, ___handFingers_30)); }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* get_handFingers_30() const { return ___handFingers_30; }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F** get_address_of_handFingers_30() { return &___handFingers_30; }
	inline void set_handFingers_30(HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* value)
	{
		___handFingers_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_30), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields, ___rightPalmOffset_32)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightPalmOffset_32() const { return ___rightPalmOffset_32; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightPalmOffset_32() { return &___rightPalmOffset_32; }
	inline void set_rightPalmOffset_32(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightPalmOffset_32 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields, ___leftPalmOffset_33)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftPalmOffset_33() const { return ___leftPalmOffset_33; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftPalmOffset_33() { return &___leftPalmOffset_33; }
	inline void set_leftPalmOffset_33(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftPalmOffset_33 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_34() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields, ___UpdateControllerPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_34() const { return ___UpdateControllerPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_34() { return &___UpdateControllerPerfMarker_34; }
	inline void set_UpdateControllerPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields, ___UpdateHandDataPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandDataPerfMarker_35() const { return ___UpdateHandDataPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandDataPerfMarker_35() { return &___UpdateHandDataPerfMarker_35; }
	inline void set_UpdateHandDataPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandDataPerfMarker_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct  WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49  : public BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___U3CDefaultInteractionsU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49, ___U3CDefaultInteractionsU3Ek__BackingField_27)); }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* get_U3CDefaultInteractionsU3Ek__BackingField_27() const { return ___U3CDefaultInteractionsU3Ek__BackingField_27; }
	inline MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_27() { return &___U3CDefaultInteractionsU3Ek__BackingField_27; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_27(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_27), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct  WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9  : public BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE
{
public:

public:
};

struct WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields, ___UpdateButtonDataPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_27() const { return ___UpdateButtonDataPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_27() { return &___UpdateButtonDataPerfMarker_27; }
	inline void set_UpdateButtonDataPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields, ___UpdateDualAxisDataPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_28() const { return ___UpdateDualAxisDataPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_28() { return &___UpdateDualAxisDataPerfMarker_28; }
	inline void set_UpdateDualAxisDataPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};


// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_mCC9163F146E2FAAF9173975D6399830FF52BDAEC_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9C6105E79AAB83D2DB609B07181DC6483EE33F20_gshared (Dictionary_2_t0AEBD58B6195211BCBC98B2C5576CD30DF2BB34F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3A1D1AC38555FFC7822DFA3DDADD3EF67B9CDF2E_gshared (Dictionary_2_t0AEBD58B6195211BCBC98B2C5576CD30DF2BB34F * __this, int32_t ___key0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5ADD504F1C405C7DC27690B7887B2D1EE03679F9_gshared (Dictionary_2_t0AEBD58B6195211BCBC98B2C5576CD30DF2BB34F * __this, int32_t ___key0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m215A834FCD4B3096AD0CE9FE5A23FE3970DC7EF6 (GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_mA4FFB2CCA787A88DE889FCBDF2D0A27B07F95671 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m247BAE9A0400E233D09027B70BDFA277C4C65EDE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_m48C20A8E0AC036220D62AC253CDB5938DB555F0A (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mC3C79FCBA0369E2BDF775FE6CDE8D90D01475ACC (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mD0B9F722A71A7074876A1831ABB8AD33258E048E (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m94F0405D8AEA9D3C4757B177008599EEA008C432 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  MixedRealityInteractionMapping_get_PoseData_m06BB150A5DADF96B0E48D9E9651F3AE6A659903B_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_mE13DD06B2F31D05E2F4E035E00C73DC1EC1AEB2A (GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_mF50114A51DEF334DD6D70FC0009EBA8F56B30A1D (BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t24810B21258D7787AFA3B796CA48C51CD839672E * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSubsystemHelpers_get_DisplaySubsystem_m57EDF26AE8BFD89639A41E6D7A85C7C9A36049F0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m25299CFC869D61909639F7E229F5DF202331CBA6 (XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m1E30F3C2BD8CA30295F7A40A3858A512F21D67A4 (BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m3B95158F5FC08C22871B6A2BA59D0D1D5B337CEF_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m4D1386F512DFF83FF907C67449D452809EC2D1F4 (XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m68D15E8E99AC323751FC150D164BF0F7103C7FEC_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_mCC9163F146E2FAAF9173975D6399830FF52BDAEC_gshared_inline)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m4BD266F0CCA679737144E34E902FABD8AF9A5FB2 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___coordinateSystem0, PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A (SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_mBF2E76A2614345855CCA2708717A939524040004 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_mB7F8E9D18E1F048C05B997E1B56E110C4FEE878F (XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_mBACA828C6C9E06F75B927C1FB642EEF9B038C103 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m1F35A2CF803E87A4F99FC6D54FE25C7B8DF09BF1 (XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_m82BDC2B462FB84E38EDA2FA953DFEA2DBC5A573E (XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m1A45686A0837859B7E17B7B66EEF17012D1AC76B (XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_mFD6330B8C5D49CD021C874911FA7FC8606C846BA (GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m24AD71EAF2522F4683C0CC85BCF454CF31637174_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSubsystemHelpers_get_MeshSubsystem_m1108F93F0CF7A5203DAC7104535185F8B4B79F51 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mE87D0FCC966F74B472C0F1E6E1068A7CB24E25D1_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m76DB83856BCCB235B0C4228B25AE132076A9681E_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m4152798BD5379DE4E29F20A524D27E6A0839F403_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m67F2A3AD26B66EDDEE02AE4483B00D728E9874C9 (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 *, const RuntimeMethod*))Dictionary_2__ctor_m9C6105E79AAB83D2DB609B07181DC6483EE33F20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mF6DE1259E64B8FFE6D30BD21BBCD007AC1D5C110 (BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m7F915E9B41CD240524621E702BE49D5F0EAC15AF (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider__ctor_m270E37C4E9456E89A1580ADD4E4D703DB202EB36 (WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ArticulatedHandDefinition_get_DefaultInteractions_m3B520406CE0C53D00DA94839FD76D43B1D716B32 (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3929EA6D50F5E7427ADE286D95F99AAE95E5D54E (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * __this, int32_t ___key0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 *, int32_t, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3A1D1AC38555FFC7822DFA3DDADD3EF67B9CDF2E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m674ABAFFA545E6DB6AE00DEED212522092DA2D08 (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mEE1B73034847E042DDB7F3206E02C5AFEDC6E37D_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_mBAA1F8E4262634F0EB061B63A28A3BCE02E6CEF1 (GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m8C0D96B06495687660D728F19D220B7DAAB0925F (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* BaseController_get_Interactions_mCFC05F75AB7AA36CB0EBC9D29739365A8D0B346D_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_mF4F23B0A73B7DB286F920F865B97FE6FAB85B744 (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___usage0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, int32_t ___finger0, List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___bonesOut1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m3E2D3080092E5D5ACD292F38CCEF7D06690C444C (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m2E70752B82E6FDDA93EEB36F856A3261788A65AD (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04 (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * __this, int32_t ___key0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 *, int32_t, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD , const RuntimeMethod*))Dictionary_2_set_Item_m5ADD504F1C405C7DC27690B7887B2D1EE03679F9_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m74865D022C512820A1486FDC8A63D0C696F4EF98 (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * __this, Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6 (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m8EEE351188CC63BDC96B940BB10C7B4558047F31 (GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_mDE003175F228BE85C14B982F2679BF1393217A7E (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m19339311BF840FC0ADE75D370C202396602C4DFA (GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m2F279D1752199877EF248BE5BAA755434D6159E2 (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m7F89CB59E21A502592D7326B971CC4E616B1AF44_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mF6DE1259E64B8FFE6D30BD21BBCD007AC1D5C110 (BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_23(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_24(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_25(L_2);
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_6 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m215A834FCD4B3096AD0CE9FE5A23FE3970DC7EF6(__this, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// : base(trackingState, sourceHandedness, inputSource, interactions) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mD0400C9C99FA1CFAB39D3E236426DB065FB7D02E (BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_26();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_00b1;
			}
		}

IL_001a:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_4 = ((CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_currentPointerPosition_23();
			bool L_6;
			L_6 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * L_7 = __this->get_address_of_currentPointerPose_25();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_currentPointerPosition_23();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = MixedRealityPlayspace_TransformPoint_mA4FFB2CCA787A88DE889FCBDF2D0A27B07F95671(L_8, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m247BAE9A0400E233D09027B70BDFA277C4C65EDE_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)L_7, L_9, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_10 = ((CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tCC6F070CDB4D3A939AA3B529D23B191C6E29B3B1_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = __this->get_address_of_currentPointerRotation_24();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0073;
			}
		}

IL_0058:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * L_13 = __this->get_address_of_currentPointerPose_25();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
			L_14 = MixedRealityPlayspace_get_Rotation_m48C20A8E0AC036220D62AC253CDB5938DB555F0A(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_currentPointerRotation_24();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)L_13, L_16, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_17 = ___interactionMapping0;
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_18 = __this->get_currentPointerPose_25();
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_PoseData_mC3C79FCBA0369E2BDF775FE6CDE8D90D01475ACC(L_17, L_18, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInteractionMapping_get_Changed_mD0B9F722A71A7074876A1831ABB8AD33258E048E(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b9;
			}
		}

IL_0087:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
			RuntimeObject* L_21;
			L_21 = CoreServices_get_InputSystem_m94F0405D8AEA9D3C4757B177008599EEA008C432(/*hidden argument*/NULL);
			RuntimeObject* L_22 = L_21;
			G_B8_0 = L_22;
			if (L_22)
			{
				G_B9_0 = L_22;
				goto IL_0092;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_0092:
		{
			RuntimeObject* L_23;
			L_23 = BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline(__this, /*hidden argument*/NULL);
			uint8_t L_24;
			L_24 = BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_25 = ___interactionMapping0;
			NullCheck(L_25);
			MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  L_26;
			L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline(L_25, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_28;
			L_28 = MixedRealityInteractionMapping_get_PoseData_m06BB150A5DADF96B0E48D9E9651F3AE6A659903B_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC , MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
			// break;
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_00b1:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_29 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_30 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_mE13DD06B2F31D05E2F4E035E00C73DC1EC1AEB2A(__this, L_29, L_30, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_m460EEB2E6BD3F7673FD323924C7D96BE29C02A39 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_26(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_m87DB18CC26A6226C40BB16EF0ED69A7C1B9A7433 (WindowsMixedRealityCameraSettings_t7D4D81968147FDE3E126F43F94D4DDAE689ED946 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t24810B21258D7787AFA3B796CA48C51CD839672E * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t24810B21258D7787AFA3B796CA48C51CD839672E * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_tBF941088A7E635071E74508DF37892B1B84820AE_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_mF50114A51DEF334DD6D70FC0009EBA8F56B30A1D(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_m9DF4589FD9304C8A0F654A36854E5422E7AA5FE5 (WindowsMixedRealityCameraSettings_t7D4D81968147FDE3E126F43F94D4DDAE689ED946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B2_0 = NULL;
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m57EDF26AE8BFD89639A41E6D7A85C7C9A36049F0(/*hidden argument*/NULL);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_mED0D0591400ACAE1537DB434CB49C5E1B34501A9 (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tAF7D4B8CEA4AB5D5AB4222CCAD9FB17DD868F614_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_m25299CFC869D61909639F7E229F5DF202331CBA6(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m747728CCCECE70620C486522E6B9ABC7A3900ABA (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * G_B5_1 = NULL;
	{
		// base.Enable();
		BaseService_Enable_m1E30F3C2BD8CA30295F7A40A3858A512F21D67A4(__this, /*hidden argument*/NULL);
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m3B95158F5FC08C22871B6A2BA59D0D1D5B337CEF_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 * L_1 = (XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m4D1386F512DFF83FF907C67449D452809EC2D1F4(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_m68D15E8E99AC323751FC150D164BF0F7103C7FEC_inline(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_2;
		L_2 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = __this;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = __this;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((RuntimeObject*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_002a;
	}

IL_0025:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B4_0);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_mixedRealityGazeProviderHeadOverride_22(((RuntimeObject*)IsInst((RuntimeObject*)G_B5_0, IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_mD945A9E4436CA697D21966F417B515E7E92BE694 (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * V_0 = NULL;
	HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * V_1 = NULL;
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_0 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_3;
		L_3 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m4BD266F0CCA679737144E34E902FABD8AF9A5FB2(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_4;
		L_4 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m4BD266F0CCA679737144E34E902FABD8AF9A5FB2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_5;
		L_5 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
		PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * L_6;
		L_6 = PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3(L_5, /*hidden argument*/NULL);
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_7;
		L_7 = SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (pointerPose != null)
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_8 = V_0;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_9 = V_0;
		NullCheck(L_9);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_10;
		L_10 = SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (head != null)
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_11 = V_1;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_12 = __this->get_mixedRealityGazeProviderHeadOverride_22();
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_13 = V_1;
		NullCheck(L_13);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_14;
		L_14 = HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = SystemNumericsExtensions_ToUnityVector3_mBF2E76A2614345855CCA2708717A939524040004(L_14, /*hidden argument*/NULL);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_16 = V_1;
		NullCheck(L_16);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_17;
		L_17 = HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = SystemNumericsExtensions_ToUnityVector3_mBF2E76A2614345855CCA2708717A939524040004(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_t8F2FC7D8181E430EA15DBD5793D069F83250EF08_il2cpp_TypeInfo_var, L_12, L_15, L_18);
	}

IL_005f:
	{
		// base.Update();
		XRSDKDeviceManager_Update_mB7F8E9D18E1F048C05B997E1B56E110C4FEE878F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_mFDC70212CC3F01417C7BB82F4F14938322FC4F45 (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0;
		L_0 = WindowsApiChecker_IsMethodAvailable_mBACA828C6C9E06F75B927C1FB642EEF9B038C103(_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE, _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E, _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___capability0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___capability0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004b;
	}

IL_0020:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_3;
		L_3 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0027:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_4;
		L_4 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002e:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
		L_5 = XRSubsystemHelpers_get_DisplaySubsystem_m57EDF26AE8BFD89639A41E6D7A85C7C9A36049F0(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6;
		L_6 = XRSubsystemHelpers_get_DisplaySubsystem_m57EDF26AE8BFD89639A41E6D7A85C7C9A36049F0(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_8 = ___capability0;
		return (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_9 = ___capability0;
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_m66015C4C8BAEAF7C8C128EB54960D6DB4BF2DB86 (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)2048))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0038;
	}

IL_0017:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002d:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0038:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_9 = ___supportedControllerType0;
		Type_t * L_10;
		L_10 = XRSDKDeviceManager_GetControllerType_m1F35A2CF803E87A4F99FC6D54FE25C7B8DF09BF1(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_m4DAC48EFD81B5BF1DB6B190CAD45F75B81C29D25 (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001b;
	}

IL_0017:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0019:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_001b:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_3 = ___supportedControllerType0;
		int32_t L_4;
		L_4 = XRSDKDeviceManager_GetInputSourceType_m82BDC2B462FB84E38EDA2FA953DFEA2DBC5A573E(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m43FFBD8D5C8F5AE2FDE364D5949669EE9B19F92B (WindowsMixedRealityDeviceManager_tF063964A4134FB684CD754518CE04307A75F6650 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_1);
		uint32_t L_3 = ((uint32_t)8);
		RuntimeObject * L_4 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_3);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_2);
		bool L_5;
		L_5 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_2, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_6;
		L_6 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = ((uint32_t)((int32_t)256));
		RuntimeObject * L_10 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8);
		bool L_11;
		L_11 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_12;
		L_12 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_13);
		uint32_t L_15 = ((uint32_t)((int32_t)512));
		RuntimeObject * L_16 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_14);
		bool L_17;
		L_17 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_14, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}

IL_0053:
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_0059:
	{
		// return SupportedControllerType.GGVHand;
		return (int32_t)(((int32_t)2048));
	}

IL_005f:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_18;
		L_18 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_19);
		uint32_t L_21 = ((uint32_t)((int32_t)64));
		RuntimeObject * L_22 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_21);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_20);
		bool L_23;
		L_23 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_20, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_007c;
		}
	}
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_007c:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_24 = ___inputDevice0;
		int32_t L_25;
		L_25 = XRSDKDeviceManager_GetCurrentControllerType_m1A45686A0837859B7E17B7B66EEF17012D1AC76B(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_m274573DED654534697ADDE31C82BE81C50AFCE76 (WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tF0B1CC80E6DFEAB8F5A0C704B0B95047D01247CC_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_mFD6330B8C5D49CD021C874911FA7FC8606C846BA(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m6A9FB80CF38B8A4143CAAD7CC13B7488015C138D (WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_t139DD3A2002A8DF644CEA73FA7FA50F050A2655B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0;
		L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m24AD71EAF2522F4683C0CC85BCF454CF31637174_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_1;
		L_1 = XRSubsystemHelpers_get_MeshSubsystem_m1108F93F0CF7A5203DAC7104535185F8B4B79F51(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_56();
		V_1 = L_2;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
		L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_4;
			L_4 = BaseSpatialObserver_get_ObserverVolumeType_mE87D0FCC966F74B472C0F1E6E1068A7CB24E25D1_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_4) == ((uint32_t)1))))
			{
				goto IL_0040;
			}
		}

IL_0027:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t666649C7CD206C449FC0B55EFE9AF032BE5624AF_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_5;
			L_5 = XRSubsystemHelpers_get_MeshSubsystem_m1108F93F0CF7A5203DAC7104535185F8B4B79F51(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = BaseSpatialObserver_get_ObserverOrigin_m76DB83856BCCB235B0C4228B25AE132076A9681E_inline(__this, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = BaseSpatialObserver_get_ObservationExtents_m4152798BD5379DE4E29F20A524D27E6A0839F403_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_5);
			bool L_8;
			L_8 = XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92(L_5, L_6, L_7, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}

IL_0040:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_9;
			L_9 = BaseSpatialObserver_get_ObserverVolumeType_mE87D0FCC966F74B472C0F1E6E1068A7CB24E25D1_inline(__this, /*hidden argument*/NULL);
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(VolumeType_t139DD3A2002A8DF644CEA73FA7FA50F050A2655B_il2cpp_TypeInfo_var, &L_10);
			String_t* L_12;
			L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_12, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_mAE88DD69A19E548FB62DD937990AE61E3B075969 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t76B9D98A4E51BF2ABBBA0D6740BE3686690E6B01_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_56(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_mC7421BDE0F286D588A256152962F11377D2B81A6 (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m67F2A3AD26B66EDDEE02AE4483B00D728E9874C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * L_0 = (Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 *)il2cpp_codegen_object_new(Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m67F2A3AD26B66EDDEE02AE4483B00D728E9874C9(L_0, /*hidden argument*/Dictionary_2__ctor_m67F2A3AD26B66EDDEE02AE4483B00D728E9874C9_RuntimeMethod_var);
		__this->set_unityJointPoses_27(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_1 = (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *)il2cpp_codegen_object_new(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E(L_1, /*hidden argument*/List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		__this->set_fingerBones_31(L_1);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_2 = ___trackingState0;
		uint8_t L_3 = ___controllerHandedness1;
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mF6DE1259E64B8FFE6D30BD21BBCD007AC1D5C110(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// handDefinition = new ArticulatedHandDefinition(inputSource, controllerHandedness);
		RuntimeObject* L_6 = ___inputSource2;
		uint8_t L_7 = ___controllerHandedness1;
		ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_8 = (ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD *)il2cpp_codegen_object_new(ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m7F915E9B41CD240524621E702BE49D5F0EAC15AF(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_handDefinition_28(L_8);
		// handMeshProvider = new WindowsMixedRealityHandMeshProvider(this);
		WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 * L_9 = (WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943 *)il2cpp_codegen_object_new(WindowsMixedRealityHandMeshProvider_tE3021D66E91D915ABBE447ABDFE01FB993E0D943_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider__ctor_m270E37C4E9456E89A1580ADD4E4D703DB202EB36(L_9, __this, /*hidden argument*/NULL);
		__this->set_handMeshProvider_29(L_9);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* WindowsMixedRealityXRSDKArticulatedHand_get_DefaultInteractions_mB98A8F1A5E09169437DDDF92A12467D42934F462 (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, const RuntimeMethod* method)
{
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B2_0 = NULL;
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B1_0 = NULL;
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => handDefinition?.DefaultInteractions;
		ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_0 = __this->get_handDefinition_28();
		ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_2;
		L_2 = ArticulatedHandDefinition_get_DefaultInteractions_m3B520406CE0C53D00DA94839FD76D43B1D716B32(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_mDD8E1175B67FAAB7C9EC93BDD9744D54C4EDCD43 (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, int32_t ___joint0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3929EA6D50F5E7427ADE286D95F99AAE95E5D54E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * L_0 = __this->get_unityJointPoses_27();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m3929EA6D50F5E7427ADE286D95F99AAE95E5D54E(L_0, L_1, (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m3929EA6D50F5E7427ADE286D95F99AAE95E5D54E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_m065E5A779D83BEB4338EAA7E6E8CB9F85631E03E (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_0 = __this->get_handDefinition_28();
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m674ABAFFA545E6DB6AE00DEED212522092DA2D08(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mD9E9296262A62744FCE13B3677382CF094355ABF (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B7_0 = NULL;
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B6_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	int32_t G_B12_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0;
		L_0 = BaseController_get_Enabled_mEE1B73034847E042DDB7F3206E02C5AFEDC6E37D_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_34();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_mBAA1F8E4262634F0EB061B63A28A3BCE02E6CEF1(__this, L_3, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m8C0D96B06495687660D728F19D220B7DAAB0925F(__this, L_4, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0057;
		}

IL_0029:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_5;
			L_5 = BaseController_get_Interactions_mCFC05F75AB7AA36CB0EBC9D29739365A8D0B346D_inline(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			NullCheck(L_8);
			int32_t L_9;
			L_9 = MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline(L_8, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_0053;
			}
		}

IL_003a:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_10 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_11 = L_10;
			G_B6_0 = L_11;
			if (L_11)
			{
				G_B7_0 = L_11;
				goto IL_0046;
			}
		}

IL_0043:
		{
			goto IL_0053;
		}

IL_0046:
		{
			MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_12;
			L_12 = BaseController_get_Interactions_mCFC05F75AB7AA36CB0EBC9D29739365A8D0B346D_inline(__this, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			NullCheck(L_12);
			int32_t L_14 = L_13;
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			NullCheck(G_B7_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_mF4F23B0A73B7DB286F920F865B97FE6FAB85B744(G_B7_0, L_15, /*hidden argument*/NULL);
		}

IL_0053:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_16 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0057:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_17 = V_2;
			MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_18;
			L_18 = BaseController_get_Interactions_mCFC05F75AB7AA36CB0EBC9D29739365A8D0B346D_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_19 = L_18;
			G_B10_0 = L_19;
			G_B10_1 = L_17;
			if (L_19)
			{
				G_B11_0 = L_19;
				G_B11_1 = L_17;
				goto IL_006e;
			}
		}

IL_0061:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20 = V_4;
			G_B12_0 = L_20;
			G_B12_1 = G_B10_1;
			goto IL_0075;
		}

IL_006e:
		{
			NullCheck(G_B11_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_21;
			memset((&L_21), 0, sizeof(L_21));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_21), ((int32_t)((int32_t)(((RuntimeArray*)G_B11_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B12_0 = L_21;
			G_B12_1 = G_B11_1;
		}

IL_0075:
		{
			V_3 = G_B12_0;
			int32_t L_22;
			L_22 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_23;
			L_23 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B12_1) < ((int32_t)L_22))? 1 : 0)&(int32_t)L_23)))
			{
				goto IL_0029;
			}
		}

IL_0089:
		{
			// }
			IL2CPP_LEAVE(0x99, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m8C0D96B06495687660D728F19D220B7DAAB0925F (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * G_B11_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * G_B10_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * G_B12_2 = NULL;
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B17_0 = NULL;
	ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * G_B16_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_35();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_2 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3;
			L_3 = InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_2, (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0139;
			}
		}

IL_0021:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_4 = ((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->get_handFingers_30();
			V_3 = L_4;
			V_4 = 0;
			goto IL_0118;
		}

IL_002f:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_5 = V_3;
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_9 = V_5;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_10 = __this->get_fingerBones_31();
			bool L_11;
			L_11 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0112;
			}
		}

IL_0049:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_7 = 0;
			goto IL_00c3;
		}

IL_004e:
		{
			// TrackedHandJoint trackedHandJoint = ConvertToTrackedHandJoint(finger, i);
			int32_t L_12 = V_5;
			int32_t L_13 = V_7;
			int32_t L_14;
			L_14 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m3E2D3080092E5D5ACD292F38CCEF7D06690C444C(__this, L_12, L_13, /*hidden argument*/NULL);
			V_8 = L_14;
			// Bone bone = fingerBones[i];
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_15 = __this->get_fingerBones_31();
			int32_t L_16 = V_7;
			NullCheck(L_15);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_17;
			L_17 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			V_9 = L_17;
			// Vector3 position = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_10 = L_18;
			// Quaternion rotation = Quaternion.identity;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
			L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			V_11 = L_19;
			// bool positionAvailable = bone.TryGetPosition(out position);
			bool L_20;
			L_20 = Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_9), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
			// bool rotationAvailable = bone.TryGetRotation(out rotation);
			bool L_21;
			L_21 = Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_9), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), /*hidden argument*/NULL);
			V_12 = L_21;
			// if (positionAvailable || rotationAvailable)
			bool L_22 = V_12;
			if (!((int32_t)((int32_t)L_20|(int32_t)L_22)))
			{
				goto IL_00bd;
			}
		}

IL_0090:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tEB758C55F4280DF1CA9497EA6E064BAAE1D86D1C_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = MixedRealityPlayspace_TransformPoint_mA4FFB2CCA787A88DE889FCBDF2D0A27B07F95671(L_23, /*hidden argument*/NULL);
			V_10 = L_24;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
			L_25 = MixedRealityPlayspace_get_Rotation_m48C20A8E0AC036220D62AC253CDB5938DB555F0A(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_11;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
			L_27 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_25, L_26, /*hidden argument*/NULL);
			V_11 = L_27;
			// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
			Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * L_28 = __this->get_unityJointPoses_27();
			int32_t L_29 = V_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_10;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_11;
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_32;
			memset((&L_32), 0, sizeof(L_32));
			MixedRealityPose__ctor_m2E70752B82E6FDDA93EEB36F856A3261788A65AD((&L_32), L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_28);
			Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04(L_28, L_29, L_32, /*hidden argument*/Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04_RuntimeMethod_var);
		}

IL_00bd:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_33 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_00c3:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_34 = V_7;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_35 = __this->get_fingerBones_31();
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline(L_35, /*hidden argument*/List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
			if ((((int32_t)L_34) < ((int32_t)L_36)))
			{
				goto IL_004e;
			}
		}

IL_00d5:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_37 = ((GenericXRSDKController_tD7A9B2F4FB2A7662A74AF3E8ADC0F40D0F0DEAC1 *)__this)->get_CurrentControllerPose_14();
			V_6 = L_37;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * L_38 = (&V_6);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
			L_39 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)L_38, /*hidden argument*/NULL);
			uint8_t L_40;
			L_40 = BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = L_39;
			G_B10_1 = L_38;
			if ((((int32_t)L_40) == ((int32_t)1)))
			{
				G_B11_0 = L_39;
				G_B11_1 = L_38;
				goto IL_00f5;
			}
		}

IL_00ee:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = ((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->get_rightPalmOffset_32();
			G_B12_0 = L_41;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_00fa;
		}

IL_00f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42 = ((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->get_leftPalmOffset_33();
			G_B12_0 = L_42;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_00fa:
		{
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
			L_43 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)G_B12_2, L_43, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * L_44 = __this->get_unityJointPoses_27();
			MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_45 = V_6;
			NullCheck(L_44);
			Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04(L_44, 2, L_45, /*hidden argument*/Dictionary_2_set_Item_m37E695E73757854C3594F56174A8035B752ABD04_RuntimeMethod_var);
		}

IL_0112:
		{
			int32_t L_46 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_0118:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_47 = V_4;
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_48 = V_3;
			NullCheck(L_48);
			if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
			{
				goto IL_002f;
			}
		}

IL_0122:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_49 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_tCF64DC33E0FCF314DD99323AFC334DBAC16517FD * L_50 = L_49;
			G_B16_0 = L_50;
			if (L_50)
			{
				G_B17_0 = L_50;
				goto IL_012e;
			}
		}

IL_012b:
		{
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}

IL_012e:
		{
			Dictionary_2_t36E238F47BB8619E292067EE2B8E2BE81F16BAF8 * L_51 = __this->get_unityJointPoses_27();
			NullCheck(G_B17_0);
			ArticulatedHandDefinition_UpdateHandJoints_m74865D022C512820A1486FDC8A63D0C696F4EF98(G_B17_0, L_51, /*hidden argument*/NULL);
		}

IL_0139:
		{
			// }
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013b;
	}

FINALLY_013b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(315)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x149, IL_0149)
	}

IL_0149:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_m3E2D3080092E5D5ACD292F38CCEF7D06690C444C (WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_1 = ___index1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_2)), (int32_t)1)));
	}

IL_0025:
	{
		return (int32_t)(1);
	}

IL_0027:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_3 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_3)));
	}

IL_002b:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_4 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_4)));
	}

IL_0030:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_5 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_5)));
	}

IL_0035:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_6 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_6)));
	}

IL_003a:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m2B426DE1A89D90A3AD989D52CC5FD11731B20466 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->set_handFingers_30(((HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_3;
		L_3 = sqrtf((0.125f));
		float L_4;
		L_4 = sqrtf((0.125f));
		float L_5;
		L_5 = sqrtf((1.5f));
		float L_6;
		L_6 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->set_rightPalmOffset_32(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8;
		L_8 = sqrtf((0.125f));
		float L_9;
		L_9 = sqrtf((0.125f));
		float L_10;
		L_10 = sqrtf((1.5f));
		float L_11;
		L_11 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->set_leftPalmOffset_33(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_34(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_14), _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t599B9ED730003C9F98F397DBBBEAD38E3A7710F8_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_35(L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_mE95ADCB1FFD393FCA9563AC73C6E6A0907BC93F6 (WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C44CFC5FE4DF6EF8FEA0E3D8457CC36A8AC2C8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip),
		// };
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_0 = (MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76*)(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_1 = L_0;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_2 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_2, 0, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_2);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_3 = L_1;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_4 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_4, 1, _stringLiteral7C44CFC5FE4DF6EF8FEA0E3D8457CC36A8AC2C8F, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_4);
		__this->set_U3CDefaultInteractionsU3Ek__BackingField_27(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_5 = ___trackingState0;
		uint8_t L_6 = ___controllerHandedness1;
		RuntimeObject* L_7 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_8 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mF6DE1259E64B8FFE6D30BD21BBCD007AC1D5C110(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* WindowsMixedRealityXRSDKGGVHand_get_DefaultInteractions_m68119F603BBCE560BFCEA5437F47295FE0A0A160 (WindowsMixedRealityXRSDKGGVHand_t1B3FF31230412C3BAFBE7C2B8483CC8E484DAE49 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions { get; } = new[]
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_0 = __this->get_U3CDefaultInteractionsU3Ek__BackingField_27();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mD4A0CD9AA575460EF28A7258F83F57671FE24009 (WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_3 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tE1E524301282C1AA0669CD29B6CDEE56F7FE47AE_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mF6DE1259E64B8FFE6D30BD21BBCD007AC1D5C110(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// : base(trackingState, controllerHandedness, inputSource, interactions) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* WindowsMixedRealityXRSDKMotionController_get_DefaultInteractions_mCA3A867E46BCC89D94D55DD2B6B9081337CFBC07 (WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00313D5620A04AC7E4CF90E775FC27C1D876E6DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1486B1D2A3C5A6E3E69E33CD47E973270BCEAB6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D4A83C9F8983F991D7257E5074C26C04E3E36E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7817B81C2124EE91AE458126A3D8CDEB3D1A96CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BD7EFF539D991C09181A98F9B7D7C072F0224);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85148B30AAF5D51492AF120A8FE2B6E664A2EF7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05DF3F43A74F956240D2F08C2D6DA773210B627);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5518A23AB74B3610F265E69DEF63F60C14B5A7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD25B538BA3D8C0A58420325D80D61288FD6B3E43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A8AE7631C0518CE4467865D2B59E911D35A812);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Grip Press", AxisType.SingleAxis, DeviceInputType.GripPress),
		//     new MixedRealityInteractionMapping(3, "Trigger Position", AxisType.SingleAxis, DeviceInputType.Trigger),
		//     new MixedRealityInteractionMapping(4, "Trigger Touch", AxisType.Digital, DeviceInputType.TriggerTouch),
		//     new MixedRealityInteractionMapping(5, "Trigger Press (Select)", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(6, "Touchpad Position", AxisType.DualAxis, DeviceInputType.Touchpad),
		//     new MixedRealityInteractionMapping(7, "Touchpad Touch", AxisType.Digital, DeviceInputType.TouchpadTouch),
		//     new MixedRealityInteractionMapping(8, "Touchpad Press", AxisType.Digital, DeviceInputType.TouchpadPress),
		//     new MixedRealityInteractionMapping(9, "Menu Press", AxisType.Digital, DeviceInputType.Menu),
		//     new MixedRealityInteractionMapping(10, "Thumbstick Position", AxisType.DualAxis, DeviceInputType.ThumbStick),
		//     new MixedRealityInteractionMapping(11, "Thumbstick Press", AxisType.Digital, DeviceInputType.ThumbStickPress),
		// };
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_0 = (MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76*)(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_1 = L_0;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_2 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_2, 0, _stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_2);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_3 = L_1;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_4 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_4, 1, _stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_4);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_5 = L_3;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_6 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_6, 2, _stringLiteral1486B1D2A3C5A6E3E69E33CD47E973270BCEAB6F, 3, ((int32_t)60), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_6);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_7 = L_5;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_8 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_8, 3, _stringLiteralD3A8AE7631C0518CE4467865D2B59E911D35A812, 3, ((int32_t)10), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_8);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_9 = L_7;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_10 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_10, 4, _stringLiteral820BD7EFF539D991C09181A98F9B7D7C072F0224, 2, ((int32_t)11), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_10);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_11 = L_9;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_12 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_12, 5, _stringLiteral00313D5620A04AC7E4CF90E775FC27C1D876E6DE, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_12);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_13 = L_11;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_14 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_14, 6, _stringLiteral6D4A83C9F8983F991D7257E5074C26C04E3E36E2, 4, ((int32_t)21), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_14);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_15 = L_13;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_16 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_16, 7, _stringLiteral7817B81C2124EE91AE458126A3D8CDEB3D1A96CF, 2, ((int32_t)22), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_16);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_17 = L_15;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_18 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_18, 8, _stringLiteral85148B30AAF5D51492AF120A8FE2B6E664A2EF7A, 2, ((int32_t)24), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_18);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_19 = L_17;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_20 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_20, ((int32_t)9), _stringLiteralD25B538BA3D8C0A58420325D80D61288FD6B3E43, 2, ((int32_t)27), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_20);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_21 = L_19;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_22 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_22, ((int32_t)10), _stringLiteralB5518A23AB74B3610F265E69DEF63F60C14B5A7F, 4, ((int32_t)17), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_22);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_23 = L_21;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_24 = (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_mB46D127BECA45ECBB1DA8742A950F53DA8E0DFD6(L_24, ((int32_t)11), _stringLiteralB05DF3F43A74F956240D2F08C2D6DA773210B627, 2, ((int32_t)18), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A *)L_24);
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_mD0F5CF1518A743F4781120B2AF495CAB6DDF8D87 (WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9 * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
			{
				goto IL_003a;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			goto IL_0042;
		}

IL_002a:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_7;
			// break;
			goto IL_004c;
		}

IL_0032:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_8;
			// break;
			goto IL_004c;
		}

IL_003a:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_9 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_9;
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_10 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m8EEE351188CC63BDC96B940BB10C7B4558047F31(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_004c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12 = V_2;
			bool L_13;
			L_13 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0058:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_14 = ___interactionMapping0;
			bool L_15 = V_3;
			NullCheck(L_14);
			MixedRealityInteractionMapping_set_BoolData_mDE003175F228BE85C14B982F2679BF1393217A7E(L_14, L_15, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17;
			L_17 = MixedRealityInteractionMapping_get_Changed_mD0B9F722A71A7074876A1831ABB8AD33258E048E(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00b5;
			}
		}

IL_0067:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			bool L_19;
			L_19 = MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0093;
			}
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
			RuntimeObject* L_20;
			L_20 = CoreServices_get_InputSystem_m94F0405D8AEA9D3C4757B177008599EEA008C432(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B14_0 = L_21;
			if (L_21)
			{
				G_B15_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_007a:
		{
			RuntimeObject* L_22;
			L_22 = BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23;
			L_23 = BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  L_25;
			L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline(L_24, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B15_0, L_22, L_23, L_25);
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_0093:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
			RuntimeObject* L_26;
			L_26 = CoreServices_get_InputSystem_m94F0405D8AEA9D3C4757B177008599EEA008C432(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B17_0 = L_27;
			if (L_27)
			{
				G_B18_0 = L_27;
				goto IL_009e;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_009e:
		{
			RuntimeObject* L_28;
			L_28 = BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29;
			L_29 = BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  L_31;
			L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline(L_30, /*hidden argument*/NULL);
			NullCheck(G_B18_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B18_0, L_28, L_29, L_31);
		}

IL_00b5:
		{
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m1CB77B79342BC7BA7E4EC37E5CB6DA9B9EDF0087 (WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9 * __this, MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			goto IL_0034;
		}

IL_0024:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_6;
			// break;
			goto IL_003e;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_7;
			// break;
			goto IL_003e;
		}

IL_0034:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_8 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_m19339311BF840FC0ADE75D370C202396602C4DFA(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_003e:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_10 = V_2;
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_12 = ___interactionMapping0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_Vector2Data_m2F279D1752199877EF248BE5BAA755434D6159E2(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15;
			L_15 = MixedRealityInteractionMapping_get_Changed_mD0B9F722A71A7074876A1831ABB8AD33258E048E(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_0059:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t1109C84985A103F8C15839D1AE681CA51512904F_il2cpp_TypeInfo_var);
			RuntimeObject* L_16;
			L_16 = CoreServices_get_InputSystem_m94F0405D8AEA9D3C4757B177008599EEA008C432(/*hidden argument*/NULL);
			RuntimeObject* L_17 = L_16;
			G_B11_0 = L_17;
			if (L_17)
			{
				G_B12_0 = L_17;
				goto IL_0064;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_0064:
		{
			RuntimeObject* L_18;
			L_18 = BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline(__this, /*hidden argument*/NULL);
			uint8_t L_19;
			L_19 = BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  L_21;
			L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline(L_20, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = MixedRealityInteractionMapping_get_Vector2Data_m7F89CB59E21A502592D7326B971CC4E616B1AF44_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B12_0, L_18, L_19, L_21, L_23);
		}

IL_0081:
		{
			// }
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_m0AF0C6FF7F92A7F02DA6AE2098A6EC63CCDB2738 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_27(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t98EC6E5E723578286921FC4976C0212667E36DD9_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_28(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_mAE566C8B419390E89B04331427607C161612BEED (XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_mF9940F04D5C9E43BB4058520B6EF8EDAC25E6AE0 (XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m4D1386F512DFF83FF907C67449D452809EC2D1F4 (XRSDKWindowsMixedRealityUtilitiesProvider_tC1A2311C9EFF53CB710BAA688CAC02C1C989F445 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_0 = ((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m247BAE9A0400E233D09027B70BDFA277C4C65EDE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mED2109F994F5BCFAFDE9572698D10809A70B599A_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m36776800F950EBDC99FEF477C2AFA95A09DDCCEB_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  MixedRealityInteractionMapping_get_MixedRealityInputAction_mF244698851A830170A43F7FBBA7DA949951FD7D5_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  MixedRealityInteractionMapping_get_PoseData_m06BB150A5DADF96B0E48D9E9651F3AE6A659903B_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m3B95158F5FC08C22871B6A2BA59D0D1D5B337CEF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m68D15E8E99AC323751FC150D164BF0F7103C7FEC_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t46E0C905382C82E74C813859FAD774CD65DF35AF_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m24AD71EAF2522F4683C0CC85BCF454CF31637174_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mE87D0FCC966F74B472C0F1E6E1068A7CB24E25D1_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m76DB83856BCCB235B0C4228B25AE132076A9681E_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m4152798BD5379DE4E29F20A524D27E6A0839F403_inline (BaseSpatialObserver_t5A2677CC19AC5522ED647F8FDC3989832B36CE6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; 
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mEE1B73034847E042DDB7F3206E02C5AFEDC6E37D_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* BaseController_get_Interactions_mCFC05F75AB7AA36CB0EBC9D29739365A8D0B346D_inline (BaseController_t6D77DDA0108492A71F282D52F51AE570ACF88EB8 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m7F89CB59E21A502592D7326B971CC4E616B1AF44_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_mCC9163F146E2FAAF9173975D6399830FF52BDAEC_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_6();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* L_2 = (BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)L_2, (int32_t)L_3);
		return (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
