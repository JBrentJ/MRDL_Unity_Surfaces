﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tC1B84CF8C98A7C40B7CE32405260C109B90F3AF6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>>
struct Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t6B00B39C8BA371A6FBED35D39076883BC6DC9015;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD;
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t2AA1925D6D9453D99CB41E3E48B3A73FA56AC564;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tF25DF52111D108E949E35EA21EEBB393307A5ED0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tAD96DEFF14DD364FB63621F743A177AA72CB94AF;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t377C95C3E7A907B0FFEF5AAEB06EA942F8B73D03;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_tEC9F0CB4015D2F25D5B58966D75D38A4AF7CF932;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tE0B7300768C7367F547BA4AE7DC563E38739932D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t9886EFF29CEEA327C1EC26DEE32A3C1A0EB5AD75;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_t187D610AED0704D537A88C6AD654F9C507DEE86D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t01CCA866057A71A220A69397AE91ED709CC6E040;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t153CEA9FDF1F498D3AF6CEEC083061872C37ADEA;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_tD0877B95D33E804AA51B9C0AD188FAF9EB579FB8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral189013BD92021E16C75329951B42E7538D7E67D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8;
IL2CPP_EXTERN_C String_t* _stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7;
IL2CPP_EXTERN_C String_t* _stringLiteral504063796676558304FA9BFB772485E3FB358E39;
IL2CPP_EXTERN_C String_t* _stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986;
IL2CPP_EXTERN_C String_t* _stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC;
IL2CPP_EXTERN_C String_t* _stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D;
IL2CPP_EXTERN_C String_t* _stringLiteralC4373752820EFFF9B79520956C83459F4F0E4643;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralF9549835CCB023C006F6F8DCF4409D6EDFA36592;
IL2CPP_EXTERN_C String_t* _stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m6083D033ACB68658DB39C4FF741059CA8ACF604A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m113D629BB3904B8B5E9931EF7A79614CD9B5BEB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m7CE037DEEFFD531CF830699E663CA5C7BFABB09B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m03A96E3477810AC42E2A6247DF66F0EF9CB9D8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m6BFCF299A96500B9DCC9940C89D7996BC806CC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_0_mB8C26CBC8BEE05B36CD5AD90009163AD1A381D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_1_mAE732F8FFF75BD78838F27AEBD3E9E1A5FED9F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_2_m83EB2348CFFD4FFBACB02C0A93B86CD40F4899C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_3_m7CC19F35DB4194C179BB8754237FE6F955303AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899;
struct SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC6D082461436D3CACFBCCD07C53B8E256E253E57 
{
public:

public:
};


// System.Object

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


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct  U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9
	U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_2
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_3
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields, ___U3CU3E9__1_2_3)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_2_3() const { return ___U3CU3E9__1_2_3; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_2_3() { return &___U3CU3E9__1_2_3; }
	inline void set_U3CU3E9__1_2_3(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields, ___U3CU3E9__1_3_4)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_3_4() const { return ___U3CU3E9__1_3_4; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_3_4() { return &___U3CU3E9__1_3_4; }
	inline void set_U3CU3E9__1_3_4(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_3_4), (void*)value);
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


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct  TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93, ___m_task_0)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// UnityEngine.WaitUntil
struct  WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28, ___m_task_2)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
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


// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3, ___value___2)); }
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

// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tADA68D91510F726A21B7F6CF5F5A35A310F7C028 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tADA68D91510F726A21B7F6CF5F5A35A310F7C028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationHypothesis_1), (void*)value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationResult_2)); }
	inline DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationError_4)); }
	inline DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationError_4), (void*)value);
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

// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
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


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_tE8281708DCD7478288FD20A878337F9336315D16 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_tE8281708DCD7478288FD20A878337F9336315D16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t9D1FF73360901F27A8117402D1F5BCC7E1309BF5 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t9D1FF73360901F27A8117402D1F5BCC7E1309BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
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


// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct  Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5, ___m_result_22)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_result_22() const { return ___m_result_22; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
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

// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseStartTime_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseDuration_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
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

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31
struct  U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>4__this
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>u__1
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7
struct  U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>4__this
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::listener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::initialSilenceTimeout
	float ___initialSilenceTimeout_4;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::autoSilenceTimeout
	float ___autoSilenceTimeout_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::recordingTime
	int32_t ___recordingTime_6;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::micDeviceName
	String_t* ___micDeviceName_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___listener_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_listener_3() const { return ___listener_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___initialSilenceTimeout_4)); }
	inline float get_initialSilenceTimeout_4() const { return ___initialSilenceTimeout_4; }
	inline float* get_address_of_initialSilenceTimeout_4() { return &___initialSilenceTimeout_4; }
	inline void set_initialSilenceTimeout_4(float value)
	{
		___initialSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___autoSilenceTimeout_5)); }
	inline float get_autoSilenceTimeout_5() const { return ___autoSilenceTimeout_5; }
	inline float* get_address_of_autoSilenceTimeout_5() { return &___autoSilenceTimeout_5; }
	inline void set_autoSilenceTimeout_5(float value)
	{
		___autoSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_recordingTime_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___recordingTime_6)); }
	inline int32_t get_recordingTime_6() const { return ___recordingTime_6; }
	inline int32_t* get_address_of_recordingTime_6() { return &___recordingTime_6; }
	inline void set_recordingTime_6(int32_t value)
	{
		___recordingTime_6 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___micDeviceName_7)); }
	inline String_t* get_micDeviceName_7() const { return ___micDeviceName_7; }
	inline String_t** get_address_of_micDeviceName_7() { return &___micDeviceName_7; }
	inline void set_micDeviceName_7(String_t* value)
	{
		___micDeviceName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8
struct  U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>4__this
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>u__1
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12
struct  U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>4__this
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_3;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>u__1
	RuntimeObject * ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F, ___U3CU3E7__wrap1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F, ___U3CU3Eu__1_4)); }
	inline RuntimeObject * get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(RuntimeObject * value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_4), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
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


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct  SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A, ___action_4)); }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t3E359C50EAC829B9DF6FC76C319B4757FC3CA1CC_marshaled_com ___action_4;
};

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct  WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649  : public BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_19;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_20;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_21;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_22;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_23;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_24;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dictationAudioClip_25;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStarted_27;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStopped_28;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStarted_29;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStopped_30;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___U3CIsListeningU3Ek__BackingField_14)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_14() const { return ___U3CIsListeningU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_14() { return &___U3CIsListeningU3Ek__BackingField_14; }
	inline void set_U3CIsListeningU3Ek__BackingField_14(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_hasFailed_17() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___hasFailed_17)); }
	inline bool get_hasFailed_17() const { return ___hasFailed_17; }
	inline bool* get_address_of_hasFailed_17() { return &___hasFailed_17; }
	inline void set_hasFailed_17(bool value)
	{
		___hasFailed_17 = value;
	}

	inline static int32_t get_offset_of_hasListener_18() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___hasListener_18)); }
	inline bool get_hasListener_18() const { return ___hasListener_18; }
	inline bool* get_address_of_hasListener_18() { return &___hasListener_18; }
	inline void set_hasListener_18(bool value)
	{
		___hasListener_18 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_19() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___isTransitioning_19)); }
	inline bool get_isTransitioning_19() const { return ___isTransitioning_19; }
	inline bool* get_address_of_isTransitioning_19() { return &___isTransitioning_19; }
	inline void set_isTransitioning_19(bool value)
	{
		___isTransitioning_19 = value;
	}

	inline static int32_t get_offset_of_inputSource_20() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___inputSource_20)); }
	inline RuntimeObject* get_inputSource_20() const { return ___inputSource_20; }
	inline RuntimeObject** get_address_of_inputSource_20() { return &___inputSource_20; }
	inline void set_inputSource_20(RuntimeObject* value)
	{
		___inputSource_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_20), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___textSoFar_21)); }
	inline StringBuilder_t * get_textSoFar_21() const { return ___textSoFar_21; }
	inline StringBuilder_t ** get_address_of_textSoFar_21() { return &___textSoFar_21; }
	inline void set_textSoFar_21(StringBuilder_t * value)
	{
		___textSoFar_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_21), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___deviceName_22)); }
	inline String_t* get_deviceName_22() const { return ___deviceName_22; }
	inline String_t** get_address_of_deviceName_22() { return &___deviceName_22; }
	inline void set_deviceName_22(String_t* value)
	{
		___deviceName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_22), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___samplingRate_23)); }
	inline int32_t get_samplingRate_23() const { return ___samplingRate_23; }
	inline int32_t* get_address_of_samplingRate_23() { return &___samplingRate_23; }
	inline void set_samplingRate_23(int32_t value)
	{
		___samplingRate_23 = value;
	}

	inline static int32_t get_offset_of_dictationResult_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___dictationResult_24)); }
	inline String_t* get_dictationResult_24() const { return ___dictationResult_24; }
	inline String_t** get_address_of_dictationResult_24() { return &___dictationResult_24; }
	inline void set_dictationResult_24(String_t* value)
	{
		___dictationResult_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_24), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___dictationAudioClip_25)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dictationAudioClip_25() const { return ___dictationAudioClip_25; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dictationAudioClip_25() { return &___dictationAudioClip_25; }
	inline void set_dictationAudioClip_25(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dictationAudioClip_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_25), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___waitUntilPhraseRecognitionSystemHasStarted_27)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStarted_27() const { return ___waitUntilPhraseRecognitionSystemHasStarted_27; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_27() { return &___waitUntilPhraseRecognitionSystemHasStarted_27; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_27(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_27), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___waitUntilPhraseRecognitionSystemHasStopped_28)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStopped_28() const { return ___waitUntilPhraseRecognitionSystemHasStopped_28; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_28() { return &___waitUntilPhraseRecognitionSystemHasStopped_28; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_28(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_28), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___waitUntilDictationRecognizerHasStarted_29)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStarted_29() const { return ___waitUntilDictationRecognizerHasStarted_29; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStarted_29() { return &___waitUntilDictationRecognizerHasStarted_29; }
	inline void set_waitUntilDictationRecognizerHasStarted_29(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStarted_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_29), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649, ___waitUntilDictationRecognizerHasStopped_30)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStopped_30() const { return ___waitUntilDictationRecognizerHasStopped_30; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStopped_30() { return &___waitUntilDictationRecognizerHasStopped_30; }
	inline void set_waitUntilDictationRecognizerHasStopped_30(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStopped_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_30), (void*)value);
	}
};

