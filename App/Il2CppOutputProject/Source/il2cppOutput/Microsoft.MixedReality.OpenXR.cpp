#include "pch-cpp.hpp"

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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Microsoft.MixedReality.OpenXR.Feature>
struct Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>
struct Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>>
struct Func_2_tCD34F9C217A587EC720EE187D0C00AFDE0D9C352;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t4BFDAEC6A4D96827E7D4D0B2E85EB1AFA1911939;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature>
struct List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>
struct List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>
struct TaskFactory_1_tCE6910A685821856D830ECB50939CE4B1FFA9BCA;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>
struct Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D;
// UnityEngine.XR.ARSubsystems.BoundedPlane[]
struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.OpenXR.Feature[]
struct FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E;
// Microsoft.MixedReality.OpenXR.Preview.HandJointLocation[]
struct HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.XR.ARSubsystems.XRAnchor[]
struct XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor[]
struct XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor[]
struct XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C;
// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo[]
struct PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.OpenXR.AnchorFeature
struct AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5;
// Microsoft.MixedReality.OpenXR.AnchorSubsystem
struct AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Remoting.EditorRemotingPlugin
struct EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927;
// Microsoft.MixedReality.OpenXR.Feature
struct Feature_t3DD634385138DF52E05906E76F0A941A462684D6;
// Microsoft.MixedReality.OpenXR.Preview.HandTracker
struct HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.OpenXR.IOpenXRContext
struct IOpenXRContext_t5808DF5129EB4899154535E1644E532A81C7D3E2;
// Microsoft.MixedReality.OpenXR.IOpenXRPlugin
struct IOpenXRPlugin_tED12B305B9339651E339860FF69F4FAD9FE97D94;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.OpenXR.InputFeature
struct InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.NativeLib
struct NativeLib_t68F97940F4059BB16739A055C778B459C6FEE023;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// Microsoft.MixedReality.OpenXR.OpenXRPlugin
struct OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A;
// Microsoft.MixedReality.OpenXR.PlaneFeature
struct PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6;
// Microsoft.MixedReality.OpenXR.PlaneSubsystem
struct PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// Microsoft.MixedReality.Remoting.RemotingConfiguration
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.ARSubsystems.XRAnchorStore
struct XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483;
// Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider
struct OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A;
// Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c
struct U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637;
// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider
struct OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo
struct PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOpenXRContext_t5808DF5129EB4899154535E1644E532A81C7D3E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15D229CCB9EE57E65A7B6F81B08CC2969602FBBD;
IL2CPP_EXTERN_C String_t* _stringLiteral17255C0C7BE61CCA680B015C2FEB441A9438ADB2;
IL2CPP_EXTERN_C String_t* _stringLiteral45A8EE78E4EA62349F584BB9B715140A155CBF1E;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5A85EFD42691B34C206731BBB996EDF8D80AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral64D4AC4FD4C9AD6674BEAD1311883F7835BDC60E;
IL2CPP_EXTERN_C String_t* _stringLiteralAD470D4BC1B87E3C41932ED90D9F98F656BA7EF2;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D89F99579B34626BB2B9805F09AFA6F281C998;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB514132682C349F9AD00BA8E587F43AD49524D;
IL2CPP_EXTERN_C String_t* _stringLiteralED4E457533F8964B68A16C0089B1FCC58DB549C6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA878D8DF907C6773F369EFDC51A644D9C486C2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCD5B5DAB1E31A1CC1E047E17856CFA4D2A059EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m56F8BE503AE7C9DB8AAE8D626C6D6F4531AB8043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE6DB5550426510C25C33252A2E4ED3D33150CCF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3BFB2939531F618755007F7F8817C38A874BB573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m968491FE43D8C36A6D126D1D08105D15E6C6370A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m86A5F9E07ABC058C5CC863FC74941D427C43D71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTracker_TryLocateHandJoints_m31018836C968F00A94E9D257F270193BCE6A0D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_CreateSubsystem_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mB9E5EC96167EFA12B3E54711325EB6EE19D45D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_CreateSubsystem_TisXRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m6D903CE8726C926F330E19FE1F80DE23D907EB89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_DestroySubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m1F51DE57A527583817F01F7C1539AA975B0ADA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_DestroySubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m4939095B974BFFF24AEEDA597EA5B8AFA922D42F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_StartSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m4F442B4CA8987B062476B81CB1C1D39F594088C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_StartSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_mA114CD229CBADB122D276DE4825790122423EC08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_StopSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mD0F63A4DAC2668338EC26A680E8C07F72CD7C1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOpenXRPlugin_StopSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m47FA07393E860013D34E7BA1588AA1C7144E0041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1_Create_m169D248A46C0AE550EA071E052019B0AA2FF4F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m37BD5C93230E6FBFB619748D4F2EE148651030FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m479F109DDA5193FE42E2459254CFF1145F98402B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C2563CC03D80DE3B21F33372431FBFBFEF25330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6F75B128B399FA1DECE08843C1E53FB9FC2795E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA1C0A5D5DB5350033CB1DA214245379FF9D2196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_mD14A53DE4D3BE78F17E4FE9F2C27331DE9A83AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisXRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_m86511A3A33EFC14B9E0BEA341C376A807227BC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadAnchorStoreAsyncU3Eb__1_0_m177E88D3BAF525107A6E7D47CA05E037EBCC2089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1;;
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke;
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke;;

struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271;
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8876CD480381024BEA7E42B0C52F8785DD87E66A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  EmptyArray_1_tB256FDDC5C63B3891D68CA9AD71F4EB40499E9DA  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tB256FDDC5C63B3891D68CA9AD71F4EB40499E9DA_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tB256FDDC5C63B3891D68CA9AD71F4EB40499E9DA_StaticFields, ___Value_0)); }
	inline BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* get_Value_0() const { return ___Value_0; }
	inline BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  EmptyArray_1_tA26093340F34517171F73FCBBBD8E6E68DE5EEDB  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tA26093340F34517171F73FCBBBD8E6E68DE5EEDB_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tA26093340F34517171F73FCBBBD8E6E68DE5EEDB_StaticFields, ___Value_0)); }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* get_Value_0() const { return ___Value_0; }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  EmptyArray_1_tD2FD4600C96B03EFE204B209D01F0733468E7421  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tD2FD4600C96B03EFE204B209D01F0733468E7421_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tD2FD4600C96B03EFE204B209D01F0733468E7421_StaticFields, ___Value_0)); }
	inline XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* get_Value_0() const { return ___Value_0; }
	inline XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature>
struct  List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660, ____items_1)); }
	inline FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* get__items_1() const { return ____items_1; }
	inline FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660_StaticFields, ____emptyArray_5)); }
	inline FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FeatureU5BU5D_t19823569A3C56DDFB7663636B919946A88B15F6E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct  List_1_tDED98C236097B36F9015B396398179A6F8A62E50  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____items_1)); }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* get__items_1() const { return ____items_1; }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50_StaticFields, ____emptyArray_5)); }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F, ____items_1)); }
	inline XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* get__items_1() const { return ____items_1; }
	inline XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F_StaticFields, ____emptyArray_5)); }
	inline XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRPlaneSubsystemDescriptorU5BU5D_t4A0906844AC7C86EDCB3EFD443AABF8C777BAD9C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>
struct  List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A, ____items_1)); }
	inline PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* get__items_1() const { return ____items_1; }
	inline PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A_StaticFields, ____emptyArray_5)); }
	inline PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlaneInfoU5BU5D_t714ED3224F9B64694747EA18D992B3AF9CC1CEDC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions
struct  AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90  : public RuntimeObject
{
public:

public:
};

struct AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore> Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions::anchorStoreLoadTask
	Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * ___anchorStoreLoadTask_0;

public:
	inline static int32_t get_offset_of_anchorStoreLoadTask_0() { return static_cast<int32_t>(offsetof(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_StaticFields, ___anchorStoreLoadTask_0)); }
	inline Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * get_anchorStoreLoadTask_0() const { return ___anchorStoreLoadTask_0; }
	inline Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D ** get_address_of_anchorStoreLoadTask_0() { return &___anchorStoreLoadTask_0; }
	inline void set_anchorStoreLoadTask_0(Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * value)
	{
		___anchorStoreLoadTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorStoreLoadTask_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.OpenXR.Feature
struct  Feature_t3DD634385138DF52E05906E76F0A941A462684D6  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.Feature::<Context>k__BackingField
	RuntimeObject* ___U3CContextU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Feature_t3DD634385138DF52E05906E76F0A941A462684D6, ___U3CContextU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CContextU3Ek__BackingField_0() const { return ___U3CContextU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CContextU3Ek__BackingField_0() { return &___U3CContextU3Ek__BackingField_0; }
	inline void set_U3CContextU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CContextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContextU3Ek__BackingField_0), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.FeatureUtils
struct  FeatureUtils_tDC3FF12AF012D64B3A3F348BFBE38C26A04114A3  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.NativeLib
struct  NativeLib_t68F97940F4059BB16739A055C778B459C6FEE023  : public RuntimeObject
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct  SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct  SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// Microsoft.MixedReality.ARSubsystems.XRAnchorStore
struct  XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.ARSubsystems.XRAnchorStore::m_persistedAnchorNamesCache
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_persistedAnchorNamesCache_0;
	// System.Boolean Microsoft.MixedReality.ARSubsystems.XRAnchorStore::m_persistedAnchorNamesCacheDirty
	bool ___m_persistedAnchorNamesCacheDirty_1;
	// System.Object Microsoft.MixedReality.ARSubsystems.XRAnchorStore::m_persistedAnchorNamesCacheLock
	RuntimeObject * ___m_persistedAnchorNamesCacheLock_2;

public:
	inline static int32_t get_offset_of_m_persistedAnchorNamesCache_0() { return static_cast<int32_t>(offsetof(XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B, ___m_persistedAnchorNamesCache_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_persistedAnchorNamesCache_0() const { return ___m_persistedAnchorNamesCache_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_persistedAnchorNamesCache_0() { return &___m_persistedAnchorNamesCache_0; }
	inline void set_m_persistedAnchorNamesCache_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_persistedAnchorNamesCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistedAnchorNamesCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_persistedAnchorNamesCacheDirty_1() { return static_cast<int32_t>(offsetof(XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B, ___m_persistedAnchorNamesCacheDirty_1)); }
	inline bool get_m_persistedAnchorNamesCacheDirty_1() const { return ___m_persistedAnchorNamesCacheDirty_1; }
	inline bool* get_address_of_m_persistedAnchorNamesCacheDirty_1() { return &___m_persistedAnchorNamesCacheDirty_1; }
	inline void set_m_persistedAnchorNamesCacheDirty_1(bool value)
	{
		___m_persistedAnchorNamesCacheDirty_1 = value;
	}

	inline static int32_t get_offset_of_m_persistedAnchorNamesCacheLock_2() { return static_cast<int32_t>(offsetof(XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B, ___m_persistedAnchorNamesCacheLock_2)); }
	inline RuntimeObject * get_m_persistedAnchorNamesCacheLock_2() const { return ___m_persistedAnchorNamesCacheLock_2; }
	inline RuntimeObject ** get_address_of_m_persistedAnchorNamesCacheLock_2() { return &___m_persistedAnchorNamesCacheLock_2; }
	inline void set_m_persistedAnchorNamesCacheLock_2(RuntimeObject * value)
	{
		___m_persistedAnchorNamesCacheLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistedAnchorNamesCacheLock_2), (void*)value);
	}
};


// Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c
struct  U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields
{
public:
	// Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::<>9
	U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * ___U3CU3E9_0;
	// System.Func`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore> Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::<>9__1_0
	Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A, ___list_0)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_list_0() const { return ___list_0; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A, ___current_3)); }
	inline XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * get_current_3() const { return ___current_3; }
	inline XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>
struct  Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81, ___list_0)); }
	inline List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * get_list_0() const { return ___list_0; }
	inline List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81, ___current_3)); }
	inline PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * get_current_3() const { return ___current_3; }
	inline PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct  SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.AnchorFeature
struct  AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5  : public Feature_t3DD634385138DF52E05906E76F0A941A462684D6
{
public:

public:
};

struct AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor> Microsoft.MixedReality.OpenXR.AnchorFeature::s_AnchorDescriptors
	List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * ___s_AnchorDescriptors_1;

public:
	inline static int32_t get_offset_of_s_AnchorDescriptors_1() { return static_cast<int32_t>(offsetof(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_StaticFields, ___s_AnchorDescriptors_1)); }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * get_s_AnchorDescriptors_1() const { return ___s_AnchorDescriptors_1; }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 ** get_address_of_s_AnchorDescriptors_1() { return &___s_AnchorDescriptors_1; }
	inline void set_s_AnchorDescriptors_1(List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * value)
	{
		___s_AnchorDescriptors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AnchorDescriptors_1), (void*)value);
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.InputFeature
struct  InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F  : public Feature_t3DD634385138DF52E05906E76F0A941A462684D6
{
public:
	// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.OpenXR.InputFeature::m_inputExtensionSubsystem
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___m_inputExtensionSubsystem_2;

public:
	inline static int32_t get_offset_of_m_inputExtensionSubsystem_2() { return static_cast<int32_t>(offsetof(InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F, ___m_inputExtensionSubsystem_2)); }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * get_m_inputExtensionSubsystem_2() const { return ___m_inputExtensionSubsystem_2; }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 ** get_address_of_m_inputExtensionSubsystem_2() { return &___m_inputExtensionSubsystem_2; }
	inline void set_m_inputExtensionSubsystem_2(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * value)
	{
		___m_inputExtensionSubsystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_inputExtensionSubsystem_2), (void*)value);
	}
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


// Microsoft.MixedReality.OpenXR.PlaneFeature
struct  PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6  : public Feature_t3DD634385138DF52E05906E76F0A941A462684D6
{
public:

public:
};

struct PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor> Microsoft.MixedReality.OpenXR.PlaneFeature::s_PlaneDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_PlaneDescriptors_1;

public:
	inline static int32_t get_offset_of_s_PlaneDescriptors_1() { return static_cast<int32_t>(offsetof(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_StaticFields, ___s_PlaneDescriptors_1)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_PlaneDescriptors_1() const { return ___s_PlaneDescriptors_1; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_PlaneDescriptors_1() { return &___s_PlaneDescriptors_1; }
	inline void set_s_PlaneDescriptors_1(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_PlaneDescriptors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PlaneDescriptors_1), (void*)value);
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct  Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_8() const { return ___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_8() { return &___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94  : public SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
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

// Microsoft.MixedReality.OpenXR.Preview.FrameTime
struct  FrameTime_t641692FD22D2547724BDB7B3619A5EA1F802F6D1 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Preview.FrameTime::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameTime_t641692FD22D2547724BDB7B3619A5EA1F802F6D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.HandJoint
struct  HandJoint_t2F4F7A8C91EE2DA51296F3F3AAE5045C13CFCBE8 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Preview.HandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJoint_t2F4F7A8C91EE2DA51296F3F3AAE5045C13CFCBE8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.HandPoseType
struct  HandPoseType_tD9014D9AB08446F0B8F164985920A7176786B94E 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Preview.HandPoseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandPoseType_tD9014D9AB08446F0B8F164985920A7176786B94E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.Handedness
struct  Handedness_t9360AAFF3BF730305410EFF2457CA41F2FC8B730 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Preview.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t9360AAFF3BF730305410EFF2457CA41F2FC8B730, ___value___2)); }
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

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.OpenXR.NativeAnchor
#pragma pack(push, tp, 8)
struct  NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 
{
public:
	// System.Guid Microsoft.MixedReality.OpenXR.NativeAnchor::id
	Guid_t  ___id_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.NativeAnchor::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.NativeAnchor::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;
	// System.Int64 Microsoft.MixedReality.OpenXR.NativeAnchor::nativePtr
	int64_t ___nativePtr_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09, ___id_0)); }
	inline Guid_t  get_id_0() const { return ___id_0; }
	inline Guid_t * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(Guid_t  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_nativePtr_3() { return static_cast<int32_t>(offsetof(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09, ___nativePtr_3)); }
	inline int64_t get_nativePtr_3() const { return ___nativePtr_3; }
	inline int64_t* get_address_of_nativePtr_3() { return &___nativePtr_3; }
	inline void set_nativePtr_3(int64_t value)
	{
		___nativePtr_3 = value;
	}
};
#pragma pack(pop, tp)


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativePlane
#pragma pack(push, tp, 8)
struct  NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA 
{
public:
	// System.Guid Microsoft.MixedReality.OpenXR.NativePlane::id
	Guid_t  ___id_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.NativePlane::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.NativePlane::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.NativePlane::boundaryPoint0
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___boundaryPoint0_3;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.NativePlane::boundaryPoint1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___boundaryPoint1_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.NativePlane::boundaryPoint2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___boundaryPoint2_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.NativePlane::boundaryPoint3
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___boundaryPoint3_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___id_0)); }
	inline Guid_t  get_id_0() const { return ___id_0; }
	inline Guid_t * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(Guid_t  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_boundaryPoint0_3() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___boundaryPoint0_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_boundaryPoint0_3() const { return ___boundaryPoint0_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_boundaryPoint0_3() { return &___boundaryPoint0_3; }
	inline void set_boundaryPoint0_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___boundaryPoint0_3 = value;
	}

	inline static int32_t get_offset_of_boundaryPoint1_4() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___boundaryPoint1_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_boundaryPoint1_4() const { return ___boundaryPoint1_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_boundaryPoint1_4() { return &___boundaryPoint1_4; }
	inline void set_boundaryPoint1_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___boundaryPoint1_4 = value;
	}

	inline static int32_t get_offset_of_boundaryPoint2_5() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___boundaryPoint2_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_boundaryPoint2_5() const { return ___boundaryPoint2_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_boundaryPoint2_5() { return &___boundaryPoint2_5; }
	inline void set_boundaryPoint2_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___boundaryPoint2_5 = value;
	}

	inline static int32_t get_offset_of_boundaryPoint3_6() { return static_cast<int32_t>(offsetof(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA, ___boundaryPoint3_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_boundaryPoint3_6() const { return ___boundaryPoint3_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_boundaryPoint3_6() { return &___boundaryPoint3_6; }
	inline void set_boundaryPoint3_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___boundaryPoint3_6 = value;
	}
};
#pragma pack(pop, tp)


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

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct  PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.PoseFlags
struct  PoseFlags_t1148F2477DC15F8C90C5A712E559624AF5810B19 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.Preview.PoseFlags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseFlags_t1148F2477DC15F8C90C5A712E559624AF5810B19, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Remoting.RemotingVideoCodec
struct  RemotingVideoCodec_tE779522874B1B198C4E831CB74FD3B2EFD9E9E81 
{
public:
	// System.Int32 Microsoft.MixedReality.Remoting.RemotingVideoCodec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemotingVideoCodec_tE779522874B1B198C4E831CB74FD3B2EFD9E9E81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.XrSessionState
struct  XrSessionState_tF6919AF152BB72E3872C51FEACD0A4B4261B5C09 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.XrSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrSessionState_tF6919AF152BB72E3872C51FEACD0A4B4261B5C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct  IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Guid>
struct  NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativeAnchor>
struct  NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>
struct  NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>
struct  Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D, ___m_result_22)); }
	inline XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * get_m_result_22() const { return ___m_result_22; }
	inline XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCE6910A685821856D830ECB50939CE4B1FFA9BCA * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tCD34F9C217A587EC720EE187D0C00AFDE0D9C352 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCE6910A685821856D830ECB50939CE4B1FFA9BCA * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCE6910A685821856D830ECB50939CE4B1FFA9BCA ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCE6910A685821856D830ECB50939CE4B1FFA9BCA * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tCD34F9C217A587EC720EE187D0C00AFDE0D9C352 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tCD34F9C217A587EC720EE187D0C00AFDE0D9C352 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tCD34F9C217A587EC720EE187D0C00AFDE0D9C352 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.HandJointLocation
struct  HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 
{
public:
	// Microsoft.MixedReality.OpenXR.Preview.PoseFlags Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::<PoseFlags>k__BackingField
	uint64_t ___U3CPoseFlagsU3Ek__BackingField_0;
	// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::<Rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRotationU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::<Position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionU3Ek__BackingField_2;
	// System.Single Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPoseFlagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864, ___U3CPoseFlagsU3Ek__BackingField_0)); }
	inline uint64_t get_U3CPoseFlagsU3Ek__BackingField_0() const { return ___U3CPoseFlagsU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CPoseFlagsU3Ek__BackingField_0() { return &___U3CPoseFlagsU3Ek__BackingField_0; }
	inline void set_U3CPoseFlagsU3Ek__BackingField_0(uint64_t value)
	{
		___U3CPoseFlagsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864, ___U3CRotationU3Ek__BackingField_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRotationU3Ek__BackingField_1() const { return ___U3CRotationU3Ek__BackingField_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRotationU3Ek__BackingField_1() { return &___U3CRotationU3Ek__BackingField_1; }
	inline void set_U3CRotationU3Ek__BackingField_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRotationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864, ___U3CPositionU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionU3Ek__BackingField_2() const { return ___U3CPositionU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionU3Ek__BackingField_2() { return &___U3CPositionU3Ek__BackingField_2; }
	inline void set_U3CPositionU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864, ___U3CRadiusU3Ek__BackingField_3)); }
	inline float get_U3CRadiusU3Ek__BackingField_3() const { return ___U3CRadiusU3Ek__BackingField_3; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_3() { return &___U3CRadiusU3Ek__BackingField_3; }
	inline void set_U3CRadiusU3Ek__BackingField_3(float value)
	{
		___U3CRadiusU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Preview.HandTracker
struct  HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.Preview.Handedness Microsoft.MixedReality.OpenXR.Preview.HandTracker::handedness
	int32_t ___handedness_0;
	// Microsoft.MixedReality.OpenXR.Preview.HandPoseType Microsoft.MixedReality.OpenXR.Preview.HandTracker::handPoseType
	int32_t ___handPoseType_1;

public:
	inline static int32_t get_offset_of_handedness_0() { return static_cast<int32_t>(offsetof(HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC, ___handedness_0)); }
	inline int32_t get_handedness_0() const { return ___handedness_0; }
	inline int32_t* get_address_of_handedness_0() { return &___handedness_0; }
	inline void set_handedness_0(int32_t value)
	{
		___handedness_0 = value;
	}

	inline static int32_t get_offset_of_handPoseType_1() { return static_cast<int32_t>(offsetof(HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC, ___handPoseType_1)); }
	inline int32_t get_handPoseType_1() const { return ___handPoseType_1; }
	inline int32_t* get_address_of_handPoseType_1() { return &___handPoseType_1; }
	inline void set_handPoseType_1(int32_t value)
	{
		___handPoseType_1 = value;
	}
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

// Microsoft.MixedReality.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1 
{
public:
	// System.UInt16 Microsoft.MixedReality.Remoting.RemotingConfiguration::HostPort
	uint16_t ___HostPort_0;
	// System.UInt32 Microsoft.MixedReality.Remoting.RemotingConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_1;
	// Microsoft.MixedReality.Remoting.RemotingVideoCodec Microsoft.MixedReality.Remoting.RemotingConfiguration::VideoCodec
	int32_t ___VideoCodec_2;
	// System.Boolean Microsoft.MixedReality.Remoting.RemotingConfiguration::EnableAudio
	bool ___EnableAudio_3;

public:
	inline static int32_t get_offset_of_HostPort_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1, ___HostPort_0)); }
	inline uint16_t get_HostPort_0() const { return ___HostPort_0; }
	inline uint16_t* get_address_of_HostPort_0() { return &___HostPort_0; }
	inline void set_HostPort_0(uint16_t value)
	{
		___HostPort_0 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1, ___MaxBitrateKbps_1)); }
	inline uint32_t get_MaxBitrateKbps_1() const { return ___MaxBitrateKbps_1; }
	inline uint32_t* get_address_of_MaxBitrateKbps_1() { return &___MaxBitrateKbps_1; }
	inline void set_MaxBitrateKbps_1(uint32_t value)
	{
		___MaxBitrateKbps_1 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1, ___VideoCodec_2)); }
	inline int32_t get_VideoCodec_2() const { return ___VideoCodec_2; }
	inline int32_t* get_address_of_VideoCodec_2() { return &___VideoCodec_2; }
	inline void set_VideoCodec_2(int32_t value)
	{
		___VideoCodec_2 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1, ___EnableAudio_3)); }
	inline bool get_EnableAudio_3() const { return ___EnableAudio_3; }
	inline bool* get_address_of_EnableAudio_3() { return &___EnableAudio_3; }
	inline void set_EnableAudio_3(bool value)
	{
		___EnableAudio_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Remoting.RemotingConfiguration
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke
{
	uint16_t ___HostPort_0;
	uint32_t ___MaxBitrateKbps_1;
	int32_t ___VideoCodec_2;
	int32_t ___EnableAudio_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Remoting.RemotingConfiguration
struct RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_com
{
	uint16_t ___HostPort_0;
	uint32_t ___MaxBitrateKbps_1;
	int32_t ___VideoCodec_2;
	int32_t ___EnableAudio_3;
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


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct  XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE  : public TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider
struct  OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A  : public Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider
struct  OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86  : public Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo> Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::m_planes
	List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * ___m_planes_1;

public:
	inline static int32_t get_offset_of_m_planes_1() { return static_cast<int32_t>(offsetof(OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86, ___m_planes_1)); }
	inline List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * get_m_planes_1() const { return ___m_planes_1; }
	inline List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A ** get_address_of_m_planes_1() { return &___m_planes_1; }
	inline void set_m_planes_1(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * value)
	{
		___m_planes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_planes_1), (void*)value);
	}
};


