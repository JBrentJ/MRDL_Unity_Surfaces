﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>
struct IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>
struct IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tF0B7D0F89A3DEAD0CAD688B84B9402AA38044579;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyCollection_tE6DC813C0FDBE614569782F3F50DCE22CADA0D79;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>[]
struct EntryU5BU5D_tC1337D88759E8618229B9D3BF7A7007A7DBCB001;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker[]
struct InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_tE93B799622515134BEF99CCBDA6F63DC6F536223;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t377C95C3E7A907B0FFEF5AAEB06EA942F8B73D03;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable
struct AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/CompareMarkers
struct CompareMarkers_t777FBB4AA9DB74041764E6F0FDFD771641E4F97C;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHand_tE93B799622515134BEF99CCBDA6F63DC6F536223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213;
IL2CPP_EXTERN_C String_t* _stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014;
IL2CPP_EXTERN_C String_t* _stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633;
IL2CPP_EXTERN_C String_t* _stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B1E2E886BD49F75BF2DF3B7F0C3DA28FDAC0C92;
IL2CPP_EXTERN_C String_t* _stringLiteral845601714FB132030B7585887918D078E9CE2267;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA42588B3FB7E81157C369B828DC5DD3D7806B872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m182EA829158099F0D14F539978A079B38C26603A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF08A29FD01C2FEE1DBFC6B01E70043A41DB39DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAnimationSerializationUtils_ReadHeader_m520BB147CA2C30A1BBF6A9082541A4AE94BB2F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBCD2D09C1F985EC3EFD3ECDE4570484C57166B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD78CE9DED108D82D7F3705ECEA3B1A57BB111A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD863D578D426C2AC75B2FA1502C99F991C743BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF6E9466325244A739536686035DC7779F279C119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m8288985354F92A0E61068E2878EF57A42D0F88EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mBF9D30CEDB790B5F8791C77D7C1BEE7D78AA4510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCDD36393B516070E6B688AC011531EDBF44E108B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC1337D88759E8618229B9D3BF7A7007A7DBCB001* ___entries_1;
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
	KeyCollection_tE6DC813C0FDBE614569782F3F50DCE22CADA0D79 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___entries_1)); }
	inline EntryU5BU5D_tC1337D88759E8618229B9D3BF7A7007A7DBCB001* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC1337D88759E8618229B9D3BF7A7007A7DBCB001** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC1337D88759E8618229B9D3BF7A7007A7DBCB001* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___keys_7)); }
	inline KeyCollection_tE6DC813C0FDBE614569782F3F50DCE22CADA0D79 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE6DC813C0FDBE614569782F3F50DCE22CADA0D79 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE6DC813C0FDBE614569782F3F50DCE22CADA0D79 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ___values_8)); }
	inline ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F, ____items_1)); }
	inline InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* get__items_1() const { return ____items_1; }
	inline InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F_StaticFields, ____emptyArray_5)); }
	inline InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputAnimationMarkerU5BU5D_t97CF2081CA492F7B2D6BBFB61D31D6C1B14978AF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D, ___dictionary_0)); }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
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


// System.IO.BinaryReader
struct  BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_decoder_2)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBytes_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_singleChar_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBuffer_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct  InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::duration
	float ___duration_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveLeft
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handTrackedCurveLeft_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveRight
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handTrackedCurveRight_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveLeft
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handPinchCurveLeft_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveRight
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___handPinchCurveRight_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesLeft
	Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___handJointCurvesLeft_6;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesRight
	Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___handJointCurvesRight_7;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::cameraCurves
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___cameraCurves_8;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker> Microsoft.MixedReality.Toolkit.Input.InputAnimation::markers
	List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___markers_9;

public:
	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_handTrackedCurveLeft_2() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handTrackedCurveLeft_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handTrackedCurveLeft_2() const { return ___handTrackedCurveLeft_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handTrackedCurveLeft_2() { return &___handTrackedCurveLeft_2; }
	inline void set_handTrackedCurveLeft_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handTrackedCurveLeft_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackedCurveLeft_2), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackedCurveRight_3() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handTrackedCurveRight_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handTrackedCurveRight_3() const { return ___handTrackedCurveRight_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handTrackedCurveRight_3() { return &___handTrackedCurveRight_3; }
	inline void set_handTrackedCurveRight_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handTrackedCurveRight_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackedCurveRight_3), (void*)value);
	}

	inline static int32_t get_offset_of_handPinchCurveLeft_4() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handPinchCurveLeft_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handPinchCurveLeft_4() const { return ___handPinchCurveLeft_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handPinchCurveLeft_4() { return &___handPinchCurveLeft_4; }
	inline void set_handPinchCurveLeft_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handPinchCurveLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPinchCurveLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_handPinchCurveRight_5() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handPinchCurveRight_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_handPinchCurveRight_5() const { return ___handPinchCurveRight_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_handPinchCurveRight_5() { return &___handPinchCurveRight_5; }
	inline void set_handPinchCurveRight_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___handPinchCurveRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPinchCurveRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_handJointCurvesLeft_6() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handJointCurvesLeft_6)); }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * get_handJointCurvesLeft_6() const { return ___handJointCurvesLeft_6; }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F ** get_address_of_handJointCurvesLeft_6() { return &___handJointCurvesLeft_6; }
	inline void set_handJointCurvesLeft_6(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * value)
	{
		___handJointCurvesLeft_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointCurvesLeft_6), (void*)value);
	}

	inline static int32_t get_offset_of_handJointCurvesRight_7() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___handJointCurvesRight_7)); }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * get_handJointCurvesRight_7() const { return ___handJointCurvesRight_7; }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F ** get_address_of_handJointCurvesRight_7() { return &___handJointCurvesRight_7; }
	inline void set_handJointCurvesRight_7(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * value)
	{
		___handJointCurvesRight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointCurvesRight_7), (void*)value);
	}

	inline static int32_t get_offset_of_cameraCurves_8() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___cameraCurves_8)); }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * get_cameraCurves_8() const { return ___cameraCurves_8; }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** get_address_of_cameraCurves_8() { return &___cameraCurves_8; }
	inline void set_cameraCurves_8(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * value)
	{
		___cameraCurves_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraCurves_8), (void*)value);
	}

	inline static int32_t get_offset_of_markers_9() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C, ___markers_9)); }
	inline List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * get_markers_9() const { return ___markers_9; }
	inline List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F ** get_address_of_markers_9() { return &___markers_9; }
	inline void set_markers_9(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * value)
	{
		___markers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markers_9), (void*)value);
	}
};

struct InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct  InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::time
	float ___time_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils
struct  InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887  : public RuntimeObject
{
public:

public:
};

struct InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable
struct  AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::animation
	InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * ___animation_0;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344, ___animation_0)); }
	inline InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * get_animation_0() const { return ___animation_0; }
	inline InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/CompareMarkers
struct  CompareMarkers_t777FBB4AA9DB74041764E6F0FDFD771641E4F97C  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct  PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::PositionZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationZ
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationZ_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::RotationW
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___RotationW_6;

public:
	inline static int32_t get_offset_of_PositionX_0() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___PositionX_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionX_0() const { return ___PositionX_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionX_0() { return &___PositionX_0; }
	inline void set_PositionX_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionX_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionX_0), (void*)value);
	}

	inline static int32_t get_offset_of_PositionY_1() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___PositionY_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionY_1() const { return ___PositionY_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionY_1() { return &___PositionY_1; }
	inline void set_PositionY_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionY_1), (void*)value);
	}

	inline static int32_t get_offset_of_PositionZ_2() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___PositionZ_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionZ_2() const { return ___PositionZ_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionZ_2() { return &___PositionZ_2; }
	inline void set_PositionZ_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionZ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionZ_2), (void*)value);
	}

	inline static int32_t get_offset_of_RotationX_3() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___RotationX_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationX_3() const { return ___RotationX_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationX_3() { return &___RotationX_3; }
	inline void set_RotationX_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationX_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationX_3), (void*)value);
	}

	inline static int32_t get_offset_of_RotationY_4() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___RotationY_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationY_4() const { return ___RotationY_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationY_4() { return &___RotationY_4; }
	inline void set_RotationY_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationY_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationY_4), (void*)value);
	}

	inline static int32_t get_offset_of_RotationZ_5() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___RotationZ_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationZ_5() const { return ___RotationZ_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationZ_5() { return &___RotationZ_5; }
	inline void set_RotationZ_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationZ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationZ_5), (void*)value);
	}

	inline static int32_t get_offset_of_RotationW_6() { return static_cast<int32_t>(offsetof(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0, ___RotationW_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_RotationW_6() const { return ___RotationW_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_RotationW_6() { return &___RotationW_6; }
	inline void set_RotationW_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___RotationW_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotationW_6), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE, ___list_0)); }
	inline List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * get_list_0() const { return ___list_0; }
	inline List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE, ___current_3)); }
	inline InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * get_current_3() const { return ___current_3; }
	inline InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>
struct  Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___dictionary_0)); }
	inline Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct  Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D, ___dictionary_0)); }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D, ___currentValue_3)); }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * get_currentValue_3() const { return ___currentValue_3; }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


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


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
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


// UnityEngine.WeightedMode
struct  WeightedMode_t2BB71D70C68B28318D2B43BBA96180BB4406FDA7 
{
public:
	// System.Int32 UnityEngine.WeightedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WeightedMode_t2BB71D70C68B28318D2B43BBA96180BB4406FDA7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2
struct  U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>2__current
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>4__this
	AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>7__wrap1
	Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  ___U3CU3E7__wrap1_3;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<curves>5__3
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___U3CcurvesU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A, ___U3CU3E2__current_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A, ___U3CU3E4__this_2)); }
	inline AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___currentValue_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcurvesU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A, ___U3CcurvesU3E5__3_4)); }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * get_U3CcurvesU3E5__3_4() const { return ___U3CcurvesU3E5__3_4; }
	inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** get_address_of_U3CcurvesU3E5__3_4() { return &___U3CcurvesU3E5__3_4; }
	inline void set_U3CcurvesU3E5__3_4(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * value)
	{
		___U3CcurvesU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurvesU3E5__3_4), (void*)value);
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


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
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

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct  InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559  : public BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStarted_15;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStopped_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::useBufferTimeLimit
	bool ___useBufferTimeLimit_19;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBufferTimeLimit
	float ___recordingBufferTimeLimit_20;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBuffer
	InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * ___recordingBuffer_21;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Input.InputRecordingService::unlimitedRecordingStartTime
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___unlimitedRecordingStartTime_22;

public:
	inline static int32_t get_offset_of_OnRecordingStarted_15() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___OnRecordingStarted_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStarted_15() const { return ___OnRecordingStarted_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStarted_15() { return &___OnRecordingStarted_15; }
	inline void set_OnRecordingStarted_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStarted_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnRecordingStopped_16() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___OnRecordingStopped_16)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStopped_16() const { return ___OnRecordingStopped_16; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStopped_16() { return &___OnRecordingStopped_16; }
	inline void set_OnRecordingStopped_16(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStopped_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStopped_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsEnabledU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___U3CIsEnabledU3Ek__BackingField_17)); }
	inline bool get_U3CIsEnabledU3Ek__BackingField_17() const { return ___U3CIsEnabledU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsEnabledU3Ek__BackingField_17() { return &___U3CIsEnabledU3Ek__BackingField_17; }
	inline void set_U3CIsEnabledU3Ek__BackingField_17(bool value)
	{
		___U3CIsEnabledU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___U3CIsRecordingU3Ek__BackingField_18)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_18() const { return ___U3CIsRecordingU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_18() { return &___U3CIsRecordingU3Ek__BackingField_18; }
	inline void set_U3CIsRecordingU3Ek__BackingField_18(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_useBufferTimeLimit_19() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___useBufferTimeLimit_19)); }
	inline bool get_useBufferTimeLimit_19() const { return ___useBufferTimeLimit_19; }
	inline bool* get_address_of_useBufferTimeLimit_19() { return &___useBufferTimeLimit_19; }
	inline void set_useBufferTimeLimit_19(bool value)
	{
		___useBufferTimeLimit_19 = value;
	}

	inline static int32_t get_offset_of_recordingBufferTimeLimit_20() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___recordingBufferTimeLimit_20)); }
	inline float get_recordingBufferTimeLimit_20() const { return ___recordingBufferTimeLimit_20; }
	inline float* get_address_of_recordingBufferTimeLimit_20() { return &___recordingBufferTimeLimit_20; }
	inline void set_recordingBufferTimeLimit_20(float value)
	{
		___recordingBufferTimeLimit_20 = value;
	}

	inline static int32_t get_offset_of_recordingBuffer_21() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___recordingBuffer_21)); }
	inline InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * get_recordingBuffer_21() const { return ___recordingBuffer_21; }
	inline InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C ** get_address_of_recordingBuffer_21() { return &___recordingBuffer_21; }
	inline void set_recordingBuffer_21(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * value)
	{
		___recordingBuffer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordingBuffer_21), (void*)value);
	}

	inline static int32_t get_offset_of_unlimitedRecordingStartTime_22() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559, ___unlimitedRecordingStartTime_22)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_unlimitedRecordingStartTime_22() const { return ___unlimitedRecordingStartTime_22; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_unlimitedRecordingStartTime_22() { return &___unlimitedRecordingStartTime_22; }
	inline void set_unlimitedRecordingStartTime_22(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___unlimitedRecordingStartTime_22 = value;
	}
};

struct InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingService::jointCount
	int32_t ___jointCount_14;