struct WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartRecordingAsyncPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopRecordingAsyncPerfMarker_16;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * ___dictationRecognizer_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationHypothesisPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationResultPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationCompletePerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationErrorPerfMarker_35;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_15() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___StartRecordingAsyncPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartRecordingAsyncPerfMarker_15() const { return ___StartRecordingAsyncPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartRecordingAsyncPerfMarker_15() { return &___StartRecordingAsyncPerfMarker_15; }
	inline void set_StartRecordingAsyncPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartRecordingAsyncPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_16() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___StopRecordingAsyncPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopRecordingAsyncPerfMarker_16() const { return ___StopRecordingAsyncPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopRecordingAsyncPerfMarker_16() { return &___StopRecordingAsyncPerfMarker_16; }
	inline void set_StopRecordingAsyncPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopRecordingAsyncPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___dictationRecognizer_26)); }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * get_dictationRecognizer_26() const { return ___dictationRecognizer_26; }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B ** get_address_of_dictationRecognizer_26() { return &___dictationRecognizer_26; }
	inline void set_dictationRecognizer_26(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * value)
	{
		___dictationRecognizer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_26), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___UpdatePerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_31() const { return ___UpdatePerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_31() { return &___UpdatePerfMarker_31; }
	inline void set_UpdatePerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___DictationHypothesisPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationHypothesisPerfMarker_32() const { return ___DictationHypothesisPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationHypothesisPerfMarker_32() { return &___DictationHypothesisPerfMarker_32; }
	inline void set_DictationHypothesisPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationHypothesisPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___DictationResultPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationResultPerfMarker_33() const { return ___DictationResultPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationResultPerfMarker_33() { return &___DictationResultPerfMarker_33; }
	inline void set_DictationResultPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationResultPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___DictationCompletePerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationCompletePerfMarker_34() const { return ___DictationCompletePerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationCompletePerfMarker_34() { return &___DictationCompletePerfMarker_34; }
	inline void set_DictationCompletePerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationCompletePerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields, ___DictationErrorPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationErrorPerfMarker_35() const { return ___DictationErrorPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationErrorPerfMarker_35() { return &___DictationErrorPerfMarker_35; }
	inline void set_DictationErrorPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationErrorPerfMarker_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct  WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA  : public BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InputSource
	RuntimeObject* ___InputSource_14;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_16;

public:
	inline static int32_t get_offset_of_InputSource_14() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA, ___InputSource_14)); }
	inline RuntimeObject* get_InputSource_14() const { return ___InputSource_14; }
	inline RuntimeObject** get_address_of_InputSource_14() { return &___InputSource_14; }
	inline void set_InputSource_14(RuntimeObject* value)
	{
		___InputSource_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputSource_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_15() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_15; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_keywordRecognizer_16() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA, ___keywordRecognizer_16)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_16() const { return ___keywordRecognizer_16; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_16() { return &___keywordRecognizer_16; }
	inline void set_keywordRecognizer_16(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_16), (void*)value);
	}
};

struct WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPhraseRecognizedPerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_17() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields, ___UpdatePerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_17() const { return ___UpdatePerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_17() { return &___UpdatePerfMarker_17; }
	inline void set_UpdatePerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_18() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields, ___OnPhraseRecognizedPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPhraseRecognizedPerfMarker_18() const { return ___OnPhraseRecognizedPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPhraseRecognizedPerfMarker_18() { return &___OnPhraseRecognizedPerfMarker_18; }
	inline void set_OnPhraseRecognizedPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPhraseRecognizedPerfMarker_18 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct  DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct  DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct  DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10
struct  U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>4__this
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::listener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener_3;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::micDeviceName
	String_t* ___micDeviceName_4;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::initialSilenceTimeout
	float ___initialSilenceTimeout_5;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::autoSilenceTimeout
	float ___autoSilenceTimeout_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::recordingTime
	int32_t ___recordingTime_7;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_8;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___listener_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_listener_3() const { return ___listener_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}

	inline static int32_t get_offset_of_micDeviceName_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___micDeviceName_4)); }
	inline String_t* get_micDeviceName_4() const { return ___micDeviceName_4; }
	inline String_t** get_address_of_micDeviceName_4() { return &___micDeviceName_4; }
	inline void set_micDeviceName_4(String_t* value)
	{
		___micDeviceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___initialSilenceTimeout_5)); }
	inline float get_initialSilenceTimeout_5() const { return ___initialSilenceTimeout_5; }
	inline float* get_address_of_initialSilenceTimeout_5() { return &___initialSilenceTimeout_5; }
	inline void set_initialSilenceTimeout_5(float value)
	{
		___initialSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___autoSilenceTimeout_6)); }
	inline float get_autoSilenceTimeout_6() const { return ___autoSilenceTimeout_6; }
	inline float* get_address_of_autoSilenceTimeout_6() { return &___autoSilenceTimeout_6; }
	inline void set_autoSilenceTimeout_6(float value)
	{
		___autoSilenceTimeout_6 = value;
	}

	inline static int32_t get_offset_of_recordingTime_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___recordingTime_7)); }
	inline int32_t get_recordingTime_7() const { return ___recordingTime_7; }
	inline int32_t* get_address_of_recordingTime_7() { return &___recordingTime_7; }
	inline void set_recordingTime_7(int32_t value)
	{
		___recordingTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___U3CU3E7__wrap1_8)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6, ___U3CU3Eu__1_9)); }
	inline RuntimeObject * get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(RuntimeObject * value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE  : public BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t6B00B39C8BA371A6FBED35D39076883BC6DC9015* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t153CEA9FDF1F498D3AF6CEEC083061872C37ADEA * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t01CCA866057A71A220A69397AE91ED709CC6E040 * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_tD0877B95D33E804AA51B9C0AD188FAF9EB579FB8 * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t9886EFF29CEEA327C1EC26DEE32A3C1A0EB5AD75 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_tEC9F0CB4015D2F25D5B58966D75D38A4AF7CF932 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tE0B7300768C7367F547BA4AE7DC563E38739932D * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_t187D610AED0704D537A88C6AD654F9C507DEE86D * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t6B00B39C8BA371A6FBED35D39076883BC6DC9015* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t6B00B39C8BA371A6FBED35D39076883BC6DC9015** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t6B00B39C8BA371A6FBED35D39076883BC6DC9015* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___focusProviderType_6)); }
	inline SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___raycastProviderType_7)); }
	inline SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t2152E9793E96E6DF3389E4F4091E7566C7D2B981 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_t153CEA9FDF1F498D3AF6CEEC083061872C37ADEA * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_t153CEA9FDF1F498D3AF6CEEC083061872C37ADEA ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_t153CEA9FDF1F498D3AF6CEEC083061872C37ADEA * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t01CCA866057A71A220A69397AE91ED709CC6E040 * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t01CCA866057A71A220A69397AE91ED709CC6E040 ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t01CCA866057A71A220A69397AE91ED709CC6E040 * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_tD0877B95D33E804AA51B9C0AD188FAF9EB579FB8 * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_tD0877B95D33E804AA51B9C0AD188FAF9EB579FB8 ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_tD0877B95D33E804AA51B9C0AD188FAF9EB579FB8 * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t9886EFF29CEEA327C1EC26DEE32A3C1A0EB5AD75 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t9886EFF29CEEA327C1EC26DEE32A3C1A0EB5AD75 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t9886EFF29CEEA327C1EC26DEE32A3C1A0EB5AD75 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___supportedVoiceCultures_14)); }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_tEC9F0CB4015D2F25D5B58966D75D38A4AF7CF932 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_tEC9F0CB4015D2F25D5B58966D75D38A4AF7CF932 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_tEC9F0CB4015D2F25D5B58966D75D38A4AF7CF932 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_tE0B7300768C7367F547BA4AE7DC563E38739932D * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_tE0B7300768C7367F547BA4AE7DC563E38739932D ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_tE0B7300768C7367F547BA4AE7DC563E38739932D * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_t187D610AED0704D537A88C6AD654F9C507DEE86D * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_t187D610AED0704D537A88C6AD654F9C507DEE86D ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_t187D610AED0704D537A88C6AD654F9C507DEE86D * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct  MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37  : public BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::startBehavior
	int32_t ___startBehavior_5;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::speechCommands
	SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* ___speechCommands_7;

public:
	inline static int32_t get_offset_of_startBehavior_5() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37, ___startBehavior_5)); }
	inline int32_t get_startBehavior_5() const { return ___startBehavior_5; }
	inline int32_t* get_address_of_startBehavior_5() { return &___startBehavior_5; }
	inline void set_startBehavior_5(int32_t value)
	{
		___startBehavior_5 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_6() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37, ___recognitionConfidenceLevel_6)); }
	inline int32_t get_recognitionConfidenceLevel_6() const { return ___recognitionConfidenceLevel_6; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_6() { return &___recognitionConfidenceLevel_6; }
	inline void set_recognitionConfidenceLevel_6(int32_t value)
	{
		___recognitionConfidenceLevel_6 = value;
	}

	inline static int32_t get_offset_of_speechCommands_7() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37, ___speechCommands_7)); }
	inline SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* get_speechCommands_7() const { return ___speechCommands_7; }
	inline SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED** get_address_of_speechCommands_7() { return &___speechCommands_7; }
	inline void set_speechCommands_7(SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* value)
	{
		___speechCommands_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommands_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  m_Items[1];

public:
	inline SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
	}
	inline SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
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


// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m8C3C8F35C8738574E1BBAF5850C6504FE146314D_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mD7F75F5B47A7546E171324F5D795BE14C4113A42_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_mCC9163F146E2FAAF9173975D6399830FF52BDAEC_gshared_inline (BaseDataProvider_1_tAA5A3D0F0E757BC190FAB28D373156A5CAC98E08 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m78C6F4E14E3AE6B26E0FAD5F7092027FC017F84B_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_mCEB5E6EF812EE27CFC2AD34117145498BD880F1A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_mAB6DA476589BE0B424ABB6C0155DFBF03B5BCC61_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m17C9E42EE2B6A5148CD5F8324E65BD3442A8521E_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m462B9B983C62FC75F5BAF20DA1BEBE43BACEC6D8 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_inline (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 *, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m8C3C8F35C8738574E1BBAF5850C6504FE146314D_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m9C66DEA438D17C9B0B54BF71BBE8E0457F65BF3B (BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  AsyncTaskMethodBuilder_1_Create_m6083D033ACB68658DB39C4FF741059CA8ACF604A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m7CE037DEEFFD531CF830699E663CA5C7BFABB09B (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mD7F75F5B47A7546E171324F5D795BE14C4113A42_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t4B91CCFB6F2CE223E3257C49FA6C96C285332813 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_mCC9163F146E2FAAF9173975D6399830FF52BDAEC_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::get_InputSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC (BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_SpeechCommandsProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline (MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognizerStartBehavior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m0CD8AAEDB4BDA1F38F5E663E873D1E2DED1C7FA0 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_m5658CFC5EE5D7702144B6ABF00E0D95A4AE68F74 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597 (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_mCB47ABBC5F12D301EEC4D9C8DFC3F991F60F9A6D (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65 (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_mE94975CCCBBC229D354524CB109A37EFD9A3992B (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028 (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_mA0531CDD1A1027B2EE39CF8B5F5CA1F5C7A39FB3 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4 (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m3484DF96D1EAFBE39C6C5A1844B33556EA9D3FF6 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m3ECF931C88A9ED32F180FB60B8F8DF3CCECBD7A6 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_mD68D0B69990310187207C4C5AECF27BC8B1371DC (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechCommands()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* MixedRealitySpeechCommandsProfile_get_SpeechCommands_m65D0BCFE66D7BE6A470E71C7ECFFC58AAF2C3BE3_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_mAE2B880283072ADB526D1EDD86E34B2C005C6F05 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_m394040FBA43DD1B3EBEBD6E9EFA08ACD4B621096 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_mAC374BD810D9B0B2AE54379E4550B2563B5A2237 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_LocalizedKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_LocalizedKeyword_m0D991A10DA52A3A19170B898FC34FDB96D88905E (SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognitionConfidenceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m80C2A93CAA4CB7BA61681CCD2D93CC1CDDB6EB4B_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m9E5D473E2C1E7848D7162C21BE000BA324ECF371_inline (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mF86FCCB128AE3D826C6242C3F9E7686E1FDF35EB_inline (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m86A6F9743F04144833FCED18CC2FCDA6644D208B (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords0, int32_t ___minimumConfidence1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_KeyCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m6608C538B2708A8E398F252B8F978F82551C43BD_inline (SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_m4175EE5D354A7C908937A805BD59F920BC43AD04 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___confidence0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mF506B8FF10C80192CDD50D3E9AA943976990B22B (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m115359BFE70A3DDB3FA899FDFDEF8BE955B390BB (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64EA11D37A4E59A5A9E082B8F0661D43238E1474 (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m393152F7868B98246BF614686252BFC03F77CA71 (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * WindowsDictationInputProvider_StopRecordingAsync_m81DBEFD5460449E3B5E82954173BEF373F362A11 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A (Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  (*) (Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539 (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m03A96E3477810AC42E2A6247DF66F0EF9CB9D8E9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * ___awaiter0, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m78C6F4E14E3AE6B26E0FAD5F7092027FC017F84B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61 (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m9F2EF6DC31E8D84CE505C6BDAC853BC0D8471EAB (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_m1021B2EC2757F57A15E20A9130E28985F2CD2E6A (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_mF19070690AD8045AB16FECC264CB87DCDE223D58 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_m260C0E6B821661E95EBBE59B10046FD3C2DD8FC7 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_MoveNext_m6D8E7AE4C80F9D7E25AD2F1A07EB2AE26A5BC3E6 (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_SetStateMachine_m63E3DC53F0E990747CA6A101E9A58E4742FCED55 (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsDictationInputProvider_StartRecordingAsync_m0064AD34410A90121706B4A474A71649AB0E824A (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_MoveNext_mE2E0B30285E72AD2A02425915AFEECC47FBEACC0 (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_SetStateMachine_m969D850502A9BA8988B69EC1A25789BD3A95F0CA (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_mBEA7718347C409FB086936F2A9BD640DD4DF251A_inline (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m6306F1565201B08169AB8EBB34D2420E58190192 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * AwaiterExtensions_GetAwaiter_mD12CACF5BBA3F43DC4B69C9F9317BEDCC31DC4D3 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 ** ___awaiter0, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **, U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_mCEB5E6EF812EE27CFC2AD34117145498BD880F1A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m9DEB99D7711CC084EFAE0A7FFCF5537F948947F6 (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m686FE02260047336BB7FC9EC01F349D682CA603E (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_m627AD13CB5E50B9D3D6EA40AFD4B6A5EC56AEEBB (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m10BF345CBF41C4CBDEB84F0F5B8D64C76A6D1126 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_m6C9847C17C7262369B2732E3FE5F2659A2B76D45 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_MoveNext_m905931F1C0527B2EC31B89E3B8A3168ECD20CA2D (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_SetStateMachine_mD51248420C5316408251B8C75976B22AB17F99B2 (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m6BFCF299A96500B9DCC9940C89D7996BC806CC71 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * ___awaiter0, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_mAB6DA476589BE0B424ABB6C0155DFBF03B5BCC61_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_MoveNext_m003DBF6621DEB95C2D7E54C7560A3F2627D353C1 (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_SetStateMachine_m58717F5438A71607B6A31338163569316A6B85A1 (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m1CC3E04376DDF6A5B31B25515D1B3A66C238C308 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 ** ___awaiter0, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **, U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m17C9E42EE2B6A5148CD5F8324E65BD3442A8521E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m28F3BF2EF5BD3FCBA2647E5B5755C1002ED4FD96 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_MoveNext_m6A214B1C03056D0A45CA2379D2D73BEB913858A4 (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m113D629BB3904B8B5E9931EF7A79614CD9B5BEB9 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m9C848FF5A0493148656A14878110444740D92B58 (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_mD1160129053E8880CC4E0CDF694FD7C1F8F62BCA (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile4, const RuntimeMethod* method)
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
		WindowsDictationInputProvider__ctor_m462B9B983C62FC75F5BAF20DA1BEBE43BACEC6D8(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m462B9B983C62FC75F5BAF20DA1BEBE43BACEC6D8 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_0_mB8C26CBC8BEE05B36CD5AD90009163AD1A381D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_1_mAE732F8FFF75BD78838F27AEBD3E9E1A5FED9F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_2_m83EB2348CFFD4FFBACB02C0A93B86CD40F4899C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_3_m7CC19F35DB4194C179BB8754237FE6F955303AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B2_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B2_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B1_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B1_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B4_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B3_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B3_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B6_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B6_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B5_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B8_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B8_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B7_0 = NULL;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * G_B7_1 = NULL;
	{
		// private string deviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_deviceName_22(L_0);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * L_3 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_0_mB8C26CBC8BEE05B36CD5AD90009163AD1A381D5C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_5 = L_4;
		((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_6 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_6, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_waitUntilPhraseRecognitionSystemHasStarted_27(L_6);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_2();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * L_9 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_10 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_1_mAE732F8FFF75BD78838F27AEBD3E9E1A5FED9F54_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_11 = L_10;
		((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0055:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_12 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_12, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		G_B4_1->set_waitUntilPhraseRecognitionSystemHasStopped_28(L_12);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_13 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9__1_2_3();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = __this;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = __this;
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * L_15 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_16 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_2_m83EB2348CFFD4FFBACB02C0A93B86CD40F4899C4_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_17 = L_16;
		((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9__1_2_3(L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_007f:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_18 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_18, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_1);
		G_B6_1->set_waitUntilDictationRecognizerHasStarted_29(L_18);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_19 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9__1_3_4();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00a9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * L_21 = ((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_22 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_3_m7CC19F35DB4194C179BB8754237FE6F955303AD7_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_23 = L_22;
		((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9__1_3_4(L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00a9:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_24 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_24, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_waitUntilDictationRecognizerHasStopped_30(L_24);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_25 = ___inputSystem0;
		String_t* L_26 = ___name1;
		uint32_t L_27 = ___priority2;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_28 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m9C66DEA438D17C9B0B54BF71BBE8E0457F65BF3B(__this, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_mBEA7718347C409FB086936F2A9BD640DD4DF251A (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_CheckCapability_m6E3D059DB3C4E002D39F036521E8516E28E1EEF0 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// return (capability == MixedRealityCapability.VoiceDictation);
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StartRecording_mDA013CEB46E18A6E4FBE3C36003D686AE8095C78 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_4(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_5(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_6(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_7(L_4);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_5;
		L_5 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B  L_6 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mCE4149B9A89EC8206BAE1B749000EB39AC434695_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m3ECF931C88A9ED32F180FB60B8F8DF3CCECBD7A6 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m3940D84A07DC4AD771C3D39D80FBDA548076DAEF_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsDictationInputProvider_StartRecordingAsync_m0064AD34410A90121706B4A474A71649AB0E824A (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_5(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_6(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_7(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_4(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6  L_6 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m425DB54EA768B57D1431F7F17CCBCE61EEAC2B85_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * WindowsDictationInputProvider_StopRecordingAsync_m81DBEFD5460449E3B5E82954173BEF373F362A11 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m6083D033ACB68658DB39C4FF741059CA8ACF604A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m7CE037DEEFFD531CF830699E663CA5C7BFABB09B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m6083D033ACB68658DB39C4FF741059CA8ACF604A(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m6083D033ACB68658DB39C4FF741059CA8ACF604A_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m7CE037DEEFFD531CF830699E663CA5C7BFABB09B((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)(&V_1), (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_m7CE037DEEFFD531CF830699E663CA5C7BFABB09B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Enable_m708569C3EE1C4ADBF61AE9BFC3650B6C30B7AB93 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying) { return; }
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// if (Service == null)
		RuntimeObject* L_1;
		L_1 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError($"Unable to start {Name}. An Input System is required for this feature.");
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A, L_2, _stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002b:
	{
		// inputSource = Service.RequestNewGenericInputSource(Name, sourceType: InputSourceType.Voice);
		RuntimeObject* L_4;
		L_4 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, L_4, L_5, (IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*)(IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*)NULL, 3);
		__this->set_inputSource_20(L_6);
		// dictationResult = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_24(L_7);
		// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_8 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_9;
		L_9 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_10;
		L_10 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		// InitializeDictationRecognizer();
		WindowsDictationInputProvider_InitializeDictationRecognizer_m0CD8AAEDB4BDA1F38F5E663E873D1E2DED1C7FA0(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m0CD8AAEDB4BDA1F38F5E663E873D1E2DED1C7FA0 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (dictationRecognizer == null)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			if (L_0)
			{
				goto IL_0069;
			}
		}

IL_0007:
		{
			// dictationRecognizer = new DictationRecognizer();
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_1 = (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)il2cpp_codegen_object_new(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var);
			DictationRecognizer__ctor_m5658CFC5EE5D7702144B6ABF00E0D95A4AE68F74(L_1, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_dictationRecognizer_26(L_1);
			// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_2 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * L_3 = (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597(L_3, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_2);
			DictationRecognizer_add_DictationHypothesis_mCB47ABBC5F12D301EEC4D9C8DFC3F991F60F9A6D(L_2, L_3, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_4 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * L_5 = (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D *)il2cpp_codegen_object_new(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65(L_5, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_4);
			DictationRecognizer_add_DictationResult_mE94975CCCBBC229D354524CB109A37EFD9A3992B(L_4, L_5, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_6 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * L_7 = (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028(L_7, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_6);
			DictationRecognizer_add_DictationComplete_mA0531CDD1A1027B2EE39CF8B5F5CA1F5C7A39FB3(L_6, L_7, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_8 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * L_9 = (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 *)il2cpp_codegen_object_new(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4(L_9, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_8);
			DictationRecognizer_add_DictationError_m3484DF96D1EAFBE39C6C5A1844B33556EA9D3FF6(L_8, L_9, /*hidden argument*/NULL);
		}

IL_0069:
		{
			// }
			goto IL_008a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		// catch (System.Exception ex)
		V_0 = ((Exception_t *)__exception_local);
		// Debug.LogWarning($"Failed to start dictation recognizer. Are microphone permissions granted? Exception: {ex}");
		Exception_t * L_10 = V_0;
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9549835CCB023C006F6F8DCF4409D6EDFA36592)), L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_11, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// dictationRecognizer = null;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var)));
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))))->set_dictationRecognizer_26((DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)NULL);
		// }
		goto IL_008a;
	} // end catch (depth: 1)

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Update_mE09295A8B3E46DE12559C8DD676038F039008C68 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986);
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
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Application.isPlaying || Service == null || dictationRecognizer == null) { return; }
			bool L_2;
			L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0015:
		{
			RuntimeObject* L_3;
			L_3 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_4 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			if (L_4)
			{
				goto IL_0026;
			}
		}

IL_0024:
		{
			// if (!Application.isPlaying || Service == null || dictationRecognizer == null) { return; }
			IL2CPP_LEAVE(0x99, FINALLY_008b);
		}

IL_0026:
		{
			// if (!isTransitioning && IsListening && !Microphone.IsRecording(deviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
			bool L_5 = __this->get_isTransitioning_19();
			if (L_5)
			{
				goto IL_0056;
			}
		}

IL_002e:
		{
			bool L_6;
			L_6 = WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline(__this, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			String_t* L_7 = __this->get_deviceName_22();
			bool L_8;
			L_8 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0056;
			}
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_9 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			NullCheck(L_9);
			int32_t L_10;
			L_10 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_0056;
			}
		}

IL_0050:
		{
			// StopRecording();
			WindowsDictationInputProvider_StopRecording_m3ECF931C88A9ED32F180FB60B8F8DF3CCECBD7A6(__this, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
			bool L_11 = __this->get_hasFailed_17();
			if (L_11)
			{
				goto IL_0089;
			}
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_12 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			NullCheck(L_12);
			int32_t L_13;
			L_13 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_12, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)2))))
			{
				goto IL_0089;
			}
		}

IL_006b:
		{
			// hasFailed = true;
			__this->set_hasFailed_17((bool)1);
			// Service.RaiseDictationError(inputSource, "Dictation recognizer has failed!");
			RuntimeObject* L_14;
			L_14 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_15 = __this->get_inputSource_20();
			NullCheck(L_14);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, L_14, L_15, _stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Disable_m4AE0BB57C5B40417509D9DF999F2644B71130832 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_mE7CCD9D7B1CE5B8F20DFA96BCD5D63F4D32B5606_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Dispose_m22A4EA92B1510C7C3D1BB302A2C192A6A2371667 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * G_B3_0 = NULL;
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// dictationRecognizer?.Dispose();
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_1 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0(G_B3_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationHypothesis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB);
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
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationHypothesisPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_DictationHypothesisPerfMarker_32();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{textSoFar} {text}...";
			StringBuilder_t * L_2 = __this->get_textSoFar_21();
			String_t* L_3 = ___text0;
			String_t* L_4;
			L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB, L_2, L_3, /*hidden argument*/NULL);
			__this->set_dictationResult_24(L_4);
			// Service?.RaiseDictationHypothesis(inputSource, dictationResult);
			RuntimeObject* L_5;
			L_5 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_6 = L_5;
			G_B2_0 = L_6;
			if (L_6)
			{
				G_B3_0 = L_6;
				goto IL_0031;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}

IL_0031:
		{
			RuntimeObject* L_7 = __this->get_inputSource_20();
			String_t* L_8 = __this->get_dictationResult_24();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(58 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B3_0, L_7, L_8, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
			// }
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
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
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationResultPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_DictationResultPerfMarker_33();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// textSoFar.Append($"{text}. ");
			StringBuilder_t * L_2 = __this->get_textSoFar_21();
			String_t* L_3 = ___text0;
			String_t* L_4;
			L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434, /*hidden argument*/NULL);
			NullCheck(L_2);
			StringBuilder_t * L_5;
			L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, L_4, /*hidden argument*/NULL);
			// dictationResult = textSoFar.ToString();
			StringBuilder_t * L_6 = __this->get_textSoFar_21();
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			__this->set_dictationResult_24(L_7);
			// Service?.RaiseDictationResult(inputSource, dictationResult);
			RuntimeObject* L_8;
			L_8 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_9 = L_8;
			G_B2_0 = L_9;
			if (L_9)
			{
				G_B3_0 = L_9;
				goto IL_0042;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0056);
		}

IL_0042:
		{
			RuntimeObject* L_10 = __this->get_inputSource_20();
			String_t* L_11 = __this->get_dictationResult_24();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B3_0, L_10, L_11, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
			// }
			IL2CPP_LEAVE(0x64, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(86)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282);
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
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// using (DictationCompletePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_DictationCompletePerfMarker_34();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (cause == DictationCompletionCause.TimeoutExceeded)
			int32_t L_2 = ___cause0;
			if ((!(((uint32_t)L_2) == ((uint32_t)3))))
			{
				goto IL_0028;
			}
		}

IL_0012:
		{
			// Microphone.End(deviceName);
			String_t* L_3 = __this->get_deviceName_22();
			Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_3, /*hidden argument*/NULL);
			// dictationResult = "Dictation has timed out. Please try again.";
			__this->set_dictationResult_24(_stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282);
		}

IL_0028:
		{
			// Service?.RaiseDictationComplete(inputSource, dictationResult, dictationAudioClip);
			RuntimeObject* L_4;
			L_4 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_5 = L_4;
			G_B4_0 = L_5;
			if (L_5)
			{
				G_B5_0 = L_5;
				goto IL_0034;
			}
		}

IL_0031:
		{
			goto IL_004b;
		}

IL_0034:
		{
			RuntimeObject* L_6 = __this->get_inputSource_20();
			String_t* L_7 = __this->get_dictationResult_24();
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_dictationAudioClip_25();
			NullCheck(G_B5_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(60 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B5_0, L_6, L_7, L_8);
		}

IL_004b:
		{
			// textSoFar = null;
			__this->set_textSoFar_21((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_24(L_9);
			// }
			IL2CPP_LEAVE(0x6D, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationError(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5 (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD);
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
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationErrorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_DictationErrorPerfMarker_35();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{error}\nHRESULT: {hresult}";
			String_t* L_2 = ___error0;
			int32_t L_3 = ___hresult1;
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
			String_t* L_6;
			L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD, L_2, L_5, /*hidden argument*/NULL);
			__this->set_dictationResult_24(L_6);
			// Service?.RaiseDictationError(inputSource, dictationResult);
			RuntimeObject* L_7;
			L_7 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_8 = L_7;
			G_B2_0 = L_8;
			if (L_8)
			{
				G_B3_0 = L_8;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0043;
		}

IL_0031:
		{
			RuntimeObject* L_9 = __this->get_inputSource_20();
			String_t* L_10 = __this->get_dictationResult_24();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B3_0, L_9, L_10, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		}

IL_0043:
		{
			// textSoFar = null;
			__this->set_textSoFar_21((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_24(L_11);
			// }
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// }
		return;
	}
}
// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_AudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * WindowsDictationInputProvider_get_AudioClip_m7837FA258A0927B7BBFA97CAD7E1FCFD4CF8C59B (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	{
		// return dictationAudioClip;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_dictationAudioClip_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__cctor_m7584C6366C11275C402E9E2246DB7A9DA78BDDD3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189013BD92021E16C75329951B42E7538D7E67D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral504063796676558304FA9BFB772485E3FB358E39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StartRecordingAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_StartRecordingAsyncPerfMarker_15(L_0);
		// private static readonly ProfilerMarker StopRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StopRecordingAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_StopRecordingAsyncPerfMarker_16(L_1);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral189013BD92021E16C75329951B42E7538D7E67D5, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_31(L_2);
		// private static readonly ProfilerMarker DictationHypothesisPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationHypothesis");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral504063796676558304FA9BFB772485E3FB358E39, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_DictationHypothesisPerfMarker_32(L_3);
		// private static readonly ProfilerMarker DictationResultPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationResult");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_DictationResultPerfMarker_33(L_4);
		// private static readonly ProfilerMarker DictationCompletePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationComplete");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_DictationCompletePerfMarker_34(L_5);
		// private static readonly ProfilerMarker DictationErrorPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationError");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->set_DictationErrorPerfMarker_35(L_6);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m05040C8A924611E9379886A230C8DAE17E11AA75 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile4, const RuntimeMethod* method)
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
		WindowsSpeechInputProvider__ctor_mD68D0B69990310187207C4C5AECF27BC8B1371DC(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_mF4A7634C5FE5555F86689AE981DAB02968E24ED0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_mD68D0B69990310187207C4C5AECF27BC8B1371DC (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t1047DC581721E86CDBEE339F21DD9A481E89FD1A_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m9C66DEA438D17C9B0B54BF71BBE8E0457F65BF3B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// private SpeechCommands[] Commands => InputSystemProfile.SpeechCommandsProfile.SpeechCommands;
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_0;
		L_0 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_1;
		L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_2;
		L_2 = MixedRealitySpeechCommandsProfile_get_SpeechCommands_m65D0BCFE66D7BE6A470E71C7ECFFC58AAF2C3BE3_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mF86FCCB128AE3D826C6242C3F9E7686E1FDF35EB (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m9E5D473E2C1E7848D7162C21BE000BA324ECF371 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_IsRecognitionActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_get_IsRecognitionActive_m182DAC94711604B0A6908273D83495772405D0DB (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B2_0 = NULL;
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B1_0 = NULL;
	{
		//             keywordRecognizer?.IsRunning ??
		// #endif
		//             false;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_16();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_CheckCapability_m7C53F0501539B584DD53BBC02D1FA5654DB78282 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// return capability == MixedRealityCapability.VoiceCommand;
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_mAC374BD810D9B0B2AE54379E4550B2563B5A2237 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_16();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_1;
		L_1 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_2;
		L_2 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_mAE2B880283072ADB526D1EDD86E34B2C005C6F05(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_4 = __this->get_keywordRecognizer_16();
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_5 = __this->get_keywordRecognizer_16();
		NullCheck(L_5);
		bool L_6;
		L_6 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_7 = __this->get_keywordRecognizer_16();
		NullCheck(L_7);
		PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4(L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mF506B8FF10C80192CDD50D3E9AA943976990B22B (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_16();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = __this->get_keywordRecognizer_16();
		NullCheck(L_1);
		bool L_2;
		L_2 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = __this->get_keywordRecognizer_16();
		NullCheck(L_3);
		PhraseRecognizer_Stop_m394040FBA43DD1B3EBEBD6E9EFA08ACD4B621096(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Enable_m5C001191B9FE6B392223A515E35A6395A715788C (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// if (InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_0;
		L_0 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_1;
		L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_mAE2B880283072ADB526D1EDD86E34B2C005C6F05(__this, /*hidden argument*/NULL);
		// StartRecognition();
		WindowsSpeechInputProvider_StartRecognition_mAC374BD810D9B0B2AE54379E4550B2563B5A2237(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_mAE2B880283072ADB526D1EDD86E34B2C005C6F05 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B8_0 = NULL;
	WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * G_B9_1 = NULL;
	{
		// if (!Application.isPlaying ||
		//     (Commands == null) ||
		//     (Commands.Length == 0) ||
		//     InputSystemProfile == null ||
		//     keywordRecognizer != null
		//     )
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_1;
		L_1 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_2;
		L_2 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_002e;
		}
	}
	{
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_3;
		L_3 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_5 = __this->get_keywordRecognizer_16();
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002e:
	{
		// return;
		return;
	}

IL_002f:
	{
		// InputSource = Service?.RequestNewGenericInputSource("Windows Speech Input Source", sourceType: InputSourceType.Voice);
		RuntimeObject* L_6;
		L_6 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		RuntimeObject* L_7 = L_6;
		G_B7_0 = L_7;
		G_B7_1 = __this;
		if (L_7)
		{
			G_B8_0 = L_7;
			G_B8_1 = __this;
			goto IL_003d;
		}
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_0049;
	}

IL_003d:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B8_0, _stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707, (IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*)(IMixedRealityPointerU5BU5D_t4962013A1A3CA7594449CEDE4253383663387899*)NULL, 3);
		G_B9_0 = L_8;
		G_B9_1 = G_B8_1;
	}

IL_0049:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_InputSource_14(G_B9_0);
		// var newKeywords = new string[Commands.Length];
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_9;
		L_9 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_0 = L_10;
		// for (int i = 0; i < Commands.Length; i++)
		V_1 = 0;
		goto IL_0078;
	}

IL_0060:
	{
		// newKeywords[i] = Commands[i].LocalizedKeyword;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		int32_t L_12 = V_1;
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_13;
		L_13 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = SpeechCommands_get_LocalizedKeyword_m0D991A10DA52A3A19170B898FC34FDB96D88905E((SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (String_t*)L_15);
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0078:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_17 = V_1;
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_18;
		L_18 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0060;
		}
	}
	{
		// RecognitionConfidenceLevel = InputSystemProfile.SpeechCommandsProfile.SpeechRecognitionConfidenceLevel;
		MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_19;
		L_19 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_20;
		L_20 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m80C2A93CAA4CB7BA61681CCD2D93CC1CDDB6EB4B_inline(L_20, /*hidden argument*/NULL);
		WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m9E5D473E2C1E7848D7162C21BE000BA324ECF371_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_0099:
	try
	{ // begin try (depth: 1)
		// keywordRecognizer = new KeywordRecognizer(newKeywords, (ConfidenceLevel)RecognitionConfidenceLevel);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_0;
		int32_t L_23;
		L_23 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mF86FCCB128AE3D826C6242C3F9E7686E1FDF35EB_inline(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_24 = (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)il2cpp_codegen_object_new(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m86A6F9743F04144833FCED18CC2FCDA6644D208B(L_24, L_22, L_23, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_16(L_24);
		// }
		goto IL_00c7;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ad;
		throw e;
	}

CATCH_00ad:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t *)__exception_local);
		// Debug.LogWarning($"Failed to start keyword recognizer. Are microphone permissions granted? Exception: {ex}");
		Exception_t * L_25 = V_2;
		String_t* L_26;
		L_26 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4373752820EFFF9B79520956C83459F4F0E4643)), L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_26, /*hidden argument*/NULL);
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_16((KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)NULL);
		// return;
		goto IL_00de;
	} // end catch (depth: 1)

IL_00c7:
	{
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_27 = __this->get_keywordRecognizer_16();
		PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * L_28 = (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C(L_28, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Update_m9ACE71418E38430ADF9349902BCBD7F69505132E (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_17();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
			KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_2 = __this->get_keywordRecognizer_16();
			if (!L_2)
			{
				goto IL_0075;
			}
		}

IL_0016:
		{
			KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = __this->get_keywordRecognizer_16();
			NullCheck(L_3);
			bool L_4;
			L_4 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0075;
			}
		}

IL_0023:
		{
			// for (int i = 0; i < Commands.Length; i++)
			V_2 = 0;
			goto IL_006a;
		}

IL_0027:
		{
			// if (UInput.GetKeyDown(Commands[i].KeyCode))
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_5;
			L_5 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7;
			L_7 = SpeechCommands_get_KeyCode_m6608C538B2708A8E398F252B8F978F82551C43BD_inline((SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
			bool L_8;
			L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0066;
			}
		}

IL_003f:
		{
			// OnPhraseRecognized((ConfidenceLevel)RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.UtcNow, Commands[i].LocalizedKeyword);
			int32_t L_9;
			L_9 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mF86FCCB128AE3D826C6242C3F9E7686E1FDF35EB_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_0();
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11;
			L_11 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_12;
			L_12 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			NullCheck(L_12);
			String_t* L_14;
			L_14 = SpeechCommands_get_LocalizedKeyword_m0D991A10DA52A3A19170B898FC34FDB96D88905E((SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), /*hidden argument*/NULL);
			WindowsSpeechInputProvider_OnPhraseRecognized_m4175EE5D354A7C908937A805BD59F920BC43AD04(__this, L_9, L_10, L_11, L_14, /*hidden argument*/NULL);
		}

IL_0066:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_15 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		}

IL_006a:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_16 = V_2;
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_17;
			L_17 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
			{
				goto IL_0027;
			}
		}

IL_0075:
		{
			// }
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Disable_m155F6154A0FA54D223851C2E51C4E3E6AA4F54F4 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (keywordRecognizer != null)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// StopRecognition();
		WindowsSpeechInputProvider_StopRecognition_mF506B8FF10C80192CDD50D3E9AA943976990B22B(__this, /*hidden argument*/NULL);
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = __this->get_keywordRecognizer_16();
		PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * L_2 = (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C(L_2, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		PhraseRecognizer_remove_OnPhraseRecognized_m115359BFE70A3DDB3FA899FDFDEF8BE955B390BB(L_1, L_2, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = __this->get_keywordRecognizer_16();
		NullCheck(L_3);
		PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298(L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_16((KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Dispose_m7E73BF0812E76C3D0AF239F355C109A664A741EB (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, bool ___disposing0, const RuntimeMethod* method)
{
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B3_0 = NULL;
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// keywordRecognizer?.Dispose();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = __this->get_keywordRecognizer_16();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		NullCheck(G_B3_0);
		PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298(G_B3_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6A2A6D293014FE4247E7E8FAC61F1F332C20E317 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.text);
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_2 = ___args0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_4 = ___args0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_6 = ___args0;
		String_t* L_7 = L_6.get_text_2();
		WindowsSpeechInputProvider_OnPhraseRecognized_m4175EE5D354A7C908937A805BD59F920BC43AD04(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_m4175EE5D354A7C908937A805BD59F920BC43AD04 (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___confidence0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var);
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
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	int32_t G_B10_1 = 0;
	{
		// using (OnPhraseRecognizedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var))->get_OnPhraseRecognizedPerfMarker_18();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// for (int i = 0; i < Commands?.Length; i++)
			V_2 = 0;
			goto IL_0058;
		}

IL_0012:
		{
			// if (Commands[i].LocalizedKeyword == text)
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_2;
			L_2 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			int32_t L_3 = V_2;
			NullCheck(L_2);
			String_t* L_4;
			L_4 = SpeechCommands_get_LocalizedKeyword_m0D991A10DA52A3A19170B898FC34FDB96D88905E((SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
			String_t* L_5 = ___text3;
			bool L_6;
			L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0054;
			}
		}

IL_002c:
		{
			// Service?.RaiseSpeechCommandRecognized(InputSource, (RecognitionConfidenceLevel)confidence, phraseDuration, phraseStartTime, Commands[i]);
			RuntimeObject* L_7;
			L_7 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
			RuntimeObject* L_8 = L_7;
			G_B4_0 = L_8;
			if (L_8)
			{
				G_B5_0 = L_8;
				goto IL_0038;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008c);
		}

IL_0038:
		{
			RuntimeObject* L_9 = __this->get_InputSource_14();
			int32_t L_10 = ___confidence0;
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = ___phraseDuration1;
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_12 = ___phraseStartTime2;
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_13;
			L_13 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			int32_t L_14 = V_2;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			NullCheck(G_B5_0);
			InterfaceActionInvoker5< RuntimeObject*, int32_t, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A  >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,Microsoft.MixedReality.Toolkit.Input.SpeechCommands) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B5_0, L_9, L_10, L_11, L_12, L_16);
			// break;
			IL2CPP_LEAVE(0x9A, FINALLY_008c);
		}

IL_0054:
		{
			// for (int i = 0; i < Commands?.Length; i++)
			int32_t L_17 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_0058:
		{
			// for (int i = 0; i < Commands?.Length; i++)
			int32_t L_18 = V_2;
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_19;
			L_19 = WindowsSpeechInputProvider_get_Commands_m54B48C443E31E8CF18006DF06403C91469DB6A19(__this, /*hidden argument*/NULL);
			SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_20 = L_19;
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			if (L_20)
			{
				G_B9_0 = L_20;
				G_B9_1 = L_18;
				goto IL_006f;
			}
		}

IL_0062:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_21 = V_4;
			G_B10_0 = L_21;
			G_B10_1 = G_B8_1;
			goto IL_0076;
		}

IL_006f:
		{
			NullCheck(G_B9_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_22;
			memset((&L_22), 0, sizeof(L_22));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_22), ((int32_t)((int32_t)(((RuntimeArray*)G_B9_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B10_0 = L_22;
			G_B10_1 = G_B9_1;
		}

IL_0076:
		{
			V_3 = G_B10_0;
			int32_t L_23;
			L_23 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_24;
			L_24 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B10_1) < ((int32_t)L_23))? 1 : 0)&(int32_t)L_24)))
			{
				goto IL_0012;
			}
		}

IL_008a:
		{
			// }
			IL2CPP_LEAVE(0x9A, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__cctor_mBFCABFF840BD455B06B945ADA87766301D1344F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_17(L_0);
		// private static readonly ProfilerMarker OnPhraseRecognizedPerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.OnPhraseRecognized");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA_il2cpp_TypeInfo_var))->set_OnPhraseRecognizedPerfMarker_18(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m838A7B3DE91DF8A4D2393F604F912B0858DDC00D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * L_0 = (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE *)il2cpp_codegen_object_new(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m64EA11D37A4E59A5A9E082B8F0661D43238E1474(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64EA11D37A4E59A5A9E082B8F0661D43238E1474 (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_0_mB8C26CBC8BEE05B36CD5AD90009163AD1A381D5C (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		int32_t L_0;
		L_0 = PhraseRecognitionSystem_get_Status_m393152F7868B98246BF614686252BFC03F77CA71(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_1_mAE732F8FFF75BD78838F27AEBD3E9E1A5FED9F54 (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0;
		L_0 = PhraseRecognitionSystem_get_Status_m393152F7868B98246BF614686252BFC03F77CA71(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_2_m83EB2348CFFD4FFBACB02C0A93B86CD40F4899C4 (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_3_m7CC19F35DB4194C179BB8754237FE6F955303AD7 (U3CU3Ec_tCCEEFA31F1A5308D53752B307429B2B7E8ADEBEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_MoveNext_m6D8E7AE4C80F9D7E25AD2F1A07EB2AE26A5BC3E6 (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m03A96E3477810AC42E2A6247DF66F0EF9CB9D8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * V_1 = NULL;
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d;
			}
		}

IL_0011:
		{
			// if (Application.isPlaying && dictationRecognizer != null)
			bool L_3;
			L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_00f3;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_4 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			if (!L_4)
			{
				goto IL_00f3;
			}
		}

IL_0025:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->get_isTransitioning_19();
			if (L_6)
			{
				goto IL_0091;
			}
		}

IL_002d:
		{
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0091;
			}
		}

IL_0035:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_9 = V_1;
			NullCheck(L_9);
			Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_10;
			L_10 = WindowsDictationInputProvider_StopRecordingAsync_m81DBEFD5460449E3B5E82954173BEF373F362A11(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_11;
			L_11 = Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A(L_10, /*hidden argument*/Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0089;
			}
		}

IL_004a:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m03A96E3477810AC42E2A6247DF66F0EF9CB9D8E9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_15, (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025_m03A96E3477810AC42E2A6247DF66F0EF9CB9D8E9_RuntimeMethod_var);
			goto IL_011f;
		}

IL_006d:
		{
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = L_16;
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0089:
		{
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_19;
			L_19 = TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		}

IL_0091:
		{
			// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_20 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_21 = V_1;
			DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * L_22 = (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597(L_22, L_21, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mA11541A46EF1B11767A11A6C7F57E65C4DD2EEFB_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_20);
			DictationRecognizer_remove_DictationHypothesis_m9F2EF6DC31E8D84CE505C6BDAC853BC0D8471EAB(L_20, L_22, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_23 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_24 = V_1;
			DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * L_25 = (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D *)il2cpp_codegen_object_new(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65(L_25, L_24, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m2A89B6CC048B403EDCC8DDE871D2E7EFCE5F6079_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_23);
			DictationRecognizer_remove_DictationResult_m1021B2EC2757F57A15E20A9130E28985F2CD2E6A(L_23, L_25, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_26 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_27 = V_1;
			DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * L_28 = (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028(L_28, L_27, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m962F2823A733F6BEC8A760F2DFFF10614A8E9E02_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_26);
			DictationRecognizer_remove_DictationComplete_mF19070690AD8045AB16FECC264CB87DCDE223D58(L_26, L_28, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_29 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_30 = V_1;
			DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * L_31 = (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 *)il2cpp_codegen_object_new(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4(L_31, L_30, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_mED0BCFA918A35A891C9FC8EBDE6D80EB648F31A5_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_29);
			DictationRecognizer_remove_DictationError_m260C0E6B821661E95EBBE59B10046FD3C2DD8FC7(L_29, L_31, /*hidden argument*/NULL);
			// dictationRecognizer.Dispose();
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_32 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
			NullCheck(L_32);
			DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0(L_32, /*hidden argument*/NULL);
		}

IL_00f3:
		{
			goto IL_010c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00f5;
		throw e;
	}

CATCH_00f5:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_34 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_33, L_34, /*hidden argument*/NULL);
		goto IL_011f;
	} // end catch (depth: 1)

IL_010c:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_35, /*hidden argument*/NULL);
	}

IL_011f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisableU3Ed__31_MoveNext_m6D8E7AE4C80F9D7E25AD2F1A07EB2AE26A5BC3E6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *>(__this + _offset);
	U3CDisableU3Ed__31_MoveNext_m6D8E7AE4C80F9D7E25AD2F1A07EB2AE26A5BC3E6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_SetStateMachine_m63E3DC53F0E990747CA6A101E9A58E4742FCED55 (U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisableU3Ed__31_SetStateMachine_m63E3DC53F0E990747CA6A101E9A58E4742FCED55_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__31_t626990028579D3226195B522FFB7C2D5929EE025 *>(__this + _offset);
	U3CDisableU3Ed__31_SetStateMachine_m63E3DC53F0E990747CA6A101E9A58E4742FCED55(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_MoveNext_mE2E0B30285E72AD2A02425915AFEECC47FBEACC0 (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0064;
			}
		}

IL_0011:
		{
			// await StartRecordingAsync(listener, initialSilenceTimeout, autoSilenceTimeout, recordingTime, micDeviceName);
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_3 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_listener_3();
			float L_5 = __this->get_initialSilenceTimeout_4();
			float L_6 = __this->get_autoSilenceTimeout_5();
			int32_t L_7 = __this->get_recordingTime_6();
			String_t* L_8 = __this->get_micDeviceName_7();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = WindowsDictationInputProvider_StartRecordingAsync_m0064AD34410A90121706B4A474A71649AB0E824A(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0080;
			}
		}

IL_0044:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_2;
			__this->set_U3CU3Eu__1_8(L_13);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B_mC88E74AEDBEEF0C8F2B8DD1349AC8BC341C00F83_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0064:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_8();
			V_2 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0080:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b3;
	} // end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingU3Ed__7_MoveNext_mE2E0B30285E72AD2A02425915AFEECC47FBEACC0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *>(__this + _offset);
	U3CStartRecordingU3Ed__7_MoveNext_mE2E0B30285E72AD2A02425915AFEECC47FBEACC0(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_SetStateMachine_m969D850502A9BA8988B69EC1A25789BD3A95F0CA (U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingU3Ed__7_SetStateMachine_m969D850502A9BA8988B69EC1A25789BD3A95F0CA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__7_tB9FF2ED0E6537D5633C9F1B8A6E8F4DCF8385A4B *>(__this + _offset);
	U3CStartRecordingU3Ed__7_SetStateMachine_m969D850502A9BA8988B69EC1A25789BD3A95F0CA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_MoveNext_m905931F1C0527B2EC31B89E3B8A3168ECD20CA2D (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (StartRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_StartRecordingAsyncPerfMarker_15();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_8(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0103;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_01aa;
				}
			}

IL_0033:
			{
				// if (IsListening || isTransitioning || Service == null || !Application.isPlaying)
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_7 = V_1;
				NullCheck(L_7);
				bool L_8;
				L_8 = WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline(L_7, /*hidden argument*/NULL);
				if (L_8)
				{
					goto IL_0052;
				}
			}

IL_003b:
			{
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_9 = V_1;
				NullCheck(L_9);
				bool L_10 = L_9->get_isTransitioning_19();
				if (L_10)
				{
					goto IL_0052;
				}
			}

IL_0043:
			{
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_11 = V_1;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(L_11, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
				if (!L_12)
				{
					goto IL_0052;
				}
			}

IL_004b:
			{
				bool L_13;
				L_13 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_0061;
				}
			}

IL_0052:
			{
				// Debug.LogWarning("Unable to start recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x263, FINALLY_0226);
			}

IL_0061:
			{
				// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_14 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				if (L_14)
				{
					goto IL_0081;
				}
			}

IL_0068:
			{
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_15 = V_1;
				NullCheck(L_15);
				MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * L_16;
				L_16 = BaseInputDeviceManager_get_InputSystemProfile_m6F7C65F064C560210C16F7ABC567400D4DF912BC(L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_17;
				L_17 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline(L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				int32_t L_18;
				L_18 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline(L_17, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_18) == ((uint32_t)1))))
				{
					goto IL_0081;
				}
			}

IL_007b:
			{
				// InitializeDictationRecognizer();
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_19 = V_1;
				NullCheck(L_19);
				WindowsDictationInputProvider_InitializeDictationRecognizer_m0CD8AAEDB4BDA1F38F5E663E873D1E2DED1C7FA0(L_19, /*hidden argument*/NULL);
			}

IL_0081:
			{
				// hasFailed = false;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_20 = V_1;
				NullCheck(L_20);
				L_20->set_hasFailed_17((bool)0);
				// IsListening = true;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_21 = V_1;
				NullCheck(L_21);
				WindowsDictationInputProvider_set_IsListening_mBEA7718347C409FB086936F2A9BD640DD4DF251A_inline(L_21, (bool)1, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_22 = V_1;
				NullCheck(L_22);
				L_22->set_isTransitioning_19((bool)1);
				// if (listener != null)
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_listener_3();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_24;
				L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (!L_24)
				{
					goto IL_00bc;
				}
			}

IL_00a4:
			{
				// hasListener = true;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_25 = V_1;
				NullCheck(L_25);
				L_25->set_hasListener_18((bool)1);
				// Service.PushModalInputHandler(listener);
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_26 = V_1;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(L_26, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_listener_3();
				NullCheck(L_27);
				InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(15 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, L_27, L_28);
			}

IL_00bc:
			{
				// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
				int32_t L_29;
				L_29 = PhraseRecognitionSystem_get_Status_m393152F7868B98246BF614686252BFC03F77CA71(/*hidden argument*/NULL);
				if ((!(((uint32_t)L_29) == ((uint32_t)1))))
				{
					goto IL_00c9;
				}
			}

IL_00c4:
			{
				// PhraseRecognitionSystem.Shutdown();
				PhraseRecognitionSystem_Shutdown_m6306F1565201B08169AB8EBB34D2420E58190192(/*hidden argument*/NULL);
			}

IL_00c9:
			{
				// await waitUntilPhraseRecognitionSystemHasStopped;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_30 = V_1;
				NullCheck(L_30);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_31 = L_30->get_waitUntilPhraseRecognitionSystemHasStopped_28();
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_32;
				L_32 = AwaiterExtensions_GetAwaiter_mD12CACF5BBA3F43DC4B69C9F9317BEDCC31DC4D3(L_31, /*hidden argument*/NULL);
				V_4 = L_32;
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_33 = V_4;
				NullCheck(L_33);
				bool L_34;
				L_34 = SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline(L_33, /*hidden argument*/NULL);
				if (L_34)
				{
					goto IL_0120;
				}
			}

IL_00df:
			{
				int32_t L_35 = 0;
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_36 = V_4;
				__this->set_U3CU3Eu__1_9(L_36);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_37 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_37, (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **)(&V_4), (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x276, FINALLY_0226);
			}

IL_0103:
			{
				RuntimeObject * L_38 = __this->get_U3CU3Eu__1_9();
				V_4 = ((SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 *)CastclassClass((RuntimeObject*)L_38, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_9(NULL);
				int32_t L_39 = (-1);
				V_0 = L_39;
				__this->set_U3CU3E1__state_0(L_39);
			}

IL_0120:
			{
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_40 = V_4;
				NullCheck(L_40);
				SimpleCoroutineAwaiter_GetResult_m9DEB99D7711CC084EFAE0A7FFCF5537F948947F6(L_40, /*hidden argument*/NULL);
				// deviceName = micDeviceName;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_41 = V_1;
				String_t* L_42 = __this->get_micDeviceName_4();
				NullCheck(L_41);
				L_41->set_deviceName_22(L_42);
				// Microphone.GetDeviceCaps(deviceName, out minSamplingRate, out samplingRate);
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_43 = V_1;
				NullCheck(L_43);
				String_t* L_44 = L_43->get_deviceName_22();
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_45 = V_1;
				NullCheck(L_45);
				int32_t* L_46 = L_45->get_address_of_samplingRate_23();
				Microphone_GetDeviceCaps_m686FE02260047336BB7FC9EC01F349D682CA603E(L_44, (int32_t*)(&V_3), (int32_t*)L_46, /*hidden argument*/NULL);
				// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_47 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				float L_48 = __this->get_initialSilenceTimeout_5();
				NullCheck(L_47);
				DictationRecognizer_set_InitialSilenceTimeoutSeconds_m627AD13CB5E50B9D3D6EA40AFD4B6A5EC56AEEBB(L_47, L_48, /*hidden argument*/NULL);
				// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_49 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				float L_50 = __this->get_autoSilenceTimeout_6();
				NullCheck(L_49);
				DictationRecognizer_set_AutoSilenceTimeoutSeconds_m10BF345CBF41C4CBDEB84F0F5B8D64C76A6D1126(L_49, L_50, /*hidden argument*/NULL);
				// dictationRecognizer.Start();
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_51 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_51);
				DictationRecognizer_Start_m6C9847C17C7262369B2732E3FE5F2659A2B76D45(L_51, /*hidden argument*/NULL);
				// await waitUntilDictationRecognizerHasStarted;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_52 = V_1;
				NullCheck(L_52);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_53 = L_52->get_waitUntilDictationRecognizerHasStarted_29();
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_54;
				L_54 = AwaiterExtensions_GetAwaiter_mD12CACF5BBA3F43DC4B69C9F9317BEDCC31DC4D3(L_53, /*hidden argument*/NULL);
				V_4 = L_54;
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_55 = V_4;
				NullCheck(L_55);
				bool L_56;
				L_56 = SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline(L_55, /*hidden argument*/NULL);
				if (L_56)
				{
					goto IL_01c7;
				}
			}

IL_0186:
			{
				int32_t L_57 = 1;
				V_0 = L_57;
				__this->set_U3CU3E1__state_0(L_57);
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_58 = V_4;
				__this->set_U3CU3Eu__1_9(L_58);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_59 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_59, (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **)(&V_4), (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6_m90EED022289D6B7247EBB4AE592C907C13FBF1DA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x276, FINALLY_0226);
			}

IL_01aa:
			{
				RuntimeObject * L_60 = __this->get_U3CU3Eu__1_9();
				V_4 = ((SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 *)CastclassClass((RuntimeObject*)L_60, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_9(NULL);
				int32_t L_61 = (-1);
				V_0 = L_61;
				__this->set_U3CU3E1__state_0(L_61);
			}

IL_01c7:
			{
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_62 = V_4;
				NullCheck(L_62);
				SimpleCoroutineAwaiter_GetResult_m9DEB99D7711CC084EFAE0A7FFCF5537F948947F6(L_62, /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_63 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_63);
				int32_t L_64;
				L_64 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_63, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_64) == ((uint32_t)2))))
				{
					goto IL_01f4;
				}
			}

IL_01db:
			{
				// Service.RaiseDictationError(inputSource, "Dictation recognizer failed to start!");
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_65 = V_1;
				NullCheck(L_65);
				RuntimeObject* L_66;
				L_66 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(L_65, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_67 = V_1;
				NullCheck(L_67);
				RuntimeObject* L_68 = L_67->get_inputSource_20();
				NullCheck(L_66);
				InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, L_66, L_68, _stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
				// return;
				IL2CPP_LEAVE(0x263, FINALLY_0226);
			}

IL_01f4:
			{
				// dictationAudioClip = Microphone.Start(deviceName, false, recordingTime, samplingRate);
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_69 = V_1;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_70 = V_1;
				NullCheck(L_70);
				String_t* L_71 = L_70->get_deviceName_22();
				int32_t L_72 = __this->get_recordingTime_7();
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_73 = V_1;
				NullCheck(L_73);
				int32_t L_74 = L_73->get_samplingRate_23();
				AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_75;
				L_75 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_71, (bool)0, L_72, L_74, /*hidden argument*/NULL);
				NullCheck(L_69);
				L_69->set_dictationAudioClip_25(L_75);
				// textSoFar = new StringBuilder();
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_76 = V_1;
				StringBuilder_t * L_77 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_77, /*hidden argument*/NULL);
				NullCheck(L_76);
				L_76->set_textSoFar_21(L_77);
				// isTransitioning = false;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_78 = V_1;
				NullCheck(L_78);
				L_78->set_isTransitioning_19((bool)0);
				// }
				IL2CPP_LEAVE(0x23C, FINALLY_0226);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0226;
		}

FINALLY_0226:
		{ // begin finally (depth: 2)
			{
				int32_t L_79 = V_0;
				if ((((int32_t)L_79) >= ((int32_t)0)))
				{
					goto IL_023b;
				}
			}

IL_022a:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_80 = __this->get_address_of_U3CU3E7__wrap1_8();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_80, /*hidden argument*/NULL);
			}

IL_023b:
			{
				IL2CPP_END_FINALLY(550)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(550)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x263, IL_0263)
			IL2CPP_JUMP_TBL(0x276, IL_0276)
			IL2CPP_JUMP_TBL(0x23C, IL_023c)
		}

IL_023c:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_81 = __this->get_address_of_U3CU3E7__wrap1_8();
			il2cpp_codegen_initobj(L_81, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0263;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_024a;
		throw e;
	}

CATCH_024a:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_82 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_83 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_82, L_83, /*hidden argument*/NULL);
		goto IL_0276;
	} // end catch (depth: 1)

IL_0263:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_84 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_84, /*hidden argument*/NULL);
	}

IL_0276:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingAsyncU3Ed__10_MoveNext_m905931F1C0527B2EC31B89E3B8A3168ECD20CA2D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *>(__this + _offset);
	U3CStartRecordingAsyncU3Ed__10_MoveNext_m905931F1C0527B2EC31B89E3B8A3168ECD20CA2D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_SetStateMachine_mD51248420C5316408251B8C75976B22AB17F99B2 (U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingAsyncU3Ed__10_SetStateMachine_mD51248420C5316408251B8C75976B22AB17F99B2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__10_tBD450678AA3F6D943C26DA1399B0CB5053CF32D6 *>(__this + _offset);
	U3CStartRecordingAsyncU3Ed__10_SetStateMachine_mD51248420C5316408251B8C75976B22AB17F99B2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_MoveNext_m003DBF6621DEB95C2D7E54C7560A3F2627D353C1 (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m6BFCF299A96500B9DCC9940C89D7996BC806CC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * V_1 = NULL;
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046;
			}
		}

IL_0011:
		{
			// await StopRecordingAsync();
			WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_3 = V_1;
			NullCheck(L_3);
			Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_4;
			L_4 = WindowsDictationInputProvider_StopRecordingAsync_m81DBEFD5460449E3B5E82954173BEF373F362A11(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_5;
			L_5 = Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A(L_4, /*hidden argument*/Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0062;
			}
		}

IL_0026:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m6BFCF299A96500B9DCC9940C89D7996BC806CC71((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418_m6BFCF299A96500B9DCC9940C89D7996BC806CC71_RuntimeMethod_var);
			goto IL_0096;
		}

IL_0046:
		{
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0062:
		{
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13;
			L_13 = TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
			goto IL_0083;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006c;
		throw e;
	}

CATCH_006c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		goto IL_0096;
	} // end catch (depth: 1)

IL_0083:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_0096:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingU3Ed__8_MoveNext_m003DBF6621DEB95C2D7E54C7560A3F2627D353C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *>(__this + _offset);
	U3CStopRecordingU3Ed__8_MoveNext_m003DBF6621DEB95C2D7E54C7560A3F2627D353C1(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_SetStateMachine_m58717F5438A71607B6A31338163569316A6B85A1 (U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingU3Ed__8_SetStateMachine_m58717F5438A71607B6A31338163569316A6B85A1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__8_t37131D55C43310A89FCFFF3F603A93D61D21B418 *>(__this + _offset);
	U3CStopRecordingU3Ed__8_SetStateMachine_m58717F5438A71607B6A31338163569316A6B85A1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_MoveNext_m6A214B1C03056D0A45CA2379D2D73BEB913858A4 (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * V_1 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (StopRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_StopRecordingAsyncPerfMarker_16();
			V_3 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_3), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_00e5;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_0145;
				}
			}

IL_0033:
			{
				// if (!IsListening || isTransitioning || !Application.isPlaying)
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_7 = V_1;
				NullCheck(L_7);
				bool L_8;
				L_8 = WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline(L_7, /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_004a;
				}
			}

IL_003b:
			{
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_9 = V_1;
				NullCheck(L_9);
				bool L_10 = L_9->get_isTransitioning_19();
				if (L_10)
				{
					goto IL_004a;
				}
			}

IL_0043:
			{
				bool L_11;
				L_11 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_11)
				{
					goto IL_005b;
				}
			}

IL_004a:
			{
				// Debug.LogWarning("Unable to stop recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB, /*hidden argument*/NULL);
				// return null;
				V_2 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
				IL2CPP_LEAVE(0x1A8, FINALLY_0179);
			}

IL_005b:
			{
				// IsListening = false;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_12 = V_1;
				NullCheck(L_12);
				WindowsDictationInputProvider_set_IsListening_mBEA7718347C409FB086936F2A9BD640DD4DF251A_inline(L_12, (bool)0, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_13 = V_1;
				NullCheck(L_13);
				L_13->set_isTransitioning_19((bool)1);
				// if (hasListener)
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_14 = V_1;
				NullCheck(L_14);
				bool L_15 = L_14->get_hasListener_18();
				if (!L_15)
				{
					goto IL_0089;
				}
			}

IL_0071:
			{
				// Service?.PopModalInputHandler();
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_16 = V_1;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_inline(L_16, /*hidden argument*/BaseDataProvider_1_get_Service_mB2B0ABD7D3DB922D5DFCC0E6264F8100484BC227_RuntimeMethod_var);
				RuntimeObject* L_18 = L_17;
				G_B12_0 = L_18;
				if (L_18)
				{
					G_B13_0 = L_18;
					goto IL_007d;
				}
			}

IL_007a:
			{
				goto IL_0082;
			}

IL_007d:
			{
				NullCheck(G_B13_0);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t036B72D79BF3296A3A404B4D0B85A32E2A32D979_il2cpp_TypeInfo_var, G_B13_0);
			}

IL_0082:
			{
				// hasListener = false;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_19 = V_1;
				NullCheck(L_19);
				L_19->set_hasListener_18((bool)0);
			}

IL_0089:
			{
				// Microphone.End(deviceName);
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_20 = V_1;
				NullCheck(L_20);
				String_t* L_21 = L_20->get_deviceName_22();
				Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_21, /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_22 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_22);
				int32_t L_23;
				L_23 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_22, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_23) == ((uint32_t)1))))
				{
					goto IL_00ab;
				}
			}

IL_00a1:
			{
				// dictationRecognizer.Stop();
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_24 = ((WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649_il2cpp_TypeInfo_var))->get_dictationRecognizer_26();
				NullCheck(L_24);
				DictationRecognizer_Stop_m1CC3E04376DDF6A5B31B25515D1B3A66C238C308(L_24, /*hidden argument*/NULL);
			}

IL_00ab:
			{
				// await waitUntilDictationRecognizerHasStopped;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_25 = V_1;
				NullCheck(L_25);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_26 = L_25->get_waitUntilDictationRecognizerHasStopped_30();
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_27;
				L_27 = AwaiterExtensions_GetAwaiter_mD12CACF5BBA3F43DC4B69C9F9317BEDCC31DC4D3(L_26, /*hidden argument*/NULL);
				V_4 = L_27;
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_28 = V_4;
				NullCheck(L_28);
				bool L_29;
				L_29 = SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline(L_28, /*hidden argument*/NULL);
				if (L_29)
				{
					goto IL_0102;
				}
			}

IL_00c1:
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_31 = V_4;
				__this->set_U3CU3Eu__1_4(L_31);
				AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_32, (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **)(&V_4), (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1BC, FINALLY_0179);
			}

IL_00e5:
			{
				RuntimeObject * L_33 = __this->get_U3CU3Eu__1_4();
				V_4 = ((SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 *)CastclassClass((RuntimeObject*)L_33, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_4(NULL);
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->set_U3CU3E1__state_0(L_34);
			}

IL_0102:
			{
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_35 = V_4;
				NullCheck(L_35);
				SimpleCoroutineAwaiter_GetResult_m9DEB99D7711CC084EFAE0A7FFCF5537F948947F6(L_35, /*hidden argument*/NULL);
				// PhraseRecognitionSystem.Restart();
				PhraseRecognitionSystem_Restart_m28F3BF2EF5BD3FCBA2647E5B5755C1002ED4FD96(/*hidden argument*/NULL);
				// await waitUntilPhraseRecognitionSystemHasStarted;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_36 = V_1;
				NullCheck(L_36);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_37 = L_36->get_waitUntilPhraseRecognitionSystemHasStarted_27();
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_38;
				L_38 = AwaiterExtensions_GetAwaiter_mD12CACF5BBA3F43DC4B69C9F9317BEDCC31DC4D3(L_37, /*hidden argument*/NULL);
				V_4 = L_38;
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_39 = V_4;
				NullCheck(L_39);
				bool L_40;
				L_40 = SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline(L_39, /*hidden argument*/NULL);
				if (L_40)
				{
					goto IL_0162;
				}
			}

IL_0124:
			{
				int32_t L_41 = 1;
				V_0 = L_41;
				__this->set_U3CU3E1__state_0(L_41);
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_42 = V_4;
				__this->set_U3CU3Eu__1_4(L_42);
				AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_43, (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 **)(&V_4), (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_TisU3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F_mAB95E43668F24D04A9BE5E21F0300A672277E318_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1BC, FINALLY_0179);
			}

IL_0145:
			{
				RuntimeObject * L_44 = __this->get_U3CU3Eu__1_4();
				V_4 = ((SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 *)CastclassClass((RuntimeObject*)L_44, SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_4(NULL);
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->set_U3CU3E1__state_0(L_45);
			}

IL_0162:
			{
				SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * L_46 = V_4;
				NullCheck(L_46);
				SimpleCoroutineAwaiter_GetResult_m9DEB99D7711CC084EFAE0A7FFCF5537F948947F6(L_46, /*hidden argument*/NULL);
				// isTransitioning = false;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_47 = V_1;
				NullCheck(L_47);
				L_47->set_isTransitioning_19((bool)0);
				// return dictationAudioClip;
				WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * L_48 = V_1;
				NullCheck(L_48);
				AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_49 = L_48->get_dictationAudioClip_25();
				V_2 = L_49;
				IL2CPP_LEAVE(0x1A8, FINALLY_0179);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0179;
		}

FINALLY_0179:
		{ // begin finally (depth: 2)
			{
				int32_t L_50 = V_0;
				if ((((int32_t)L_50) >= ((int32_t)0)))
				{
					goto IL_018e;
				}
			}

IL_017d:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_51 = __this->get_address_of_U3CU3E7__wrap1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_51, /*hidden argument*/NULL);
			}

IL_018e:
			{
				IL2CPP_END_FINALLY(377)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(377)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1A8, IL_01a8)
			IL2CPP_JUMP_TBL(0x1BC, IL_01bc)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_018f;
		throw e;
	}

CATCH_018f:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_52 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_53 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_52, L_53, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816_RuntimeMethod_var)));
		goto IL_01bc;
	} // end catch (depth: 1)

IL_01a8:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_54 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_55 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_54, L_55, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var);
	}

IL_01bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingAsyncU3Ed__12_MoveNext_m6A214B1C03056D0A45CA2379D2D73BEB913858A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *>(__this + _offset);
	U3CStopRecordingAsyncU3Ed__12_MoveNext_m6A214B1C03056D0A45CA2379D2D73BEB913858A4(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m9C848FF5A0493148656A14878110444740D92B58 (U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m113D629BB3904B8B5E9931EF7A79614CD9B5BEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m113D629BB3904B8B5E9931EF7A79614CD9B5BEB9((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m113D629BB3904B8B5E9931EF7A79614CD9B5BEB9_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m9C848FF5A0493148656A14878110444740D92B58_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__12_t099F5BFC07A9C79F09DF45BFC5E8FF63A1DA2E0F *>(__this + _offset);
	U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m9C848FF5A0493148656A14878110444740D92B58(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mFD15AC9FFCA8833A573D1DF9E244B583E8E24B68_inline (MixedRealityInputSystemProfile_t495FD7125EE1BBB3A02A9B37C9477BBB45F4B7FE * __this, const RuntimeMethod* method)
{
	{
		// get { return speechCommandsProfile; }
		MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * L_0 = __this->get_speechCommandsProfile_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mA47BF4F47244357B0C1571740D43C1C9BF5183C1_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method)
{
	{
		// public AutoStartBehavior SpeechRecognizerStartBehavior => startBehavior;
		int32_t L_0 = __this->get_startBehavior_5();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m889884D7B39CE01801C331D52EFDC701D4987079_inline (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_14();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* MixedRealitySpeechCommandsProfile_get_SpeechCommands_m65D0BCFE66D7BE6A470E71C7ECFFC58AAF2C3BE3_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands[] SpeechCommands => speechCommands;
		SpeechCommandsU5BU5D_tA92CE8918237F426B8C4E15B6C9836B8368B4FED* L_0 = __this->get_speechCommands_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m80C2A93CAA4CB7BA61681CCD2D93CC1CDDB6EB4B_inline (MixedRealitySpeechCommandsProfile_t7BBF089EF8EDA166DC49CCCB251572D409B82C37 * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel SpeechRecognitionConfidenceLevel => recognitionConfidenceLevel;
		int32_t L_0 = __this->get_recognitionConfidenceLevel_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m9E5D473E2C1E7848D7162C21BE000BA324ECF371_inline (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mF86FCCB128AE3D826C6242C3F9E7686E1FDF35EB_inline (WindowsSpeechInputProvider_tC5C3EE1782098FF0733CD5EF9C4A58ED6DAF13EA * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m6608C538B2708A8E398F252B8F978F82551C43BD_inline (SpeechCommands_tF908B13E86C0654DB41DE6E9B080924A468BDC3A * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode KeyCode => keyCode;
		int32_t L_0 = __this->get_keyCode_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_mBEA7718347C409FB086936F2A9BD640DD4DF251A_inline (WindowsDictationInputProvider_tB45C88C5D5DE038C852DB05AA4DD01DA46606649 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mE8551B0B40997E8E97D064F9B939FA1AE69C0724_inline (SimpleCoroutineAwaiter_t59539BBF841EA53F1292F966051CC8307C24AA03 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
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