// System.Action`1<Microsoft.MixedReality.OpenXR.Feature>
struct  Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>
struct  Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Added_1)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Updated_2)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.AnchorSubsystem
struct  AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37  : public XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct  OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_10;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_11;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_12;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_9)); }
	inline String_t* get_openxrExtensionStrings_9() const { return ___openxrExtensionStrings_9; }
	inline String_t** get_address_of_openxrExtensionStrings_9() { return &___openxrExtensionStrings_9; }
	inline void set_openxrExtensionStrings_9(String_t* value)
	{
		___openxrExtensionStrings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_9), (void*)value);
	}

	inline static int32_t get_offset_of_company_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_10)); }
	inline String_t* get_company_10() const { return ___company_10; }
	inline String_t** get_address_of_company_10() { return &___company_10; }
	inline void set_company_10(String_t* value)
	{
		___company_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_10), (void*)value);
	}

	inline static int32_t get_offset_of_priority_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_11)); }
	inline int32_t get_priority_11() const { return ___priority_11; }
	inline int32_t* get_address_of_priority_11() { return &___priority_11; }
	inline void set_priority_11(int32_t value)
	{
		___priority_11 = value;
	}

	inline static int32_t get_offset_of_required_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_12)); }
	inline bool get_required_12() const { return ___required_12; }
	inline bool* get_address_of_required_12() { return &___required_12; }
	inline void set_required_12(bool value)
	{
		___required_12 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.OpenXR.PlaneSubsystem
struct  PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974  : public XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystemDescriptor
struct  XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2  : public IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo
struct  PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C  : public RuntimeObject
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo::plane
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___plane_0;
	// UnityEngine.Vector2[] Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo::boundaryPoints
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___boundaryPoints_1;

public:
	inline static int32_t get_offset_of_plane_0() { return static_cast<int32_t>(offsetof(PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C, ___plane_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_plane_0() const { return ___plane_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_plane_0() { return &___plane_0; }
	inline void set_plane_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___plane_0 = value;
	}

	inline static int32_t get_offset_of_boundaryPoints_1() { return static_cast<int32_t>(offsetof(PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C, ___boundaryPoints_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_boundaryPoints_1() const { return ___boundaryPoints_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_boundaryPoints_1() { return &___boundaryPoints_1; }
	inline void set_boundaryPoints_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___boundaryPoints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryPoints_1), (void*)value);
	}
};


// Microsoft.MixedReality.Remoting.EditorRemotingPlugin
struct  EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:
	// System.String Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_remoteHostName
	String_t* ___m_remoteHostName_16;
	// System.UInt16 Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_remoteHostPort
	uint16_t ___m_remoteHostPort_17;
	// System.UInt32 Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_maxBitrate
	uint32_t ___m_maxBitrate_18;
	// Microsoft.MixedReality.Remoting.RemotingVideoCodec Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_videoCodec
	int32_t ___m_videoCodec_19;
	// System.Boolean Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_enableAudio
	bool ___m_enableAudio_20;
	// System.Boolean Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_remotingExtensionEnabled
	bool ___m_remotingExtensionEnabled_21;
	// System.Boolean Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_runtimeOverrideAttempted
	bool ___m_runtimeOverrideAttempted_22;
	// System.Boolean Microsoft.MixedReality.Remoting.EditorRemotingPlugin::m_editorRemotingEnabled
	bool ___m_editorRemotingEnabled_23;

public:
	inline static int32_t get_offset_of_m_remoteHostName_16() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_remoteHostName_16)); }
	inline String_t* get_m_remoteHostName_16() const { return ___m_remoteHostName_16; }
	inline String_t** get_address_of_m_remoteHostName_16() { return &___m_remoteHostName_16; }
	inline void set_m_remoteHostName_16(String_t* value)
	{
		___m_remoteHostName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_remoteHostName_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_remoteHostPort_17() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_remoteHostPort_17)); }
	inline uint16_t get_m_remoteHostPort_17() const { return ___m_remoteHostPort_17; }
	inline uint16_t* get_address_of_m_remoteHostPort_17() { return &___m_remoteHostPort_17; }
	inline void set_m_remoteHostPort_17(uint16_t value)
	{
		___m_remoteHostPort_17 = value;
	}

	inline static int32_t get_offset_of_m_maxBitrate_18() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_maxBitrate_18)); }
	inline uint32_t get_m_maxBitrate_18() const { return ___m_maxBitrate_18; }
	inline uint32_t* get_address_of_m_maxBitrate_18() { return &___m_maxBitrate_18; }
	inline void set_m_maxBitrate_18(uint32_t value)
	{
		___m_maxBitrate_18 = value;
	}

	inline static int32_t get_offset_of_m_videoCodec_19() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_videoCodec_19)); }
	inline int32_t get_m_videoCodec_19() const { return ___m_videoCodec_19; }
	inline int32_t* get_address_of_m_videoCodec_19() { return &___m_videoCodec_19; }
	inline void set_m_videoCodec_19(int32_t value)
	{
		___m_videoCodec_19 = value;
	}

	inline static int32_t get_offset_of_m_enableAudio_20() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_enableAudio_20)); }
	inline bool get_m_enableAudio_20() const { return ___m_enableAudio_20; }
	inline bool* get_address_of_m_enableAudio_20() { return &___m_enableAudio_20; }
	inline void set_m_enableAudio_20(bool value)
	{
		___m_enableAudio_20 = value;
	}

	inline static int32_t get_offset_of_m_remotingExtensionEnabled_21() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_remotingExtensionEnabled_21)); }
	inline bool get_m_remotingExtensionEnabled_21() const { return ___m_remotingExtensionEnabled_21; }
	inline bool* get_address_of_m_remotingExtensionEnabled_21() { return &___m_remotingExtensionEnabled_21; }
	inline void set_m_remotingExtensionEnabled_21(bool value)
	{
		___m_remotingExtensionEnabled_21 = value;
	}

	inline static int32_t get_offset_of_m_runtimeOverrideAttempted_22() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_runtimeOverrideAttempted_22)); }
	inline bool get_m_runtimeOverrideAttempted_22() const { return ___m_runtimeOverrideAttempted_22; }
	inline bool* get_address_of_m_runtimeOverrideAttempted_22() { return &___m_runtimeOverrideAttempted_22; }
	inline void set_m_runtimeOverrideAttempted_22(bool value)
	{
		___m_runtimeOverrideAttempted_22 = value;
	}

	inline static int32_t get_offset_of_m_editorRemotingEnabled_23() { return static_cast<int32_t>(offsetof(EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927, ___m_editorRemotingEnabled_23)); }
	inline bool get_m_editorRemotingEnabled_23() const { return ___m_editorRemotingEnabled_23; }
	inline bool* get_address_of_m_editorRemotingEnabled_23() { return &___m_editorRemotingEnabled_23; }
	inline void set_m_editorRemotingEnabled_23(bool value)
	{
		___m_editorRemotingEnabled_23 = value;
	}
};