public:
	inline static int32_t get_offset_of_jointCount_14() { return static_cast<int32_t>(offsetof(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_StaticFields, ___jointCount_14)); }
	inline int32_t get_jointCount_14() const { return ___jointCount_14; }
	inline int32_t* get_address_of_jointCount_14() { return &___jointCount_14; }
	inline void set_jointCount_14(int32_t value)
	{
		___jointCount_14 = value;
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


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct  MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2  : public BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointPositionThreshold
	float ___jointPositionThreshold_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointRotationThreshold
	float ___jointRotationThreshold_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraPositionThreshold
	float ___cameraPositionThreshold_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraRotationThreshold
	float ___cameraRotationThreshold_8;

public:
	inline static int32_t get_offset_of_jointPositionThreshold_5() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2, ___jointPositionThreshold_5)); }
	inline float get_jointPositionThreshold_5() const { return ___jointPositionThreshold_5; }
	inline float* get_address_of_jointPositionThreshold_5() { return &___jointPositionThreshold_5; }
	inline void set_jointPositionThreshold_5(float value)
	{
		___jointPositionThreshold_5 = value;
	}

	inline static int32_t get_offset_of_jointRotationThreshold_6() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2, ___jointRotationThreshold_6)); }
	inline float get_jointRotationThreshold_6() const { return ___jointRotationThreshold_6; }
	inline float* get_address_of_jointRotationThreshold_6() { return &___jointRotationThreshold_6; }
	inline void set_jointRotationThreshold_6(float value)
	{
		___jointRotationThreshold_6 = value;
	}

	inline static int32_t get_offset_of_cameraPositionThreshold_7() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2, ___cameraPositionThreshold_7)); }
	inline float get_cameraPositionThreshold_7() const { return ___cameraPositionThreshold_7; }
	inline float* get_address_of_cameraPositionThreshold_7() { return &___cameraPositionThreshold_7; }
	inline void set_cameraPositionThreshold_7(float value)
	{
		___cameraPositionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_cameraRotationThreshold_8() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2, ___cameraRotationThreshold_8)); }
	inline float get_cameraRotationThreshold_8() const { return ___cameraRotationThreshold_8; }
	inline float* get_address_of_cameraRotationThreshold_8() { return &___cameraRotationThreshold_8; }
	inline void set_cameraRotationThreshold_8(float value)
	{
		___cameraRotationThreshold_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * m_Items[1];

public:
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m8C3C8F35C8738574E1BBAF5850C6504FE146314D_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A * Dictionary_2_get_Values_mCE8DFA32761CC8C69390885B07388FB6B221F055_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2  ValueCollection_GetEnumerator_m2856AA67C8638FAC317916DD7BB02DE1F4DF2FEA_gshared (ValueCollection_t5373BD128F5AE1EA1689DBC1D1B58C837368E16A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m591CCA2E5BC073733DB11EDEBC6523FF1188D830_gshared (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD80EB4F34363556C0DB46455E0B72B89018A4F3C_gshared (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method);

// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Count()
inline int32_t List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_inline (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::.ctor()
inline void Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::.ctor()
inline void List_1__ctor_mF6E9466325244A739536686035DC7779F279C119 (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * __this, int32_t ___key0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *, int32_t, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Add(!0,!1)
inline void Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9 (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * __this, int32_t ___key0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *, int32_t, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,System.Boolean,System.Boolean,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m59117702A06666D402E54FE0D64EFE517B3AFF04 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, bool ___isTracked1, bool ___isPinching2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve3, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_mC6B17F9BB57683EC4B02DD3A0670BC5C486C7753 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, int32_t ___joint1, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___jointPose2, Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___jointCurves3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKeyFiltered(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKeyFiltered_m4129E3678B94C7CB738151949E45A27FED54409B (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKeyFiltered(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKeyFiltered_mF13895B07CD470FCBA47D825E6275DAB5A441C74 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves0, float ___time1, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___pose2, float ___positionThreshold3, float ___rotationThreshold4, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPositionKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddPositionKeyFiltered_m7F17A59D53B3D66C22DD7BA84EB3040E01839C4C (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, float ___time3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position4, float ___threshold5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddRotationKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddRotationKeyFiltered_m978E36AE8F681230B9B6750D783D492E466D83ED (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveW3, float ___time4, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation5, float ___threshold6, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindKeyframeInterval(UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float* ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, float ___inWeight4, float ___outWeight5, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_weightedMode(UnityEngine.WeightedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::MoveKey(System.Int32,UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_MoveKey_mD7DE80B666075BD1F86F7A1AE34F3FF69DFD883C (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___index0, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  ___key1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_AnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_get_AnimationCurves_m2D5EE3D7C1400A02E4A1DD7C68BD5398E9D96D71 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_m62B5DA90F8854C48249720D6BEC129B6E9ECA6A7 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::.ctor(Microsoft.MixedReality.Toolkit.Input.InputAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveEnumerable__ctor_mCAC8BF93E0EF48DF943E12C03A4E4AFCE8556089 (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * __this, InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * ___animation0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindMarkerInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_FindMarkerInterval_m13623A48AC45FDBBC8392185D7FB8F0ED16858A2 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Insert(System.Int32,!0)
inline void List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1 (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, int32_t ___index0, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, int32_t, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266 (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Item(System.Int32)
inline InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_inline (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mB8E3973F701CB1139ADA352248B4DA8E26CB4814 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluateHandJoint_mC470A5D36D17CC068E3A865B657C878DD3879318 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, int32_t ___joint1, Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___jointCurves2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluatePose(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluatePose_m43B4DDE5EBC47DB5568DF4AFB359C0266A468BA0 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves0, float ___time1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m247BAE9A0400E233D09027B70BDFA277C4C65EDE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Normalize_m080BED4941351BFF772A60536F934A4740FC6818 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_m6C670C20D15FB59BA12E49C747B83DB7B837F2B6 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_m41ECEF77E099921EFF77EC1358A96D42C1DCAD93 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m252E3E7BC5888BF6EC3603DB124CC076A0FD309B (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___markers1, float ___startTime2, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m520BB147CA2C30A1BBF6A9082541A4AE94BB2F60 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_mC79E4A67E7F0967006B2932CBD48BB9E9F4E31AB (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_mF28ACDBC01CA464C07300D4214D0646FA1DE122B (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___markers1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m254A3F3F862A94B05E379DAFBFB59F1FF259B13C (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_inTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_inTangent_m90DFA97754632F48D2414D28EB194710DE08626B (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_outTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_outTangent_m449E8B125AC282B53E0935606572EBDCB44B5020 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_inWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_inWeight_mD91FDE21FBBA5D3CA6FDD89CF4D313958A5B2021 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_outWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_outWeight_mD0069E01A70E73CD5A1CABC9C59F5EC3047BADD3 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// UnityEngine.WeightedMode UnityEngine.Keyframe::get_weightedMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Keyframe_get_weightedMode_mBEEC8DB2BD2C21B2335EA3D68AB100F85D2E4E07 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inWeight_m844B007DD3D01958CD0EAE45B046EBB1032949B4 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::GetEnumerator()
inline Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE  List_1_GetEnumerator_mD863D578D426C2AC75B2FA1502C99F991C743BCA (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE  (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Current()
inline InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * Enumerator_get_Current_mF08A29FD01C2FEE1DBFC6B01E70043A41DB39DD6_inline (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE * __this, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * (*) (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::MoveNext()
inline bool Enumerator_MoveNext_m182EA829158099F0D14F539978A079B38C26603A (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Dispose()
inline void Enumerator_Dispose_mA42588B3FB7E81157C369B828DC5DD3D7806B872 (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Clear()
inline void List_1_Clear_mD78CE9DED108D82D7F3705ECEA3B1A57BB111A18 (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m8288985354F92A0E61068E2878EF57A42D0F88EE (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_mDCEBA1E49C1942EB1421C1BC1B3883B0F1972A98 (InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Add(!0)
inline void List_1_Add_mBCD2D09C1F985EC3EFD3ECDE4570484C57166B9E (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * __this, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService__ctor_m83E842952C1F53C887055821EAA29F07880258B9 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_inline (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 *, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m8C3C8F35C8738574E1BBAF5850C6504FE146314D_gshared_inline)(__this, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m9C66DEA438D17C9B0B54BF71BBE8E0457F65BF3B (BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mAF86FF8F9AFCE3626C56262BECB6F6102B96C4B3 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mF26EAD69D80151F2908E5A1858E50E97E039E971_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsEnabled_m32C7C305AC9390E019994B5C1D494E165349C251_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_mAD0C9FE06A1FD4032837FA560CED6D533DABF4E1 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m0E7FB1A1B6F39854EF03D4756BFFF1B5F5106F59 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m7B2DE8550FD23A877B5E874E64671971986B0B28_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_mEA51DA1C8C6E8DFE5F71476373DAF5159F1FA467_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mEA13F38AA29162563A3A79011DD020D8F3222C4C (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Clear_m8385F5580BEE309634D08C6D461D14A8A5EDC660 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * InputRecordingService_get_InputRecordingProfile_m7C39EC60D31843FAEDF642EF43BCDAE1638C6710 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_RecordInputHandData_m66A0AF9C2F8A8DF94835357FE6BBE89A1B805A3C (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_mE580E45F9F300268108C46AA59FFFAE9D248B8C4 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m2E70752B82E6FDDA93EEB36F856A3261788A65AD (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mACD9A52883030175D5E4C54B503A57F44464EA94_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mC01F77E6DFEF7373D2FBF7886BAD861BCDAE1B3E_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddCameraPoseKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddCameraPoseKey_mE84C10FA4C569083DAD54F3BC756505E3CBB8347 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___cameraPose1, float ___positionThreshold2, float ___rotationThreshold3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointUtils::FindHand(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandJointUtils_FindHand_mE744C9C8014300806C9D79986F1CAEBAC8C9AC1C (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_mF588112580B47AFDF78596FC88E8CDE58EA0F21F (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, bool ___isTracked2, bool ___isPinching3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m646DD76D18712003021018D8CA456D58C02DC653_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m08BDCDD4C34D437FCED0FAF0F38499ABBDCA8E02_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_m460DE7691D1C89EFBB23DF60AEB6C7A3C9CB425A (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___jointPose3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_mEB1AB258BA79403D68F321C5565F41A0FD46FB08 (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_mE9FEB2B95C67766AE1EC1CF64C0666CAA2B64031 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m581F0C42CEC8FCADDBB62A67F38F912ECE6A6174 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, float ___startTime1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_m660BE59B7D42D62C7C02A36297496386975F37B8 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m3626F4CD7ED22E9F8C686C958F48A61B14BE348E (BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m8D72036CBFD0BCCB673917FBBC6859359EBC0121 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_GetEnumerator_mC5290E8D93C8E91281D3F7A854EA2CE71A2C8727 (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m15071590309BDA38BC4E086F928BE5CB7B401826 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1228F8CB33CCE966180B5D4F1C06DCB5F378EF1E (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Values()
inline ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * (*) (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *, const RuntimeMethod*))Dictionary_2_get_Values_mCE8DFA32761CC8C69390885B07388FB6B221F055_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::GetEnumerator()
inline Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9 (ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  (*) (ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D *, const RuntimeMethod*))ValueCollection_GetEnumerator_m2856AA67C8638FAC317916DD7BB02DE1F4DF2FEA_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Current()
inline PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_inline (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * __this, const RuntimeMethod* method)
{
	return ((  PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * (*) (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *, const RuntimeMethod*))Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::MoveNext()
inline bool Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32 (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *, const RuntimeMethod*))Enumerator_MoveNext_m591CCA2E5BC073733DB11EDEBC6523FF1188D830_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m97509470ACFA7F690F0D888AA70D835401EB2475 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Dispose()
inline void Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563 (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *, const RuntimeMethod*))Enumerator_Dispose_mD80EB4F34363556C0DB46455E0B72B89018A4F3C_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m23B56B716466DB8582FCE8AC02EF094AA1C6C2F5 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, float* ___angle2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAnimation_get_Duration_mD30EBE0DFB5F489BD1A9054395F4D7043C67B456 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	{
		// public float Duration => duration;
		float L_0 = __this->get_duration_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_CameraCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * InputAnimation_get_CameraCurves_m3F0B0187F30E5A9E0C4512C641FD9B95576EB27F (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	{
		// public PoseCurves CameraCurves => cameraCurves;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = __this->get_cameraCurves_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_markerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_get_markerCount_m14BE7782C952ED2E114D9A5F8902260F5290B9D0 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int markerCount => markers.Count;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = __this->get_markers_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_inline(L_0, /*hidden argument*/List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__ctor_mAD0C9FE06A1FD4032837FA560CED6D533DABF4E1 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF6E9466325244A739536686035DC7779F279C119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputAnimation()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// handTrackedCurveLeft = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_handTrackedCurveLeft_2(L_0);
		// handTrackedCurveRight = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_1, /*hidden argument*/NULL);
		__this->set_handTrackedCurveRight_3(L_1);
		// handPinchCurveLeft = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_2, /*hidden argument*/NULL);
		__this->set_handPinchCurveLeft_4(L_2);
		// handPinchCurveRight = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_3, /*hidden argument*/NULL);
		__this->set_handPinchCurveRight_5(L_3);
		// handJointCurvesLeft = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_4 = (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *)il2cpp_codegen_object_new(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F(L_4, /*hidden argument*/Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F_RuntimeMethod_var);
		__this->set_handJointCurvesLeft_6(L_4);
		// handJointCurvesRight = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_5 = (Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F *)il2cpp_codegen_object_new(Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F(L_5, /*hidden argument*/Dictionary_2__ctor_m4C6722839D52415DFA4ECE2E3C7FB72646A7E18F_RuntimeMethod_var);
		__this->set_handJointCurvesRight_7(L_5);
		// cameraCurves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_6 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_6, /*hidden argument*/NULL);
		__this->set_cameraCurves_8(L_6);
		// markers = new List<InputAnimationMarker>();
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_7 = (List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F *)il2cpp_codegen_object_new(List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F_il2cpp_TypeInfo_var);
		List_1__ctor_mF6E9466325244A739536686035DC7779F279C119(L_7, /*hidden argument*/List_1__ctor_mF6E9466325244A739536686035DC7779F279C119_RuntimeMethod_var);
		__this->set_markers_9(L_7);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::TryGetHandJointCurves(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAnimation_TryGetHandJointCurves_m125CE9715FB7E7F93E586BB0AB4FB3B47279291A (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, uint8_t ___handedness0, int32_t ___joint1, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** ___curves2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		// return handJointCurvesLeft.TryGetValue(joint, out curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_1 = __this->get_handJointCurvesLeft_6();
		int32_t L_2 = ___joint1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** L_3 = ___curves2;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_1, L_2, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		return L_4;
	}

IL_0012:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_5 = ___handedness0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		// return handJointCurvesRight.TryGetValue(joint, out curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_6 = __this->get_handJointCurvesRight_7();
		int32_t L_7 = ___joint1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** L_8 = ___curves2;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_6, L_7, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		return L_9;
	}

IL_0024:
	{
		// curves = null;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 ** L_10 = ___curves2;
		*((RuntimeObject **)L_10) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::CreateHandJointCurves(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * InputAnimation_CreateHandJointCurves_m564AFE91D2A579370EA6D804F7ADF8EE46BDB637 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, uint8_t ___handedness0, int32_t ___joint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_0 = NULL;
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_1 = NULL;
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// if (!handJointCurvesLeft.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_1 = __this->get_handJointCurvesLeft_6();
		int32_t L_2 = ___joint1;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_1, L_2, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_4 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// handJointCurvesLeft.Add(joint, curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_5 = __this->get_handJointCurvesLeft_6();
		int32_t L_6 = ___joint1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
	}

IL_0027:
	{
		// return curves;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_8 = V_0;
		return L_8;
	}

IL_0029:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_9 = ___handedness0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		// if (!handJointCurvesRight.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_10 = __this->get_handJointCurvesRight_7();
		int32_t L_11 = ___joint1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_10, L_11, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_13 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_13, /*hidden argument*/NULL);
		V_1 = L_13;
		// handJointCurvesRight.Add(joint, curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_14 = __this->get_handJointCurvesRight_7();
		int32_t L_15 = ___joint1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_16 = V_1;
		NullCheck(L_14);
		Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
	}

IL_0050:
	{
		// return curves;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_17 = V_1;
		return L_17;
	}

IL_0052:
	{
		// return null;
		return (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_mF588112580B47AFDF78596FC88E8CDE58EA0F21F (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, bool ___isTracked2, bool ___isPinching3, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// AddHandStateKey(time, isTracked, isPinching, handTrackedCurveLeft, handPinchCurveLeft);
		float L_1 = ___time0;
		bool L_2 = ___isTracked2;
		bool L_3 = ___isPinching3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_handTrackedCurveLeft_2();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_handPinchCurveLeft_4();
		InputAnimation_AddHandStateKey_m59117702A06666D402E54FE0D64EFE517B3AFF04(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_6 = ___handedness1;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		// AddHandStateKey(time, isTracked, isPinching, handTrackedCurveRight, handPinchCurveRight);
		float L_7 = ___time0;
		bool L_8 = ___isTracked2;
		bool L_9 = ___isPinching3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_handTrackedCurveRight_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_handPinchCurveRight_5();
		InputAnimation_AddHandStateKey_m59117702A06666D402E54FE0D64EFE517B3AFF04(__this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_m460DE7691D1C89EFBB23DF60AEB6C7A3C9CB425A (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___jointPose3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// AddHandJointKey(time, joint, jointPose, handJointCurvesLeft, positionThreshold, rotationThreshold);
		float L_1 = ___time0;
		int32_t L_2 = ___joint2;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_3 = ___jointPose3;
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_4 = __this->get_handJointCurvesLeft_6();
		float L_5 = ___positionThreshold4;
		float L_6 = ___rotationThreshold5;
		InputAnimation_AddHandJointKey_mC6B17F9BB57683EC4B02DD3A0670BC5C486C7753(__this, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_7 = ___handedness1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// AddHandJointKey(time, joint, jointPose, handJointCurvesRight, positionThreshold, rotationThreshold);
		float L_8 = ___time0;
		int32_t L_9 = ___joint2;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_10 = ___jointPose3;
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_11 = __this->get_handJointCurvesRight_7();
		float L_12 = ___positionThreshold4;
		float L_13 = ___rotationThreshold5;
		InputAnimation_AddHandJointKey_mC6B17F9BB57683EC4B02DD3A0670BC5C486C7753(__this, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,System.Boolean,System.Boolean,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m59117702A06666D402E54FE0D64EFE517B3AFF04 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, bool ___isTracked1, bool ___isPinching2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve3, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddBoolKeyFiltered(trackedCurve, time, isTracked);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___trackedCurve3;
		float L_1 = ___time0;
		bool L_2 = ___isTracked1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InputAnimation_AddBoolKeyFiltered_m4129E3678B94C7CB738151949E45A27FED54409B(L_0, L_1, L_2, /*hidden argument*/NULL);
		// AddBoolKeyFiltered(pinchCurve, time, isPinching);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___pinchCurve4;
		float L_5 = ___time0;
		bool L_6 = ___isPinching2;
		int32_t L_7;
		L_7 = InputAnimation_AddBoolKeyFiltered_m4129E3678B94C7CB738151949E45A27FED54409B(L_4, L_5, L_6, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_8 = __this->get_duration_1();
		float L_9 = ___time0;
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_8, L_9, /*hidden argument*/NULL);
		__this->set_duration_1(L_10);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_mC6B17F9BB57683EC4B02DD3A0670BC5C486C7753 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, int32_t ___joint1, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___jointPose2, Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___jointCurves3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_0 = NULL;
	{
		// if (!jointCurves.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_0 = ___jointCurves3;
		int32_t L_1 = ___joint1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_0, L_1, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_3 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		// jointCurves.Add(joint, curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_4 = ___jointCurves3;
		int32_t L_5 = ___joint1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_6 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
	}

IL_001b:
	{
		// AddPoseKeyFiltered(curves, time, jointPose, positionThreshold, rotationThreshold);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_7 = V_0;
		float L_8 = ___time0;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_9 = ___jointPose2;
		float L_10 = ___positionThreshold4;
		float L_11 = ___rotationThreshold5;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_AddPoseKeyFiltered_mF13895B07CD470FCBA47D825E6275DAB5A441C74(L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_12 = __this->get_duration_1();
		float L_13 = ___time0;
		float L_14;
		L_14 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_12, L_13, /*hidden argument*/NULL);
		__this->set_duration_1(L_14);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddCameraPoseKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddCameraPoseKey_mE84C10FA4C569083DAD54F3BC756505E3CBB8347 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___cameraPose1, float ___positionThreshold2, float ___rotationThreshold3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddPoseKeyFiltered(cameraCurves, time, cameraPose, positionThreshold, rotationThreshold);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = __this->get_cameraCurves_8();
		float L_1 = ___time0;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_2 = ___cameraPose1;
		float L_3 = ___positionThreshold2;
		float L_4 = ___rotationThreshold3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_AddPoseKeyFiltered_mF13895B07CD470FCBA47D825E6275DAB5A441C74(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_5 = __this->get_duration_1();
		float L_6 = ___time0;
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_5, L_6, /*hidden argument*/NULL);
		__this->set_duration_1(L_7);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKey(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKey_mB1D4CDE8F38C49999D193A913F3AE7765AFD58F6 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves0, float ___time1, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFloatKey(curves.PositionX, time, pose.Position.x);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = L_0->get_PositionX_0();
		float L_2 = ___time1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_1, L_2, L_4, /*hidden argument*/NULL);
		// AddFloatKey(curves.PositionY, time, pose.Position.y);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_6 = ___curves0;
		NullCheck(L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = L_6->get_PositionY_1();
		float L_8 = ___time1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		int32_t L_11;
		L_11 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_7, L_8, L_10, /*hidden argument*/NULL);
		// AddFloatKey(curves.PositionZ, time, pose.Position.z);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_12 = ___curves0;
		NullCheck(L_12);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_PositionZ_2();
		float L_14 = ___time1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_16 = L_15.get_z_4();
		int32_t L_17;
		L_17 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_13, L_14, L_16, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationX, time, pose.Rotation.x);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_18 = ___curves0;
		NullCheck(L_18);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = L_18->get_RotationX_3();
		float L_20 = ___time1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_22 = L_21.get_x_0();
		int32_t L_23;
		L_23 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_19, L_20, L_22, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationY, time, pose.Rotation.y);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_24 = ___curves0;
		NullCheck(L_24);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = L_24->get_RotationY_4();
		float L_26 = ___time1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		int32_t L_29;
		L_29 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_25, L_26, L_28, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationZ, time, pose.Rotation.z);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_30 = ___curves0;
		NullCheck(L_30);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = L_30->get_RotationZ_5();
		float L_32 = ___time1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_34 = L_33.get_z_2();
		int32_t L_35;
		L_35 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_31, L_32, L_34, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationW, time, pose.Rotation.w);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_36 = ___curves0;
		NullCheck(L_36);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_37 = L_36->get_RotationW_6();
		float L_38 = ___time1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_40 = L_39.get_w_3();
		int32_t L_41;
		L_41 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_37, L_38, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKeyFiltered(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKeyFiltered_mF13895B07CD470FCBA47D825E6275DAB5A441C74 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves0, float ___time1, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  ___pose2, float ___positionThreshold3, float ___rotationThreshold4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddPositionKeyFiltered(curves.PositionX, curves.PositionY, curves.PositionZ, time, pose.Position, positionThreshold);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = L_0->get_PositionX_0();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_2 = ___curves0;
		NullCheck(L_2);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = L_2->get_PositionY_1();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_4 = ___curves0;
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_PositionZ_2();
		float L_6 = ___time1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_8 = ___positionThreshold3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_AddPositionKeyFiltered_m7F17A59D53B3D66C22DD7BA84EB3040E01839C4C(L_1, L_3, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// AddRotationKeyFiltered(curves.RotationX, curves.RotationY, curves.RotationZ, curves.RotationW, time, pose.Rotation, rotationThreshold);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_9 = ___curves0;
		NullCheck(L_9);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = L_9->get_RotationX_3();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_11 = ___curves0;
		NullCheck(L_11);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = L_11->get_RotationY_4();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_13 = ___curves0;
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_RotationZ_5();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_15 = ___curves0;
		NullCheck(L_15);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = L_15->get_RotationW_6();
		float L_17 = ___time1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&___pose2), /*hidden argument*/NULL);
		float L_19 = ___rotationThreshold4;
		InputAnimation_AddRotationKeyFiltered_m978E36AE8F681230B9B6750D783D492E466D83ED(L_10, L_12, L_14, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPositionKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddPositionKeyFiltered_m7F17A59D53B3D66C22DD7BA84EB3040E01839C4C (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, float ___time3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position4, float ___threshold5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___threshold5;
		float L_1 = ___threshold5;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// int iX = FindKeyframeInterval(curveX, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curveX0;
		float L_3 = ___time3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int iY = FindKeyframeInterval(curveY, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___curveY1;
		float L_6 = ___time3;
		int32_t L_7;
		L_7 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int iZ = FindKeyframeInterval(curveZ, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = ___curveZ2;
		float L_9 = ___time3;
		int32_t L_10;
		L_10 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (iX > 0 && iY > 0 && iZ > 0)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		// Vector3 v0 = new Vector3(curveX.keys[iX - 1].value, curveY.keys[iY - 1].value, curveZ.keys[iZ - 1].value);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = ___curveX0;
		NullCheck(L_14);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_15;
		L_15 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17;
		L_17 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = ___curveY1;
		NullCheck(L_18);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_19;
		L_19 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		float L_21;
		L_21 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = ___curveZ2;
		NullCheck(L_22);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_23;
		L_23 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_23);
		float L_25;
		L_25 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))))), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), L_17, L_21, L_25, /*hidden argument*/NULL);
		// Vector3 v1 = new Vector3(curveX.keys[iX].value, curveY.keys[iY].value, curveZ.keys[iZ].value);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = ___curveX0;
		NullCheck(L_26);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_27;
		L_27 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		float L_29;
		L_29 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = ___curveY1;
		NullCheck(L_30);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_31;
		L_31 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		float L_33;
		L_33 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = ___curveZ2;
		NullCheck(L_34);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_35;
		L_35 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		float L_37;
		L_37 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), L_29, L_33, L_37, /*hidden argument*/NULL);
		// if ((v1 - v0).sqrMagnitude <= sqrThreshold && (position - v1).sqrMagnitude <= sqrThreshold)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41;
		L_41 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		float L_42 = V_0;
		if ((!(((float)L_41) <= ((float)L_42))))
		{
			goto IL_00ec;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___position4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_43, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		float L_46;
		L_46 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		float L_47 = V_0;
		if ((!(((float)L_46) <= ((float)L_47))))
		{
			goto IL_00ec;
		}
	}
	{
		// curveX.RemoveKey(iX);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_48 = ___curveX0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_48, L_49, /*hidden argument*/NULL);
		// curveY.RemoveKey(iY);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_50 = ___curveY1;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_50, L_51, /*hidden argument*/NULL);
		// curveZ.RemoveKey(iZ);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_52 = ___curveZ2;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_52, L_53, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// AddFloatKey(curveX, time, position.x);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_54 = ___curveX0;
		float L_55 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = ___position4;
		float L_57 = L_56.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_58;
		L_58 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_54, L_55, L_57, /*hidden argument*/NULL);
		// AddFloatKey(curveY, time, position.y);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_59 = ___curveY1;
		float L_60 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = ___position4;
		float L_62 = L_61.get_y_3();
		int32_t L_63;
		L_63 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_59, L_60, L_62, /*hidden argument*/NULL);
		// AddFloatKey(curveZ, time, position.z);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = ___curveZ2;
		float L_65 = ___time3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = ___position4;
		float L_67 = L_66.get_z_4();
		int32_t L_68;
		L_68 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_64, L_65, L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddRotationKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddRotationKeyFiltered_m978E36AE8F681230B9B6750D783D492E466D83ED (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveX0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveY1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveZ2, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curveW3, float ___time4, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation5, float ___threshold6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___threshold6;
		float L_1 = ___threshold6;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// int iX = FindKeyframeInterval(curveX, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curveX0;
		float L_3 = ___time4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int iY = FindKeyframeInterval(curveY, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___curveY1;
		float L_6 = ___time4;
		int32_t L_7;
		L_7 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int iZ = FindKeyframeInterval(curveZ, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = ___curveZ2;
		float L_9 = ___time4;
		int32_t L_10;
		L_10 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// int iW = FindKeyframeInterval(curveW, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = ___curveW3;
		float L_12 = ___time4;
		int32_t L_13;
		L_13 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// if (iX > 0 && iY > 0 && iZ > 0 && iW > 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		// Quaternion q0 = new Quaternion(curveX.keys[iX - 1].value, curveY.keys[iY - 1].value, curveZ.keys[iZ - 1].value, curveW.keys[iW - 1].value);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = ___curveX0;
		NullCheck(L_18);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_19;
		L_19 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		float L_21;
		L_21 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = ___curveY1;
		NullCheck(L_22);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_23;
		L_23 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		float L_25;
		L_25 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = ___curveZ2;
		NullCheck(L_26);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_27;
		L_27 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		float L_29;
		L_29 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = ___curveW3;
		NullCheck(L_30);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_31;
		L_31 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		NullCheck(L_31);
		float L_33;
		L_33 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))))), /*hidden argument*/NULL);
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), L_21, L_25, L_29, L_33, /*hidden argument*/NULL);
		// Quaternion q1 = new Quaternion(curveX.keys[iX].value, curveY.keys[iY].value, curveZ.keys[iZ].value, curveW.keys[iW].value);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = ___curveX0;
		NullCheck(L_34);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_35;
		L_35 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		NullCheck(L_35);
		float L_37;
		L_37 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = ___curveY1;
		NullCheck(L_38);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_39;
		L_39 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		float L_41;
		L_41 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_42 = ___curveZ2;
		NullCheck(L_42);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_43;
		L_43 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_3;
		NullCheck(L_43);
		float L_45;
		L_45 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_46 = ___curveW3;
		NullCheck(L_46);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_47;
		L_47 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_4;
		NullCheck(L_47);
		float L_49;
		L_49 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), /*hidden argument*/NULL);
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), L_37, L_41, L_45, L_49, /*hidden argument*/NULL);
		// (q0 * Quaternion.Inverse(q1)).ToAngleAxis(out float angle0, out Vector3 axis0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52;
		L_52 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_51, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_50, L_52, /*hidden argument*/NULL);
		V_11 = L_53;
		Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), (float*)(&V_7), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		// (rotation * Quaternion.Inverse(q0)).ToAngleAxis(out float angle1, out Vector3 axis1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = ___rotation5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_55, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_57;
		L_57 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_54, L_56, /*hidden argument*/NULL);
		V_11 = L_57;
		Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), (float*)(&V_9), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		// if (angle0 <= sqrThreshold && angle1 <= sqrThreshold)
		float L_58 = V_7;
		float L_59 = V_0;
		if ((!(((float)L_58) <= ((float)L_59))))
		{
			goto IL_0145;
		}
	}
	{
		float L_60 = V_9;
		float L_61 = V_0;
		if ((!(((float)L_60) <= ((float)L_61))))
		{
			goto IL_0145;
		}
	}
	{
		// curveX.RemoveKey(iX);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_62 = ___curveX0;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_62, L_63, /*hidden argument*/NULL);
		// curveY.RemoveKey(iY);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_64 = ___curveY1;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_64, L_65, /*hidden argument*/NULL);
		// curveZ.RemoveKey(iZ);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_66 = ___curveZ2;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_66, L_67, /*hidden argument*/NULL);
		// curveW.RemoveKey(iW);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_68 = ___curveW3;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		AnimationCurve_RemoveKey_mF6C57370DBF709AA65669849D0E2948E4209F50B(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0145:
	{
		// AddFloatKey(curveX, time, rotation.x);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_70 = ___curveX0;
		float L_71 = ___time4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_72 = ___rotation5;
		float L_73 = L_72.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_74;
		L_74 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_70, L_71, L_73, /*hidden argument*/NULL);
		// AddFloatKey(curveY, time, rotation.y);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_75 = ___curveY1;
		float L_76 = ___time4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77 = ___rotation5;
		float L_78 = L_77.get_y_1();
		int32_t L_79;
		L_79 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_75, L_76, L_78, /*hidden argument*/NULL);
		// AddFloatKey(curveZ, time, rotation.z);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = ___curveZ2;
		float L_81 = ___time4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82 = ___rotation5;
		float L_83 = L_82.get_z_2();
		int32_t L_84;
		L_84 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_80, L_81, L_83, /*hidden argument*/NULL);
		// AddFloatKey(curveW, time, rotation.w);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_85 = ___curveW3;
		float L_86 = ___time4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87 = ___rotation5;
		float L_88 = L_87.get_w_3();
		int32_t L_89;
		L_89 = InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A(L_85, L_86, L_88, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_AddFloatKey_m7D762BA1741BEF19E9644315E8723F8BF865F33A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method)
{
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var keyframe = new Keyframe(time, value, 0.0f, 0.0f, 0.0f, 0.0f);
		float L_0 = ___time1;
		float L_1 = ___value2;
		Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_0), L_0, L_1, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_0), 3, /*hidden argument*/NULL);
		// return curve.AddKey(keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curve0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKey_m28F740B859BA1D59BAF1B857CD7CAA91C17FC79D (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___value2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, boolOutWeight);
		float L_1 = ___time1;
		float L_2 = V_0;
		Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), 3, /*hidden argument*/NULL);
		// return curve.AddKey(keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKeyFiltered(UnityEngine.AnimationCurve,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKeyFiltered_m4129E3678B94C7CB738151949E45A27FED54409B (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___value2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, boolOutWeight);
		float L_1 = ___time1;
		float L_2 = V_0;
		Keyframe__ctor_m4403ADF9353A22925623AA2835E79AB380441107((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), 3, /*hidden argument*/NULL);
		// int insertAfter = FindKeyframeInterval(curve, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve0;
		float L_4 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (insertAfter >= 0 && curve.keys[insertAfter].value == fvalue)
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = ___curve0;
		NullCheck(L_7);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8;
		L_8 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		float L_10;
		L_10 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		float L_11 = V_0;
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0057;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0057:
	{
		// int insertBefore = insertAfter + 1;
		int32_t L_12 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		// if (insertBefore < curve.keys.Length && curve.keys[insertBefore].value == fvalue)
		int32_t L_13 = V_3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = ___curve0;
		NullCheck(L_14);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_15;
		L_15 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0083;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = ___curve0;
		NullCheck(L_16);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_17;
		L_17 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_3;
		NullCheck(L_17);
		float L_19;
		L_19 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), /*hidden argument*/NULL);
		float L_20 = V_0;
		if ((!(((float)L_19) == ((float)L_20))))
		{
			goto IL_0083;
		}
	}
	{
		// return curve.MoveKey(insertBefore, keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = ___curve0;
		int32_t L_22 = V_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_23 = V_1;
		NullCheck(L_21);
		int32_t L_24;
		L_24 = AnimationCurve_MoveKey_mD7DE80B666075BD1F86F7A1AE34F3FF69DFD883C(L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0083:
	{
		// return curve.AddKey(keyframe);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = ___curve0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_m660BE59B7D42D62C7C02A36297496386975F37B8 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0;
		L_0 = InputAnimation_get_AnimationCurves_m2D5EE3D7C1400A02E4A1DD7C68BD5398E9D96D71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000e:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
			L_3 = InterfaceFuncInvoker0< AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// CutoffBeforeTime(curve, time);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = V_1;
			float L_5 = ___time0;
			InputAnimation_CutoffBeforeTime_m62B5DA90F8854C48249720D6BEC129B6E9ECA6A7(__this, L_4, L_5, /*hidden argument*/NULL);
		}

IL_001d:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_m62B5DA90F8854C48249720D6BEC129B6E9ECA6A7 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int idx0 = FindKeyframeInterval(curve, time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve0;
		float L_1 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (idx0 > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// Keyframe[] newKeys = new Keyframe[curve.keys.Length - idx0];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve0;
		NullCheck(L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5;
		L_5 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_7 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)L_6)));
		V_1 = L_7;
		// for (int i = 0; i < newKeys.Length; ++i)
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		// newKeys[i] = curve.keys[idx0 + i];
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = V_1;
		int32_t L_9 = V_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = ___curve0;
		NullCheck(L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11;
		L_11 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_15);
		// for (int i = 0; i < newKeys.Length; ++i)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < newKeys.Length; ++i)
		int32_t L_17 = V_2;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// curve.keys = newKeys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = ___curve0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20 = V_1;
		NullCheck(L_19);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_Clear_m8385F5580BEE309634D08C6D461D14A8A5EDC660 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0;
		L_0 = InputAnimation_get_AnimationCurves_m2D5EE3D7C1400A02E4A1DD7C68BD5398E9D96D71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
			L_3 = InterfaceFuncInvoker0< AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var, L_2);
			// curve.keys = new Keyframe[0];
			KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_3);
			AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_3, L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6;
			L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_AnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_get_AnimationCurves_m2D5EE3D7C1400A02E4A1DD7C68BD5398E9D96D71 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IEnumerable<AnimationCurve> AnimationCurves => new AnimationCurveEnumerable(this);
		AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_0 = (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 *)il2cpp_codegen_object_new(AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344_il2cpp_TypeInfo_var);
		AnimationCurveEnumerable__ctor_mCAC8BF93E0EF48DF943E12C03A4E4AFCE8556089(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindKeyframeInterval(UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_FindKeyframeInterval_mA04DC0C0A36CF560CE4D41E678A8EC43BEC742D7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___time1, const RuntimeMethod* method)
{
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var keys = curve.keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve0;
		NullCheck(L_0);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1;
		L_1 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int lowIdx = -1;
		V_1 = (-1);
		// int highIdx = keys.Length;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_2 = V_0;
		NullCheck(L_2);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		goto IL_002a;
	}

IL_000f:
	{
		// int midIdx = (lowIdx + highIdx) >> 1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))>>(int32_t)1));
		// if (time >= keys[midIdx].time)
		float L_5 = ___time1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		float L_8;
		L_8 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		if ((!(((float)L_5) >= ((float)L_8))))
		{
			goto IL_0028;
		}
	}
	{
		// lowIdx = midIdx;
		int32_t L_9 = V_3;
		V_1 = L_9;
		// }
		goto IL_002a;
	}

IL_0028:
	{
		// highIdx = midIdx;
		int32_t L_10 = V_3;
		V_2 = L_10;
	}

IL_002a:
	{
		// while (lowIdx < highIdx - 1)
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		// return lowIdx;
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddMarker(Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_AddMarker_m7DC5D4E27F1DD294574518E2529DFA101FCDBFA6 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___marker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = FindMarkerInterval(marker.time) + 1;
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_0 = ___marker0;
		NullCheck(L_0);
		float L_1 = L_0->get_time_0();
		int32_t L_2;
		L_2 = InputAnimation_FindMarkerInterval_m13623A48AC45FDBBC8392185D7FB8F0ED16858A2(__this, L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// markers.Insert(index, marker);
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_3 = __this->get_markers_9();
		int32_t L_4 = V_0;
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_5 = ___marker0;
		NullCheck(L_3);
		List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1(L_3, L_4, L_5, /*hidden argument*/List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RemoveMarker(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_RemoveMarker_m3737E180306D5CA6237346AAD99EE497590DCD37 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// markers.RemoveAt(index);
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266(L_0, L_1, /*hidden argument*/List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::SetMarkerTime(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_SetMarkerTime_m3471F7C9C6AFA694BAF78375E228700DA48397B2 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, int32_t ___index0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// InputAnimationMarker marker = markers[index];
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_2;
		L_2 = List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		V_0 = L_2;
		// markers.RemoveAt(index);
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_3 = __this->get_markers_9();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266(L_3, L_4, /*hidden argument*/List_1_RemoveAt_mFF4CE17D8A0404E9FA394DEBFDE2DD1BB8F44266_RuntimeMethod_var);
		// int newIndex = FindMarkerInterval(time) + 1;
		float L_5 = ___time1;
		int32_t L_6;
		L_6 = InputAnimation_FindMarkerInterval_m13623A48AC45FDBBC8392185D7FB8F0ED16858A2(__this, L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// marker.time = time;
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_7 = V_0;
		float L_8 = ___time1;
		NullCheck(L_7);
		L_7->set_time_0(L_8);
		// markers.Insert(newIndex, marker);
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_9 = __this->get_markers_9();
		int32_t L_10 = V_1;
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_11 = V_0;
		NullCheck(L_9);
		List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1(L_9, L_10, L_11, /*hidden argument*/List_1_Insert_m3018BB7684BEB4100C8C072913A0E386593622D1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_m85E7B0C4413C1337DDF503C66AA30DE1969967FC (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, bool* ___isTracked2, bool* ___isPinching3, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveLeft, handPinchCurveLeft, out isTracked, out isPinching);
		float L_1 = ___time0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = __this->get_handTrackedCurveLeft_2();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_handPinchCurveLeft_4();
		bool* L_4 = ___isTracked2;
		bool* L_5 = ___isPinching3;
		InputAnimation_EvaluateHandState_mB8E3973F701CB1139ADA352248B4DA8E26CB4814(__this, L_1, L_2, L_3, (bool*)L_4, (bool*)L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_6 = ___handedness1;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0036;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveRight, handPinchCurveRight, out isTracked, out isPinching);
		float L_7 = ___time0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_handTrackedCurveRight_3();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_handPinchCurveRight_5();
		bool* L_10 = ___isTracked2;
		bool* L_11 = ___isPinching3;
		InputAnimation_EvaluateHandState_mB8E3973F701CB1139ADA352248B4DA8E26CB4814(__this, L_7, L_8, L_9, (bool*)L_10, (bool*)L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0036:
	{
		// isTracked = false;
		bool* L_12 = ___isTracked2;
		*((int8_t*)L_12) = (int8_t)0;
		// isPinching = false;
		bool* L_13 = ___isPinching3;
		*((int8_t*)L_13) = (int8_t)0;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mB8E3973F701CB1139ADA352248B4DA8E26CB4814 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___trackedCurve1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method)
{
	{
		// isTracked = (trackedCurve.Evaluate(time) > 0.5f);
		bool* L_0 = ___isTracked3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___trackedCurve1;
		float L_2 = ___time0;
		NullCheck(L_1);
		float L_3;
		L_3 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_1, L_2, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)((((float)L_3) > ((float)(0.5f)))? 1 : 0);
		// isPinching = (pinchCurve.Evaluate(time) > 0.5f);
		bool* L_4 = ___isPinching4;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = ___pinchCurve2;
		float L_6 = ___time0;
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		*((int8_t*)L_4) = (int8_t)((((float)L_7) > ((float)(0.5f)))? 1 : 0);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluateHandJoint_m346351BDAB67BB3C6B3E564EEEB88BEDBA9DE9B5 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesLeft);
		float L_1 = ___time0;
		int32_t L_2 = ___joint2;
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_3 = __this->get_handJointCurvesLeft_6();
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_4;
		L_4 = InputAnimation_EvaluateHandJoint_mC470A5D36D17CC068E3A865B657C878DD3879318(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0013:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_5 = ___handedness1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesRight);
		float L_6 = ___time0;
		int32_t L_7 = ___joint2;
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_8 = __this->get_handJointCurvesRight_7();
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_9;
		L_9 = InputAnimation_EvaluateHandJoint_mC470A5D36D17CC068E3A865B657C878DD3879318(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0026:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_10;
		L_10 = MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline(/*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluateHandJoint_mC470A5D36D17CC068E3A865B657C878DD3879318 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, int32_t ___joint1, Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * ___jointCurves2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_0 = NULL;
	{
		// if (jointCurves.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_0 = ___jointCurves2;
		int32_t L_1 = ___joint1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_0, L_1, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return EvaluatePose(curves, time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_3 = V_0;
		float L_4 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_5;
		L_5 = InputAnimation_EvaluatePose_m43B4DDE5EBC47DB5568DF4AFB359C0266A468BA0(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0013:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_6;
		L_6 = MixedRealityPose_get_ZeroIdentity_mDB40C3FFF6E98E56F8A0654615E5A12F7DFD265B_inline(/*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateCameraPose(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluateCameraPose_m4A7BA210E79E6DB7C06F01A02F22B568660D1D19 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EvaluatePose(cameraCurves, time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = __this->get_cameraCurves_8();
		float L_1 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_2;
		L_2 = InputAnimation_EvaluatePose_m43B4DDE5EBC47DB5568DF4AFB359C0266A468BA0(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluatePose(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  InputAnimation_EvaluatePose_m43B4DDE5EBC47DB5568DF4AFB359C0266A468BA0 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves0, float ___time1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float px = curves.PositionX.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = L_0->get_PositionX_0();
		float L_2 = ___time1;
		NullCheck(L_1);
		float L_3;
		L_3 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float py = curves.PositionY.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_4 = ___curves0;
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_PositionY_1();
		float L_6 = ___time1;
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// float pz = curves.PositionZ.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_8 = ___curves0;
		NullCheck(L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = L_8->get_PositionZ_2();
		float L_10 = ___time1;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float rx = curves.RotationX.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_12 = ___curves0;
		NullCheck(L_12);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_RotationX_3();
		float L_14 = ___time1;
		NullCheck(L_13);
		float L_15;
		L_15 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// float ry = curves.RotationY.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_16 = ___curves0;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_RotationY_4();
		float L_18 = ___time1;
		NullCheck(L_17);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// float rz = curves.RotationZ.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_20 = ___curves0;
		NullCheck(L_20);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = L_20->get_RotationZ_5();
		float L_22 = ___time1;
		NullCheck(L_21);
		float L_23;
		L_23 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_21, L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		// float rw = curves.RotationW.Evaluate(time);
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_24 = ___curves0;
		NullCheck(L_24);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = L_24->get_RotationW_6();
		float L_26 = ___time1;
		NullCheck(L_25);
		float L_27;
		L_27 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_25, L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		// var pose = new MixedRealityPose();
		il2cpp_codegen_initobj((&V_7), sizeof(MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD ));
		// pose.Position = new Vector3(px, py, pz);
		float L_28 = V_0;
		float L_29 = V_1;
		float L_30 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), L_28, L_29, L_30, /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m247BAE9A0400E233D09027B70BDFA277C4C65EDE_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&V_7), L_31, /*hidden argument*/NULL);
		// pose.Rotation = new Quaternion(rx, ry, rz, rw);
		float L_32 = V_3;
		float L_33 = V_4;
		float L_34 = V_5;
		float L_35 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_36), L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m9BB4799EE98D166F4B5E6E78E6B1AAC7E6091AEE_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&V_7), L_36, /*hidden argument*/NULL);
		// pose.Rotation.Normalize();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = MixedRealityPose_get_Rotation_m5700A7EDAB912A5BB6EE7606075F0FBFA664307C_inline((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_37;
		Quaternion_Normalize_m080BED4941351BFF772A60536F934A4740FC6818((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), /*hidden argument*/NULL);
		// return pose;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_38 = V_7;
		return L_38;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetMarker(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * InputAnimation_GetMarker_m4AD39603D12E6E4C70CC7A9F9AD4E898C708BBD0 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return markers[index];
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_2;
		L_2 = List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindMarkerInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAnimation_FindMarkerInterval_m13623A48AC45FDBBC8392185D7FB8F0ED16858A2 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int lowIdx = -1;
		V_0 = (-1);
		// int highIdx = markers.Count;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = __this->get_markers_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_inline(L_0, /*hidden argument*/List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0010:
	{
		// int midIdx = (lowIdx + highIdx) >> 1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))>>(int32_t)1));
		// if (time >= markers[midIdx].time)
		float L_4 = ___time0;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_5 = __this->get_markers_9();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_7;
		L_7 = List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mE338CBC56E0E2B39755364A52B775F59B05C6297_RuntimeMethod_var);
		NullCheck(L_7);
		float L_8 = L_7->get_time_0();
		if ((!(((float)L_4) >= ((float)L_8))))
		{
			goto IL_002e;
		}
	}
	{
		// lowIdx = midIdx;
		int32_t L_9 = V_2;
		V_0 = L_9;
		// }
		goto IL_0030;
	}

IL_002e:
	{
		// highIdx = midIdx;
		int32_t L_10 = V_2;
		V_1 = L_10;
	}

IL_0030:
	{
		// while (lowIdx < highIdx - 1)
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_0010;
		}
	}
	{
		// return lowIdx;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m254A3F3F862A94B05E379DAFBFB59F1FF259B13C (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_1 = NULL;
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B5_0 = 0.0f;
	{
		// duration = 0.0f;
		__this->set_duration_1((0.0f));
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0;
		L_0 = InputAnimation_get_AnimationCurves_m2D5EE3D7C1400A02E4A1DD7C68BD5398E9D96D71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tD13D2D64E568FB0AB0AC501FB0D1F1DF895D81A3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0019:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
			L_3 = InterfaceFuncInvoker0< AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t9F362DF58E8D36C35D0707AEAABC831BC4C60796_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// float curveDuration = (curve.length > 0 ? curve.keys[curve.length - 1].time : 0.0f);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			G_B5_0 = (0.0f);
			goto IL_0048;
		}

IL_0030:
		{
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_1;
			NullCheck(L_6);
			KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_7;
			L_7 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_6, /*hidden argument*/NULL);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			float L_10;
			L_10 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))), /*hidden argument*/NULL);
			G_B5_0 = L_10;
		}

IL_0048:
		{
			V_2 = G_B5_0;
			// duration = Mathf.Max(duration, curveDuration);
			float L_11 = __this->get_duration_1();
			float L_12 = V_2;
			float L_13;
			L_13 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_11, L_12, /*hidden argument*/NULL);
			__this->set_duration_1(L_13);
		}

IL_005b:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m581F0C42CEC8FCADDBB62A67F38F912ECE6A6174 (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, float ___startTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_0 = NULL;
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * V_1 = NULL;
	int32_t V_2 = 0;
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_3 = NULL;
	int32_t V_4 = 0;
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_5 = NULL;
	{
		// PoseCurves defaultCurves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_0 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var writer = new BinaryWriter(stream);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_2 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// InputAnimationSerializationUtils.WriteHeader(writer);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteHeader_m6C670C20D15FB59BA12E49C747B83DB7B837F2B6(L_3, /*hidden argument*/NULL);
		// PoseCurvesToStream(writer, cameraCurves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = V_1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_5 = __this->get_cameraCurves_8();
		float L_6 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m41ECEF77E099921EFF77EC1358A96D42C1DCAD93(L_4, L_5, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveLeft, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_7 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_handTrackedCurveLeft_2();
		float L_9 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210(L_7, L_8, L_9, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveRight, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_10 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_handTrackedCurveRight_3();
		float L_12 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210(L_10, L_11, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveLeft, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_13 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = __this->get_handPinchCurveLeft_4();
		float L_15 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210(L_13, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveRight, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_16 = V_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = __this->get_handPinchCurveRight_5();
		float L_18 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210(L_16, L_17, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_19 = __this->get_handJointCurvesLeft_6();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_19, L_20, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_006a;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_22 = V_0;
		V_3 = L_22;
	}

IL_006a:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_23 = V_1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_24 = V_3;
		float L_25 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m41ECEF77E099921EFF77EC1358A96D42C1DCAD93(L_23, L_24, L_25, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_4 = 0;
		goto IL_00a6;
	}

IL_0083:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_29 = __this->get_handJointCurvesRight_7();
		int32_t L_30 = V_4;
		NullCheck(L_29);
		bool L_31;
		L_31 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_29, L_30, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_31)
		{
			goto IL_0097;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_32 = V_0;
		V_5 = L_32;
	}

IL_0097:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_33 = V_1;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_34 = V_5;
		float L_35 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_m41ECEF77E099921EFF77EC1358A96D42C1DCAD93(L_33, L_34, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a6:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_37 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0083;
		}
	}
	{
		// InputAnimationSerializationUtils.WriteMarkerList(writer, markers, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_39 = V_1;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_40 = __this->get_markers_9();
		float L_41 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteMarkerList_m252E3E7BC5888BF6EC3603DB124CC076A0FD309B(L_39, L_40, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_FromStream_m5FAAA4C57BADF762BD9E38DD16C5A09074288FCE (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B1E2E886BD49F75BF2DF3B7F0C3DA28FDAC0C92);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_4 = NULL;
	int32_t V_5 = 0;
	PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * V_6 = NULL;
	{
		// var reader = new BinaryReader(stream);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)il2cpp_codegen_object_new(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// InputAnimationSerializationUtils.ReadHeader(reader, out int versionMajor, out int versionMinor);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadHeader_m520BB147CA2C30A1BBF6A9082541A4AE94BB2F60(L_2, (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// if (versionMajor != 1 || versionMinor != 0)
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		// Debug.LogError("Only version 1.0 of input animation file format is supported.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral4B1E2E886BD49F75BF2DF3B7F0C3DA28FDAC0C92, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// PoseCurvesFromStream(reader, cameraCurves);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_5 = V_0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_6 = __this->get_cameraCurves_8();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_mC79E4A67E7F0967006B2932CBD48BB9E9F4E31AB(L_5, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handTrackedCurveLeft);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_handTrackedCurveLeft_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A(L_7, L_8, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handTrackedCurveRight);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_9 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_handTrackedCurveRight_3();
		InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A(L_9, L_10, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handPinchCurveLeft);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_11 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_handPinchCurveLeft_4();
		InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A(L_11, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handPinchCurveRight);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_13 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = __this->get_handPinchCurveRight_5();
		InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A(L_13, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_3 = 0;
		goto IL_0094;
	}

IL_0063:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_15 = __this->get_handJointCurvesLeft_6();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_15, L_16, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_18 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_18, /*hidden argument*/NULL);
		V_4 = L_18;
		// handJointCurvesLeft.Add((TrackedHandJoint)i, curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_19 = __this->get_handJointCurvesLeft_6();
		int32_t L_20 = V_3;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_21 = V_4;
		NullCheck(L_19);
		Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9(L_19, L_20, L_21, /*hidden argument*/Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
	}

IL_0088:
	{
		// PoseCurvesFromStream(reader, curves);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_22 = V_0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_23 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_mC79E4A67E7F0967006B2932CBD48BB9E9F4E31AB(L_22, L_23, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0094:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0063;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_5 = 0;
		goto IL_00d6;
	}

IL_00a1:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_27 = __this->get_handJointCurvesRight_7();
		int32_t L_28 = V_5;
		NullCheck(L_27);
		bool L_29;
		L_29 = Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE(L_27, L_28, (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 **)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m98A3F41F4414C8AA9F761AE8204DD7BC1FAFB0BE_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_30 = (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)il2cpp_codegen_object_new(PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872(L_30, /*hidden argument*/NULL);
		V_6 = L_30;
		// handJointCurvesRight.Add((TrackedHandJoint)i, curves);
		Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_31 = __this->get_handJointCurvesRight_7();
		int32_t L_32 = V_5;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_33 = V_6;
		NullCheck(L_31);
		Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9(L_31, L_32, L_33, /*hidden argument*/Dictionary_2_Add_m2249421E290ECB00C146F0D2EA748ABCA10845A9_RuntimeMethod_var);
	}

IL_00c8:
	{
		// PoseCurvesFromStream(reader, curves);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_34 = V_0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_mC79E4A67E7F0967006B2932CBD48BB9E9F4E31AB(L_34, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d6:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_37 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00a1;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadMarkerList(reader, markers);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_39 = V_0;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_40 = __this->get_markers_9();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadMarkerList_mF28ACDBC01CA464C07300D4214D0646FA1DE122B(L_39, L_40, /*hidden argument*/NULL);
		// ComputeDuration();
		InputAnimation_ComputeDuration_m254A3F3F862A94B05E379DAFBFB59F1FF259B13C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_m41ECEF77E099921EFF77EC1358A96D42C1DCAD93 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = L_1->get_PositionX_0();
		float L_3 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_0, L_2, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_PositionY_1();
		float L_7 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_4, L_6, L_7, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_8 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_9 = ___curves1;
		NullCheck(L_9);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = L_9->get_PositionZ_2();
		float L_11 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_8, L_10, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationX, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_12 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_RotationX_3();
		float L_15 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_12, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationY, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_16 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_18 = L_17->get_RotationY_4();
		float L_19 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_16, L_18, L_19, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationZ, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_20 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_21 = ___curves1;
		NullCheck(L_21);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = L_21->get_RotationZ_5();
		float L_23 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_20, L_22, L_23, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationW, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_24 = ___writer0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_25 = ___curves1;
		NullCheck(L_25);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_26 = L_25->get_RotationW_6();
		float L_27 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_24, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_mC79E4A67E7F0967006B2932CBD48BB9E9F4E31AB (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_0 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = L_1->get_PositionX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_0, L_2, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_3 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_4 = ___curves1;
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_PositionY_1();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_3, L_5, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_7 = ___curves1;
		NullCheck(L_7);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_PositionZ_2();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_6, L_8, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationX);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_9 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_10 = ___curves1;
		NullCheck(L_10);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = L_10->get_RotationX_3();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_9, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationY);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_RotationY_4();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_12, L_14, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationZ);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_15 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_16 = ___curves1;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_RotationZ_5();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_15, L_17, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationW);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_18 = ___reader0;
		PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_19 = ___curves1;
		NullCheck(L_19);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_20 = L_19->get_RotationW_6();
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_18, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimation__cctor_m73316D92E74E888C6C25AE74F3E3D36978710FF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var))->set_jointCount_0(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_mDCEBA1E49C1942EB1421C1BC1B3883B0F1972A98 (InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->set_name_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_mEB1AB258BA79403D68F321C5565F41A0FD46FB08 (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845601714FB132030B7585887918D078E9CE2267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (appendTimestamp)
		bool L_0 = ___appendTimestamp1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// filename = String.Format("{0}-{1}.{2}", baseName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"), InputAnimationSerializationUtils.Extension);
		String_t* L_1 = ___baseName0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), _stringLiteral845601714FB132030B7585887918D078E9CE2267, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralD98EEFA57F0D44C301E0D9E2C28732491D85C1C5, L_1, L_3, _stringLiteralD1B4A550FE7439DE4FDA569B91A4624B59B45E5B, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_002a;
	}

IL_0028:
	{
		// filename = baseName;
		String_t* L_5 = ___baseName0;
		V_0 = L_5;
	}

IL_002a:
	{
		// return filename;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_m6C670C20D15FB59BA12E49C747B83DB7B837F2B6 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(Magic);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_0, ((int64_t)7678548776933278406LL));
		// writer.Write(VersionMajor);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_1 = ___writer0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		// writer.Write(VersionMinor);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_2 = ___writer0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, 0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m520BB147CA2C30A1BBF6A9082541A4AE94BB2F60 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method)
{
	{
		// long fileMagic = reader.ReadInt64();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_0 = ___reader0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		// if (fileMagic != Magic)
		if ((((int64_t)L_1) == ((int64_t)((int64_t)7678548776933278406LL))))
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception("File is not an input animation file");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F96E76E35E18FF6CE65A73E42CD0652022C014)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputAnimationSerializationUtils_ReadHeader_m520BB147CA2C30A1BBF6A9082541A4AE94BB2F60_RuntimeMethod_var)));
	}

IL_001c:
	{
		// fileVersionMajor = reader.ReadInt32();
		int32_t* L_3 = ___fileVersionMajor1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		*((int32_t*)L_3) = (int32_t)L_5;
		// fileVersionMinor = reader.ReadInt32();
		int32_t* L_6 = ___fileVersionMinor2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		*((int32_t*)L_6) = (int32_t)L_8;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0096;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10;
		L_10 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = ___writer0;
		float L_15;
		L_15 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_17 = ___writer0;
		float L_18;
		L_18 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// writer.Write(keyframe.inTangent);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_19 = ___writer0;
		float L_20;
		L_20 = Keyframe_get_inTangent_m90DFA97754632F48D2414D28EB194710DE08626B((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_19, L_20);
		// writer.Write(keyframe.outTangent);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_21 = ___writer0;
		float L_22;
		L_22 = Keyframe_get_outTangent_m449E8B125AC282B53E0935606572EBDCB44B5020((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_21, L_22);
		// writer.Write(keyframe.inWeight);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_23 = ___writer0;
		float L_24;
		L_24 = Keyframe_get_inWeight_mD91FDE21FBBA5D3CA6FDD89CF4D313958A5B2021((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_23, L_24);
		// writer.Write(keyframe.outWeight);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_25 = ___writer0;
		float L_26;
		L_26 = Keyframe_get_outWeight_mD0069E01A70E73CD5A1CABC9C59F5EC3047BADD3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_25, L_26);
		// writer.Write((int)keyframe.weightedMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_27 = ___writer0;
		int32_t L_28;
		L_28 = Keyframe_get_weightedMode_mBEEC8DB2BD2C21B2335EA3D68AB100F85D2E4E07((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_27, L_28);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_30 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = ___curve1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00af;
	}

IL_002d:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].inTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_20 = ___reader0;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_20);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), L_21, /*hidden argument*/NULL);
		// keys[i].outTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_24 = ___reader0;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_24);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), L_25, /*hidden argument*/NULL);
		// keys[i].inWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_28 = ___reader0;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_28);
		Keyframe_set_inWeight_m844B007DD3D01958CD0EAE45B046EBB1032949B4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), L_29, /*hidden argument*/NULL);
		// keys[i].outWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_32 = ___reader0;
		NullCheck(L_32);
		float L_33;
		L_33 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_32);
		Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), L_33, /*hidden argument*/NULL);
		// keys[i].weightedMode = (WeightedMode)reader.ReadInt32();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_34 = V_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_36 = ___reader0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_36);
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), L_37, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002d;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = ___curve1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_42 = V_1;
		NullCheck(L_41);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_41, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_preWrapMode_m58B16E24ED209A84A3B2B7D9348F43E3E6776F58(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_postWrapMode_m5A9698F30F71D1A4D400F1FD67D78FAF3D14B318(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10;
		L_10 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = ___writer0;
		float L_15;
		L_15 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_17 = ___writer0;
		float L_18;
		L_18 = Keyframe_get_value_m9D584EA4DFB7D0BE71646F479DFB615EE005C968((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = ___curve1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = ___curve1;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00a3;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m617DC36870FB4BA758FDEF2497DF958297266E3F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].inTangent = 0.0f;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), (0.0f), /*hidden argument*/NULL);
		// keys[i].outTangent = 0.0f;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), (0.0f), /*hidden argument*/NULL);
		// keys[i].inWeight = 0.0f;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		Keyframe_set_inWeight_m844B007DD3D01958CD0EAE45B046EBB1032949B4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), (0.0f), /*hidden argument*/NULL);
		// keys[i].outWeight = 1.0e6f;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Keyframe_set_outWeight_m3ED9DD3A892D325FC564FFD0C0AB53A0A7B9913F((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), (1000000.0f), /*hidden argument*/NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		Keyframe_set_weightedMode_mEFA8BE25D83C1CF4E2D83AD76F6BB34E0435D0B5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), 3, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a3:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = ___curve1;
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_32 = V_1;
		NullCheck(L_31);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_31, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveArray(System.IO.BinaryWriter,UnityEngine.AnimationCurve[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveArray_mF3379659AC8340DA4F3D29742AD5D4CF294480A0 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0016;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curve, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_5 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_2;
		float L_7 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurve_mC1A82B4BE3BE0918D51AC068505DA3685A100E5D(L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0016:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_9 = V_1;
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveArray(System.IO.BinaryReader,UnityEngine.AnimationCurve[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveArray_m8A76FE01C9A900768E97DCA9AAA707EE6CBADDFA (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curve);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_5 = ___reader0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_m4D83F3953BC1FBA2852FEA15E202CCD56D7669C2(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0015:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_8 = V_1;
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurveArray(System.IO.BinaryWriter,UnityEngine.AnimationCurve[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurveArray_mC168F5EBF992DE405A2CC2AFB473958AB086D3A2 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0016;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, curve, startTime);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_5 = ___writer0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_2;
		float L_7 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteBoolCurve_mAE7C91D549D81223701BD4AAE4E993BD09397210(L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0016:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_9 = V_1;
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurveArray(System.IO.BinaryReader,UnityEngine.AnimationCurve[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurveArray_m071D958BA00DE1CCBB768559A8E3E0A117897913 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, curve);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_5 = ___reader0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadBoolCurve_mDB19F476B2AE8BFA83B7EB131E3D6E5A740A819A(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0015:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_8 = V_1;
		AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m252E3E7BC5888BF6EC3603DB124CC076A0FD309B (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___writer0, List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___markers1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA42588B3FB7E81157C369B828DC5DD3D7806B872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m182EA829158099F0D14F539978A079B38C26603A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF08A29FD01C2FEE1DBFC6B01E70043A41DB39DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD863D578D426C2AC75B2FA1502C99F991C743BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// writer.Write(markers.Count);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = ___writer0;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_1 = ___markers1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_inline(L_1, /*hidden argument*/List_1_get_Count_m200CF7CB13EDEC1416BD4D108AC98CF6998B395C_RuntimeMethod_var);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// foreach (var marker in markers)
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_3 = ___markers1;
		NullCheck(L_3);
		Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE  L_4;
		L_4 = List_1_GetEnumerator_mD863D578D426C2AC75B2FA1502C99F991C743BCA(L_3, /*hidden argument*/List_1_GetEnumerator_mD863D578D426C2AC75B2FA1502C99F991C743BCA_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var marker in markers)
			InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_5;
			L_5 = Enumerator_get_Current_mF08A29FD01C2FEE1DBFC6B01E70043A41DB39DD6_inline((Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF08A29FD01C2FEE1DBFC6B01E70043A41DB39DD6_RuntimeMethod_var);
			V_1 = L_5;
			// writer.Write(marker.time - startTime);
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = ___writer0;
			InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_7 = V_1;
			NullCheck(L_7);
			float L_8 = L_7->get_time_0();
			float L_9 = ___startTime2;
			NullCheck(L_6);
			VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_6, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
			// writer.Write(marker.name);
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_10 = ___writer0;
			InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = L_11->get_name_1();
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_10, L_12);
		}

IL_0037:
		{
			// foreach (var marker in markers)
			bool L_13;
			L_13 = Enumerator_MoveNext_m182EA829158099F0D14F539978A079B38C26603A((Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m182EA829158099F0D14F539978A079B38C26603A_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA42588B3FB7E81157C369B828DC5DD3D7806B872((Enumerator_t692D6A8C3F831FAD57A8BCCACAFD63A80DEB43FE *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA42588B3FB7E81157C369B828DC5DD3D7806B872_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_mF28ACDBC01CA464C07300D4214D0646FA1DE122B (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___reader0, List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * ___markers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBCD2D09C1F985EC3EFD3ECDE4570484C57166B9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD78CE9DED108D82D7F3705ECEA3B1A57BB111A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m8288985354F92A0E61068E2878EF57A42D0F88EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * V_2 = NULL;
	{
		// markers.Clear();
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_0 = ___markers1;
		NullCheck(L_0);
		List_1_Clear_mD78CE9DED108D82D7F3705ECEA3B1A57BB111A18(L_0, /*hidden argument*/List_1_Clear_mD78CE9DED108D82D7F3705ECEA3B1A57BB111A18_RuntimeMethod_var);
		// int count = reader.ReadInt32();
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		V_0 = L_2;
		// markers.Capacity = count;
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_3 = ___markers1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_set_Capacity_m8288985354F92A0E61068E2878EF57A42D0F88EE(L_3, L_4, /*hidden argument*/List_1_set_Capacity_m8288985354F92A0E61068E2878EF57A42D0F88EE_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// var marker = new InputAnimationMarker();
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_5 = (InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C *)il2cpp_codegen_object_new(InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C_il2cpp_TypeInfo_var);
		InputAnimationMarker__ctor_mDCEBA1E49C1942EB1421C1BC1B3883B0F1972A98(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		// marker.time = reader.ReadSingle();
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_6 = V_2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = ___reader0;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_7);
		NullCheck(L_6);
		L_6->set_time_0(L_8);
		// marker.name = reader.ReadString();
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_9 = V_2;
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_10 = ___reader0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_10);
		NullCheck(L_9);
		L_9->set_name_1(L_11);
		// markers.Add(marker);
		List_1_tFDFADF9A0DFD8795595EB2D589E72D3454FCDE9F * L_12 = ___markers1;
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_mBCD2D09C1F985EC3EFD3ECDE4570484C57166B9E(L_12, L_13, /*hidden argument*/List_1_Add_mBCD2D09C1F985EC3EFD3ECDE4570484C57166B9E_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils__cctor_mAF4C796067E0A328BA461B8549516D8FA2D3B67D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var))->set_jointCount_0(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStarted_mE062AA89350E0F161177B4E258B0D8E5CEEC5933 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStarted_15();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStarted_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStarted_m9E1B30F351E5954443BB87E08B2B5ABC087F208F (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStarted_15();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStarted_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStopped_m3F1213CB4256D230630B171B110CA0EDD58BE28D (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_16();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStopped_16();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStopped_m63C567A5A980E3B4747E7F6F329DA2902A58B071 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_16();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnRecordingStopped_16();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService__ctor_mD31D9890523369657BB2F2E04191DFB620D943F9 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_3 = ___profile4;
		InputRecordingService__ctor_m83E842952C1F53C887055821EAA29F07880258B9(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService__ctor_m83E842952C1F53C887055821EAA29F07880258B9 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool useBufferTimeLimit = true;
		__this->set_useBufferTimeLimit_19((bool)1);
		// private float recordingBufferTimeLimit = 30.0f;
		__this->set_recordingBufferTimeLimit_20((30.0f));
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m9C66DEA438D17C9B0B54BF71BBE8E0457F65BF3B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * InputRecordingService_get_InputRecordingProfile_m7C39EC60D31843FAEDF642EF43BCDAE1638C6710 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * G_B1_0 = NULL;
	{
		// var profile = ConfigurationProfile as MixedRealityInputRecordingProfile;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		// if (!profile)
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_1 = ((MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 *)IsInstClass((RuntimeObject*)L_0, MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("Profile for Input Recording Service must be a MixedRealityInputRecordingProfile");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral2F30A225B0E18CECF032D8CBEBC2F77FFC6A9B2B, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		// return profile;
		return G_B2_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = __this->get_U3CIsEnabledU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_IsEnabled_m32C7C305AC9390E019994B5C1D494E165349C251 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsEnabledU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mF26EAD69D80151F2908E5A1858E50E97E039E971 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m7B2DE8550FD23A877B5E874E64671971986B0B28 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_mEA51DA1C8C6E8DFE5F71476373DAF5159F1FA467 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->get_useBufferTimeLimit_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_UseBufferTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_UseBufferTimeLimit_m89603BA12D7E4C4D02ED158404D86C2F09A11D8F (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useBufferTimeLimit && !value)
		bool L_0 = __this->get_useBufferTimeLimit_19();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// unlimitedRecordingStartTime = StartTime;
		float L_2;
		L_2 = InputRecordingService_get_StartTime_mAF86FF8F9AFCE3626C56262BECB6F6102B96C4B3(__this, /*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_22(L_3);
	}

IL_001c:
	{
		// useBufferTimeLimit = value;
		bool L_4 = ___value0;
		__this->set_useBufferTimeLimit_19(L_4);
		// if (useBufferTimeLimit)
		bool L_5 = __this->get_useBufferTimeLimit_19();
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_RecordingBufferTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_RecordingBufferTimeLimit_m1A5B9C7A957C09605317CDA1906842DAE7529F6F (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// get { return recordingBufferTimeLimit; }
		float L_0 = __this->get_recordingBufferTimeLimit_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_RecordingBufferTimeLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_set_RecordingBufferTimeLimit_m73D16532783FFB62641DAC04FB60A562A252C28E (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// recordingBufferTimeLimit = Mathf.Max(value, 0.0f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.0f), /*hidden argument*/NULL);
		__this->set_recordingBufferTimeLimit_20(L_1);
		// if (useBufferTimeLimit)
		bool L_2 = __this->get_useBufferTimeLimit_19();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mAF86FF8F9AFCE3626C56262BECB6F6102B96C4B3 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unlimitedRecordingStartTime.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_0 = __this->get_address_of_unlimitedRecordingStartTime_22();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if (useBufferTimeLimit)
		bool L_2 = __this->get_useBufferTimeLimit_19();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// return Mathf.Max(unlimitedRecordingStartTime.Value, Time.time - recordingBufferTimeLimit);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_unlimitedRecordingStartTime_22();
		float L_4;
		L_4 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_3, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_recordingBufferTimeLimit_20();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_4, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0032:
	{
		// return unlimitedRecordingStartTime.Value;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_8 = __this->get_address_of_unlimitedRecordingStartTime_22();
		float L_9;
		L_9 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_8, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		// return Time.time;
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_m0E7FB1A1B6F39854EF03D4756BFFF1B5F5106F59 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsRecording)
		bool L_0;
		L_0 = InputRecordingService_get_IsRecording_mF26EAD69D80151F2908E5A1858E50E97E039E971_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_22(L_2);
		// }
		return;
	}

IL_0019:
	{
		// unlimitedRecordingStartTime = null;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_unlimitedRecordingStartTime_22();
		il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Enable_mBDD658D212C27BCBEE43A5CE8D4AB3EF76AB4017 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsEnabled = true;
		InputRecordingService_set_IsEnabled_m32C7C305AC9390E019994B5C1D494E165349C251_inline(__this, (bool)1, /*hidden argument*/NULL);
		// recordingBuffer = new InputAnimation();
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_0 = (InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C *)il2cpp_codegen_object_new(InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C_il2cpp_TypeInfo_var);
		InputAnimation__ctor_mAD0C9FE06A1FD4032837FA560CED6D533DABF4E1(L_0, /*hidden argument*/NULL);
		__this->set_recordingBuffer_21(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_Disable_mF682F1E5FE3FFF443A8EAD62A648958377D879C6 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// IsEnabled = false;
		InputRecordingService_set_IsEnabled_m32C7C305AC9390E019994B5C1D494E165349C251_inline(__this, (bool)0, /*hidden argument*/NULL);
		// recordingBuffer = null;
		__this->set_recordingBuffer_21((InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C *)NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m0E7FB1A1B6F39854EF03D4756BFFF1B5F5106F59(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StartRecording_mFCAD944E758F7B1EA41B61FDB872B1EC88C30A32 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	{
		// IsRecording = true;
		InputRecordingService_set_IsRecording_m7B2DE8550FD23A877B5E874E64671971986B0B28_inline(__this, (bool)1, /*hidden argument*/NULL);
		// if (UseBufferTimeLimit)
		bool L_0;
		L_0 = InputRecordingService_get_UseBufferTimeLimit_mEA51DA1C8C6E8DFE5F71476373DAF5159F1FA467_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (!unlimitedRecordingStartTime.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_1 = __this->get_address_of_unlimitedRecordingStartTime_22();
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_1, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_22(L_4);
	}

IL_0032:
	{
		// OnRecordingStarted?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_OnRecordingStarted_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_StopRecording_m4B9B53B0F7E4E38D30BEA6540D803386B024F432 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// IsRecording = false;
		InputRecordingService_set_IsRecording_m7B2DE8550FD23A877B5E874E64671971986B0B28_inline(__this, (bool)0, /*hidden argument*/NULL);
		// OnRecordingStopped?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnRecordingStopped_16();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_LateUpdate_m7E68AF867EDC49042024DFA638E72BD1BE6231CE (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (IsRecording)
		bool L_1;
		L_1 = InputRecordingService_get_IsRecording_mF26EAD69D80151F2908E5A1858E50E97E039E971_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (UseBufferTimeLimit)
		bool L_2;
		L_2 = InputRecordingService_get_UseBufferTimeLimit_mEA51DA1C8C6E8DFE5F71476373DAF5159F1FA467_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// RecordKeyframe();
		InputRecordingService_RecordKeyframe_mEA13F38AA29162563A3A79011DD020D8F3222C4C(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::DiscardRecordedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_DiscardRecordedInput_m6766C129C2861184F4037D6F5D005B2E507BB8C4 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// recordingBuffer.Clear();
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_1 = __this->get_recordingBuffer_21();
		NullCheck(L_1);
		InputAnimation_Clear_m8385F5580BEE309634D08C6D461D14A8A5EDC660(L_1, /*hidden argument*/NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_m0E7FB1A1B6F39854EF03D4756BFFF1B5F5106F59(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mEA13F38AA29162563A3A79011DD020D8F3222C4C (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * V_1 = NULL;
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_m7C39EC60D31843FAEDF642EF43BCDAE1638C6710(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// RecordInputHandData(Handedness.Left);
		bool L_2;
		L_2 = InputRecordingService_RecordInputHandData_m66A0AF9C2F8A8DF94835357FE6BBE89A1B805A3C(__this, 1, /*hidden argument*/NULL);
		// RecordInputHandData(Handedness.Right);
		bool L_3;
		L_3 = InputRecordingService_RecordInputHandData_m66A0AF9C2F8A8DF94835357FE6BBE89A1B805A3C(__this, 2, /*hidden argument*/NULL);
		// if (CameraCache.Main)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = CameraCache_get_Main_mE580E45F9F300268108C46AA59FFFAE9D248B8C4(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// var cameraPose = new MixedRealityPose(CameraCache.Main.transform.position, CameraCache.Main.transform.rotation);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = CameraCache_get_Main_mE580E45F9F300268108C46AA59FFFAE9D248B8C4(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = CameraCache_get_Main_mE580E45F9F300268108C46AA59FFFAE9D248B8C4(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		MixedRealityPose__ctor_m2E70752B82E6FDDA93EEB36F856A3261788A65AD((MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&V_2), L_8, L_11, /*hidden argument*/NULL);
		// recordingBuffer.AddCameraPoseKey(time, cameraPose, profile.CameraPositionThreshold, profile.CameraRotationThreshold);
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_12 = __this->get_recordingBuffer_21();
		float L_13 = V_0;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_14 = V_2;
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_15 = V_1;
		NullCheck(L_15);
		float L_16;
		L_16 = MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mACD9A52883030175D5E4C54B503A57F44464EA94_inline(L_15, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_17 = V_1;
		NullCheck(L_17);
		float L_18;
		L_18 = MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mC01F77E6DFEF7373D2FBF7886BAD861BCDAE1B3E_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		InputAnimation_AddCameraPoseKey_mE84C10FA4C569083DAD54F3BC756505E3CBB8347(L_12, L_13, L_14, L_16, L_18, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRecordingService_RecordInputHandData_m66A0AF9C2F8A8DF94835357FE6BBE89A1B805A3C (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHand_tE93B799622515134BEF99CCBDA6F63DC6F536223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * V_6 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  V_10;
	memset((&V_10), 0, sizeof(V_10));
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	int32_t G_B9_1 = 0;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_1;
		L_1 = InputRecordingService_get_InputRecordingProfile_m7C39EC60D31843FAEDF642EF43BCDAE1638C6710(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// var hand = HandJointUtils.FindHand(handedness);
		uint8_t L_2 = ___handedness0;
		RuntimeObject* L_3;
		L_3 = HandJointUtils_FindHand_mE744C9C8014300806C9D79986F1CAEBAC8C9AC1C(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (hand == null)
		RuntimeObject* L_4 = V_2;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// recordingBuffer.AddHandStateKey(time, handedness, false, false);
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_5 = __this->get_recordingBuffer_21();
		float L_6 = V_0;
		uint8_t L_7 = ___handedness0;
		NullCheck(L_5);
		InputAnimation_AddHandStateKey_mF588112580B47AFDF78596FC88E8CDE58EA0F21F(L_5, L_6, L_7, (bool)0, (bool)0, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// bool isTracked = (hand.TrackingState == TrackingState.Tracked);
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_TrackingState() */, IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857_il2cpp_TypeInfo_var, L_8);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		// bool isPinching = false;
		V_4 = (bool)0;
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		V_5 = 0;
		goto IL_005f;
	}

IL_003a:
	{
		// var interaction = hand.Interactions[i];
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_11;
		L_11 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = L_14;
		// switch (interaction.InputType)
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_15 = V_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = MixedRealityInteractionMapping_get_InputType_mA4A3B0B5C626BDAB3DC78E2B48DE1B219B391167_inline(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0059;
		}
	}
	{
		// isPinching = interaction.BoolData;
		MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * L_17 = V_6;
		NullCheck(L_17);
		bool L_18;
		L_18 = MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
	}

IL_0059:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005f:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_20 = V_5;
		RuntimeObject* L_21 = V_2;
		NullCheck(L_21);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_22;
		L_22 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t55B15764F056AB4B93CC07A1E19DF2348A435857_il2cpp_TypeInfo_var, L_21);
		MixedRealityInteractionMappingU5BU5D_t8C205F3696520DBD91F11E7D7FEB906D80BD2E76* L_23 = L_22;
		G_B7_0 = L_23;
		G_B7_1 = L_20;
		if (L_23)
		{
			G_B8_0 = L_23;
			G_B8_1 = L_20;
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24 = V_8;
		G_B9_0 = L_24;
		G_B9_1 = G_B7_1;
		goto IL_007e;
	}

IL_0077:
	{
		NullCheck(G_B8_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_25), ((int32_t)((int32_t)(((RuntimeArray*)G_B8_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B9_0 = L_25;
		G_B9_1 = G_B8_1;
	}

IL_007e:
	{
		V_7 = G_B9_0;
		int32_t L_26;
		L_26 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B9_1) < ((int32_t)L_26))? 1 : 0)&(int32_t)L_27)))
		{
			goto IL_003a;
		}
	}
	{
		// recordingBuffer.AddHandStateKey(time, handedness, isTracked, isPinching);
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_28 = __this->get_recordingBuffer_21();
		float L_29 = V_0;
		uint8_t L_30 = ___handedness0;
		bool L_31 = V_3;
		bool L_32 = V_4;
		NullCheck(L_28);
		InputAnimation_AddHandStateKey_mF588112580B47AFDF78596FC88E8CDE58EA0F21F(L_28, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		// if (isTracked)
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_00e3;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_9 = 0;
		goto IL_00da;
	}

IL_00ab:
	{
		// if (hand.TryGetJoint((TrackedHandJoint)i, out MixedRealityPose jointPose))
		RuntimeObject* L_34 = V_2;
		int32_t L_35 = V_9;
		NullCheck(L_34);
		bool L_36;
		L_36 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tE93B799622515134BEF99CCBDA6F63DC6F536223_il2cpp_TypeInfo_var, L_34, L_35, (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD *)(&V_10));
		if (!L_36)
		{
			goto IL_00d4;
		}
	}
	{
		// recordingBuffer.AddHandJointKey(time, handedness, (TrackedHandJoint)i, jointPose, profile.JointPositionThreshold, profile.JointRotationThreshold);
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_37 = __this->get_recordingBuffer_21();
		float L_38 = V_0;
		uint8_t L_39 = ___handedness0;
		int32_t L_40 = V_9;
		MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD  L_41 = V_10;
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_42 = V_1;
		NullCheck(L_42);
		float L_43;
		L_43 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m646DD76D18712003021018D8CA456D58C02DC653_inline(L_42, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * L_44 = V_1;
		NullCheck(L_44);
		float L_45;
		L_45 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_m08BDCDD4C34D437FCED0FAF0F38499ABBDCA8E02_inline(L_44, /*hidden argument*/NULL);
		NullCheck(L_37);
		InputAnimation_AddHandJointKey_m460DE7691D1C89EFBB23DF60AEB6C7A3C9CB425A(L_37, L_38, L_39, L_40, L_41, L_43, L_45, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_46 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00da:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_47 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var);
		int32_t L_48 = ((InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var))->get_jointCount_14();
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00ab;
		}
	}

IL_00e3:
	{
		// return true;
		return (bool)1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_mB18B6E439D7B011C984716A8BFB2191BC9FD0F0C (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, String_t* ___directory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveInputAnimation(InputAnimationSerializationUtils.GetOutputFilename(), directory);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t3320AF354771542A2F4DBFC2D570F15A5E780887_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = InputAnimationSerializationUtils_GetOutputFilename_mEB1AB258BA79403D68F321C5565F41A0FD46FB08(_stringLiteral06265567ED5B353F62334C6ED834095E8F3DA213, (bool)1, /*hidden argument*/NULL);
		String_t* L_1 = ___directory0;
		String_t* L_2;
		L_2 = InputRecordingService_SaveInputAnimation_mE9FEB2B95C67766AE1EC1CF64C0666CAA2B64031(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_mE9FEB2B95C67766AE1EC1CF64C0666CAA2B64031 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// if (IsEnabled)
		bool L_0;
		L_0 = InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		// string path = Path.Combine(directory ?? Application.persistentDataPath, filename);
		String_t* L_1 = ___directory1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(G_B3_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			// using (Stream fileStream = File.Open(path, FileMode.Create))
			String_t* L_6 = V_0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7;
			L_7 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_6, 2, /*hidden argument*/NULL);
			V_1 = L_7;
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			// PruneBuffer();
			InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105(__this, /*hidden argument*/NULL);
			// recordingBuffer.ToStream(fileStream, StartTime);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_8 = __this->get_recordingBuffer_21();
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = V_1;
			float L_10;
			L_10 = InputRecordingService_get_StartTime_mAF86FF8F9AFCE3626C56262BECB6F6102B96C4B3(__this, /*hidden argument*/NULL);
			NullCheck(L_8);
			InputAnimation_ToStream_m581F0C42CEC8FCADDBB62A67F38F912ECE6A6174(L_8, L_9, L_10, /*hidden argument*/NULL);
			// Debug.Log($"Recorded input animation exported to {path}");
			String_t* L_11 = V_0;
			String_t* L_12;
			L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2C71071781ACA763255B49C62BBF32A19A63C633, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x55, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = V_1;
				if (!L_13)
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = V_1;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
			}

IL_0054:
			{
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x55, IL_0055)
		}

IL_0055:
		{
			// return path;
			String_t* L_15 = V_0;
			V_2 = L_15;
			goto IL_006b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0059;
		throw e;
	}

CATCH_0059:
	{ // begin catch(System.IO.IOException)
		// Debug.LogWarning(ex.Message);
		NullCheck(((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)__exception_local));
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)__exception_local));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_16, /*hidden argument*/NULL);
		// }
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_006b:
	{
		// }
		String_t* L_17 = V_2;
		return L_17;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_m82F8AEAC7869C814FB4F8472534D3D8FF155D105 (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// recordingBuffer.CutoffBeforeTime(StartTime);
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_0 = __this->get_recordingBuffer_21();
		float L_1;
		L_1 = InputRecordingService_get_StartTime_mAF86FF8F9AFCE3626C56262BECB6F6102B96C4B3(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputAnimation_CutoffBeforeTime_m660BE59B7D42D62C7C02A36297496386975F37B8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecordingService__cctor_mEE03CE4EFAB78E1FBBC4F5325F7F959017A761B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tA78DFF4A264B9F1804EEAF98AEC11CDD33E93C67_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559_il2cpp_TypeInfo_var))->set_jointCount_14(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m646DD76D18712003021018D8CA456D58C02DC653 (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->get_jointPositionThreshold_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m08BDCDD4C34D437FCED0FAF0F38499ABBDCA8E02 (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->get_jointRotationThreshold_6();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mACD9A52883030175D5E4C54B503A57F44464EA94 (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->get_cameraPositionThreshold_7();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mC01F77E6DFEF7373D2FBF7886BAD861BCDAE1B3E (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->get_cameraRotationThreshold_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputRecordingProfile__ctor_m07481E11A0D035F5F43DE6B3B0E463063E42C0DF (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// private float jointPositionThreshold = 0.001f;
		__this->set_jointPositionThreshold_5((0.00100000005f));
		// private float jointRotationThreshold = 0.02f;
		__this->set_jointRotationThreshold_6((0.0199999996f));
		// private float cameraPositionThreshold = 0.002f;
		__this->set_cameraPositionThreshold_7((0.00200000009f));
		// private float cameraRotationThreshold = 0.02f;
		__this->set_cameraRotationThreshold_8((0.0199999996f));
		BaseMixedRealityProfile__ctor_m3626F4CD7ED22E9F8C686C958F48A61B14BE348E(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::.ctor(Microsoft.MixedReality.Toolkit.Input.InputAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveEnumerable__ctor_mCAC8BF93E0EF48DF943E12C03A4E4AFCE8556089 (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * __this, InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * ___animation0, const RuntimeMethod* method)
{
	{
		// public AnimationCurveEnumerable(InputAnimation animation)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.animation = animation;
		InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_0 = ___animation0;
		__this->set_animation_0(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_GetEnumerator_mC5290E8D93C8E91281D3F7A854EA2CE71A2C8727 (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * L_0 = (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__2__ctor_m8D72036CBFD0BCCB673917FBBC6859359EBC0121(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_System_Collections_IEnumerable_GetEnumerator_m3A0FDA1533B98DB9A9495941C42FF357124AA9C2 (AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * __this, const RuntimeMethod* method)
{
	{
		// return this.GetEnumerator();
		RuntimeObject* L_0;
		L_0 = AnimationCurveEnumerable_GetEnumerator_mC5290E8D93C8E91281D3F7A854EA2CE71A2C8727(__this, /*hidden argument*/NULL);
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
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/CompareMarkers::Compare(Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker,Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompareMarkers_Compare_m7283FD375D45800BC850D8CF0AA7D05AD8DB2AB6 (CompareMarkers_t777FBB4AA9DB74041764E6F0FDFD771641E4F97C * __this, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___a0, InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * ___b1, const RuntimeMethod* method)
{
	{
		// return a.time.CompareTo(b.time);
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_0 = ___a0;
		NullCheck(L_0);
		float* L_1 = L_0->get_address_of_time_0();
		InputAnimationMarker_t9C98A1C1A4C7E3F848E35427AE024B70217AFB7C * L_2 = ___b1;
		NullCheck(L_2);
		float L_3 = L_2->get_time_0();
		int32_t L_4;
		L_4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/CompareMarkers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompareMarkers__ctor_mAE86C3DE9E798A2578B7F1D7CFD7E001F102C7AC (CompareMarkers_t777FBB4AA9DB74041764E6F0FDFD771641E4F97C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCurves__ctor_m2EBDBC00766690BD0F583963D21213369918A872 (PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly public AnimationCurve PositionX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_PositionX_0(L_0);
		// readonly public AnimationCurve PositionY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_1, /*hidden argument*/NULL);
		__this->set_PositionY_1(L_1);
		// readonly public AnimationCurve PositionZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_2, /*hidden argument*/NULL);
		__this->set_PositionZ_2(L_2);
		// readonly public AnimationCurve RotationX = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_3, /*hidden argument*/NULL);
		__this->set_RotationX_3(L_3);
		// readonly public AnimationCurve RotationY = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_4, /*hidden argument*/NULL);
		__this->set_RotationY_4(L_4);
		// readonly public AnimationCurve RotationZ = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_5, /*hidden argument*/NULL);
		__this->set_RotationZ_5(L_5);
		// readonly public AnimationCurve RotationW = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_6, /*hidden argument*/NULL);
		__this->set_RotationW_6(L_6);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m8D72036CBFD0BCCB673917FBBC6859359EBC0121 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m97509470ACFA7F690F0D888AA70D835401EB2475 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_0081;
			}
			case 7:
			{
				goto IL_0081;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_006d;
			}
			case 10:
			{
				goto IL_006d;
			}
			case 11:
			{
				goto IL_006d;
			}
			case 12:
			{
				goto IL_006d;
			}
			case 13:
			{
				goto IL_006d;
			}
			case 14:
			{
				goto IL_006d;
			}
			case 15:
			{
				goto IL_006d;
			}
			case 16:
			{
				goto IL_0077;
			}
			case 17:
			{
				goto IL_0077;
			}
			case 18:
			{
				goto IL_0077;
			}
			case 19:
			{
				goto IL_0077;
			}
			case 20:
			{
				goto IL_0077;
			}
			case 21:
			{
				goto IL_0077;
			}
			case 22:
			{
				goto IL_0077;
			}
		}
	}
	{
		return;
	}

IL_006d:
	{
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_0070);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m15071590309BDA38BC4E086F928BE5CB7B401826(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0077:
	{
	}

IL_0078:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_007a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1228F8CB33CCE966180B5D4F1C06DCB5F378EF1E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m7AA51FD5C2C0058F5405EF671BA41AC3406677D8 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 27);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0083;
				}
				case 1:
				{
					goto IL_00a9;
				}
				case 2:
				{
					goto IL_00cf;
				}
				case 3:
				{
					goto IL_00f5;
				}
				case 4:
				{
					goto IL_011b;
				}
				case 5:
				{
					goto IL_017a;
				}
				case 6:
				{
					goto IL_01a1;
				}
				case 7:
				{
					goto IL_01c8;
				}
				case 8:
				{
					goto IL_01ef;
				}
				case 9:
				{
					goto IL_0217;
				}
				case 10:
				{
					goto IL_023f;
				}
				case 11:
				{
					goto IL_0267;
				}
				case 12:
				{
					goto IL_02f1;
				}
				case 13:
				{
					goto IL_0319;
				}
				case 14:
				{
					goto IL_0341;
				}
				case 15:
				{
					goto IL_0369;
				}
				case 16:
				{
					goto IL_0391;
				}
				case 17:
				{
					goto IL_03b9;
				}
				case 18:
				{
					goto IL_03e1;
				}
				case 19:
				{
					goto IL_0437;
				}
				case 20:
				{
					goto IL_0463;
				}
				case 21:
				{
					goto IL_048f;
				}
				case 22:
				{
					goto IL_04bb;
				}
				case 23:
				{
					goto IL_04e4;
				}
				case 24:
				{
					goto IL_050d;
				}
				case 25:
				{
					goto IL_0536;
				}
			}
		}

IL_007c:
		{
			V_0 = (bool)0;
			goto IL_0548;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handTrackedCurveLeft;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_3 = V_2;
			NullCheck(L_3);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_4 = L_3->get_animation_0();
			NullCheck(L_4);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_handTrackedCurveLeft_2();
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00a9:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handTrackedCurveRight;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_6 = V_2;
			NullCheck(L_6);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_7 = L_6->get_animation_0();
			NullCheck(L_7);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_handTrackedCurveRight_3();
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00cf:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handPinchCurveLeft;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_9 = V_2;
			NullCheck(L_9);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_10 = L_9->get_animation_0();
			NullCheck(L_10);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = L_10->get_handPinchCurveLeft_4();
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00f5:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handPinchCurveRight;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_12 = V_2;
			NullCheck(L_12);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_13 = L_12->get_animation_0();
			NullCheck(L_13);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_14 = L_13->get_handPinchCurveRight_5();
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(4);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_011b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_15 = V_2;
			NullCheck(L_15);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_16 = L_15->get_animation_0();
			NullCheck(L_16);
			Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_17 = L_16->get_handJointCurvesLeft_6();
			NullCheck(L_17);
			ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * L_18;
			L_18 = Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE(L_17, /*hidden argument*/Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE_RuntimeMethod_var);
			NullCheck(L_18);
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  L_19;
			L_19 = ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9(L_18, /*hidden argument*/ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0276;
		}

IL_014a:
		{
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_20 = __this->get_address_of_U3CU3E7__wrap1_3();
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_21;
			L_21 = Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_inline((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_20, /*hidden argument*/Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_4(L_21);
			// yield return curves.PositionX;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_22 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_22);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = L_22->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_23);
			__this->set_U3CU3E1__state_0(5);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_017a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionY;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_24 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_24);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = L_24->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_25);
			__this->set_U3CU3E1__state_0(6);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01a1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionZ;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_26 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_26);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = L_26->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(7);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01c8:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationX;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_28 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_28);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_29 = L_28->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(8);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01ef:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationY;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_30 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_30);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = L_30->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_31);
			__this->set_U3CU3E1__state_0(((int32_t)9));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0217:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationZ;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_32 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_32);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = L_32->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(((int32_t)10));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_023f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationW;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_34 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_34);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = L_34->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_35);
			__this->set_U3CU3E1__state_0(((int32_t)11));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0267:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// }
			__this->set_U3CcurvesU3E5__3_4((PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)NULL);
		}

IL_0276:
		{
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_36 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_37;
			L_37 = Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_36, /*hidden argument*/Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_014a;
			}
		}

IL_0286:
		{
			U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m15071590309BDA38BC4E086F928BE5CB7B401826(__this, /*hidden argument*/NULL);
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_38 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_38, sizeof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D ));
			// foreach (var curves in animation.handJointCurvesRight.Values)
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_39 = V_2;
			NullCheck(L_39);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_40 = L_39->get_animation_0();
			NullCheck(L_40);
			Dictionary_2_tE18E6F8AEE3E6EA8857BDF6FC502A313D651203F * L_41 = L_40->get_handJointCurvesRight_7();
			NullCheck(L_41);
			ValueCollection_t2BE9F02C69F56DDE33B68CD2541AD336FE3CAC0D * L_42;
			L_42 = Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE(L_41, /*hidden argument*/Dictionary_2_get_Values_mFCE0FDA65252DD1AE23C16004097D685655CBDFE_RuntimeMethod_var);
			NullCheck(L_42);
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D  L_43;
			L_43 = ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9(L_42, /*hidden argument*/ValueCollection_GetEnumerator_m2021875C18318EC1E1E9C71D3D3B26C1C4F6F5A9_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_43);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_03f0;
		}

IL_02c0:
		{
			// foreach (var curves in animation.handJointCurvesRight.Values)
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_44 = __this->get_address_of_U3CU3E7__wrap1_3();
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_45;
			L_45 = Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_inline((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_44, /*hidden argument*/Enumerator_get_Current_m200233FC808EF3710DBBE1DCA15514818B400996_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_4(L_45);
			// yield return curves.PositionX;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_46 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_46);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = L_46->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_47);
			__this->set_U3CU3E1__state_0(((int32_t)12));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_02f1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionY;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_48 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_48);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = L_48->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_49);
			__this->set_U3CU3E1__state_0(((int32_t)13));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0319:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionZ;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_50 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_50);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51 = L_50->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_51);
			__this->set_U3CU3E1__state_0(((int32_t)14));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0341:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationX;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_52 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_52);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_53 = L_52->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_53);
			__this->set_U3CU3E1__state_0(((int32_t)15));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0369:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationY;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_54 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_54);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_55 = L_54->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_55);
			__this->set_U3CU3E1__state_0(((int32_t)16));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0391:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationZ;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_56 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_56);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_57 = L_56->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_57);
			__this->set_U3CU3E1__state_0(((int32_t)17));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_03b9:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationW;
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_58 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_58);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_59 = L_58->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_59);
			__this->set_U3CU3E1__state_0(((int32_t)18));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_03e1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// }
			__this->set_U3CcurvesU3E5__3_4((PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 *)NULL);
		}

IL_03f0:
		{
			// foreach (var curves in animation.handJointCurvesRight.Values)
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_60 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_61;
			L_61 = Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_60, /*hidden argument*/Enumerator_MoveNext_mA8801FBB88098BDF50C70F807FD7CFAD0C3B8D32_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_02c0;
			}
		}

IL_0400:
		{
			U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1228F8CB33CCE966180B5D4F1C06DCB5F378EF1E(__this, /*hidden argument*/NULL);
			Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_62 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_62, sizeof(Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D ));
			// yield return animation.cameraCurves.PositionX;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_63 = V_2;
			NullCheck(L_63);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_64 = L_63->get_animation_0();
			NullCheck(L_64);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_65 = L_64->get_cameraCurves_8();
			NullCheck(L_65);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_66 = L_65->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_66);
			__this->set_U3CU3E1__state_0(((int32_t)19));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0437:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.PositionY;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_67 = V_2;
			NullCheck(L_67);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_68 = L_67->get_animation_0();
			NullCheck(L_68);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_69 = L_68->get_cameraCurves_8();
			NullCheck(L_69);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_70 = L_69->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_70);
			__this->set_U3CU3E1__state_0(((int32_t)20));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0463:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.PositionZ;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_71 = V_2;
			NullCheck(L_71);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_72 = L_71->get_animation_0();
			NullCheck(L_72);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_73 = L_72->get_cameraCurves_8();
			NullCheck(L_73);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_74 = L_73->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_74);
			__this->set_U3CU3E1__state_0(((int32_t)21));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_048f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationX;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_75 = V_2;
			NullCheck(L_75);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_76 = L_75->get_animation_0();
			NullCheck(L_76);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_77 = L_76->get_cameraCurves_8();
			NullCheck(L_77);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_78 = L_77->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_78);
			__this->set_U3CU3E1__state_0(((int32_t)22));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_04bb:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationY;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_79 = V_2;
			NullCheck(L_79);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_80 = L_79->get_animation_0();
			NullCheck(L_80);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_81 = L_80->get_cameraCurves_8();
			NullCheck(L_81);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_82 = L_81->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_82);
			__this->set_U3CU3E1__state_0(((int32_t)23));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_04e4:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationZ;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_83 = V_2;
			NullCheck(L_83);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_84 = L_83->get_animation_0();
			NullCheck(L_84);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_85 = L_84->get_cameraCurves_8();
			NullCheck(L_85);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_86 = L_85->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_86);
			__this->set_U3CU3E1__state_0(((int32_t)24));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_050d:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationW;
			AnimationCurveEnumerable_t41B4026A4C30A42C4361F744A88E684EBDD3D344 * L_87 = V_2;
			NullCheck(L_87);
			InputAnimation_t0B8EDE04C4D3BF6A7CD8BB70E61F62814C2DDA6C * L_88 = L_87->get_animation_0();
			NullCheck(L_88);
			PoseCurves_t7C8B9E29080B0F5DFEE30529CE1EF104958C66A0 * L_89 = L_88->get_cameraCurves_8();
			NullCheck(L_89);
			AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_90 = L_89->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_90);
			__this->set_U3CU3E1__state_0(((int32_t)25));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0536:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_0548;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0541;
	}

FAULT_0541:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m97509470ACFA7F690F0D888AA70D835401EB2475(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1345)
	} // end fault
	IL2CPP_CLEANUP(1345)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0548:
	{
		bool L_91 = V_0;
		return L_91;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m15071590309BDA38BC4E086F928BE5CB7B401826 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_0, /*hidden argument*/Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1228F8CB33CCE966180B5D4F1C06DCB5F378EF1E (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563((Enumerator_tCB1235A424A6487B9E943D6601FCDF968087837D *)L_0, /*hidden argument*/Enumerator_Dispose_m9EACEA508B2B1C0F4D6513D57557C8F993265563_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.AnimationCurve>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_AnimationCurveU3E_get_Current_mC595BACBF794B5DB61F7FB392ED48E7792F09A8C (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mBF9D30CEDB790B5F8791C77D7C1BEE7D78AA4510 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mBF9D30CEDB790B5F8791C77D7C1BEE7D78AA4510_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m067B0AD01752004F8AFF7E9C94C5655B18EA8817 (U3CGetEnumeratorU3Ed__2_t16F8A9D5BC51823F665AD5E0335A91963A1F8A3A * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m86B31394DA860AE86C70CDC30863B53585FD4631_inline (MixedRealityPose_t810B8437A86F9617F95B288DAA92BD0C5EA729FD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_position_1();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float* ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, const RuntimeMethod* method)
{
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m23B56B716466DB8582FCE8AC02EF094AA1C6C2F5(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (float*)L_2, /*hidden argument*/NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(57.2957802f)));
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_mF26EAD69D80151F2908E5A1858E50E97E039E971_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsEnabled_m32C7C305AC9390E019994B5C1D494E165349C251_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsEnabledU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_m7B2DE8550FD23A877B5E874E64671971986B0B28_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_mEA51DA1C8C6E8DFE5F71476373DAF5159F1FA467_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->get_useBufferTimeLimit_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsEnabled_m6F9EF08B9A97A52176D86DFA0CD10A6576BFD6D4_inline (InputRecordingService_tD0CA4EAFB0A450732762E858A556A75F8CCFC559 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = __this->get_U3CIsEnabledU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mACD9A52883030175D5E4C54B503A57F44464EA94_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->get_cameraPositionThreshold_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_mC01F77E6DFEF7373D2FBF7886BAD861BCDAE1B3E_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->get_cameraRotationThreshold_8();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m44324D45B94AE108D5B804FC55653A8A9823ACA7_inline (MixedRealityInteractionMapping_tC3C42B56A76A38BF6DDF521ABE9679127F2F920A * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m646DD76D18712003021018D8CA456D58C02DC653_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->get_jointPositionThreshold_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m08BDCDD4C34D437FCED0FAF0F38499ABBDCA8E02_inline (MixedRealityInputRecordingProfile_t655001BE28B40C0F5B12BBA678A263D63C32D0D2 * __this, const RuntimeMethod* method)
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->get_jointRotationThreshold_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m8C3C8F35C8738574E1BBAF5850C6504FE146314D_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6C2AF5B57480AE0440F937EF9A50D3803ED850EE_gshared_inline (Enumerator_tEA3EEAFB01FCAEC65CD249CE8B28073BA94302C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