// Microsoft.MixedReality.OpenXR.OpenXRPlugin
struct  OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:
	// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::m_planeFinding
	bool ___m_planeFinding_15;
	// Microsoft.MixedReality.OpenXR.InputFeature Microsoft.MixedReality.OpenXR.OpenXRPlugin::m_inputFeature
	InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * ___m_inputFeature_16;
	// Microsoft.MixedReality.OpenXR.PlaneFeature Microsoft.MixedReality.OpenXR.OpenXRPlugin::m_planeFeature
	PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * ___m_planeFeature_17;
	// Microsoft.MixedReality.OpenXR.AnchorFeature Microsoft.MixedReality.OpenXR.OpenXRPlugin::m_anchorFeature
	AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * ___m_anchorFeature_18;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature> Microsoft.MixedReality.OpenXR.OpenXRPlugin::m_features
	List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * ___m_features_19;
	// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::<Instance>k__BackingField
	uint64_t ___U3CInstanceU3Ek__BackingField_21;
	// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::<SystemId>k__BackingField
	uint64_t ___U3CSystemIdU3Ek__BackingField_22;
	// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::<Session>k__BackingField
	uint64_t ___U3CSessionU3Ek__BackingField_23;
	// Microsoft.MixedReality.OpenXR.XrSessionState Microsoft.MixedReality.OpenXR.OpenXRPlugin::<SessionState>k__BackingField
	int32_t ___U3CSessionStateU3Ek__BackingField_24;
	// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::<ReferenceSpace>k__BackingField
	uint64_t ___U3CReferenceSpaceU3Ek__BackingField_25;
	// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::<IsAnchorExtensionSupported>k__BackingField
	bool ___U3CIsAnchorExtensionSupportedU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_planeFinding_15() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___m_planeFinding_15)); }
	inline bool get_m_planeFinding_15() const { return ___m_planeFinding_15; }
	inline bool* get_address_of_m_planeFinding_15() { return &___m_planeFinding_15; }
	inline void set_m_planeFinding_15(bool value)
	{
		___m_planeFinding_15 = value;
	}

	inline static int32_t get_offset_of_m_inputFeature_16() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___m_inputFeature_16)); }
	inline InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * get_m_inputFeature_16() const { return ___m_inputFeature_16; }
	inline InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F ** get_address_of_m_inputFeature_16() { return &___m_inputFeature_16; }
	inline void set_m_inputFeature_16(InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * value)
	{
		___m_inputFeature_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_inputFeature_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_planeFeature_17() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___m_planeFeature_17)); }
	inline PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * get_m_planeFeature_17() const { return ___m_planeFeature_17; }
	inline PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 ** get_address_of_m_planeFeature_17() { return &___m_planeFeature_17; }
	inline void set_m_planeFeature_17(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * value)
	{
		___m_planeFeature_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_planeFeature_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_anchorFeature_18() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___m_anchorFeature_18)); }
	inline AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * get_m_anchorFeature_18() const { return ___m_anchorFeature_18; }
	inline AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 ** get_address_of_m_anchorFeature_18() { return &___m_anchorFeature_18; }
	inline void set_m_anchorFeature_18(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * value)
	{
		___m_anchorFeature_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_anchorFeature_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_features_19() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___m_features_19)); }
	inline List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * get_m_features_19() const { return ___m_features_19; }
	inline List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 ** get_address_of_m_features_19() { return &___m_features_19; }
	inline void set_m_features_19(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * value)
	{
		___m_features_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_features_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CInstanceU3Ek__BackingField_21)); }
	inline uint64_t get_U3CInstanceU3Ek__BackingField_21() const { return ___U3CInstanceU3Ek__BackingField_21; }
	inline uint64_t* get_address_of_U3CInstanceU3Ek__BackingField_21() { return &___U3CInstanceU3Ek__BackingField_21; }
	inline void set_U3CInstanceU3Ek__BackingField_21(uint64_t value)
	{
		___U3CInstanceU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSystemIdU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CSystemIdU3Ek__BackingField_22)); }
	inline uint64_t get_U3CSystemIdU3Ek__BackingField_22() const { return ___U3CSystemIdU3Ek__BackingField_22; }
	inline uint64_t* get_address_of_U3CSystemIdU3Ek__BackingField_22() { return &___U3CSystemIdU3Ek__BackingField_22; }
	inline void set_U3CSystemIdU3Ek__BackingField_22(uint64_t value)
	{
		___U3CSystemIdU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CSessionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CSessionU3Ek__BackingField_23)); }
	inline uint64_t get_U3CSessionU3Ek__BackingField_23() const { return ___U3CSessionU3Ek__BackingField_23; }
	inline uint64_t* get_address_of_U3CSessionU3Ek__BackingField_23() { return &___U3CSessionU3Ek__BackingField_23; }
	inline void set_U3CSessionU3Ek__BackingField_23(uint64_t value)
	{
		___U3CSessionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CSessionStateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CSessionStateU3Ek__BackingField_24)); }
	inline int32_t get_U3CSessionStateU3Ek__BackingField_24() const { return ___U3CSessionStateU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CSessionStateU3Ek__BackingField_24() { return &___U3CSessionStateU3Ek__BackingField_24; }
	inline void set_U3CSessionStateU3Ek__BackingField_24(int32_t value)
	{
		___U3CSessionStateU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceSpaceU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CReferenceSpaceU3Ek__BackingField_25)); }
	inline uint64_t get_U3CReferenceSpaceU3Ek__BackingField_25() const { return ___U3CReferenceSpaceU3Ek__BackingField_25; }
	inline uint64_t* get_address_of_U3CReferenceSpaceU3Ek__BackingField_25() { return &___U3CReferenceSpaceU3Ek__BackingField_25; }
	inline void set_U3CReferenceSpaceU3Ek__BackingField_25(uint64_t value)
	{
		___U3CReferenceSpaceU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A, ___U3CIsAnchorExtensionSupportedU3Ek__BackingField_26)); }
	inline bool get_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26() const { return ___U3CIsAnchorExtensionSupportedU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26() { return &___U3CIsAnchorExtensionSupportedU3Ek__BackingField_26; }
	inline void set_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26(bool value)
	{
		___U3CIsAnchorExtensionSupportedU3Ek__BackingField_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.OpenXR.Preview.HandJointLocation[]
struct HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864  m_Items[1];

public:
	inline HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARSubsystems.XRAnchor[]
struct XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  m_Items[1];

public:
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  m_Items[1];

public:
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARSubsystems.BoundedPlane[]
struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  m_Items[1];

public:
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke_back(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled);
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke_cleanup(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m1C971E03781D2FF28AC5BC61B2C2491D27A73060_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystemDescriptor_1_Create_m3C0C448051F6C1F60ADB087D9860E0FC84D5D1F7_gshared (IntegratedSubsystemDescriptor_1_t4BFDAEC6A4D96827E7D4D0B2E85EB1AFA1911939 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativeAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_gshared (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Guid>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_gshared (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.NativeAnchor>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_gshared (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  ___nativeArray0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Guid>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_gshared (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  ___nativeArray0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_gshared_inline (const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_gshared_inline (const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(!0[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_gshared (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* ___array0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(!0[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* ___array0, int32_t ___allocator1, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808_gshared (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___added0, NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Guid>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_gshared (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativeAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_gshared (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Microsoft.MixedReality.OpenXR.NativeAnchor>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992_gshared (NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 * ___output0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::CopyFrom(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___array0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_gshared (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.NativePlane>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_gshared (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  ___nativeArray0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_gshared_inline (const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_gshared (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_gshared (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Guid>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1_gshared (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(!0[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_gshared (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * __this, BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* ___array0, int32_t ___allocator1, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3_gshared (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___added0, NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.OpenXR.Feature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature__ctor_mC61533EDABCFB7E9F94C3A6919A172A1BB77EB61 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___context0, const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.Feature::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4_inline (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::CreateAnchorProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_CreateAnchorProvider_m1F05912AE836F2E343B0DE171E14C0B5ECF09A50 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1 (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m86A5F9E07ABC058C5CC863FC74941D427C43D71F (Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<Microsoft.MixedReality.ARSubsystems.XRAnchorStore>(System.Func`1<!!0>)
inline Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * Task_Run_TisXRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_m86511A3A33EFC14B9E0BEA341C376A807227BC20 (Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * (*) (Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared)(___function0, method);
}
// System.Boolean Microsoft.MixedReality.NativeLib::SetRemotingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_SetRemotingEnabled_mEF38533940F6125E4A507E8162269C52D3EA1961 (bool ___enabled0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.OpenXR.Features.OpenXRFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRFeature_HookGetInstanceProcAddr_m5E2604ED02620EC0C972B86E99687A37061E559E (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, intptr_t ___func0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::IsExtensionEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_IsExtensionEnabled_mC740857A4DF035AF82C46FDC30CE145E7C6C581F (String_t* ___extensionName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_OnInstanceCreate_m5ED8E04E942BFABFE4D2DB2EA325AA1FD51EF897 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, uint64_t ___xrInstance0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_OnInstanceDestroy_mFB52047C516C276A325A88A79396F07FB366F74D (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, uint64_t ___xrInstance0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_OnSystemChange_m6AF311F2808495D2ACED7D1F3B9B5C8D9BAF06BF (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, uint64_t ___xrSystem0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.NativeLib::SetRemotingConfiguration(System.String,Microsoft.MixedReality.Remoting.RemotingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_SetRemotingConfiguration_m44F0C0AE2E7CCA612EDADEAC21E1695FFAFE1F85 (String_t* ___hostName0, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1  ___configuration1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.Feature::set_Context(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB_inline (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Guid_ToByteArray_mFD26B992E49518AE955F1FE244A9464A5E347E0A (Guid_t * __this, const RuntimeMethod* method);
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_mFAF80F30CFF838A062D9740EB200372693481E1F (uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF8AE01C2F4776B1E3055CFE1243A01AFC242E5FB (Guid_t * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.Preview.PoseFlags Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_PoseFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.NativeLib::GetHandJointData(Microsoft.MixedReality.OpenXR.Preview.Handedness,Microsoft.MixedReality.OpenXR.Preview.FrameTime,Microsoft.MixedReality.OpenXR.Preview.HandJointLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_GetHandJointData_mC45CAC48417829F2A2004309AE5AD0D79B78F67B (int32_t ___handedness0, int32_t ___frameTime1, HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271* ___handJoints2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRInputSubsystemDescriptor>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_mD14A53DE4D3BE78F17E4FE9F2C27331DE9A83AA0 (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m1C971E03781D2FF28AC5BC61B2C2491D27A73060_gshared)(___descriptors0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::GetEnumerator()
inline Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A  List_1_GetEnumerator_m37BD5C93230E6FBFB619748D4F2EE148651030FB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A  (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::get_Current()
inline XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * Enumerator_get_Current_m968491FE43D8C36A6D126D1D08105D15E6C6370A_inline (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A * __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * (*) (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879 (IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>::Create()
inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * IntegratedSubsystemDescriptor_1_Create_m169D248A46C0AE550EA071E052019B0AA2FF4F80 (IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2 * __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * (*) (IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2 *, const RuntimeMethod*))IntegratedSubsystemDescriptor_1_Create_m3C0C448051F6C1F60ADB087D9860E0FC84D5D1F7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m56F8BE503AE7C9DB8AAE8D626C6D6F4531AB8043 (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_mA878D8DF907C6773F369EFDC51A644D9C486C2ED (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Start_mF6560F8752347E7DAB11735D2DB47332199B747D (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Stop_m624EEFAE3B7E8181BB641D73BC7F1FB77A074591 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Destroy_m5BFEA4F1ABE7EC8D49A8D3EC26F3CFD130B644EB (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature>::.ctor()
inline void List_1__ctor_m1C2563CC03D80DE3B21F33372431FBFBFEF25330 (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature__ctor_m53A4D6DE4C7BFD42267BEFD6A399783FE44F8145 (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___context0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature>::Add(!0)
inline void List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110 (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * __this, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 *, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature__ctor_mE704E4183EB5502ED3E6E69339A1738EFDAE2B24 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___context0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature__ctor_m88592D192AF8B828E1D22FEB150FB3E40320DCFA (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___context0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.OpenXR.OpenXRRuntime::GetExtensionVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenXRRuntime_GetExtensionVersion_mB150A7626F558C0313547258F1CDEB950132B639 (String_t* ___extensionName0, const RuntimeMethod* method);
// System.Void System.Action`1<Microsoft.MixedReality.OpenXR.Feature>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41 (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.Feature>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6 (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * __this, Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 *, Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// System.IntPtr Microsoft.MixedReality.NativeLib::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeLib_HookGetInstanceProcAddr_mAE1915E4BB26362E928D0908233A5CC278BB8553 (intptr_t ___func0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_Instance(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetXrInstance(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrInstance_mE9E8375DBA5390F4721A1484DE9BD8536499862E (uint64_t ___instance0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::IsExtensionEnabled(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRPlugin_IsExtensionEnabled_mF61EE5421576C3F50A7FD55420D8F689A7E1F9B9 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, String_t* ___extensionName0, uint32_t ___minimumRevision1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_IsAnchorExtensionSupported(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_SystemId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetXrSystemId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSystemId_m60F5E00FB020F39CEB3A78848E2783ACD5EF9B3B (uint64_t ___systemId0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_Session(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetXrSession(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSession_m0A0A5F0077D698F3FEBF156607356703BCB0E5E5 (uint64_t ___session0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetXrSessionRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSessionRunning_m3188DFEEAB13EF89733AB71EEE45A8E91C098834 (bool ___running0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_SessionState(Microsoft.MixedReality.OpenXR.XrSessionState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetSessionState(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetSessionState_m4C00594B58BA6FAC6DE2954CEA21A45A85EFC9A2 (uint32_t ___sessionState0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_ReferenceSpace(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::SetReferenceSpace(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetReferenceSpace_m00C9A9D5DB40B586D1A09C8CE38F3291233B2DFA (uint64_t ___referenceSpace0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::CreatePlaneProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_CreatePlaneProvider_m508184468FC0B76418E1E8A5AE1B7229B590DF5E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6F75B128B399FA1DECE08843C1E53FB9FC2795E5 (List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::UpdatePersistedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore_UpdatePersistedAnchorNames_m359570C559BE6B40A7A637AA60A01723C0ACA7E3 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.UInt32 Microsoft.MixedReality.NativeLib::GetNumPersistedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetNumPersistedAnchorNames_m3292ADAD0B0214526D05D756088D8797A38DE182 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m067D01B281C708C07EB01C776CA99B72C4F78B30 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::GetPersistedAnchorName(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetPersistedAnchorName_m8E5B69A487278DEF24016A403EE13DB67C085BA8 (uint32_t ___idx0, StringBuilder_t * ___nameOut1, uint32_t ___capacity2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Guid Microsoft.MixedReality.NativeLib::LoadPersistedAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  NativeLib_LoadPersistedAnchor_m562ABB7A26372924E1DDCB49BE00C9A2683375D1 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.FeatureUtils::ToTrackableId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  FeatureUtils_ToTrackableId_mE7D5A75EED5ABFFF778B680FC7418D5FB1B04C98 (Guid_t  ___guid0, const RuntimeMethod* method);
// System.Guid Microsoft.MixedReality.OpenXR.FeatureUtils::ToGuid(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  FeatureUtils_ToGuid_m4B9DDBAB5CF1ACE6EEE930D677E484D0D336E1B8 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.NativeLib::TryPersistAnchor(System.String,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryPersistAnchor_m064839EC5DEDBB99DE671B1B2A5C9ABDACFFA8AE (String_t* ___name0, Guid_t  ___anchorId1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::UnpersistAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_UnpersistAnchor_mACA657214150AD596E859CFA2D27471A50BFD9C0 (String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::ClearPersistedAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_ClearPersistedAnchors_m9D164DDEAF317E198D0329074662F1C44DFB7ECE (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::GetNumAnchorChanges(Microsoft.MixedReality.OpenXR.Preview.FrameTime,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumAnchorChanges_m384363A9490B09EE3DBFCD7B1AA1A8317E889DC6 (int32_t ___frameTime0, uint32_t* ___numAddedAnchors1, uint32_t* ___numUpdatedAnchors2, uint32_t* ___numRemovedAnchors3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativeAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715 (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Guid>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7 (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.NativeAnchor>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474 (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_gshared)(___nativeArray0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Guid>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1 (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_gshared)(___nativeArray0, method);
}
// System.Void Microsoft.MixedReality.NativeLib::GetAnchorChanges(System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetAnchorChanges_mFCE4B09FF1C52EB5CC85E04D062B4471F68DFB59 (void* ___addedAnchors0, void* ___updatedAnchors1, void* ___removedAnchors2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.XRAnchor>()
inline XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_inline (const RuntimeMethod* method)
{
	return ((  XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* (*) (const RuntimeMethod*))Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_gshared_inline)(method);
}
// UnityEngine.XR.ARSubsystems.XRAnchor Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::ToXRAnchor(Microsoft.MixedReality.OpenXR.NativeAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  OpenXRProvider_ToXRAnchor_mACB0B4BB26909C22B6C57057979FD6DC3836FB4B (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  ___nativeAnchor0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.TrackableId>()
inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_inline (const RuntimeMethod* method)
{
	return ((  TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* (*) (const RuntimeMethod*))Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_gshared_inline)(method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(!0[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *, XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_gshared)(__this, ___array0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(!0[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777 (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *, TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_gshared)(__this, ___array0, ___allocator1, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
inline TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808 (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___added0, NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  (*) (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 , NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 , NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 , int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808_gshared)(___added0, ___updated1, ___removed2, ___allocator3, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Guid>::Dispose()
inline void NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *, const RuntimeMethod*))NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativeAnchor>::Dispose()
inline void NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27 (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *, const RuntimeMethod*))NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_gshared)(__this, method);
}
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m65D141119BA83745D73EE5F94267165F88D15B51 (int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Microsoft.MixedReality.OpenXR.NativeAnchor>(!!0&)
inline void* UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992 (NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 * ___output0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 *, const RuntimeMethod*))UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992_gshared)(___output0, method);
}
// System.Boolean Microsoft.MixedReality.NativeLib::TryAddAnchor(Microsoft.MixedReality.OpenXR.Preview.FrameTime,UnityEngine.Quaternion,UnityEngine.Vector3,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryAddAnchor_m7E95288A37E6666155EFDA1FD746D46644E00032 (int32_t ___frameTime0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, void* ___anchorPtr3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.NativeLib::TryRemoveAnchor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryRemoveAnchor_mAB1FA142CAF3B0265B39CABD7E32AA134D1388FE (Guid_t  ___anchorId0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0EBEA600BF114077FCD8FB5A8D1B966ABB788054 (U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.NativeLib::LoadAnchorStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_LoadAnchorStore_m6745651A6CAE68AC00ADCC0405D44F33D24F3628 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore__ctor_m4A986448FB2B170CE99EF81E14D092E23D586FF7 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::.ctor()
inline void List_1__ctor_mEA1C0A5D5DB5350033CB1DA214245379FF9D2196 (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::GetEnumerator()
inline Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81  List_1_GetEnumerator_m479F109DDA5193FE42E2459254CFF1145F98402B (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81  (*) (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::get_Current()
inline PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * Enumerator_get_Current_m3BFB2939531F618755007F7F8817C38A874BB573_inline (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 * __this, const RuntimeMethod* method)
{
	return ((  PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * (*) (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m0868EBB6BB9BA72B226D0717352604B3E8EA119B (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___lhs0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
inline void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared)(___length0, ___allocator1, ___array2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::CopyFrom(!0[])
inline void NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*, const RuntimeMethod*))NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430_gshared)(__this, ___array0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::MoveNext()
inline bool Enumerator_MoveNext_mE6DB5550426510C25C33252A2E4ED3D33150CCF2 (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::Dispose()
inline void Enumerator_Dispose_mCD5B5DAB1E31A1CC1E047E17856CFA4D2A059EE2 (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.NativeLib::GetNumPlanes(Microsoft.MixedReality.OpenXR.Preview.FrameTime,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumPlanes_m8D6CC30E41D970B78E6A571C9E48E28EBFF1021F (int32_t ___frameTime0, uint32_t* ___numAddedPlanes1, uint32_t* ___numUpdatedPlanes2, uint32_t* ___numRemovedPlanes3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00 (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.NativePlane>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108 (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_gshared)(___nativeArray0, method);
}
// System.Void Microsoft.MixedReality.NativeLib::GetPlanes(System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetPlanes_m6DE10EB11BD37B721B05EE0D81749D497D994253 (void* ___addedPlanes0, void* ___updatedPlanes1, void* ___removedPlanes2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.XR.ARSubsystems.BoundedPlane>()
inline BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_inline (const RuntimeMethod* method)
{
	return ((  BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* (*) (const RuntimeMethod*))Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_gshared_inline)(method);
}
// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::ToPlaneInfo(Microsoft.MixedReality.OpenXR.NativePlane,UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * OpenXRProvider_ToPlaneInfo_m4ECAF564619A8CDE30D674FC9494A88820184409 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  ___nativePlane0, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultPlane1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo>::Add(!0)
inline void List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * __this, PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A *, PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9 (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.NativePlane>::Dispose()
inline void NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *, const RuntimeMethod*))NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::ToTrackableId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  OpenXRProvider_ToTrackableId_mE3ABBEFA29CD90F041E54357F1337339D7551E81 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, Guid_t  ___guid0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Guid>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1 (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(!0[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * __this, BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *, BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_gshared)(__this, ___array0, ___allocator1, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
inline TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3 (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___added0, NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  (*) (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 , NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 , NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 , int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3_gshared)(___added0, ___updated1, ___removed2, ___allocator3, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneInfo__ctor_mB066242DA4C348E8D205FF655C9DB3FA75E0B665 (PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL openxr_plugin_HookGetInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrInstance(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrSystemId(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrSession(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrSessionRunning(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrSessionState(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_SetXrReferenceSpace(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_CreatePlaneProvider();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_GetNumPlanes(int32_t, uint32_t*, uint32_t*, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_GetPlanes(void*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_CreateAnchorProvider();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_TryAddAnchor(int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_TryRemoveAnchor(Guid_t );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_GetNumAnchorChanges(int32_t, uint32_t*, uint32_t*, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_GetAnchorChanges(void*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_LoadAnchorStore();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL openxr_plugin_GetNumPersistedAnchorNames();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_GetPersistedAnchorName(uint32_t, char*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C Guid_t  DEFAULT_CALL openxr_plugin_LoadPersistedAnchor(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_TryPersistAnchor(char*, Guid_t );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_UnpersistAnchor(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL openxr_plugin_ClearPersistedAnchors();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_GetHandJointData(int32_t, int32_t, HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_SetRemotingEnabled(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL openxr_plugin_SetRemotingConfiguration(char*, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke);
#endif
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
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature__ctor_m88592D192AF8B828E1D22FEB150FB3E40320DCFA (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___context0, const RuntimeMethod* method)
{
	{
		// public AnchorFeature(IOpenXRContext context) : base(context) { }
		RuntimeObject* L_0 = ___context0;
		Feature__ctor_mC61533EDABCFB7E9F94C3A6919A172A1BB77EB61(__this, L_0, /*hidden argument*/NULL);
		// public AnchorFeature(IOpenXRContext context) : base(context) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature_OnSubsystemCreate_m05F0D9B8EA22C643311C95BE82ECF3C71987843A (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRContext_t5808DF5129EB4899154535E1644E532A81C7D3E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_CreateSubsystem_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mB9E5EC96167EFA12B3E54711325EB6EE19D45D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A8EE78E4EA62349F584BB9B715140A155CBF1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Context.IsAnchorExtensionSupported)
		RuntimeObject* L_0;
		L_0 = Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Microsoft.MixedReality.OpenXR.IOpenXRContext::get_IsAnchorExtensionSupported() */, IOpenXRContext_t5808DF5129EB4899154535E1644E532A81C7D3E2_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// plugin.CreateSubsystem<XRAnchorSubsystemDescriptor, XRAnchorSubsystem>(s_AnchorDescriptors, AnchorSubsystem.Id);
		RuntimeObject* L_2 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var);
		List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * L_3 = ((AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_StaticFields*)il2cpp_codegen_static_fields_for(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var))->get_s_AnchorDescriptors_1();
		NullCheck(L_2);
		GenericInterfaceActionInvoker2< List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *, String_t* >::Invoke(IOpenXRPlugin_CreateSubsystem_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mB9E5EC96167EFA12B3E54711325EB6EE19D45D58_RuntimeMethod_var, L_2, L_3, _stringLiteral45A8EE78E4EA62349F584BB9B715140A155CBF1E);
		// NativeLib.CreateAnchorProvider();
		NativeLib_CreateAnchorProvider_m1F05912AE836F2E343B0DE171E14C0B5ECF09A50(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::OnSubsystemStart(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature_OnSubsystemStart_mF0539760E77FB078100F2B2B22BB10301E238928 (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_StartSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m4F442B4CA8987B062476B81CB1C1D39F594088C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.StartSubsystem<XRAnchorSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_StartSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m4F442B4CA8987B062476B81CB1C1D39F594088C8_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::OnSubsystemStop(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature_OnSubsystemStop_mC89F602D729386365D1133CAF21C28B17CF1550B (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_StopSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mD0F63A4DAC2668338EC26A680E8C07F72CD7C1E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.StopSubsystem<XRAnchorSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_StopSubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_mD0F63A4DAC2668338EC26A680E8C07F72CD7C1E3_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature_OnSubsystemDestroy_m15032817CCBD6E77C5785EDB753933E70D7B095D (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_DestroySubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m1F51DE57A527583817F01F7C1539AA975B0ADA5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.DestroySubsystem<XRAnchorSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_DestroySubsystem_TisXRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7_m1F51DE57A527583817F01F7C1539AA975B0ADA5B_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorFeature__cctor_mF854A7FA926DD40C7EDB1CD51815D765ABF7A412 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRAnchorSubsystemDescriptor> s_AnchorDescriptors = new List<XRAnchorSubsystemDescriptor>();
		List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * L_0 = (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *)il2cpp_codegen_object_new(List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var);
		List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1(L_0, /*hidden argument*/List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var);
		((AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_StaticFields*)il2cpp_codegen_static_fields_for(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var))->set_s_AnchorDescriptors_1(L_0);
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
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorSubsystem_RegisterDescriptor_m65C4EE373B92CD294FD0CF1B085A4C2937A7FF73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A8EE78E4EA62349F584BB9B715140A155CBF1E);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRAnchorSubsystemDescriptor.Create(new XRAnchorSubsystemDescriptor.Cinfo
		//             {
		//                 id = Id,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(AnchorSubsystem.OpenXRProvider),
		//                 subsystemTypeOverride = typeof(AnchorSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(AnchorSubsystem),
		// #endif
		//                 supportsTrackableAttachments = false
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 ));
		Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), _stringLiteral45A8EE78E4EA62349F584BB9B715140A155CBF1E, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_4 = V_0;
		XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorSubsystem__ctor_mF99EBF6D3B7E97605C43D29B1F7EF05AA9173F73 (AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37 * __this, const RuntimeMethod* method)
{
	{
		XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A(__this, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.ARSubsystems.XRAnchorStore> Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions::LoadAnchorStoreAsync(UnityEngine.XR.ARSubsystems.XRAnchorSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * AnchorSubsystemExtensions_LoadAnchorStoreAsync_m82E41FE29BA05A8452E893F01AF66D7E7603EAFC (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * ___anchorSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m86A5F9E07ABC058C5CC863FC74941D427C43D71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisXRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_m86511A3A33EFC14B9E0BEA341C376A807227BC20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadAnchorStoreAsyncU3Eb__1_0_m177E88D3BAF525107A6E7D47CA05E037EBCC2089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5A85EFD42691B34C206731BBB996EDF8D80AE4);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * G_B5_0 = NULL;
	Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * G_B4_0 = NULL;
	{
		// if (!(anchorSubsystem is AnchorSubsystem))
		XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * L_0 = ___anchorSubsystem0;
		if (((AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37 *)IsInstClass((RuntimeObject*)L_0, AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError($"LoadAnchorStoreAsync: subsystem is not of type Microsoft.MixedReality.AnchorSubsystem. type: {anchorSubsystem.GetType()}");
		XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * L_1 = ___anchorSubsystem0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4C5A85EFD42691B34C206731BBB996EDF8D80AE4, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D *)NULL;
	}

IL_001f:
	{
		// if (anchorStoreLoadTask == null)
		IL2CPP_RUNTIME_CLASS_INIT(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var);
		Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * L_4 = ((AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_StaticFields*)il2cpp_codegen_static_fields_for(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var))->get_anchorStoreLoadTask_0();
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		// anchorStoreLoadTask = Task.Run(() =>
		// {
		//     NativeLib.LoadAnchorStore(); 
		//     return new XRAnchorStore();
		// });
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var);
		Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * L_5 = ((U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var);
		U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * L_7 = ((U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * L_8 = (Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 *)il2cpp_codegen_object_new(Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2_il2cpp_TypeInfo_var);
		Func_1__ctor_m86A5F9E07ABC058C5CC863FC74941D427C43D71F(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CLoadAnchorStoreAsyncU3Eb__1_0_m177E88D3BAF525107A6E7D47CA05E037EBCC2089_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m86A5F9E07ABC058C5CC863FC74941D427C43D71F_RuntimeMethod_var);
		Func_1_t8F8F7F8113A21946841F64D0E7332819EEC4A6E2 * L_9 = L_8;
		((U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_9);
		G_B5_0 = L_9;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * L_10;
		L_10 = Task_Run_TisXRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_m86511A3A33EFC14B9E0BEA341C376A807227BC20(G_B5_0, /*hidden argument*/Task_Run_TisXRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_m86511A3A33EFC14B9E0BEA341C376A807227BC20_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var);
		((AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_StaticFields*)il2cpp_codegen_static_fields_for(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var))->set_anchorStoreLoadTask_0(L_10);
	}

IL_004f:
	{
		// return anchorStoreLoadTask;
		IL2CPP_RUNTIME_CLASS_INIT(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var);
		Task_1_tEFF084224063B1F559265D7ED194A194F90FD42D * L_11 = ((AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_StaticFields*)il2cpp_codegen_static_fields_for(AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_il2cpp_TypeInfo_var))->get_anchorStoreLoadTask_0();
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorSubsystemExtensions__cctor_mADDEC15B071C7F2F30402F5AC4D807EA8F9B3BA8 (const RuntimeMethod* method)
{
	{
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
// System.IntPtr Microsoft.MixedReality.Remoting.EditorRemotingPlugin::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EditorRemotingPlugin_HookGetInstanceProcAddr_m808AC5CE62141F88A86F2AE851656755C4B2B966 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, intptr_t ___func0, const RuntimeMethod* method)
{
	{
		// if (m_editorRemotingEnabled && !m_runtimeOverrideAttempted)
		bool L_0 = __this->get_m_editorRemotingEnabled_23();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = __this->get_m_runtimeOverrideAttempted_22();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_runtimeOverrideAttempted = true;
		__this->set_m_runtimeOverrideAttempted_22((bool)1);
		// NativeLib.SetRemotingEnabled(true); 
		bool L_2;
		L_2 = NativeLib_SetRemotingEnabled_mEF38533940F6125E4A507E8162269C52D3EA1961((bool)1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// return base.HookGetInstanceProcAddr(func);
		intptr_t L_3 = ___func0;
		intptr_t L_4;
		L_4 = OpenXRFeature_HookGetInstanceProcAddr_m5E2604ED02620EC0C972B86E99687A37061E559E(__this, (intptr_t)L_3, /*hidden argument*/NULL);
		return (intptr_t)L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Remoting.EditorRemotingPlugin::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorRemotingPlugin_OnInstanceCreate_mA6F04B698032DDB97127F358CCCEDD02AC600F03 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D4AC4FD4C9AD6674BEAD1311883F7835BDC60E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_remotingExtensionEnabled = OpenXRRuntime.IsExtensionEnabled("XR_MSFT_holographic_remoting");
		bool L_0;
		L_0 = OpenXRRuntime_IsExtensionEnabled_mC740857A4DF035AF82C46FDC30CE145E7C6C581F(_stringLiteral64D4AC4FD4C9AD6674BEAD1311883F7835BDC60E, /*hidden argument*/NULL);
		__this->set_m_remotingExtensionEnabled_21(L_0);
		// return base.OnInstanceCreate(instance);
		uint64_t L_1 = ___instance0;
		bool L_2;
		L_2 = OpenXRFeature_OnInstanceCreate_m5ED8E04E942BFABFE4D2DB2EA325AA1FD51EF897(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Remoting.EditorRemotingPlugin::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorRemotingPlugin_OnInstanceDestroy_m216273BE2CF6B22DF65DA5E6B1D2FC894DC90CB0 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	{
		// m_remotingExtensionEnabled = false;
		__this->set_m_remotingExtensionEnabled_21((bool)0);
		// if (m_editorRemotingEnabled && m_runtimeOverrideAttempted)
		bool L_0 = __this->get_m_editorRemotingEnabled_23();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->get_m_runtimeOverrideAttempted_22();
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_runtimeOverrideAttempted = false;
		__this->set_m_runtimeOverrideAttempted_22((bool)0);
		// NativeLib.SetRemotingEnabled(false);
		bool L_2;
		L_2 = NativeLib_SetRemotingEnabled_mEF38533940F6125E4A507E8162269C52D3EA1961((bool)0, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// base.OnInstanceDestroy(instance);
		uint64_t L_3 = ___instance0;
		OpenXRFeature_OnInstanceDestroy_mFB52047C516C276A325A88A79396F07FB366F74D(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Remoting.EditorRemotingPlugin::OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorRemotingPlugin_OnSystemChange_m7D0FDFD67479633026CE9C72E6EC52DD85A265C6 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, uint64_t ___systemId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSystemChange(systemId);
		uint64_t L_0 = ___systemId0;
		OpenXRFeature_OnSystemChange_m6AF311F2808495D2ACED7D1F3B9B5C8D9BAF06BF(__this, L_0, /*hidden argument*/NULL);
		// if (m_editorRemotingEnabled && systemId != 0 && m_remotingExtensionEnabled)
		bool L_1 = __this->get_m_editorRemotingEnabled_23();
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_2 = ___systemId0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		bool L_3 = __this->get_m_remotingExtensionEnabled_21();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Task.Run(() =>
		// {
		//     RemotingConfiguration configuration = new RemotingConfiguration();
		//     configuration.HostPort = m_remoteHostPort;
		//     configuration.MaxBitrateKbps = m_maxBitrate;
		//     configuration.VideoCodec = m_videoCodec;
		//     configuration.EnableAudio = m_enableAudio;
		//     NativeLib.SetRemotingConfiguration(m_remoteHostName, configuration);
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Remoting.EditorRemotingPlugin::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorRemotingPlugin_OnSessionStateChange_mB0368416582CDF6C2F0F972D439311B630E2E23B (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4E457533F8964B68A16C0089B1FCC58DB549C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_editorRemotingEnabled && (XrSessionState)newState == XrSessionState.LossPending)
		bool L_0 = __this->get_m_editorRemotingEnabled_23();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___newState1;
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogError($"OpenXR remoting runtime lost connection to {m_remoteHostName}:{m_remoteHostPort}.");
		String_t* L_2 = __this->get_m_remoteHostName_16();
		uint16_t L_3 = __this->get_m_remoteHostPort_17();
		uint16_t L_4 = L_3;
		RuntimeObject * L_5 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralED4E457533F8964B68A16C0089B1FCC58DB549C6, L_2, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Remoting.EditorRemotingPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorRemotingPlugin__ctor_mCE9F619724CF484CE4AFC6C8B99EBF2A3111E283 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string m_remoteHostName = "";
		__this->set_m_remoteHostName_16(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private UInt16 m_remoteHostPort = 8265;
		__this->set_m_remoteHostPort_17((uint16_t)((int32_t)8265));
		// private UInt32 m_maxBitrate = 20000;
		__this->set_m_maxBitrate_18(((int32_t)20000));
		OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Remoting.EditorRemotingPlugin::<OnSystemChange>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1 (EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927 * __this, const RuntimeMethod* method)
{
	RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RemotingConfiguration configuration = new RemotingConfiguration();
		il2cpp_codegen_initobj((&V_0), sizeof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1 ));
		// configuration.HostPort = m_remoteHostPort;
		uint16_t L_0 = __this->get_m_remoteHostPort_17();
		(&V_0)->set_HostPort_0(L_0);
		// configuration.MaxBitrateKbps = m_maxBitrate;
		uint32_t L_1 = __this->get_m_maxBitrate_18();
		(&V_0)->set_MaxBitrateKbps_1(L_1);
		// configuration.VideoCodec = m_videoCodec;
		int32_t L_2 = __this->get_m_videoCodec_19();
		(&V_0)->set_VideoCodec_2(L_2);
		// configuration.EnableAudio = m_enableAudio;
		bool L_3 = __this->get_m_enableAudio_20();
		(&V_0)->set_EnableAudio_3(L_3);
		// NativeLib.SetRemotingConfiguration(m_remoteHostName, configuration);
		String_t* L_4 = __this->get_m_remoteHostName_16();
		RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1  L_5 = V_0;
		bool L_6;
		L_6 = NativeLib_SetRemotingConfiguration_m44F0C0AE2E7CCA612EDADEAC21E1695FFAFE1F85(L_4, L_5, /*hidden argument*/NULL);
		// });
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
// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.Feature::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, const RuntimeMethod* method)
{
	{
		// public IOpenXRContext Context { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CContextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::set_Context(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IOpenXRContext Context { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CContextU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature__ctor_mC61533EDABCFB7E9F94C3A6919A172A1BB77EB61 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___context0, const RuntimeMethod* method)
{
	{
		// public Feature(IOpenXRContext context)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Context = context;
		RuntimeObject* L_0 = ___context0;
		Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature_OnSubsystemCreate_m31E89AB71B00D65F106096BE6C583A40B8C069D2 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemStart(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature_OnSubsystemStart_mC00E61B12D667FF0AA0314B7DC8A927C8A296633 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemStop(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature_OnSubsystemStop_m72340AE2A7D5158C22363F80A81BCFAC6454BD28 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feature_OnSubsystemDestroy_mDEAD82812C2CBA9FCB7193F0278431382DA691E5 (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	{
		// }
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
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.FeatureUtils::ToTrackableId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  FeatureUtils_ToTrackableId_mE7D5A75EED5ABFFF778B680FC7418D5FB1B04C98 (Guid_t  ___guid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		// byte[] bytes = guid.ToByteArray();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Guid_ToByteArray_mFD26B992E49518AE955F1FE244A9464A5E347E0A((Guid_t *)(&___guid0), /*hidden argument*/NULL);
		// ulong subId1 = BitConverter.ToUInt64(bytes, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC(L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// ulong subId2 = BitConverter.ToUInt64(bytes, 8);
		uint64_t L_3;
		L_3 = BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC(L_1, 8, /*hidden argument*/NULL);
		V_1 = L_3;
		// return new TrackableId(subId1, subId2);
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_1;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6;
		memset((&L_6), 0, sizeof(L_6));
		TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792((&L_6), L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Guid Microsoft.MixedReality.OpenXR.FeatureUtils::ToGuid(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  FeatureUtils_ToGuid_m4B9DDBAB5CF1ACE6EEE930D677E484D0D336E1B8 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] bytes = new byte[16];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		// Array.Copy(BitConverter.GetBytes(id.subId1), 0, bytes, 0, 8);
		uint64_t L_1;
		L_1 = TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(&___id0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_mFAF80F30CFF838A062D9740EB200372693481E1F(L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, 8, /*hidden argument*/NULL);
		// Array.Copy(BitConverter.GetBytes(id.subId2), 0, bytes, 8, 8);
		uint64_t L_4;
		L_4 = TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(&___id0), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = BitConverter_GetBytes_mFAF80F30CFF838A062D9740EB200372693481E1F(L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 8, 8, /*hidden argument*/NULL);
		// return new Guid(bytes);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		Guid_t  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Guid__ctor_mF8AE01C2F4776B1E3055CFE1243A01AFC242E5FB((&L_8), L_7, /*hidden argument*/NULL);
		return L_8;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Microsoft.MixedReality.OpenXR.Preview.PoseFlags Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_PoseFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809 (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public PoseFlags PoseFlags { get; }
		uint64_t L_0 = __this->get_U3CPoseFlagsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * _thisAdjusted = reinterpret_cast<HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59 (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3CRotationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * _thisAdjusted = reinterpret_cast<HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPositionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * _thisAdjusted = reinterpret_cast<HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Microsoft.MixedReality.OpenXR.Preview.HandJointLocation::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * _thisAdjusted = reinterpret_cast<HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *>(__this + _offset);
	float _returnValue;
	_returnValue = HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.OpenXR.Preview.HandTracker::.ctor(Microsoft.MixedReality.OpenXR.Preview.Handedness,Microsoft.MixedReality.OpenXR.Preview.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracker__ctor_mF2989BDD16E368C75A96F4E3687BC24B87312553 (HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC * __this, int32_t ___handedness0, int32_t ___handPoseType1, const RuntimeMethod* method)
{
	{
		// public HandTracker(Handedness handedness, HandPoseType handPoseType = HandPoseType.Tracked)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->set_handedness_0(L_0);
		// this.handPoseType = handPoseType;
		int32_t L_1 = ___handPoseType1;
		__this->set_handPoseType_1(L_1);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.Preview.HandTracker::TryLocateHandJoints(Microsoft.MixedReality.OpenXR.Preview.FrameTime,Microsoft.MixedReality.OpenXR.Preview.HandJointLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTracker_TryLocateHandJoints_m31018836C968F00A94E9D257F270193BCE6A0D01 (HandTracker_t66C80A078964A1C6E2BC48DDE0F5A8B8D930EEFC * __this, int32_t ___frameTime0, HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271* ___handJointLocations1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15D229CCB9EE57E65A7B6F81B08CC2969602FBBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handPoseType == HandPoseType.ReferenceOpenPalm)
		int32_t L_0 = __this->get_handPoseType_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// throw new NotImplementedException("ReferenceOpenPalm is not yet implemented. Use HandPoseType.Tracked instead.");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_1 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD470D4BC1B87E3C41932ED90D9F98F656BA7EF2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandTracker_TryLocateHandJoints_m31018836C968F00A94E9D257F270193BCE6A0D01_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (handJointLocations.Length != JointCount)
		HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271* L_2 = ___handJointLocations1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)((int32_t)26))))
		{
			goto IL_0033;
		}
	}
	{
		// UnityEngine.Debug.LogError($"LocateJoints requires an array of size {JointCount}. You can use HandTracker.JointCount for this.");
		int32_t L_3 = ((int32_t)26);
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral15D229CCB9EE57E65A7B6F81B08CC2969602FBBD, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0033:
	{
		// return NativeLib.GetHandJointData(handedness, frameTime, handJointLocations);
		int32_t L_6 = __this->get_handedness_0();
		int32_t L_7 = ___frameTime0;
		HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271* L_8 = ___handJointLocations1;
		bool L_9;
		L_9 = NativeLib_GetHandJointData_mC45CAC48417829F2A2004309AE5AD0D79B78F67B(L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature__ctor_m53A4D6DE4C7BFD42267BEFD6A399783FE44F8145 (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___context0, const RuntimeMethod* method)
{
	{
		// public InputFeature(IOpenXRContext context) : base(context) { }
		RuntimeObject* L_0 = ___context0;
		Feature__ctor_mC61533EDABCFB7E9F94C3A6919A172A1BB77EB61(__this, L_0, /*hidden argument*/NULL);
		// public InputFeature(IOpenXRContext context) : base(context) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature_OnSubsystemCreate_m0F2F8CCF0A6A8D04E2187EE9A6496D9AB72007AA (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA878D8DF907C6773F369EFDC51A644D9C486C2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m56F8BE503AE7C9DB8AAE8D626C6D6F4531AB8043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m968491FE43D8C36A6D126D1D08105D15E6C6370A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1_Create_m169D248A46C0AE550EA071E052019B0AA2FF4F80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m37BD5C93230E6FBFB619748D4F2EE148651030FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_mD14A53DE4D3BE78F17E4FE9F2C27331DE9A83AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17255C0C7BE61CCA680B015C2FEB441A9438ADB2);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var descriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_0 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_0, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors<XRInputSubsystemDescriptor>(descriptors);
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_mD14A53DE4D3BE78F17E4FE9F2C27331DE9A83AA0(L_1, /*hidden argument*/SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_mD14A53DE4D3BE78F17E4FE9F2C27331DE9A83AA0_RuntimeMethod_var);
		// foreach (var descriptor in descriptors)
		NullCheck(L_1);
		Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A  L_2;
		L_2 = List_1_GetEnumerator_m37BD5C93230E6FBFB619748D4F2EE148651030FB(L_1, /*hidden argument*/List_1_GetEnumerator_m37BD5C93230E6FBFB619748D4F2EE148651030FB_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0013:
		{
			// foreach (var descriptor in descriptors)
			XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * L_3;
			L_3 = Enumerator_get_Current_m968491FE43D8C36A6D126D1D08105D15E6C6370A_inline((Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m968491FE43D8C36A6D126D1D08105D15E6C6370A_RuntimeMethod_var);
			V_1 = L_3;
			// if (String.Compare(descriptor.id, Id, true) == 0)
			XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879(L_4, /*hidden argument*/NULL);
			int32_t L_6;
			L_6 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_5, _stringLiteral17255C0C7BE61CCA680B015C2FEB441A9438ADB2, (bool)1, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// m_inputExtensionSubsystem = descriptor.Create();
			XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * L_7 = V_1;
			NullCheck(L_7);
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_8;
			L_8 = IntegratedSubsystemDescriptor_1_Create_m169D248A46C0AE550EA071E052019B0AA2FF4F80(L_7, /*hidden argument*/IntegratedSubsystemDescriptor_1_Create_m169D248A46C0AE550EA071E052019B0AA2FF4F80_RuntimeMethod_var);
			__this->set_m_inputExtensionSubsystem_2(L_8);
			// if (m_inputExtensionSubsystem != null)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_9 = __this->get_m_inputExtensionSubsystem_2();
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_0042:
		{
			// break;
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}

IL_0044:
		{
			// foreach (var descriptor in descriptors)
			bool L_10;
			L_10 = Enumerator_MoveNext_m56F8BE503AE7C9DB8AAE8D626C6D6F4531AB8043((Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m56F8BE503AE7C9DB8AAE8D626C6D6F4531AB8043_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0013;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA878D8DF907C6773F369EFDC51A644D9C486C2ED((Enumerator_t8117634639D6A53FD45C4648BB3883A45E45B70A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA878D8DF907C6773F369EFDC51A644D9C486C2ED_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::OnSubsystemStart(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature_OnSubsystemStart_m23BD69F9B6EF31531CFD3A285247084E42822B94 (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B2_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B1_0 = NULL;
	{
		// m_inputExtensionSubsystem?.Start();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = __this->get_m_inputExtensionSubsystem_2();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		IntegratedSubsystem_Start_mF6560F8752347E7DAB11735D2DB47332199B747D(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::OnSubsystemStop(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature_OnSubsystemStop_m172A5F855333AB9BC529519F24D354270CEFEE9A (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B2_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B1_0 = NULL;
	{
		// m_inputExtensionSubsystem?.Stop();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = __this->get_m_inputExtensionSubsystem_2();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		IntegratedSubsystem_Stop_m624EEFAE3B7E8181BB641D73BC7F1FB77A074591(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.InputFeature::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeature_OnSubsystemDestroy_mBDE528D2939E5AAAA507F193D6A640960519300F (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B2_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B1_0 = NULL;
	{
		// m_inputExtensionSubsystem?.Destroy();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = __this->get_m_inputExtensionSubsystem_2();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		IntegratedSubsystem_Destroy_m5BFEA4F1ABE7EC8D49A8D3EC26F3CFD130B644EB(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// m_inputExtensionSubsystem = null;
		__this->set_m_inputExtensionSubsystem_2((XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.MixedReality.NativeLib::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeLib_HookGetInstanceProcAddr_mAE1915E4BB26362E928D0908233A5CC278BB8553 (intptr_t ___func0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_HookGetInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_HookGetInstanceProcAddr)(___func0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___func0);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.NativeLib::SetXrInstance(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrInstance_mE9E8375DBA5390F4721A1484DE9BD8536499862E (uint64_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrInstance", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrInstance)(___instance0);
	#else
	il2cppPInvokeFunc(___instance0);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::SetXrSystemId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSystemId_m60F5E00FB020F39CEB3A78848E2783ACD5EF9B3B (uint64_t ___systemId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrSystemId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrSystemId)(___systemId0);
	#else
	il2cppPInvokeFunc(___systemId0);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::SetXrSession(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSession_m0A0A5F0077D698F3FEBF156607356703BCB0E5E5 (uint64_t ___session0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrSession)(___session0);
	#else
	il2cppPInvokeFunc(___session0);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::SetXrSessionRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetXrSessionRunning_m3188DFEEAB13EF89733AB71EEE45A8E91C098834 (bool ___running0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrSessionRunning", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrSessionRunning)(static_cast<int32_t>(___running0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___running0));
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::SetSessionState(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetSessionState_m4C00594B58BA6FAC6DE2954CEA21A45A85EFC9A2 (uint32_t ___sessionState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrSessionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrSessionState)(___sessionState0);
	#else
	il2cppPInvokeFunc(___sessionState0);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::SetReferenceSpace(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetReferenceSpace_m00C9A9D5DB40B586D1A09C8CE38F3291233B2DFA (uint64_t ___referenceSpace0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetXrReferenceSpace", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_SetXrReferenceSpace)(___referenceSpace0);
	#else
	il2cppPInvokeFunc(___referenceSpace0);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::CreatePlaneProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_CreatePlaneProvider_m508184468FC0B76418E1E8A5AE1B7229B590DF5E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_CreatePlaneProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_CreatePlaneProvider)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::GetNumPlanes(Microsoft.MixedReality.OpenXR.Preview.FrameTime,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumPlanes_m8D6CC30E41D970B78E6A571C9E48E28EBFF1021F (int32_t ___frameTime0, uint32_t* ___numAddedPlanes1, uint32_t* ___numUpdatedPlanes2, uint32_t* ___numRemovedPlanes3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint32_t*, uint32_t*, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint32_t*) + sizeof(uint32_t*) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetNumPlanes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_GetNumPlanes)(___frameTime0, ___numAddedPlanes1, ___numUpdatedPlanes2, ___numRemovedPlanes3);
	#else
	il2cppPInvokeFunc(___frameTime0, ___numAddedPlanes1, ___numUpdatedPlanes2, ___numRemovedPlanes3);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::GetPlanes(System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetPlanes_m6DE10EB11BD37B721B05EE0D81749D497D994253 (void* ___addedPlanes0, void* ___updatedPlanes1, void* ___removedPlanes2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetPlanes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_GetPlanes)(___addedPlanes0, ___updatedPlanes1, ___removedPlanes2);
	#else
	il2cppPInvokeFunc(___addedPlanes0, ___updatedPlanes1, ___removedPlanes2);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::CreateAnchorProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_CreateAnchorProvider_m1F05912AE836F2E343B0DE171E14C0B5ECF09A50 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_CreateAnchorProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_CreateAnchorProvider)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Boolean Microsoft.MixedReality.NativeLib::TryAddAnchor(Microsoft.MixedReality.OpenXR.Preview.FrameTime,UnityEngine.Quaternion,UnityEngine.Vector3,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryAddAnchor_m7E95288A37E6666155EFDA1FD746D46644E00032 (int32_t ___frameTime0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, void* ___anchorPtr3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_TryAddAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_TryAddAnchor)(___frameTime0, ___rotation1, ___position2, ___anchorPtr3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___frameTime0, ___rotation1, ___position2, ___anchorPtr3);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Microsoft.MixedReality.NativeLib::TryRemoveAnchor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryRemoveAnchor_mAB1FA142CAF3B0265B39CABD7E32AA134D1388FE (Guid_t  ___anchorId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Guid_t );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Guid_t );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_TryRemoveAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_TryRemoveAnchor)(___anchorId0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___anchorId0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.NativeLib::GetNumAnchorChanges(Microsoft.MixedReality.OpenXR.Preview.FrameTime,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumAnchorChanges_m384363A9490B09EE3DBFCD7B1AA1A8317E889DC6 (int32_t ___frameTime0, uint32_t* ___numAddedAnchors1, uint32_t* ___numUpdatedAnchors2, uint32_t* ___numRemovedAnchors3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint32_t*, uint32_t*, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint32_t*) + sizeof(uint32_t*) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetNumAnchorChanges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_GetNumAnchorChanges)(___frameTime0, ___numAddedAnchors1, ___numUpdatedAnchors2, ___numRemovedAnchors3);
	#else
	il2cppPInvokeFunc(___frameTime0, ___numAddedAnchors1, ___numUpdatedAnchors2, ___numRemovedAnchors3);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::GetAnchorChanges(System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetAnchorChanges_mFCE4B09FF1C52EB5CC85E04D062B4471F68DFB59 (void* ___addedAnchors0, void* ___updatedAnchors1, void* ___removedAnchors2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetAnchorChanges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_GetAnchorChanges)(___addedAnchors0, ___updatedAnchors1, ___removedAnchors2);
	#else
	il2cppPInvokeFunc(___addedAnchors0, ___updatedAnchors1, ___removedAnchors2);
	#endif

}
// System.Void Microsoft.MixedReality.NativeLib::LoadAnchorStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_LoadAnchorStore_m6745651A6CAE68AC00ADCC0405D44F33D24F3628 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_LoadAnchorStore", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_LoadAnchorStore)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.UInt32 Microsoft.MixedReality.NativeLib::GetNumPersistedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetNumPersistedAnchorNames_m3292ADAD0B0214526D05D756088D8797A38DE182 (const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetNumPersistedAnchorNames", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_GetNumPersistedAnchorNames)();
	#else
	uint32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.NativeLib::GetPersistedAnchorName(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetPersistedAnchorName_m8E5B69A487278DEF24016A403EE13DB67C085BA8 (uint32_t ___idx0, StringBuilder_t * ___nameOut1, uint32_t ___capacity2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint32_t, char*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetPersistedAnchorName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___nameOut1' to native representation
	char* ____nameOut1_marshaled = NULL;
	____nameOut1_marshaled = il2cpp_codegen_marshal_string_builder(___nameOut1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_GetPersistedAnchorName)(___idx0, ____nameOut1_marshaled, ___capacity2);
	#else
	il2cppPInvokeFunc(___idx0, ____nameOut1_marshaled, ___capacity2);
	#endif

	// Marshaling of parameter '___nameOut1' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___nameOut1, ____nameOut1_marshaled);

	// Marshaling cleanup of parameter '___nameOut1' native representation
	il2cpp_codegen_marshal_free(____nameOut1_marshaled);
	____nameOut1_marshaled = NULL;

}
// System.Guid Microsoft.MixedReality.NativeLib::LoadPersistedAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  NativeLib_LoadPersistedAnchor_m562ABB7A26372924E1DDCB49BE00C9A2683375D1 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef Guid_t  (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_LoadPersistedAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	Guid_t  returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_LoadPersistedAnchor)(____name0_marshaled);
	#else
	Guid_t  returnValue = il2cppPInvokeFunc(____name0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return returnValue;
}
// System.Boolean Microsoft.MixedReality.NativeLib::TryPersistAnchor(System.String,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_TryPersistAnchor_m064839EC5DEDBB99DE671B1B2A5C9ABDACFFA8AE (String_t* ___name0, Guid_t  ___anchorId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, Guid_t );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(Guid_t );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_TryPersistAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_TryPersistAnchor)(____name0_marshaled, ___anchorId1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____name0_marshaled, ___anchorId1);
	#endif

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.NativeLib::UnpersistAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_UnpersistAnchor_mACA657214150AD596E859CFA2D27471A50BFD9C0 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_UnpersistAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_UnpersistAnchor)(____name0_marshaled);
	#else
	il2cppPInvokeFunc(____name0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void Microsoft.MixedReality.NativeLib::ClearPersistedAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_ClearPersistedAnchors_m9D164DDEAF317E198D0329074662F1C44DFB7ECE (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_ClearPersistedAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(openxr_plugin_ClearPersistedAnchors)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Boolean Microsoft.MixedReality.NativeLib::GetHandJointData(Microsoft.MixedReality.OpenXR.Preview.Handedness,Microsoft.MixedReality.OpenXR.Preview.FrameTime,Microsoft.MixedReality.OpenXR.Preview.HandJointLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_GetHandJointData_mC45CAC48417829F2A2004309AE5AD0D79B78F67B (int32_t ___handedness0, int32_t ___frameTime1, HandJointLocationU5BU5D_t054C61DF686AACB914718C5F431FC13CAC7F8271* ___handJoints2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_GetHandJointData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handJoints2' to native representation
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * ____handJoints2_marshaled = NULL;
	if (___handJoints2 != NULL)
	{
		____handJoints2_marshaled = reinterpret_cast<HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 *>((___handJoints2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_GetHandJointData)(___handedness0, ___frameTime1, ____handJoints2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handedness0, ___frameTime1, ____handJoints2_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Microsoft.MixedReality.NativeLib::SetRemotingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_SetRemotingEnabled_mEF38533940F6125E4A507E8162269C52D3EA1961 (bool ___enabled0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetRemotingEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_SetRemotingEnabled)(static_cast<int32_t>(___enabled0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___enabled0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Microsoft.MixedReality.NativeLib::SetRemotingConfiguration(System.String,Microsoft.MixedReality.Remoting.RemotingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeLib_SetRemotingConfiguration_m44F0C0AE2E7CCA612EDADEAC21E1695FFAFE1F85 (String_t* ___hostName0, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1  ___configuration1, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke) + 2;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MicrosoftOpenXRPlugin"), "openxr_plugin_SetRemotingConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hostName0' to native representation
	char* ____hostName0_marshaled = NULL;
	____hostName0_marshaled = il2cpp_codegen_marshal_string(___hostName0);

	// Marshaling of parameter '___configuration1' to native representation
	RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke ____configuration1_marshaled = {};
	RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke(___configuration1, ____configuration1_marshaled);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MicrosoftOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(openxr_plugin_SetRemotingConfiguration)(____hostName0_marshaled, ____configuration1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____hostName0_marshaled, ____configuration1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___hostName0' native representation
	il2cpp_codegen_marshal_free(____hostName0_marshaled);
	____hostName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___configuration1' native representation
	RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke_cleanup(____configuration1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.NativeLib::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib__ctor_mEFF74332AA65F899B9FAFAE44DA3552CD735558B (NativeLib_t68F97940F4059BB16739A055C778B459C6FEE023 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin__ctor_m1B94FA36BDD43C46B3555E9DC95F58349182EE7C (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C2563CC03D80DE3B21F33372431FBFBFEF25330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * V_0 = NULL;
	PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * V_1 = NULL;
	AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * V_2 = NULL;
	{
		// private List<Feature> m_features = new List<Feature>();
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_0 = (List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 *)il2cpp_codegen_object_new(List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660_il2cpp_TypeInfo_var);
		List_1__ctor_m1C2563CC03D80DE3B21F33372431FBFBFEF25330(L_0, /*hidden argument*/List_1__ctor_m1C2563CC03D80DE3B21F33372431FBFBFEF25330_RuntimeMethod_var);
		__this->set_m_features_19(L_0);
		// OpenXRPlugin()
		OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068(__this, /*hidden argument*/NULL);
		// m_features.Add(m_inputFeature = new InputFeature(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_1 = __this->get_m_features_19();
		InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * L_2 = (InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F *)il2cpp_codegen_object_new(InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F_il2cpp_TypeInfo_var);
		InputFeature__ctor_m53A4D6DE4C7BFD42267BEFD6A399783FE44F8145(L_2, __this, /*hidden argument*/NULL);
		InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * L_3 = L_2;
		V_0 = L_3;
		__this->set_m_inputFeature_16(L_3);
		InputFeature_t8B6B1A68D2DAF039383201C4EAD9918C7A87957F * L_4 = V_0;
		NullCheck(L_1);
		List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110(L_1, L_4, /*hidden argument*/List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110_RuntimeMethod_var);
		// if (m_planeFinding)
		bool L_5 = __this->get_m_planeFinding_15();
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// m_features.Add(m_planeFeature = new PlaneFeature(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_6 = __this->get_m_features_19();
		PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * L_7 = (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 *)il2cpp_codegen_object_new(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var);
		PlaneFeature__ctor_mE704E4183EB5502ED3E6E69339A1738EFDAE2B24(L_7, __this, /*hidden argument*/NULL);
		PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * L_8 = L_7;
		V_1 = L_8;
		__this->set_m_planeFeature_17(L_8);
		PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * L_9 = V_1;
		NullCheck(L_6);
		List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110(L_6, L_9, /*hidden argument*/List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110_RuntimeMethod_var);
	}

IL_004d:
	{
		// m_features.Add(m_anchorFeature = new AnchorFeature(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_10 = __this->get_m_features_19();
		AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * L_11 = (AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 *)il2cpp_codegen_object_new(AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5_il2cpp_TypeInfo_var);
		AnchorFeature__ctor_m88592D192AF8B828E1D22FEB150FB3E40320DCFA(L_11, __this, /*hidden argument*/NULL);
		AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * L_12 = L_11;
		V_2 = L_12;
		__this->set_m_anchorFeature_18(L_12);
		AnchorFeature_t387068BB701293581318592D7999FC0ED3D012F5 * L_13 = V_2;
		NullCheck(L_10);
		List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110(L_10, L_13, /*hidden argument*/List_1_Add_m69249277AA1F69C6F145F9852E127198DCC5E110_RuntimeMethod_var);
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRPlugin_get_Instance_m5A9F29436F87D80536EFB362C6EBB43A2E432292 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public ulong Instance { get; private set; }
		uint64_t L_0 = __this->get_U3CInstanceU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_Instance(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong Instance { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CInstanceU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_SystemId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRPlugin_get_SystemId_mDE025D0FBC203A6A2C0D7E7D09F5D781222F8D24 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public ulong SystemId { get; private set; }
		uint64_t L_0 = __this->get_U3CSystemIdU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_SystemId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong SystemId { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CSystemIdU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_Session()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRPlugin_get_Session_m2872A7AF12BD3DA6152700984C2D43EFB38A2C92 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public ulong Session { get; private set; }
		uint64_t L_0 = __this->get_U3CSessionU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_Session(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong Session { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CSessionU3Ek__BackingField_23(L_0);
		return;
	}
}
// Microsoft.MixedReality.OpenXR.XrSessionState Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_SessionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRPlugin_get_SessionState_m47F3E01BD477A073D3A0A57969B7763D7465E72B (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public XrSessionState SessionState { get; private set; }
		int32_t L_0 = __this->get_U3CSessionStateU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_SessionState(Microsoft.MixedReality.OpenXR.XrSessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public XrSessionState SessionState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSessionStateU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_ReferenceSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRPlugin_get_ReferenceSpace_m57127B8E52032FB1BD0F3FF188C7F4349F88B7E6 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public ulong ReferenceSpace { get; private set; }
		uint64_t L_0 = __this->get_U3CReferenceSpaceU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_ReferenceSpace(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ReferenceSpace { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CReferenceSpaceU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::IsExtensionEnabled(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRPlugin_IsExtensionEnabled_mF61EE5421576C3F50A7FD55420D8F689A7E1F9B9 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, String_t* ___extensionName0, uint32_t ___minimumRevision1, const RuntimeMethod* method)
{
	{
		// if (!OpenXRRuntime.IsExtensionEnabled(extensionName))
		String_t* L_0 = ___extensionName0;
		bool L_1;
		L_1 = OpenXRRuntime_IsExtensionEnabled_mC740857A4DF035AF82C46FDC30CE145E7C6C581F(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return OpenXRRuntime.GetExtensionVersion(extensionName) >= minimumRevision;
		String_t* L_2 = ___extensionName0;
		uint32_t L_3;
		L_3 = OpenXRRuntime_GetExtensionVersion_mB150A7626F558C0313547258F1CDEB950132B639(L_2, /*hidden argument*/NULL);
		uint32_t L_4 = ___minimumRevision1;
		return (bool)((((int32_t)((!(((uint32_t)L_3) >= ((uint32_t)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::get_IsAnchorExtensionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRPlugin_get_IsAnchorExtensionSupported_mDF9440D7059738CAF0C3AE3A0E9DE5A4A6AAF6BC (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsAnchorExtensionSupported { get; private set; }
		bool L_0 = __this->get_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::set_IsAnchorExtensionSupported(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsAnchorExtensionSupported { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSubsystemCreate_mC5D7F6AB175AD6F24E70D68C13031BE55D98EDDE (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_features.ForEach(feature => feature.OnSubsystemCreate(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_0 = __this->get_m_features_19();
		Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * L_1 = (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *)il2cpp_codegen_object_new(Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41(L_1, __this, (intptr_t)((intptr_t)OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6(L_0, L_1, /*hidden argument*/List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSubsystemStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSubsystemStart_mC7216BA5427746FFD56623B42B67EFEEBC55DA20 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_features.ForEach(feature => feature.OnSubsystemStart(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_0 = __this->get_m_features_19();
		Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * L_1 = (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *)il2cpp_codegen_object_new(Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41(L_1, __this, (intptr_t)((intptr_t)OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6(L_0, L_1, /*hidden argument*/List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSubsystemStop_m055A1344973ADA64294C575A22DC5B2D1EB4D810 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_features.ForEach(feature => feature.OnSubsystemStop(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_0 = __this->get_m_features_19();
		Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * L_1 = (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *)il2cpp_codegen_object_new(Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41(L_1, __this, (intptr_t)((intptr_t)OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6(L_0, L_1, /*hidden argument*/List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSubsystemDestroy_mB3A04B7680BCEFFF817F638E3009AC4EFFA54360 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_features.ForEach(feature => feature.OnSubsystemDestroy(this));
		List_1_tF1870A6FC8FB98630241EE8F4B9E653BE6F17660 * L_0 = __this->get_m_features_19();
		Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D * L_1 = (Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D *)il2cpp_codegen_object_new(Action_1_tB15D6BE024BDE2818A04CA41FCBC54FCE2753C4D_il2cpp_TypeInfo_var);
		Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41(L_1, __this, (intptr_t)((intptr_t)OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB65EFE343E9C4566B6ED5B2BC46CD0F7AF8DDA41_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6(L_0, L_1, /*hidden argument*/List_1_ForEach_m6F0FA07CB83DC1F704504FF73F43588A7AD922A6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.IntPtr Microsoft.MixedReality.OpenXR.OpenXRPlugin::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRPlugin_HookGetInstanceProcAddr_mFF978D7F536647415F4813140F026BA2D2598D4B (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, intptr_t ___func0, const RuntimeMethod* method)
{
	{
		// return NativeLib.HookGetInstanceProcAddr(func);
		intptr_t L_0 = ___func0;
		intptr_t L_1;
		L_1 = NativeLib_HookGetInstanceProcAddr_mAE1915E4BB26362E928D0908233A5CC278BB8553((intptr_t)L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRPlugin_OnInstanceCreate_m197CA80EAA1F5D4B11295218BECDA7A8948A8448 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB514132682C349F9AD00BA8E587F43AD49524D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = instance;
		uint64_t L_0 = ___instance0;
		OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05_inline(__this, L_0, /*hidden argument*/NULL);
		// NativeLib.SetXrInstance(instance);
		uint64_t L_1 = ___instance0;
		NativeLib_SetXrInstance_mE9E8375DBA5390F4721A1484DE9BD8536499862E(L_1, /*hidden argument*/NULL);
		// IsAnchorExtensionSupported = IsExtensionEnabled("XR_MSFT_spatial_anchor");
		bool L_2;
		L_2 = OpenXRPlugin_IsExtensionEnabled_mF61EE5421576C3F50A7FD55420D8F689A7E1F9B9(__this, _stringLiteralEBB514132682C349F9AD00BA8E587F43AD49524D, 1, /*hidden argument*/NULL);
		OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA_inline(__this, L_2, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnInstanceDestroy_mB5F4BA64735CDDC5EBCB50BEDEE5F7A1B7C98F56 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	{
		// SystemId = 0;
		OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E_inline(__this, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// NativeLib.SetXrSystemId(0);
		NativeLib_SetXrSystemId_m60F5E00FB020F39CEB3A78848E2783ACD5EF9B3B(((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// Instance = 0;
		OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05_inline(__this, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// NativeLib.SetXrInstance(0);
		NativeLib_SetXrInstance_mE9E8375DBA5390F4721A1484DE9BD8536499862E(((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSystemChange_m838D3D4A3728940F1BEEB733249D66C4654A0DFF (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___systemId0, const RuntimeMethod* method)
{
	{
		// SystemId = systemId;
		uint64_t L_0 = ___systemId0;
		OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E_inline(__this, L_0, /*hidden argument*/NULL);
		// NativeLib.SetXrSystemId(systemId);
		uint64_t L_1 = ___systemId0;
		NativeLib_SetXrSystemId_m60F5E00FB020F39CEB3A78848E2783ACD5EF9B3B(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSessionCreate_mF3804C62AAE5B2C62EC2505D78548C21AC2F9844 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___session0, const RuntimeMethod* method)
{
	{
		// Session = session;
		uint64_t L_0 = ___session0;
		OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC_inline(__this, L_0, /*hidden argument*/NULL);
		// NativeLib.SetXrSession(session);
		uint64_t L_1 = ___session0;
		NativeLib_SetXrSession_m0A0A5F0077D698F3FEBF156607356703BCB0E5E5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSessionBegin_m7A71EEEC3980428BAE5D7E8D590C7ED9B40971BD (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___session0, const RuntimeMethod* method)
{
	{
		// NativeLib.SetXrSessionRunning(true);
		NativeLib_SetXrSessionRunning_m3188DFEEAB13EF89733AB71EEE45A8E91C098834((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSessionStateChange_m02824EB8DF410CC850274CA835C78176BDDC8E2E (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	{
		// SessionState = (XrSessionState)newState;
		int32_t L_0 = ___newState1;
		OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B_inline(__this, L_0, /*hidden argument*/NULL);
		// NativeLib.SetSessionState((uint)newState);
		int32_t L_1 = ___newState1;
		NativeLib_SetSessionState_m4C00594B58BA6FAC6DE2954CEA21A45A85EFC9A2(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSessionEnd_m1BB833F72018572F4B0A22FF6CB6B9A03010AD17 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___session0, const RuntimeMethod* method)
{
	{
		// NativeLib.SetXrSessionRunning(false);
		NativeLib_SetXrSessionRunning_m3188DFEEAB13EF89733AB71EEE45A8E91C098834((bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnSessionDestroy_mF7925ACB83645012C94E5FD6BFFC87C1A58C058A (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___session0, const RuntimeMethod* method)
{
	{
		// Session = 0;
		OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC_inline(__this, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// NativeLib.SetXrSession(0);
		NativeLib_SetXrSession_m0A0A5F0077D698F3FEBF156607356703BCB0E5E5(((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_OnAppSpaceChange_mE405BD6C322F5F745125846FC82176E8A6A0EF3A (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___referenceSpace0, const RuntimeMethod* method)
{
	{
		// ReferenceSpace = referenceSpace;
		uint64_t L_0 = ___referenceSpace0;
		OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D_inline(__this, L_0, /*hidden argument*/NULL);
		// NativeLib.SetReferenceSpace(referenceSpace);
		uint64_t L_1 = ___referenceSpace0;
		NativeLib_SetReferenceSpace_m00C9A9D5DB40B586D1A09C8CE38F3291233B2DFA(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::<OnSubsystemCreate>b__33_0(Microsoft.MixedReality.OpenXR.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * ___feature0, const RuntimeMethod* method)
{
	{
		// m_features.ForEach(feature => feature.OnSubsystemCreate(this));
		Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * L_0 = ___feature0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.IOpenXRPlugin) */, L_0, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::<OnSubsystemStart>b__34_0(Microsoft.MixedReality.OpenXR.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * ___feature0, const RuntimeMethod* method)
{
	{
		// m_features.ForEach(feature => feature.OnSubsystemStart(this));
		Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * L_0 = ___feature0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemStart(Microsoft.MixedReality.OpenXR.IOpenXRPlugin) */, L_0, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::<OnSubsystemStop>b__35_0(Microsoft.MixedReality.OpenXR.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * ___feature0, const RuntimeMethod* method)
{
	{
		// m_features.ForEach(feature => feature.OnSubsystemStop(this));
		Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * L_0 = ___feature0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemStop(Microsoft.MixedReality.OpenXR.IOpenXRPlugin) */, L_0, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.OpenXRPlugin::<OnSubsystemDestroy>b__36_0(Microsoft.MixedReality.OpenXR.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91 (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * ___feature0, const RuntimeMethod* method)
{
	{
		// m_features.ForEach(feature => feature.OnSubsystemDestroy(this));
		Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * L_0 = ___feature0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Microsoft.MixedReality.OpenXR.Feature::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.IOpenXRPlugin) */, L_0, __this);
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
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature__ctor_mE704E4183EB5502ED3E6E69339A1738EFDAE2B24 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___context0, const RuntimeMethod* method)
{
	{
		// public PlaneFeature(IOpenXRContext context) : base(context) { }
		RuntimeObject* L_0 = ___context0;
		Feature__ctor_mC61533EDABCFB7E9F94C3A6919A172A1BB77EB61(__this, L_0, /*hidden argument*/NULL);
		// public PlaneFeature(IOpenXRContext context) : base(context) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature_OnSubsystemCreate_m7A3BCE8CB09026E2DF47AEEDC4831FDB3A170989 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_CreateSubsystem_TisXRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m6D903CE8726C926F330E19FE1F80DE23D907EB89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D89F99579B34626BB2B9805F09AFA6F281C998);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.CreateSubsystem<XRPlaneSubsystemDescriptor, XRPlaneSubsystem>(s_PlaneDescriptors, PlaneSubsystem.Id);
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var);
		List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * L_1 = ((PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_StaticFields*)il2cpp_codegen_static_fields_for(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var))->get_s_PlaneDescriptors_1();
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F *, String_t* >::Invoke(IOpenXRPlugin_CreateSubsystem_TisXRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m6D903CE8726C926F330E19FE1F80DE23D907EB89_RuntimeMethod_var, L_0, L_1, _stringLiteralC1D89F99579B34626BB2B9805F09AFA6F281C998);
		// NativeLib.CreatePlaneProvider();
		NativeLib_CreatePlaneProvider_m508184468FC0B76418E1E8A5AE1B7229B590DF5E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::OnSubsystemStart(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature_OnSubsystemStart_m98D5EB866013000351F9BE016EA32475253D7C48 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_StartSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_mA114CD229CBADB122D276DE4825790122423EC08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.StartSubsystem<XRPlaneSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_StartSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_mA114CD229CBADB122D276DE4825790122423EC08_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::OnSubsystemStop(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature_OnSubsystemStop_mFDED94D0C946928317A0D097103F4A1046E721F6 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_StopSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m47FA07393E860013D34E7BA1588AA1C7144E0041_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.StopSubsystem<XRPlaneSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_StopSubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m47FA07393E860013D34E7BA1588AA1C7144E0041_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.IOpenXRPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature_OnSubsystemDestroy_mD99445BE1DD083D0FAE0BC159C213B6EBC94E2D7 (PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6 * __this, RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOpenXRPlugin_DestroySubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m4939095B974BFFF24AEEDA597EA5B8AFA922D42F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.DestroySubsystem<XRPlaneSubsystem>();
		RuntimeObject* L_0 = ___plugin0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(IOpenXRPlugin_DestroySubsystem_TisXRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE_m4939095B974BFFF24AEEDA597EA5B8AFA922D42F_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneFeature__cctor_mD94DC56ABE28C7766C02ACD25E84CD44E30B3034 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F75B128B399FA1DECE08843C1E53FB9FC2795E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRPlaneSubsystemDescriptor> s_PlaneDescriptors = new List<XRPlaneSubsystemDescriptor>();
		List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * L_0 = (List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F *)il2cpp_codegen_object_new(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F_il2cpp_TypeInfo_var);
		List_1__ctor_m6F75B128B399FA1DECE08843C1E53FB9FC2795E5(L_0, /*hidden argument*/List_1__ctor_m6F75B128B399FA1DECE08843C1E53FB9FC2795E5_RuntimeMethod_var);
		((PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_StaticFields*)il2cpp_codegen_static_fields_for(PlaneFeature_tDB63F755E334D4B347865DAC0681EB1A105792D6_il2cpp_TypeInfo_var))->set_s_PlaneDescriptors_1(L_0);
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
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSubsystem_RegisterDescriptor_m42912E97BB0237E103E7ABBC41B8AD8E1B4AAEBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D89F99579B34626BB2B9805F09AFA6F281C998);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRPlaneSubsystemDescriptor.Create(new XRPlaneSubsystemDescriptor.Cinfo
		//             {
		//                 id = Id,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(PlaneSubsystem.OpenXRProvider),
		//                 subsystemTypeOverride = typeof(PlaneSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(PlaneSubsystem),
		// #endif
		//                 supportsHorizontalPlaneDetection = true,
		//                 supportsVerticalPlaneDetection = true,
		//                 supportsArbitraryPlaneDetection = true,
		//                 supportsBoundaryVertices = true
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD ));
		Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), _stringLiteralC1D89F99579B34626BB2B9805F09AFA6F281C998, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_4 = V_0;
		XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSubsystem__ctor_mF01484477BBBD3E1B0508614B39A3C1FBE1115F8 (PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974 * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Remoting.RemotingConfiguration
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled)
{
	marshaled.___HostPort_0 = unmarshaled.get_HostPort_0();
	marshaled.___MaxBitrateKbps_1 = unmarshaled.get_MaxBitrateKbps_1();
	marshaled.___VideoCodec_2 = unmarshaled.get_VideoCodec_2();
	marshaled.___EnableAudio_3 = static_cast<int32_t>(unmarshaled.get_EnableAudio_3());
}
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke_back(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled)
{
	uint16_t unmarshaled_HostPort_temp_0 = 0;
	unmarshaled_HostPort_temp_0 = marshaled.___HostPort_0;
	unmarshaled.set_HostPort_0(unmarshaled_HostPort_temp_0);
	uint32_t unmarshaled_MaxBitrateKbps_temp_1 = 0;
	unmarshaled_MaxBitrateKbps_temp_1 = marshaled.___MaxBitrateKbps_1;
	unmarshaled.set_MaxBitrateKbps_1(unmarshaled_MaxBitrateKbps_temp_1);
	int32_t unmarshaled_VideoCodec_temp_2 = 0;
	unmarshaled_VideoCodec_temp_2 = marshaled.___VideoCodec_2;
	unmarshaled.set_VideoCodec_2(unmarshaled_VideoCodec_temp_2);
	bool unmarshaled_EnableAudio_temp_3 = false;
	unmarshaled_EnableAudio_temp_3 = static_cast<bool>(marshaled.___EnableAudio_3);
	unmarshaled.set_EnableAudio_3(unmarshaled_EnableAudio_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Remoting.RemotingConfiguration
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_pinvoke_cleanup(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Remoting.RemotingConfiguration
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_com(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_com& marshaled)
{
	marshaled.___HostPort_0 = unmarshaled.get_HostPort_0();
	marshaled.___MaxBitrateKbps_1 = unmarshaled.get_MaxBitrateKbps_1();
	marshaled.___VideoCodec_2 = unmarshaled.get_VideoCodec_2();
	marshaled.___EnableAudio_3 = static_cast<int32_t>(unmarshaled.get_EnableAudio_3());
}
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_com_back(const RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_com& marshaled, RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1& unmarshaled)
{
	uint16_t unmarshaled_HostPort_temp_0 = 0;
	unmarshaled_HostPort_temp_0 = marshaled.___HostPort_0;
	unmarshaled.set_HostPort_0(unmarshaled_HostPort_temp_0);
	uint32_t unmarshaled_MaxBitrateKbps_temp_1 = 0;
	unmarshaled_MaxBitrateKbps_temp_1 = marshaled.___MaxBitrateKbps_1;
	unmarshaled.set_MaxBitrateKbps_1(unmarshaled_MaxBitrateKbps_temp_1);
	int32_t unmarshaled_VideoCodec_temp_2 = 0;
	unmarshaled_VideoCodec_temp_2 = marshaled.___VideoCodec_2;
	unmarshaled.set_VideoCodec_2(unmarshaled_VideoCodec_temp_2);
	bool unmarshaled_EnableAudio_temp_3 = false;
	unmarshaled_EnableAudio_temp_3 = static_cast<bool>(marshaled.___EnableAudio_3);
	unmarshaled.set_EnableAudio_3(unmarshaled_EnableAudio_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Remoting.RemotingConfiguration
IL2CPP_EXTERN_C void RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshal_com_cleanup(RemotingConfiguration_t2295457F55A0111EFE9366CCB8EEBC8087B0A6A1_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore__ctor_m4A986448FB2B170CE99EF81E14D092E23D586FF7 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool m_persistedAnchorNamesCacheDirty = true;
		__this->set_m_persistedAnchorNamesCacheDirty_1((bool)1);
		// private readonly object m_persistedAnchorNamesCacheLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_m_persistedAnchorNamesCacheLock_2(L_0);
		// internal XRAnchorStore() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal XRAnchorStore() { }
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> Microsoft.MixedReality.ARSubsystems.XRAnchorStore::get_PersistedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRAnchorStore_get_PersistedAnchorNames_m7F9ECA300099E0D3D8F71A6666FB62B88835C9E2 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (m_persistedAnchorNamesCacheLock)
		RuntimeObject * L_0 = __this->get_m_persistedAnchorNamesCacheLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (m_persistedAnchorNamesCacheDirty)
			bool L_2 = __this->get_m_persistedAnchorNamesCacheDirty_1();
			if (!L_2)
			{
				goto IL_0026;
			}
		}

IL_0019:
		{
			// UpdatePersistedAnchorNames();
			XRAnchorStore_UpdatePersistedAnchorNames_m359570C559BE6B40A7A637AA60A01723C0ACA7E3(__this, /*hidden argument*/NULL);
			// m_persistedAnchorNamesCacheDirty = false;
			__this->set_m_persistedAnchorNamesCacheDirty_1((bool)0);
		}

IL_0026:
		{
			// return m_persistedAnchorNamesCache;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_m_persistedAnchorNamesCache_0();
			V_2 = (RuntimeObject*)L_3;
			IL2CPP_LEAVE(0x39, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(47)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::UpdatePersistedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore_UpdatePersistedAnchorNames_m359570C559BE6B40A7A637AA60A01723C0ACA7E3 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	StringBuilder_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (m_persistedAnchorNamesCacheLock)
		RuntimeObject * L_0 = __this->get_m_persistedAnchorNamesCacheLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// m_persistedAnchorNamesCache = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			__this->set_m_persistedAnchorNamesCache_0(L_2);
			// uint numPersisted = NativeLib.GetNumPersistedAnchorNames();
			uint32_t L_3;
			L_3 = NativeLib_GetNumPersistedAnchorNames_m3292ADAD0B0214526D05D756088D8797A38DE182(/*hidden argument*/NULL);
			V_2 = L_3;
			// for (uint i = 0; i < numPersisted; i++)
			V_3 = 0;
			goto IL_0057;
		}

IL_0026:
		{
			// StringBuilder stringBuilder = new StringBuilder(255);
			StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_4, ((int32_t)255), /*hidden argument*/NULL);
			V_4 = L_4;
			// NativeLib.GetPersistedAnchorName(i, stringBuilder, (uint)stringBuilder.Capacity);
			uint32_t L_5 = V_3;
			StringBuilder_t * L_6 = V_4;
			StringBuilder_t * L_7 = V_4;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = StringBuilder_get_Capacity_m067D01B281C708C07EB01C776CA99B72C4F78B30(L_7, /*hidden argument*/NULL);
			NativeLib_GetPersistedAnchorName_m8E5B69A487278DEF24016A403EE13DB67C085BA8(L_5, L_6, L_8, /*hidden argument*/NULL);
			// m_persistedAnchorNamesCache.Add(stringBuilder.ToString());
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = __this->get_m_persistedAnchorNamesCache_0();
			StringBuilder_t * L_10 = V_4;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			NullCheck(L_9);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_9, L_11, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// for (uint i = 0; i < numPersisted; i++)
			uint32_t L_12 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		}

IL_0057:
		{
			// for (uint i = 0; i < numPersisted; i++)
			uint32_t L_13 = V_3;
			uint32_t L_14 = V_2;
			if ((!(((uint32_t)L_13) >= ((uint32_t)L_14))))
			{
				goto IL_0026;
			}
		}

IL_005b:
		{
			// }
			IL2CPP_LEAVE(0x67, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_0066;
			}
		}

IL_0060:
		{
			RuntimeObject * L_16 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.ARSubsystems.XRAnchorStore::LoadAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRAnchorStore_LoadAnchor_m2852C7BE944FFBA0EA575B9B45DB4ACF89B4B624 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return FeatureUtils.ToTrackableId(NativeLib.LoadPersistedAnchor(name));
		String_t* L_0 = ___name0;
		Guid_t  L_1;
		L_1 = NativeLib_LoadPersistedAnchor_m562ABB7A26372924E1DDCB49BE00C9A2683375D1(L_0, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = FeatureUtils_ToTrackableId_mE7D5A75EED5ABFFF778B680FC7418D5FB1B04C98(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.ARSubsystems.XRAnchorStore::TryPersistAnchor(System.String,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorStore_TryPersistAnchor_m3E41E249D88EE4021C0F63F77A773C0874CD485D (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, String_t* ___name0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (m_persistedAnchorNamesCacheLock)
		RuntimeObject * L_0 = __this->get_m_persistedAnchorNamesCacheLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_persistedAnchorNamesCacheDirty = true;
		__this->set_m_persistedAnchorNamesCacheDirty_1((bool)1);
		// return NativeLib.TryPersistAnchor(name, FeatureUtils.ToGuid(trackableId));
		String_t* L_2 = ___name0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId1;
		Guid_t  L_4;
		L_4 = FeatureUtils_ToGuid_m4B9DDBAB5CF1ACE6EEE930D677E484D0D336E1B8(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = NativeLib_TryPersistAnchor_m064839EC5DEDBB99DE671B1B2A5C9ABDACFFA8AE(L_2, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		IL2CPP_LEAVE(0x31, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
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
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::UnpersistAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore_UnpersistAnchor_m9677AEA09A2398ECD6D4B7C29A67D4FB68975B72 (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (m_persistedAnchorNamesCacheLock)
		RuntimeObject * L_0 = __this->get_m_persistedAnchorNamesCacheLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_persistedAnchorNamesCacheDirty = true;
		__this->set_m_persistedAnchorNamesCacheDirty_1((bool)1);
		// NativeLib.UnpersistAnchor(name);
		String_t* L_2 = ___name0;
		NativeLib_UnpersistAnchor_mACA657214150AD596E859CFA2D27471A50BFD9C0(L_2, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.ARSubsystems.XRAnchorStore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorStore_Clear_m189E380BA8D900A261C3BF126FCEBD6E3FEC996D (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (m_persistedAnchorNamesCacheLock)
		RuntimeObject * L_0 = __this->get_m_persistedAnchorNamesCacheLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_persistedAnchorNamesCacheDirty = true;
		__this->set_m_persistedAnchorNamesCacheDirty_1((bool)1);
		// NativeLib.ClearPersistedAnchors();
		NativeLib_ClearPersistedAnchors_m9D164DDEAF317E198D0329074662F1C44DFB7ECE(/*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider__ctor_m24DC4CED81331F424CF3180E5B85293A8CFBF6CE (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, const RuntimeMethod* method)
{
	{
		// public OpenXRProvider() { }
		Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498(__this, /*hidden argument*/NULL);
		// public OpenXRProvider() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Destroy_m0A5D21D1E238F61B941768B6C3002336CF68CE0C (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Start_m610F1205799949EC445D3187ED647B7AFB1A0960 (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Stop_m1E39B35829EEC826B3ED5964EC2EFA323684D16D (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  OpenXRProvider_GetChanges_mC25461793913452EB58FC129EAA03E6205D532AB (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultAnchor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  V_5;
	memset((&V_5), 0, sizeof(V_5));
	XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* V_6 = NULL;
	XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* V_7 = NULL;
	TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// uint numAddedAnchors = 0;
		V_0 = 0;
		// uint numUpdatedAnchors = 0;
		V_1 = 0;
		// uint numRemovedAnchors = 0;
		V_2 = 0;
		// NativeLib.GetNumAnchorChanges(OpenXR.Preview.FrameTime.OnUpdate, ref numAddedAnchors, ref numUpdatedAnchors, ref numRemovedAnchors);
		NativeLib_GetNumAnchorChanges_m384363A9490B09EE3DBFCD7B1AA1A8317E889DC6(0, (uint32_t*)(&V_0), (uint32_t*)(&V_1), (uint32_t*)(&V_2), /*hidden argument*/NULL);
		// using (var addedNativeAnchors = new NativeArray<NativeAnchor>((int)numAddedAnchors, allocator, NativeArrayOptions.UninitializedMemory))
		uint32_t L_0 = V_0;
		int32_t L_1 = ___allocator1;
		NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_3), L_0, L_1, 0, /*hidden argument*/NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_RuntimeMethod_var);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			// using (var updatedNativeAnchors = new NativeArray<NativeAnchor>((int)numUpdatedAnchors, allocator, NativeArrayOptions.UninitializedMemory))
			uint32_t L_2 = V_1;
			int32_t L_3 = ___allocator1;
			NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_4), L_2, L_3, 0, /*hidden argument*/NativeArray_1__ctor_m0130B9ABAE7A7A2C4826EEB7AC1BCB464B062715_RuntimeMethod_var);
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				// using (var removedNativeAnchors = new NativeArray<Guid>((int)numRemovedAnchors, allocator, NativeArrayOptions.UninitializedMemory))
				uint32_t L_4 = V_2;
				int32_t L_5 = ___allocator1;
				NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5), L_4, L_5, 0, /*hidden argument*/NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_RuntimeMethod_var);
			}

IL_0030:
			try
			{ // begin try (depth: 3)
				{
					// if (numAddedAnchors + numUpdatedAnchors + numRemovedAnchors > 0)
					uint32_t L_6 = V_0;
					uint32_t L_7 = V_1;
					uint32_t L_8 = V_2;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8))) > ((uint32_t)0))))
					{
						goto IL_0051;
					}
				}

IL_0038:
				{
					// NativeLib.GetAnchorChanges(
					//     NativeArrayUnsafeUtility.GetUnsafePtr(addedNativeAnchors),
					//     NativeArrayUnsafeUtility.GetUnsafePtr(updatedNativeAnchors),
					//     NativeArrayUnsafeUtility.GetUnsafePtr(removedNativeAnchors));
					NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  L_9 = V_3;
					void* L_10;
					L_10 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474(L_9, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_RuntimeMethod_var);
					NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D  L_11 = V_4;
					void* L_12;
					L_12 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474(L_11, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_mA99F8EF680CB44B410B26C6AD977BEEB8D712474_RuntimeMethod_var);
					NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  L_13 = V_5;
					void* L_14;
					L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1(L_13, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_RuntimeMethod_var);
					NativeLib_GetAnchorChanges_mFCE4B09FF1C52EB5CC85E04D062B4471F68DFB59((void*)(void*)L_10, (void*)(void*)L_12, (void*)(void*)L_14, /*hidden argument*/NULL);
				}

IL_0051:
				{
					// var addedAnchors = Array.Empty<XRAnchor>();
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_15;
					L_15 = Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_inline(/*hidden argument*/Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_RuntimeMethod_var);
					V_6 = L_15;
					// if (numAddedAnchors > 0)
					uint32_t L_16 = V_0;
					if ((!(((uint32_t)L_16) > ((uint32_t)0))))
					{
						goto IL_008e;
					}
				}

IL_005c:
				{
					// addedAnchors = new XRAnchor[numAddedAnchors];
					uint32_t L_17 = V_0;
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_18 = (XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*)(XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*)SZArrayNew(XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD_il2cpp_TypeInfo_var, (uint32_t)L_17);
					V_6 = L_18;
					// for (int i = 0; i < numAddedAnchors; ++i)
					V_9 = 0;
					goto IL_0087;
				}

IL_0069:
				{
					// addedAnchors[i] = ToXRAnchor(addedNativeAnchors[i]);
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_19 = V_6;
					int32_t L_20 = V_9;
					int32_t L_21 = V_9;
					NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_22;
					L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 , ((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_3))->___m_Buffer_0, L_21);
					XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_23;
					L_23 = OpenXRProvider_ToXRAnchor_mACB0B4BB26909C22B6C57057979FD6DC3836FB4B(__this, L_22, /*hidden argument*/NULL);
					NullCheck(L_19);
					(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C )L_23);
					// for (int i = 0; i < numAddedAnchors; ++i)
					int32_t L_24 = V_9;
					V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
				}

IL_0087:
				{
					// for (int i = 0; i < numAddedAnchors; ++i)
					int32_t L_25 = V_9;
					uint32_t L_26 = V_0;
					if ((((int64_t)((int64_t)((int64_t)L_25))) < ((int64_t)((int64_t)((uint64_t)L_26)))))
					{
						goto IL_0069;
					}
				}

IL_008e:
				{
					// var updatedAnchors = Array.Empty<XRAnchor>();
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_27;
					L_27 = Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_inline(/*hidden argument*/Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_RuntimeMethod_var);
					V_7 = L_27;
					// if (numUpdatedAnchors > 0)
					uint32_t L_28 = V_1;
					if ((!(((uint32_t)L_28) > ((uint32_t)0))))
					{
						goto IL_00cb;
					}
				}

IL_0099:
				{
					// updatedAnchors = new XRAnchor[numUpdatedAnchors];
					uint32_t L_29 = V_1;
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_30 = (XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*)(XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*)SZArrayNew(XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD_il2cpp_TypeInfo_var, (uint32_t)L_29);
					V_7 = L_30;
					// for (int i = 0; i < numUpdatedAnchors; ++i)
					V_10 = 0;
					goto IL_00c4;
				}

IL_00a6:
				{
					// updatedAnchors[i] = ToXRAnchor(updatedNativeAnchors[i]);
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_31 = V_7;
					int32_t L_32 = V_10;
					int32_t L_33 = V_10;
					NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_34;
					L_34 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 , ((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_4))->___m_Buffer_0, L_33);
					XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_35;
					L_35 = OpenXRProvider_ToXRAnchor_mACB0B4BB26909C22B6C57057979FD6DC3836FB4B(__this, L_34, /*hidden argument*/NULL);
					NullCheck(L_31);
					(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C )L_35);
					// for (int i = 0; i < numUpdatedAnchors; ++i)
					int32_t L_36 = V_10;
					V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
				}

IL_00c4:
				{
					// for (int i = 0; i < numUpdatedAnchors; ++i)
					int32_t L_37 = V_10;
					uint32_t L_38 = V_1;
					if ((((int64_t)((int64_t)((int64_t)L_37))) < ((int64_t)((int64_t)((uint64_t)L_38)))))
					{
						goto IL_00a6;
					}
				}

IL_00cb:
				{
					// var removedAnchors = Array.Empty<TrackableId>();
					TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_39;
					L_39 = Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_inline(/*hidden argument*/Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_RuntimeMethod_var);
					V_8 = L_39;
					// if (numRemovedAnchors > 0)
					uint32_t L_40 = V_2;
					if ((!(((uint32_t)L_40) > ((uint32_t)0))))
					{
						goto IL_0107;
					}
				}

IL_00d6:
				{
					// removedAnchors = new TrackableId[numRemovedAnchors];
					uint32_t L_41 = V_2;
					TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_42 = (TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*)(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*)SZArrayNew(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_il2cpp_TypeInfo_var, (uint32_t)L_41);
					V_8 = L_42;
					// for (int i = 0; i < numRemovedAnchors; ++i)
					V_11 = 0;
					goto IL_0100;
				}

IL_00e3:
				{
					// removedAnchors[i] = FeatureUtils.ToTrackableId(removedNativeAnchors[i]);
					TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_43 = V_8;
					int32_t L_44 = V_11;
					int32_t L_45 = V_11;
					Guid_t  L_46;
					L_46 = IL2CPP_NATIVEARRAY_GET_ITEM(Guid_t , ((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5))->___m_Buffer_0, L_45);
					TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_47;
					L_47 = FeatureUtils_ToTrackableId_mE7D5A75EED5ABFFF778B680FC7418D5FB1B04C98(L_46, /*hidden argument*/NULL);
					NullCheck(L_43);
					(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_47);
					// for (int i = 0; i < numRemovedAnchors; ++i)
					int32_t L_48 = V_11;
					V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
				}

IL_0100:
				{
					// for (int i = 0; i < numRemovedAnchors; ++i)
					int32_t L_49 = V_11;
					uint32_t L_50 = V_2;
					if ((((int64_t)((int64_t)((int64_t)L_49))) < ((int64_t)((int64_t)((uint64_t)L_50)))))
					{
						goto IL_00e3;
					}
				}

IL_0107:
				{
					// TrackableChanges<XRAnchor> trackableChanges = TrackableChanges<XRAnchor>.CopyFrom(
					//     new NativeArray<XRAnchor>(addedAnchors, allocator),
					//     new NativeArray<XRAnchor>(updatedAnchors, allocator),
					//     new NativeArray<TrackableId>(removedAnchors, allocator),
					//     allocator);
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_51 = V_6;
					int32_t L_52 = ___allocator1;
					NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_53;
					memset((&L_53), 0, sizeof(L_53));
					NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C((&L_53), L_51, L_52, /*hidden argument*/NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_RuntimeMethod_var);
					XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_54 = V_7;
					int32_t L_55 = ___allocator1;
					NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_56;
					memset((&L_56), 0, sizeof(L_56));
					NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C((&L_56), L_54, L_55, /*hidden argument*/NativeArray_1__ctor_m942481423340FDBB6F8FA238078ED0DDB1B5B11C_RuntimeMethod_var);
					TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_57 = V_8;
					int32_t L_58 = ___allocator1;
					NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_59;
					memset((&L_59), 0, sizeof(L_59));
					NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777((&L_59), L_57, L_58, /*hidden argument*/NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_RuntimeMethod_var);
					int32_t L_60 = ___allocator1;
					TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_61;
					L_61 = TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808(L_53, L_56, L_59, L_60, /*hidden argument*/TrackableChanges_1_CopyFrom_m83B3B346B90FF9FE6396C4CAE60BE6C240CC0808_RuntimeMethod_var);
					// return trackableChanges;
					V_12 = L_61;
					IL2CPP_LEAVE(0x153, FINALLY_0129);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0129;
			}

FINALLY_0129:
			{ // begin finally (depth: 3)
				NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5), /*hidden argument*/NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_RuntimeMethod_var);
				IL2CPP_END_FINALLY(297)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(297)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x153, FINALLY_0137);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0137;
		}

FINALLY_0137:
		{ // begin finally (depth: 2)
			NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_4), /*hidden argument*/NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_RuntimeMethod_var);
			IL2CPP_END_FINALLY(311)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(311)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x153, FINALLY_0145);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0145;
	}

FINALLY_0145:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27((NativeArray_1_t409CDF30D0571124F68EF1927F629B381FFAAA0D *)(&V_3), /*hidden argument*/NativeArray_1_Dispose_m76B74252D41EF138FE14024BB822CD7B26EA7D27_RuntimeMethod_var);
		IL2CPP_END_FINALLY(325)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(325)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x153, IL_0153)
	}

IL_0153:
	{
		// }
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_62 = V_12;
		return L_62;
	}
}
// UnityEngine.XR.ARSubsystems.XRAnchor Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::ToXRAnchor(Microsoft.MixedReality.OpenXR.NativeAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  OpenXRProvider_ToXRAnchor_mACB0B4BB26909C22B6C57057979FD6DC3836FB4B (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  ___nativeAnchor0, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var anchorId = FeatureUtils.ToTrackableId(nativeAnchor.id);
		NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_0 = ___nativeAnchor0;
		Guid_t  L_1 = L_0.get_id_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = FeatureUtils_ToTrackableId_mE7D5A75EED5ABFFF778B680FC7418D5FB1B04C98(L_1, /*hidden argument*/NULL);
		// var pose = new Pose(nativeAnchor.position, nativeAnchor.rotation);
		NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_3 = ___nativeAnchor0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_position_1();
		NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_5 = ___nativeAnchor0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5.get_rotation_2();
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_0), L_4, L_6, /*hidden argument*/NULL);
		// return new XRAnchor(anchorId, pose, TrackingState.Tracking, (System.IntPtr)nativeAnchor.nativePtr);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = V_0;
		NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_8 = ___nativeAnchor0;
		int64_t L_9 = L_8.get_nativePtr_3();
		intptr_t L_10;
		L_10 = IntPtr_op_Explicit_m65D141119BA83745D73EE5F94267165F88D15B51(L_9, /*hidden argument*/NULL);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_11;
		memset((&L_11), 0, sizeof(L_11));
		XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F((&L_11), L_2, L_7, 2, (intptr_t)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_TryAddAnchor_m5F5AFA74A695620FAB8CF62AE581D6F1B02A68C1 (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NativeAnchor nativeAnchor = new NativeAnchor();
		il2cpp_codegen_initobj((&V_0), sizeof(NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 ));
		// bool succeeded = NativeLib.TryAddAnchor(OpenXR.Preview.FrameTime.OnUpdate, pose.rotation, pose.position, UnsafeUtility.AddressOf(ref nativeAnchor));
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___pose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0.get_rotation_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___pose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_position_0();
		void* L_4;
		L_4 = UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992((NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09 *)(&V_0), /*hidden argument*/UnsafeUtility_AddressOf_TisNativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09_m7A30D2189B8572B213DCE3BAEA0289380D360992_RuntimeMethod_var);
		bool L_5;
		L_5 = NativeLib_TryAddAnchor_m7E95288A37E6666155EFDA1FD746D46644E00032(0, L_1, L_3, (void*)(void*)L_4, /*hidden argument*/NULL);
		// anchor = ToXRAnchor(nativeAnchor);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_6 = ___anchor1;
		NativeAnchor_t4CDEA66859DD30F94E799634CBD21699D3755F09  L_7 = V_0;
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_8;
		L_8 = OpenXRProvider_ToXRAnchor_mACB0B4BB26909C22B6C57057979FD6DC3836FB4B(__this, L_7, /*hidden argument*/NULL);
		*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)L_6 = L_8;
		// return succeeded;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_TryAttachAnchor_m14CCEADE36AA7F217B34DF37BAFEC755D2F885A3 (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor2, const RuntimeMethod* method)
{
	{
		// anchor = new XRAnchor();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___anchor2;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.AnchorSubsystem/OpenXRProvider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_TryRemoveAnchor_m37D4732EE9179F4848DBAEB6B4FC3D673339FD46 (OpenXRProvider_tCA3C6D847DD8FD62E19E9521178AE870A08C2D5A * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	{
		// return NativeLib.TryRemoveAnchor(FeatureUtils.ToGuid(anchorId));
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___anchorId0;
		Guid_t  L_1;
		L_1 = FeatureUtils_ToGuid_m4B9DDBAB5CF1ACE6EEE930D677E484D0D336E1B8(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = NativeLib_TryRemoveAnchor_mAB1FA142CAF3B0265B39CABD7E32AA134D1388FE(L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2B8E41BCD1BD83EBA54B388F2268357BEA7E95C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * L_0 = (U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 *)il2cpp_codegen_object_new(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0EBEA600BF114077FCD8FB5A8D1B966ABB788054(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0EBEA600BF114077FCD8FB5A8D1B966ABB788054 (U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.ARSubsystems.XRAnchorStore Microsoft.MixedReality.ARSubsystems.AnchorSubsystemExtensions/<>c::<LoadAnchorStoreAsync>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * U3CU3Ec_U3CLoadAnchorStoreAsyncU3Eb__1_0_m177E88D3BAF525107A6E7D47CA05E037EBCC2089 (U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeLib.LoadAnchorStore(); 
		NativeLib_LoadAnchorStore_m6745651A6CAE68AC00ADCC0405D44F33D24F3628(/*hidden argument*/NULL);
		// return new XRAnchorStore();
		XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B * L_0 = (XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B *)il2cpp_codegen_object_new(XRAnchorStore_t85907241868F3B8A39AED07D98016130C6C0727B_il2cpp_TypeInfo_var);
		XRAnchorStore__ctor_m4A986448FB2B170CE99EF81E14D092E23D586FF7(L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider__ctor_mE484746091760598C344CE59409F0FC99FD0A988 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA1C0A5D5DB5350033CB1DA214245379FF9D2196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlaneInfo> m_planes = new List<PlaneInfo>();
		List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * L_0 = (List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A *)il2cpp_codegen_object_new(List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A_il2cpp_TypeInfo_var);
		List_1__ctor_mEA1C0A5D5DB5350033CB1DA214245379FF9D2196(L_0, /*hidden argument*/List_1__ctor_mEA1C0A5D5DB5350033CB1DA214245379FF9D2196_RuntimeMethod_var);
		__this->set_m_planes_1(L_0);
		// public OpenXRProvider()
		Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Destroy_m4B45717838F1A89EF630E77E67528FFD73101A6F (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Start_m0E15237F387FD52D14793469D65C809B8A4D5EAC (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Stop_m4A8BE0C4D04FDAD972E816D858ED85887500875F (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_GetBoundary_mC20E4EA42C3B1AE57195AF28700B84942AF6B27B (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCD5B5DAB1E31A1CC1E047E17856CFA4D2A059EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6DB5550426510C25C33252A2E4ED3D33150CCF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BFB2939531F618755007F7F8817C38A874BB573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m479F109DDA5193FE42E2459254CFF1145F98402B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool foundBoundary = false;
		V_0 = (bool)0;
		// foreach (var planeInfo in m_planes)
		List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * L_0 = __this->get_m_planes_1();
		NullCheck(L_0);
		Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81  L_1;
		L_1 = List_1_GetEnumerator_m479F109DDA5193FE42E2459254CFF1145F98402B(L_0, /*hidden argument*/List_1_GetEnumerator_m479F109DDA5193FE42E2459254CFF1145F98402B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0010:
		{
			// foreach (var planeInfo in m_planes)
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_2;
			L_2 = Enumerator_get_Current_m3BFB2939531F618755007F7F8817C38A874BB573_inline((Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3BFB2939531F618755007F7F8817C38A874BB573_RuntimeMethod_var);
			V_2 = L_2;
			// if (planeInfo.plane.trackableId == trackableId)
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_3 = V_2;
			NullCheck(L_3);
			BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * L_4 = L_3->get_address_of_plane_0();
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5;
			L_5 = BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)L_4, /*hidden argument*/NULL);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = ___trackableId0;
			IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = TrackableId_op_Equality_m0868EBB6BB9BA72B226D0717352604B3E8EA119B(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_005b;
			}
		}

IL_002b:
		{
			// if ((planeInfo.boundaryPoints != null) && (planeInfo.boundaryPoints.Length > 0))
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_8 = V_2;
			NullCheck(L_8);
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_9 = L_8->get_boundaryPoints_1();
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_0033:
		{
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_10 = V_2;
			NullCheck(L_10);
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_11 = L_10->get_boundaryPoints_1();
			NullCheck(L_11);
			if (!(((RuntimeArray*)L_11)->max_length))
			{
				goto IL_0057;
			}
		}

IL_003c:
		{
			// CreateOrResizeNativeArrayIfNecessary(planeInfo.boundaryPoints.Length, allocator, ref boundary);
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_12 = V_2;
			NullCheck(L_12);
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = L_12->get_boundaryPoints_1();
			NullCheck(L_13);
			int32_t L_14 = ___allocator1;
			NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_15 = ___boundary2;
			Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), L_14, (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_15, /*hidden argument*/Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
			// boundary.CopyFrom(planeInfo.boundaryPoints);
			NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_16 = ___boundary2;
			PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_17 = V_2;
			NullCheck(L_17);
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = L_17->get_boundaryPoints_1();
			NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_16, L_18, /*hidden argument*/NativeArray_1_CopyFrom_m675CF93644DE834960EB51122CC26EE8A385A430_RuntimeMethod_var);
		}

IL_0057:
		{
			// foundBoundary = true;
			V_0 = (bool)1;
			// break;
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}

IL_005b:
		{
			// foreach (var planeInfo in m_planes)
			bool L_19;
			L_19 = Enumerator_MoveNext_mE6DB5550426510C25C33252A2E4ED3D33150CCF2((Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mE6DB5550426510C25C33252A2E4ED3D33150CCF2_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0010;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCD5B5DAB1E31A1CC1E047E17856CFA4D2A059EE2((Enumerator_tCD0830F77FC691878023A8018164E5A2F0E58F81 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mCD5B5DAB1E31A1CC1E047E17856CFA4D2A059EE2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		// if (!foundBoundary && boundary.IsCreated)
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_0085;
		}
	}
	{
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_21 = ___boundary2;
		bool L_22;
		L_22 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_21, /*hidden argument*/NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		// boundary.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_23 = ___boundary2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_23, /*hidden argument*/NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_RuntimeMethod_var);
	}

IL_0085:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  OpenXRProvider_GetChanges_m3C0A7FB20F2F3B19946CFB023DE0F92BFAA72692 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultPlane0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  V_5;
	memset((&V_5), 0, sizeof(V_5));
	BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* V_6 = NULL;
	BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* V_7 = NULL;
	TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* V_8 = NULL;
	int32_t V_9 = 0;
	PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * V_10 = NULL;
	int32_t V_11 = 0;
	PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * V_12 = NULL;
	int32_t V_13 = 0;
	{
		// uint numAddedPlanes = 0;
		V_0 = 0;
		// uint numUpdatedPlanes = 0;
		V_1 = 0;
		// uint numRemovedPlanes = 0;
		V_2 = 0;
		// NativeLib.GetNumPlanes(OpenXR.Preview.FrameTime.OnUpdate, ref numAddedPlanes, ref numUpdatedPlanes, ref numRemovedPlanes);
		NativeLib_GetNumPlanes_m8D6CC30E41D970B78E6A571C9E48E28EBFF1021F(0, (uint32_t*)(&V_0), (uint32_t*)(&V_1), (uint32_t*)(&V_2), /*hidden argument*/NULL);
		// var addedNativePlanes = new NativeArray<NativePlane>((int)numAddedPlanes, allocator, NativeArrayOptions.UninitializedMemory);
		uint32_t L_0 = V_0;
		int32_t L_1 = ___allocator1;
		NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_3), L_0, L_1, 0, /*hidden argument*/NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_RuntimeMethod_var);
		// var updatedNativePlanes = new NativeArray<NativePlane>((int)numUpdatedPlanes, allocator, NativeArrayOptions.UninitializedMemory);
		uint32_t L_2 = V_1;
		int32_t L_3 = ___allocator1;
		NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_4), L_2, L_3, 0, /*hidden argument*/NativeArray_1__ctor_m84D9CCEC5DE316DBACC046C62469A6C32F011D00_RuntimeMethod_var);
		// var removedNativePlanes = new NativeArray<Guid>((int)numRemovedPlanes, allocator, NativeArrayOptions.UninitializedMemory);
		uint32_t L_4 = V_2;
		int32_t L_5 = ___allocator1;
		NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5), L_4, L_5, 0, /*hidden argument*/NativeArray_1__ctor_m857F3194C53175ABCF423E25A20C61D9F6E737B7_RuntimeMethod_var);
		// if (numAddedPlanes + numUpdatedPlanes + numRemovedPlanes > 0)
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8))) > ((uint32_t)0))))
		{
			goto IL_0051;
		}
	}
	{
		// NativeLib.GetPlanes(
		//     NativeArrayUnsafeUtility.GetUnsafePtr(addedNativePlanes),
		//     NativeArrayUnsafeUtility.GetUnsafePtr(updatedNativePlanes),
		//     NativeArrayUnsafeUtility.GetUnsafePtr(removedNativePlanes));
		NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  L_9 = V_3;
		void* L_10;
		L_10 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108(L_9, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_RuntimeMethod_var);
		NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017  L_11 = V_4;
		void* L_12;
		L_12 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108(L_11, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisNativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA_mE2DA872030870D03AFF14B9A72DF60ED96FC6108_RuntimeMethod_var);
		NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837  L_13 = V_5;
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1(L_13, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mA6C483FCA8195CD45EF15F211A86B1978CC614E1_RuntimeMethod_var);
		NativeLib_GetPlanes_m6DE10EB11BD37B721B05EE0D81749D497D994253((void*)(void*)L_10, (void*)(void*)L_12, (void*)(void*)L_14, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// var addedPlanes = Array.Empty<BoundedPlane>();
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_15;
		L_15 = Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_inline(/*hidden argument*/Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_RuntimeMethod_var);
		V_6 = L_15;
		// if (numAddedPlanes > 0)
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) > ((uint32_t)0))))
		{
			goto IL_00a5;
		}
	}
	{
		// addedPlanes = new BoundedPlane[numAddedPlanes];
		uint32_t L_17 = V_0;
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_18 = (BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*)(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*)SZArrayNew(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_6 = L_18;
		// for (int i = 0; i < numAddedPlanes; ++i)
		V_9 = 0;
		goto IL_009e;
	}

IL_0069:
	{
		// PlaneInfo addedPlane = ToPlaneInfo(addedNativePlanes[i], defaultPlane);
		int32_t L_19 = V_9;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA , ((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_3))->___m_Buffer_0, L_19);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_21 = ___defaultPlane0;
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_22;
		L_22 = OpenXRProvider_ToPlaneInfo_m4ECAF564619A8CDE30D674FC9494A88820184409(__this, L_20, L_21, /*hidden argument*/NULL);
		V_10 = L_22;
		// m_planes.Add(addedPlane);
		List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * L_23 = __this->get_m_planes_1();
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_24 = V_10;
		NullCheck(L_23);
		List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E(L_23, L_24, /*hidden argument*/List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E_RuntimeMethod_var);
		// addedPlanes[i] = addedPlane.plane;
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_25 = V_6;
		int32_t L_26 = V_9;
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_27 = V_10;
		NullCheck(L_27);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_28 = L_27->get_plane_0();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 )L_28);
		// for (int i = 0; i < numAddedPlanes; ++i)
		int32_t L_29 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_009e:
	{
		// for (int i = 0; i < numAddedPlanes; ++i)
		int32_t L_30 = V_9;
		uint32_t L_31 = V_0;
		if ((((int64_t)((int64_t)((int64_t)L_30))) < ((int64_t)((int64_t)((uint64_t)L_31)))))
		{
			goto IL_0069;
		}
	}

IL_00a5:
	{
		// if (addedNativePlanes.IsCreated)
		bool L_32;
		L_32 = NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_3), /*hidden argument*/NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00b5;
		}
	}
	{
		// addedNativePlanes.Dispose();
		NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_3), /*hidden argument*/NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_RuntimeMethod_var);
	}

IL_00b5:
	{
		// var updatedPlanes = Array.Empty<BoundedPlane>();
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_33;
		L_33 = Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_inline(/*hidden argument*/Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_RuntimeMethod_var);
		V_7 = L_33;
		// if (numUpdatedPlanes > 0)
		uint32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) > ((uint32_t)0))))
		{
			goto IL_0109;
		}
	}
	{
		// updatedPlanes = new BoundedPlane[numUpdatedPlanes];
		uint32_t L_35 = V_1;
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_36 = (BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*)(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*)SZArrayNew(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_il2cpp_TypeInfo_var, (uint32_t)L_35);
		V_7 = L_36;
		// for (int i = 0; i < numUpdatedPlanes; ++i)
		V_11 = 0;
		goto IL_0102;
	}

IL_00cd:
	{
		// PlaneInfo updatedPlane = ToPlaneInfo(updatedNativePlanes[i], defaultPlane);
		int32_t L_37 = V_11;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_ITEM(NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA , ((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_4))->___m_Buffer_0, L_37);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_39 = ___defaultPlane0;
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_40;
		L_40 = OpenXRProvider_ToPlaneInfo_m4ECAF564619A8CDE30D674FC9494A88820184409(__this, L_38, L_39, /*hidden argument*/NULL);
		V_12 = L_40;
		// m_planes.Add(updatedPlane);
		List_1_t73C4B9B8ED949B669354EC0FD7C6324D62A7962A * L_41 = __this->get_m_planes_1();
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_42 = V_12;
		NullCheck(L_41);
		List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E(L_41, L_42, /*hidden argument*/List_1_Add_mA5D9A57CFD975CBF29671DF1E6CA227347231E9E_RuntimeMethod_var);
		// updatedPlanes[i] = updatedPlane.plane;
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_43 = V_7;
		int32_t L_44 = V_11;
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_45 = V_12;
		NullCheck(L_45);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_46 = L_45->get_plane_0();
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 )L_46);
		// for (int i = 0; i < numUpdatedPlanes; ++i)
		int32_t L_47 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0102:
	{
		// for (int i = 0; i < numUpdatedPlanes; ++i)
		int32_t L_48 = V_11;
		uint32_t L_49 = V_1;
		if ((((int64_t)((int64_t)((int64_t)L_48))) < ((int64_t)((int64_t)((uint64_t)L_49)))))
		{
			goto IL_00cd;
		}
	}

IL_0109:
	{
		// if (updatedNativePlanes.IsCreated)
		bool L_50;
		L_50 = NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_4), /*hidden argument*/NativeArray_1_get_IsCreated_m6141071E4E0B23B2CD7C687E4BC059F1FE4D21B9_RuntimeMethod_var);
		if (!L_50)
		{
			goto IL_0119;
		}
	}
	{
		// updatedNativePlanes.Dispose();
		NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA((NativeArray_1_t0FD9B9E1C8776788E2F7B1A73A0A0CD51862B017 *)(&V_4), /*hidden argument*/NativeArray_1_Dispose_mC69C5C8D0E86351B0DF8A50431BA68C42E59C8AA_RuntimeMethod_var);
	}

IL_0119:
	{
		// var removedPlanes = Array.Empty<TrackableId>();
		TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_51;
		L_51 = Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_inline(/*hidden argument*/Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_RuntimeMethod_var);
		V_8 = L_51;
		// if (numRemovedPlanes > 0)
		uint32_t L_52 = V_2;
		if ((!(((uint32_t)L_52) > ((uint32_t)0))))
		{
			goto IL_0156;
		}
	}
	{
		// removedPlanes = new TrackableId[numRemovedPlanes];
		uint32_t L_53 = V_2;
		TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_54 = (TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*)(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*)SZArrayNew(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_il2cpp_TypeInfo_var, (uint32_t)L_53);
		V_8 = L_54;
		// for (int i = 0; i < numRemovedPlanes; ++i)
		V_13 = 0;
		goto IL_014f;
	}

IL_0131:
	{
		// removedPlanes[i] = ToTrackableId(removedNativePlanes[i]);
		TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_55 = V_8;
		int32_t L_56 = V_13;
		int32_t L_57 = V_13;
		Guid_t  L_58;
		L_58 = IL2CPP_NATIVEARRAY_GET_ITEM(Guid_t , ((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5))->___m_Buffer_0, L_57);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_59;
		L_59 = OpenXRProvider_ToTrackableId_mE3ABBEFA29CD90F041E54357F1337339D7551E81(__this, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_59);
		// for (int i = 0; i < numRemovedPlanes; ++i)
		int32_t L_60 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_014f:
	{
		// for (int i = 0; i < numRemovedPlanes; ++i)
		int32_t L_61 = V_13;
		uint32_t L_62 = V_2;
		if ((((int64_t)((int64_t)((int64_t)L_61))) < ((int64_t)((int64_t)((uint64_t)L_62)))))
		{
			goto IL_0131;
		}
	}

IL_0156:
	{
		// if (removedNativePlanes.IsCreated)
		bool L_63;
		L_63 = NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5), /*hidden argument*/NativeArray_1_get_IsCreated_mDDE3622C5237ED1E85E5697E63387BCE8AC7E6E1_RuntimeMethod_var);
		if (!L_63)
		{
			goto IL_0166;
		}
	}
	{
		// removedNativePlanes.Dispose();
		NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC((NativeArray_1_t942C548CAE3348C2334E6753FF72E169B6DA4837 *)(&V_5), /*hidden argument*/NativeArray_1_Dispose_mFA49472DA54F6516DBEDE51DEEEE73FA33FF38EC_RuntimeMethod_var);
	}

IL_0166:
	{
		// return TrackableChanges<BoundedPlane>.CopyFrom(
		//     new NativeArray<BoundedPlane>(addedPlanes, allocator),
		//     new NativeArray<BoundedPlane>(updatedPlanes, allocator),
		//     new NativeArray<TrackableId>(removedPlanes, allocator),
		//     allocator);
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_64 = V_6;
		int32_t L_65 = ___allocator1;
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_66;
		memset((&L_66), 0, sizeof(L_66));
		NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD((&L_66), L_64, L_65, /*hidden argument*/NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_RuntimeMethod_var);
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_67 = V_7;
		int32_t L_68 = ___allocator1;
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_69;
		memset((&L_69), 0, sizeof(L_69));
		NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD((&L_69), L_67, L_68, /*hidden argument*/NativeArray_1__ctor_m4B46DACF01131CA1D5E5F1AAE134A69B116D23DD_RuntimeMethod_var);
		TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_70 = V_8;
		int32_t L_71 = ___allocator1;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_72;
		memset((&L_72), 0, sizeof(L_72));
		NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777((&L_72), L_70, L_71, /*hidden argument*/NativeArray_1__ctor_mF5728A185662EC7C013E37D18450ED5F424E0777_RuntimeMethod_var);
		int32_t L_73 = ___allocator1;
		TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  L_74;
		L_74 = TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3(L_66, L_69, L_72, L_73, /*hidden argument*/TrackableChanges_1_CopyFrom_m251F30C84B34DA0BAAD33ACE13D377107FA4C9C3_RuntimeMethod_var);
		return L_74;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::ToTrackableId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  OpenXRProvider_ToTrackableId_mE3ABBEFA29CD90F041E54357F1337339D7551E81 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, Guid_t  ___guid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		// byte[] bytes = guid.ToByteArray();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Guid_ToByteArray_mFD26B992E49518AE955F1FE244A9464A5E347E0A((Guid_t *)(&___guid0), /*hidden argument*/NULL);
		// ulong subId1 = BitConverter.ToUInt64(bytes, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC(L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// ulong subId2 = BitConverter.ToUInt64(bytes, 8);
		uint64_t L_3;
		L_3 = BitConverter_ToUInt64_m31CEAF20A0774C6BB55663CD8A06EBCD4C1F79BC(L_1, 8, /*hidden argument*/NULL);
		V_1 = L_3;
		// return new TrackableId(subId1, subId2);
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_1;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6;
		memset((&L_6), 0, sizeof(L_6));
		TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792((&L_6), L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider::ToPlaneInfo(Microsoft.MixedReality.OpenXR.NativePlane,UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * OpenXRProvider_ToPlaneInfo_m4ECAF564619A8CDE30D674FC9494A88820184409 (OpenXRProvider_t5C85E3EE547DF45040ECA81D6E0D4890AE13AD86 * __this, NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  ___nativePlane0, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultPlane1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_7 = NULL;
	int32_t V_8 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var planeId = ToTrackableId(nativePlane.id);
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_0 = ___nativePlane0;
		Guid_t  L_1 = L_0.get_id_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = OpenXRProvider_ToTrackableId_mE3ABBEFA29CD90F041E54357F1337339D7551E81(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var boundaryPoints = new Vector2[4]
		// {
		//     nativePlane.boundaryPoint0,
		//     nativePlane.boundaryPoint1,
		//     nativePlane.boundaryPoint2,
		//     nativePlane.boundaryPoint3
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_4 = L_3;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_5 = ___nativePlane0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5.get_boundaryPoint0_3();
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = L_4;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_8 = ___nativePlane0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = L_8.get_boundaryPoint1_4();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_9);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_10 = L_7;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_11 = ___nativePlane0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11.get_boundaryPoint2_5();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_12);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = L_10;
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_14 = ___nativePlane0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14.get_boundaryPoint3_6();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_15);
		V_1 = L_13;
		// var center = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_2 = L_16;
		// var min = new Vector2(+Mathf.Infinity, +Mathf.Infinity);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		// var max = new Vector2(-Mathf.Infinity, -Mathf.Infinity);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		// foreach (var point in boundaryPoints)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = V_1;
		V_7 = L_17;
		V_8 = 0;
		goto IL_00fb;
	}

IL_007b:
	{
		// foreach (var point in boundaryPoints)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = V_7;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_9 = L_21;
		// center += point;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// min.x = Mathf.Min(min.x, point.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_3;
		float L_26 = L_25.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_9;
		float L_28 = L_27.get_x_0();
		float L_29;
		L_29 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_26, L_28, /*hidden argument*/NULL);
		(&V_3)->set_x_0(L_29);
		// min.y = Mathf.Min(min.y, point.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_3;
		float L_31 = L_30.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_9;
		float L_33 = L_32.get_y_1();
		float L_34;
		L_34 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_31, L_33, /*hidden argument*/NULL);
		(&V_3)->set_y_1(L_34);
		// max.x = Mathf.Max(max.x, point.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_4;
		float L_36 = L_35.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_9;
		float L_38 = L_37.get_x_0();
		float L_39;
		L_39 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_36, L_38, /*hidden argument*/NULL);
		(&V_4)->set_x_0(L_39);
		// max.y = Mathf.Max(max.y, point.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = V_4;
		float L_41 = L_40.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_9;
		float L_43 = L_42.get_y_1();
		float L_44;
		L_44 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_41, L_43, /*hidden argument*/NULL);
		(&V_4)->set_y_1(L_44);
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00fb:
	{
		// foreach (var point in boundaryPoints)
		int32_t L_46 = V_8;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_47 = V_7;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_007b;
		}
	}
	{
		// center /= (float)boundaryPoints.Length;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_49 = V_1;
		NullCheck(L_49);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_48, ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))), /*hidden argument*/NULL);
		V_2 = L_50;
		// var size = new Vector2(max.x - min.x, max.y - min.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51 = V_4;
		float L_52 = L_51.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53 = V_3;
		float L_54 = L_53.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_4;
		float L_56 = L_55.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_3;
		float L_58 = L_57.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), ((float)il2cpp_codegen_subtract((float)L_52, (float)L_54)), ((float)il2cpp_codegen_subtract((float)L_56, (float)L_58)), /*hidden argument*/NULL);
		// var pose = new Pose(nativePlane.position, nativePlane.rotation);
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_59 = ___nativePlane0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = L_59.get_position_1();
		NativePlane_t572D3708E3DBFB3B1EAD7104F29306854837E6AA  L_61 = ___nativePlane0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62 = L_61.get_rotation_2();
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_6), L_60, L_62, /*hidden argument*/NULL);
		// var planeInfo = new PlaneInfo();
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_63 = (PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C *)il2cpp_codegen_object_new(PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C_il2cpp_TypeInfo_var);
		PlaneInfo__ctor_mB066242DA4C348E8D205FF655C9DB3FA75E0B665(L_63, /*hidden argument*/NULL);
		// planeInfo.plane = new BoundedPlane(
		//     planeId,
		//     TrackableId.invalidId,
		//     pose,
		//     center,
		//     size,
		//     PlaneAlignment.HorizontalUp,
		//     TrackingState.Tracking,
		//     defaultPlane.nativePtr,
		//     defaultPlane.classification); 
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_64 = L_63;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_65 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_66;
		L_66 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_67 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_5;
		intptr_t L_70;
		L_70 = BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)(&___defaultPlane1), /*hidden argument*/NULL);
		int32_t L_71;
		L_71 = BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)(&___defaultPlane1), /*hidden argument*/NULL);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_72;
		memset((&L_72), 0, sizeof(L_72));
		BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B((&L_72), L_65, L_66, L_67, L_68, L_69, ((int32_t)100), 2, (intptr_t)L_70, L_71, /*hidden argument*/NULL);
		NullCheck(L_64);
		L_64->set_plane_0(L_72);
		// planeInfo.boundaryPoints = boundaryPoints;
		PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * L_73 = L_64;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_74 = V_1;
		NullCheck(L_73);
		L_73->set_boundaryPoints_1(L_74);
		// return planeInfo;
		return L_73;
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
// System.Void Microsoft.MixedReality.OpenXR.PlaneSubsystem/OpenXRProvider/PlaneInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneInfo__ctor_mB066242DA4C348E8D205FF655C9DB3FA75E0B665 (PlaneInfo_tE36DFF8FE0183571B477B152CCE13364AF3C929C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4_inline (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, const RuntimeMethod* method)
{
	{
		// public IOpenXRContext Context { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CContextU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB_inline (Feature_t3DD634385138DF52E05906E76F0A941A462684D6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IOpenXRContext Context { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CContextU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->get_m_SubId1_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->get_m_SubId2_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public PoseFlags PoseFlags { get; }
		uint64_t L_0 = __this->get_U3CPoseFlagsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3CRotationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPositionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B_inline (HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong Instance { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CInstanceU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsAnchorExtensionSupported { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsAnchorExtensionSupportedU3Ek__BackingField_26(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong SystemId { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CSystemIdU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong Session { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CSessionU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public XrSessionState SessionState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSessionStateU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D_inline (OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ReferenceSpace { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CReferenceSpaceU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->get_s_InvalidId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_8();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->get_m_Classification_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* Array_Empty_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m17C813D9099F65D6B619005E7EB164C9FDA07C97_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD* L_0 = ((EmptyArray_1_tD2FD4600C96B03EFE204B209D01F0733468E7421_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (XRAnchorU5BU5D_t7503DCEDF4830F05D52EFD72B959C467B7512FFD*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* Array_Empty_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m290EA4CFA08C238A879F51D95C7A412088F2823D_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* L_0 = ((EmptyArray_1_tA26093340F34517171F73FCBBBD8E6E68DE5EEDB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* Array_Empty_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m6D2F49409845146D4E982D1D1C65FC1B041B4A47_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684* L_0 = ((EmptyArray_1_tB256FDDC5C63B3891D68CA9AD71F4EB40499E9DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684*)L_0;
	}
}
