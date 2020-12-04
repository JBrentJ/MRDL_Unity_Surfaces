#include "pch-cpp.hpp"

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

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tD608FF1A471833A94BA77A6B214D8C8558137C3C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>
struct Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene>
struct IEnumerable_1_t191696FA70A755257B143983C31A40762960DECB;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct IEnumerable_1_t7CCDFB0E8AE260356DF7060F430DFFEF181D8409;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene>
struct IEnumerator_1_t4FF7C3C63A8EB12A86EBCABF9BF6B9153C10727B;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Linq.IOrderedEnumerable`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct IOrderedEnumerable_1_t0B17AC0CB729A8AB0AFDE1D703CCA167552A9202;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t7F79452212E5653E31B83314904BE6E4F2E6EE9C;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t673DA2AC22EBC44572E69786447D6AC09BB94ACC;
// System.Collections.Generic.List`1<UnityEngine.AsyncOperation>
struct List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/CachedLightingSettings>
struct List_1_t96467018E4F52244E703DAB4178353A4922BE597;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// UnityEngine.AsyncOperation[]
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[]
struct SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_t9F8AA420B9E84F9B003F0A81E82618716DF2DC55;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Cubemap
struct Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
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
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t377C95C3E7A907B0FFEF5AAEB06EA942F8B73D03;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken
struct SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c
struct U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7CCDFB0E8AE260356DF7060F430DFFEF181D8409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9D23BB46984C572DD75D55BDEE3ABB4F24AD485A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral165DFCC85DF53AA32CD45BB261E1060EDBF92F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral1DDDA5269F8E4C7121601AF4C0096E4ABDB21BC7;
IL2CPP_EXTERN_C String_t* _stringLiteral1F8E185D9FD03516C20F82A74126E6F58D82304A;
IL2CPP_EXTERN_C String_t* _stringLiteral249AABBF38B3F47C5F4EF654D1DB72B6B94755CE;
IL2CPP_EXTERN_C String_t* _stringLiteral24F314FC49884A8A3F49E67DE3443ECAA3EAC9E5;
IL2CPP_EXTERN_C String_t* _stringLiteral268319C24C23F7C52FDAE5CC9C9DBB93AEFBD870;
IL2CPP_EXTERN_C String_t* _stringLiteral2941F5A3D240146BAD2F15CAB373A2E72D506778;
IL2CPP_EXTERN_C String_t* _stringLiteral3160EFFA84B470717B7B2CD41D17212E82AACB30;
IL2CPP_EXTERN_C String_t* _stringLiteral34C7B1236C7563D00C1D47D4EA08C98B5B6450DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB39ED71628F697714EE1B3136423D971F7EC9E;
IL2CPP_EXTERN_C String_t* _stringLiteral42CF1044BF34E24B7A8043ACCFE074851EBC0ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral432B5A2A299CD526FE39636A6BD78836CF37A173;
IL2CPP_EXTERN_C String_t* _stringLiteral49FA90EAF56427D5BC910FA1B48A0320CA080976;
IL2CPP_EXTERN_C String_t* _stringLiteral4BDBC647165CB0AFFC0AC59CEF3DF409B96EDE84;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2C876136CD92EF044000F361B1C35D1C1D82D7;
IL2CPP_EXTERN_C String_t* _stringLiteral51ED4D583249DF91F3B37899DD41A7FDDBC7F795;
IL2CPP_EXTERN_C String_t* _stringLiteral58DD218D0CF38202A9CB4C8EFF024D2B0DC996D7;
IL2CPP_EXTERN_C String_t* _stringLiteral707FB91DC74E929D4F3196E7809FB6D5CCDB7EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8110670B52ABA8ECC8A78D435AB15217C5B42D5D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E1FB7F3F0DC27E83C7AF56826D19EBFD6AAD08C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6AB4F6C244619A6771952208541FA3852C4F47;
IL2CPP_EXTERN_C String_t* _stringLiteral9029A55184DF0A7FB220743934304A76498C17F0;
IL2CPP_EXTERN_C String_t* _stringLiteral97F7815AD56148656C76ADE3962C4D9FDC0CBC59;
IL2CPP_EXTERN_C String_t* _stringLiteralA01B6B1CBDE7350C9EF247F228B355475C12F74E;
IL2CPP_EXTERN_C String_t* _stringLiteralA440B9635BDCA4A03E0EC86D7BE6AC7DB0E3B89A;
IL2CPP_EXTERN_C String_t* _stringLiteralACB7C7A8A32293DFA2A84A5B359F6DD4AE3379A8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD0542E8360BD5E1D933C0E1A78BE14183187B7E;
IL2CPP_EXTERN_C String_t* _stringLiteralAE022FB7C5B4F99027863852DF71F43220B300F7;
IL2CPP_EXTERN_C String_t* _stringLiteralAF65FCD07A554FAE05DDF1CCCA1E52545321A2F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB066C486D7E21985C73ECA9A3B7E58F390C19F47;
IL2CPP_EXTERN_C String_t* _stringLiteralB299DB4F774B56142C5CA543510D8F5564EC6186;
IL2CPP_EXTERN_C String_t* _stringLiteralB51F1E9911FAFD2B3FBCEDB0F01F6EDB71929368;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E372FFBC086D1D7FFE4E2271BDAFE8E18BFEB7;
IL2CPP_EXTERN_C String_t* _stringLiteralB960F9A5B2F68587728C88944309D9592572E897;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC6A17C1836ADDF38F24AA406ACF506245B2E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralC0B82E0983768A3BCEDA42F98C0348059CD3EDF4;
IL2CPP_EXTERN_C String_t* _stringLiteralC34C3A167E54774249C25AC16C66CA6DC2A8D8D2;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC68C0D03D538050C93B02C339CF037C693C3BB;
IL2CPP_EXTERN_C String_t* _stringLiteralCADFFFF29BA35CFF6D1258F13562669FB12D31FA;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE78CB6D9F3CBC2EAAB7FF14CCDF00780209911;
IL2CPP_EXTERN_C String_t* _stringLiteralCD87677BAC91B13B797FC698F20C5F7991495C87;
IL2CPP_EXTERN_C String_t* _stringLiteralD39C4582F68A51DCD84109E53C5CE99CE9FDB745;
IL2CPP_EXTERN_C String_t* _stringLiteralD63963D3C52B82EAA58D69A2B640FFB152894DAC;
IL2CPP_EXTERN_C String_t* _stringLiteralEA967C74C7F8F4FB284859D52589D06A3861E7F2;
IL2CPP_EXTERN_C String_t* _stringLiteralEC438E5E28F7B301BFD8594CF74C954FFED3C6A9;
IL2CPP_EXTERN_C String_t* _stringLiteralEED6412EA29A39E6C76073F2D4CECBF419333699;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DBCFAD40B2ACF389125D6046C09CA8EC087BDB;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD4612CFDF71BA19532B3F44A9F5A3DF043FDE8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mF9F6CCD702ADA838CB4637910387D3D6C0F93270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetScenesU3Ed__138_System_Collections_IEnumerator_Reset_m427F698DDF976C357F64A3D80CEBDF2E6B39C664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCacheSortedContentU3Eb__18_0_m278C75C3FCD2D9237F2E176F6BD6DF42875A866F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCacheSortedContentU3Eb__18_1_mB08FB9667047799768AA8167F633C7674F6ECF3A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4896681E69E07EC7BBE83D5F383A0D1791CB345A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.AsyncOperation>
struct  List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2, ____items_1)); }
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* get__items_1() const { return ____items_1; }
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_StaticFields, ____emptyArray_5)); }
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct  List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3, ____items_1)); }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* get__items_1() const { return ____items_1; }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3_StaticFields, ____emptyArray_5)); }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* value)
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


// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken
struct  SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<ReadyToProceed>k__BackingField
	bool ___U3CReadyToProceedU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<AllowSceneActivation>k__BackingField
	bool ___U3CAllowSceneActivationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReadyToProceedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B, ___U3CReadyToProceedU3Ek__BackingField_0)); }
	inline bool get_U3CReadyToProceedU3Ek__BackingField_0() const { return ___U3CReadyToProceedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReadyToProceedU3Ek__BackingField_0() { return &___U3CReadyToProceedU3Ek__BackingField_0; }
	inline void set_U3CReadyToProceedU3Ek__BackingField_0(bool value)
	{
		___U3CReadyToProceedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B, ___U3CAllowSceneActivationU3Ek__BackingField_1)); }
	inline bool get_U3CAllowSceneActivationU3Ek__BackingField_1() const { return ___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return &___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline void set_U3CAllowSceneActivationU3Ek__BackingField_1(bool value)
	{
		___U3CAllowSceneActivationU3Ek__BackingField_1 = value;
	}
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c
struct  U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::<>9
	U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * ___U3CU3E9_0;
	// System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::<>9__18_0
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * ___U3CU3E9__18_0_1;
	// System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::<>9__18_1
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * ___U3CU3E9__18_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields, ___U3CU3E9__18_1_2)); }
	inline Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * get_U3CU3E9__18_1_2() const { return ___U3CU3E9__18_1_2; }
	inline Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 ** get_address_of_U3CU3E9__18_1_2() { return &___U3CU3E9__18_1_2; }
	inline void set_U3CU3E9__18_1_2(Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * value)
	{
		___U3CU3E9__18_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// System.Runtime.CompilerServices.YieldAwaitable
struct  YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct  YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
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


// UnityEngine.Rendering.AmbientMode
struct  AmbientMode_t7AA88458DFE050FF09D48541DF558E06379BDC6C 
{
public:
	// System.Int32 UnityEngine.Rendering.AmbientMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AmbientMode_t7AA88458DFE050FF09D48541DF558E06379BDC6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// UnityEngine.Rendering.DefaultReflectionMode
struct  DefaultReflectionMode_tB880ED0D55FC8D230B4486D66671AD131D6FCD8E 
{
public:
	// System.Int32 UnityEngine.Rendering.DefaultReflectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultReflectionMode_tB880ED0D55FC8D230B4486D66671AD131D6FCD8E, ___value___2)); }
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

// UnityEngine.FogMode
struct  FogMode_t49BDC7B0759867ADADCA5FA01D1B7FC5B37EEDE4 
{
public:
	// System.Int32 UnityEngine.FogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FogMode_t49BDC7B0759867ADADCA5FA01D1B7FC5B37EEDE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct  LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType
struct  LightingSceneTransitionType_tBA808CBC9DD9394C69840DA42A0F835A4BFDDB38 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightingSceneTransitionType_tBA808CBC9DD9394C69840DA42A0F835A4BFDDB38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
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


// UnityEngine.MixedLightingMode
struct  MixedLightingMode_tFB2A5273DD1129DA639FE8E3312D54AEB363DCA9 
{
public:
	// System.Int32 UnityEngine.MixedLightingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedLightingMode_tFB2A5273DD1129DA639FE8E3312D54AEB363DCA9, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings
struct  RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::UseSunlight
	bool ___UseSunlight_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::Intensity
	float ___Intensity_2;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::XRotation
	float ___XRotation_3;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::YRotation
	float ___YRotation_4;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::ZRotation
	float ___ZRotation_5;

public:
	inline static int32_t get_offset_of_UseSunlight_0() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___UseSunlight_0)); }
	inline bool get_UseSunlight_0() const { return ___UseSunlight_0; }
	inline bool* get_address_of_UseSunlight_0() { return &___UseSunlight_0; }
	inline void set_UseSunlight_0(bool value)
	{
		___UseSunlight_0 = value;
	}

	inline static int32_t get_offset_of_Color_1() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___Color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Color_1() const { return ___Color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Color_1() { return &___Color_1; }
	inline void set_Color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Color_1 = value;
	}

	inline static int32_t get_offset_of_Intensity_2() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___Intensity_2)); }
	inline float get_Intensity_2() const { return ___Intensity_2; }
	inline float* get_address_of_Intensity_2() { return &___Intensity_2; }
	inline void set_Intensity_2(float value)
	{
		___Intensity_2 = value;
	}

	inline static int32_t get_offset_of_XRotation_3() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___XRotation_3)); }
	inline float get_XRotation_3() const { return ___XRotation_3; }
	inline float* get_address_of_XRotation_3() { return &___XRotation_3; }
	inline void set_XRotation_3(float value)
	{
		___XRotation_3 = value;
	}

	inline static int32_t get_offset_of_YRotation_4() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___YRotation_4)); }
	inline float get_YRotation_4() const { return ___YRotation_4; }
	inline float* get_address_of_YRotation_4() { return &___YRotation_4; }
	inline void set_YRotation_4(float value)
	{
		___YRotation_4 = value;
	}

	inline static int32_t get_offset_of_ZRotation_5() { return static_cast<int32_t>(offsetof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710, ___ZRotation_5)); }
	inline float get_ZRotation_5() const { return ___ZRotation_5; }
	inline float* get_address_of_ZRotation_5() { return &___ZRotation_5; }
	inline void set_ZRotation_5(float value)
	{
		___ZRotation_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings
struct RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710_marshaled_pinvoke
{
	int32_t ___UseSunlight_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	float ___Intensity_2;
	float ___XRotation_3;
	float ___YRotation_4;
	float ___ZRotation_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings
struct RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710_marshaled_com
{
	int32_t ___UseSunlight_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	float ___Intensity_2;
	float ___XRotation_3;
	float ___YRotation_4;
	float ___ZRotation_5;
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


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct  U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>2__current
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::sceneNames
	RuntimeObject* ___sceneNames_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>3__sceneNames
	RuntimeObject* ___U3CU3E3__sceneNames_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3E2__current_1)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_sceneNames_3() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___sceneNames_3)); }
	inline RuntimeObject* get_sceneNames_3() const { return ___sceneNames_3; }
	inline RuntimeObject** get_address_of_sceneNames_3() { return &___sceneNames_3; }
	inline void set_sceneNames_3(RuntimeObject* value)
	{
		___sceneNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__sceneNames_4() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3E3__sceneNames_4)); }
	inline RuntimeObject* get_U3CU3E3__sceneNames_4() const { return ___U3CU3E3__sceneNames_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__sceneNames_4() { return &___U3CU3E3__sceneNames_4; }
	inline void set_U3CU3E3__sceneNames_4(RuntimeObject* value)
	{
		___U3CU3E3__sceneNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__sceneNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType
struct  SceneType_tC11F89368C8D72D1D6BEA5C522B752DBB51960F1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneType_tC11F89368C8D72D1D6BEA5C522B752DBB51960F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93  : public BaseService_tF7F070ED91736A35BA50D9FE4D37F03BFD739F35
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t673DA2AC22EBC44572E69786447D6AC09BB94ACC * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t7F79452212E5653E31B83314904BE6E4F2E6EE9C * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tD608FF1A471833A94BA77A6B214D8C8558137C3C * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___postponedActions_8)); }
	inline List_1_t673DA2AC22EBC44572E69786447D6AC09BB94ACC * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t673DA2AC22EBC44572E69786447D6AC09BB94ACC ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t673DA2AC22EBC44572E69786447D6AC09BB94ACC * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___postponedObjectActions_9)); }
	inline List_1_t7F79452212E5653E31B83314904BE6E4F2E6EE9C * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t7F79452212E5653E31B83314904BE6E4F2E6EE9C ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t7F79452212E5653E31B83314904BE6E4F2E6EE9C * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_tD608FF1A471833A94BA77A6B214D8C8558137C3C * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_tD608FF1A471833A94BA77A6B214D8C8558137C3C ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_tD608FF1A471833A94BA77A6B214D8C8558137C3C * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings
struct  RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::BounceScale
	float ___BounceScale_0;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::IndirectOutputScale
	float ___IndirectOutputScale_1;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::AlbedoBoost
	float ___AlbedoBoost_2;
	// UnityEngine.MixedLightingMode Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::EnvironmentLightingMode
	int32_t ___EnvironmentLightingMode_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::EnableBakedLightmaps
	bool ___EnableBakedLightmaps_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::EnabledRealtimeLightmaps
	bool ___EnabledRealtimeLightmaps_5;

public:
	inline static int32_t get_offset_of_BounceScale_0() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___BounceScale_0)); }
	inline float get_BounceScale_0() const { return ___BounceScale_0; }
	inline float* get_address_of_BounceScale_0() { return &___BounceScale_0; }
	inline void set_BounceScale_0(float value)
	{
		___BounceScale_0 = value;
	}

	inline static int32_t get_offset_of_IndirectOutputScale_1() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___IndirectOutputScale_1)); }
	inline float get_IndirectOutputScale_1() const { return ___IndirectOutputScale_1; }
	inline float* get_address_of_IndirectOutputScale_1() { return &___IndirectOutputScale_1; }
	inline void set_IndirectOutputScale_1(float value)
	{
		___IndirectOutputScale_1 = value;
	}

	inline static int32_t get_offset_of_AlbedoBoost_2() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___AlbedoBoost_2)); }
	inline float get_AlbedoBoost_2() const { return ___AlbedoBoost_2; }
	inline float* get_address_of_AlbedoBoost_2() { return &___AlbedoBoost_2; }
	inline void set_AlbedoBoost_2(float value)
	{
		___AlbedoBoost_2 = value;
	}

	inline static int32_t get_offset_of_EnvironmentLightingMode_3() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___EnvironmentLightingMode_3)); }
	inline int32_t get_EnvironmentLightingMode_3() const { return ___EnvironmentLightingMode_3; }
	inline int32_t* get_address_of_EnvironmentLightingMode_3() { return &___EnvironmentLightingMode_3; }
	inline void set_EnvironmentLightingMode_3(int32_t value)
	{
		___EnvironmentLightingMode_3 = value;
	}

	inline static int32_t get_offset_of_EnableBakedLightmaps_4() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___EnableBakedLightmaps_4)); }
	inline bool get_EnableBakedLightmaps_4() const { return ___EnableBakedLightmaps_4; }
	inline bool* get_address_of_EnableBakedLightmaps_4() { return &___EnableBakedLightmaps_4; }
	inline void set_EnableBakedLightmaps_4(bool value)
	{
		___EnableBakedLightmaps_4 = value;
	}

	inline static int32_t get_offset_of_EnabledRealtimeLightmaps_5() { return static_cast<int32_t>(offsetof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B, ___EnabledRealtimeLightmaps_5)); }
	inline bool get_EnabledRealtimeLightmaps_5() const { return ___EnabledRealtimeLightmaps_5; }
	inline bool* get_address_of_EnabledRealtimeLightmaps_5() { return &___EnabledRealtimeLightmaps_5; }
	inline void set_EnabledRealtimeLightmaps_5(bool value)
	{
		___EnabledRealtimeLightmaps_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings
struct RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B_marshaled_pinvoke
{
	float ___BounceScale_0;
	float ___IndirectOutputScale_1;
	float ___AlbedoBoost_2;
	int32_t ___EnvironmentLightingMode_3;
	int32_t ___EnableBakedLightmaps_4;
	int32_t ___EnabledRealtimeLightmaps_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings
struct RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B_marshaled_com
{
	float ___BounceScale_0;
	float ___IndirectOutputScale_1;
	float ___AlbedoBoost_2;
	int32_t ___EnvironmentLightingMode_3;
	int32_t ___EnableBakedLightmaps_4;
	int32_t ___EnabledRealtimeLightmaps_5;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings
struct  RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::Fog
	bool ___Fog_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::FogColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FogColor_1;
	// UnityEngine.FogMode Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::FogMode
	int32_t ___FogMode_2;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::FogDensity
	float ___FogDensity_3;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::LinearFogStart
	float ___LinearFogStart_4;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::LinearFogEnd
	float ___LinearFogEnd_5;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientSkyColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientSkyColor_6;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientEquatorColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientEquatorColor_7;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientGroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientGroundColor_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientLight_9;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientIntensity
	float ___AmbientIntensity_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::AmbientMode
	int32_t ___AmbientMode_11;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::SubtractiveShadowColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SubtractiveShadowColor_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::SkyboxMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SkyboxMaterial_13;
	// UnityEngine.Rendering.DefaultReflectionMode Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::DefaultReflectionMode
	int32_t ___DefaultReflectionMode_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::DefaultReflectionResolution
	int32_t ___DefaultReflectionResolution_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::ReflectionBounces
	int32_t ___ReflectionBounces_16;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::ReflectionIntensity
	float ___ReflectionIntensity_17;
	// UnityEngine.Cubemap Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::CustomReflection
	Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * ___CustomReflection_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::UseRadianceAmbientProbe
	bool ___UseRadianceAmbientProbe_19;

public:
	inline static int32_t get_offset_of_Fog_0() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___Fog_0)); }
	inline bool get_Fog_0() const { return ___Fog_0; }
	inline bool* get_address_of_Fog_0() { return &___Fog_0; }
	inline void set_Fog_0(bool value)
	{
		___Fog_0 = value;
	}

	inline static int32_t get_offset_of_FogColor_1() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___FogColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_FogColor_1() const { return ___FogColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_FogColor_1() { return &___FogColor_1; }
	inline void set_FogColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___FogColor_1 = value;
	}

	inline static int32_t get_offset_of_FogMode_2() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___FogMode_2)); }
	inline int32_t get_FogMode_2() const { return ___FogMode_2; }
	inline int32_t* get_address_of_FogMode_2() { return &___FogMode_2; }
	inline void set_FogMode_2(int32_t value)
	{
		___FogMode_2 = value;
	}

	inline static int32_t get_offset_of_FogDensity_3() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___FogDensity_3)); }
	inline float get_FogDensity_3() const { return ___FogDensity_3; }
	inline float* get_address_of_FogDensity_3() { return &___FogDensity_3; }
	inline void set_FogDensity_3(float value)
	{
		___FogDensity_3 = value;
	}

	inline static int32_t get_offset_of_LinearFogStart_4() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___LinearFogStart_4)); }
	inline float get_LinearFogStart_4() const { return ___LinearFogStart_4; }
	inline float* get_address_of_LinearFogStart_4() { return &___LinearFogStart_4; }
	inline void set_LinearFogStart_4(float value)
	{
		___LinearFogStart_4 = value;
	}

	inline static int32_t get_offset_of_LinearFogEnd_5() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___LinearFogEnd_5)); }
	inline float get_LinearFogEnd_5() const { return ___LinearFogEnd_5; }
	inline float* get_address_of_LinearFogEnd_5() { return &___LinearFogEnd_5; }
	inline void set_LinearFogEnd_5(float value)
	{
		___LinearFogEnd_5 = value;
	}

	inline static int32_t get_offset_of_AmbientSkyColor_6() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientSkyColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_AmbientSkyColor_6() const { return ___AmbientSkyColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_AmbientSkyColor_6() { return &___AmbientSkyColor_6; }
	inline void set_AmbientSkyColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___AmbientSkyColor_6 = value;
	}

	inline static int32_t get_offset_of_AmbientEquatorColor_7() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientEquatorColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_AmbientEquatorColor_7() const { return ___AmbientEquatorColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_AmbientEquatorColor_7() { return &___AmbientEquatorColor_7; }
	inline void set_AmbientEquatorColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___AmbientEquatorColor_7 = value;
	}

	inline static int32_t get_offset_of_AmbientGroundColor_8() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientGroundColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_AmbientGroundColor_8() const { return ___AmbientGroundColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_AmbientGroundColor_8() { return &___AmbientGroundColor_8; }
	inline void set_AmbientGroundColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___AmbientGroundColor_8 = value;
	}

	inline static int32_t get_offset_of_AmbientLight_9() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientLight_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_AmbientLight_9() const { return ___AmbientLight_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_AmbientLight_9() { return &___AmbientLight_9; }
	inline void set_AmbientLight_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___AmbientLight_9 = value;
	}

	inline static int32_t get_offset_of_AmbientIntensity_10() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientIntensity_10)); }
	inline float get_AmbientIntensity_10() const { return ___AmbientIntensity_10; }
	inline float* get_address_of_AmbientIntensity_10() { return &___AmbientIntensity_10; }
	inline void set_AmbientIntensity_10(float value)
	{
		___AmbientIntensity_10 = value;
	}

	inline static int32_t get_offset_of_AmbientMode_11() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___AmbientMode_11)); }
	inline int32_t get_AmbientMode_11() const { return ___AmbientMode_11; }
	inline int32_t* get_address_of_AmbientMode_11() { return &___AmbientMode_11; }
	inline void set_AmbientMode_11(int32_t value)
	{
		___AmbientMode_11 = value;
	}

	inline static int32_t get_offset_of_SubtractiveShadowColor_12() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___SubtractiveShadowColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_SubtractiveShadowColor_12() const { return ___SubtractiveShadowColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_SubtractiveShadowColor_12() { return &___SubtractiveShadowColor_12; }
	inline void set_SubtractiveShadowColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___SubtractiveShadowColor_12 = value;
	}

	inline static int32_t get_offset_of_SkyboxMaterial_13() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___SkyboxMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SkyboxMaterial_13() const { return ___SkyboxMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SkyboxMaterial_13() { return &___SkyboxMaterial_13; }
	inline void set_SkyboxMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SkyboxMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkyboxMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultReflectionMode_14() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___DefaultReflectionMode_14)); }
	inline int32_t get_DefaultReflectionMode_14() const { return ___DefaultReflectionMode_14; }
	inline int32_t* get_address_of_DefaultReflectionMode_14() { return &___DefaultReflectionMode_14; }
	inline void set_DefaultReflectionMode_14(int32_t value)
	{
		___DefaultReflectionMode_14 = value;
	}

	inline static int32_t get_offset_of_DefaultReflectionResolution_15() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___DefaultReflectionResolution_15)); }
	inline int32_t get_DefaultReflectionResolution_15() const { return ___DefaultReflectionResolution_15; }
	inline int32_t* get_address_of_DefaultReflectionResolution_15() { return &___DefaultReflectionResolution_15; }
	inline void set_DefaultReflectionResolution_15(int32_t value)
	{
		___DefaultReflectionResolution_15 = value;
	}

	inline static int32_t get_offset_of_ReflectionBounces_16() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___ReflectionBounces_16)); }
	inline int32_t get_ReflectionBounces_16() const { return ___ReflectionBounces_16; }
	inline int32_t* get_address_of_ReflectionBounces_16() { return &___ReflectionBounces_16; }
	inline void set_ReflectionBounces_16(int32_t value)
	{
		___ReflectionBounces_16 = value;
	}

	inline static int32_t get_offset_of_ReflectionIntensity_17() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___ReflectionIntensity_17)); }
	inline float get_ReflectionIntensity_17() const { return ___ReflectionIntensity_17; }
	inline float* get_address_of_ReflectionIntensity_17() { return &___ReflectionIntensity_17; }
	inline void set_ReflectionIntensity_17(float value)
	{
		___ReflectionIntensity_17 = value;
	}

	inline static int32_t get_offset_of_CustomReflection_18() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___CustomReflection_18)); }
	inline Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * get_CustomReflection_18() const { return ___CustomReflection_18; }
	inline Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 ** get_address_of_CustomReflection_18() { return &___CustomReflection_18; }
	inline void set_CustomReflection_18(Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * value)
	{
		___CustomReflection_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomReflection_18), (void*)value);
	}

	inline static int32_t get_offset_of_UseRadianceAmbientProbe_19() { return static_cast<int32_t>(offsetof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F, ___UseRadianceAmbientProbe_19)); }
	inline bool get_UseRadianceAmbientProbe_19() const { return ___UseRadianceAmbientProbe_19; }
	inline bool* get_address_of_UseRadianceAmbientProbe_19() { return &___UseRadianceAmbientProbe_19; }
	inline void set_UseRadianceAmbientProbe_19(bool value)
	{
		___UseRadianceAmbientProbe_19 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings
struct RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F_marshaled_pinvoke
{
	int32_t ___Fog_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FogColor_1;
	int32_t ___FogMode_2;
	float ___FogDensity_3;
	float ___LinearFogStart_4;
	float ___LinearFogEnd_5;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientSkyColor_6;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientEquatorColor_7;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientGroundColor_8;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientLight_9;
	float ___AmbientIntensity_10;
	int32_t ___AmbientMode_11;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SubtractiveShadowColor_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SkyboxMaterial_13;
	int32_t ___DefaultReflectionMode_14;
	int32_t ___DefaultReflectionResolution_15;
	int32_t ___ReflectionBounces_16;
	float ___ReflectionIntensity_17;
	Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * ___CustomReflection_18;
	int32_t ___UseRadianceAmbientProbe_19;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings
struct RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F_marshaled_com
{
	int32_t ___Fog_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FogColor_1;
	int32_t ___FogMode_2;
	float ___FogDensity_3;
	float ___LinearFogStart_4;
	float ___LinearFogEnd_5;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientSkyColor_6;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientEquatorColor_7;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientGroundColor_8;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___AmbientLight_9;
	float ___AmbientIntensity_10;
	int32_t ___AmbientMode_11;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SubtractiveShadowColor_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SkyboxMaterial_13;
	int32_t ___DefaultReflectionMode_14;
	int32_t ___DefaultReflectionResolution_15;
	int32_t ___ReflectionBounces_16;
	float ___ReflectionIntensity_17;
	Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * ___CustomReflection_18;
	int32_t ___UseRadianceAmbientProbe_19;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct  SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_StaticFields, ___empty_0)); }
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
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


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121
struct  U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::newLightingSceneName
	String_t* ___newLightingSceneName_3;
	// Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::transitionType
	int32_t ___transitionType_4;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::transitionDuration
	float ___transitionDuration_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_6;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<lightingSceneNames>5__3
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3ClightingSceneNamesU3E5__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_newLightingSceneName_3() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___newLightingSceneName_3)); }
	inline String_t* get_newLightingSceneName_3() const { return ___newLightingSceneName_3; }
	inline String_t** get_address_of_newLightingSceneName_3() { return &___newLightingSceneName_3; }
	inline void set_newLightingSceneName_3(String_t* value)
	{
		___newLightingSceneName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLightingSceneName_3), (void*)value);
	}

	inline static int32_t get_offset_of_transitionType_4() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___transitionType_4)); }
	inline int32_t get_transitionType_4() const { return ___transitionType_4; }
	inline int32_t* get_address_of_transitionType_4() { return &___transitionType_4; }
	inline void set_transitionType_4(int32_t value)
	{
		___transitionType_4 = value;
	}

	inline static int32_t get_offset_of_transitionDuration_5() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___transitionDuration_5)); }
	inline float get_transitionDuration_5() const { return ___transitionDuration_5; }
	inline float* get_address_of_transitionDuration_5() { return &___transitionDuration_5; }
	inline void set_transitionDuration_5(float value)
	{
		___transitionDuration_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3CU3E7__wrap1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_6 = value;
	}

	inline static int32_t get_offset_of_U3ClightingSceneNamesU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3ClightingSceneNamesU3E5__3_7)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3ClightingSceneNamesU3E5__3_7() const { return ___U3ClightingSceneNamesU3E5__3_7; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3ClightingSceneNamesU3E5__3_7() { return &___U3ClightingSceneNamesU3E5__3_7; }
	inline void set_U3ClightingSceneNamesU3E5__3_7(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3ClightingSceneNamesU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClightingSceneNamesU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123
struct  U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::managerSceneName
	String_t* ___managerSceneName_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_managerSceneName_2() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___managerSceneName_2)); }
	inline String_t* get_managerSceneName_2() const { return ___managerSceneName_2; }
	inline String_t** get_address_of_managerSceneName_2() { return &___managerSceneName_2; }
	inline void set_managerSceneName_2(String_t* value)
	{
		___managerSceneName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___managerSceneName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___U3CU3E7__wrap1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct  SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::profile
	MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::largestLoadedContentIndex
	int32_t ___largestLoadedContentIndex_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::smalledLoadedContentIndex
	int32_t ___smalledLoadedContentIndex_2;
	// System.String[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::contentSceneNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___contentSceneNames_3;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::sortedContentScenes
	SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* ___sortedContentScenes_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::sortedLightingScenes
	SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* ___sortedLightingScenes_5;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___profile_0)); }
	inline MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * get_profile_0() const { return ___profile_0; }
	inline MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 ** get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * value)
	{
		___profile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_0), (void*)value);
	}

	inline static int32_t get_offset_of_largestLoadedContentIndex_1() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___largestLoadedContentIndex_1)); }
	inline int32_t get_largestLoadedContentIndex_1() const { return ___largestLoadedContentIndex_1; }
	inline int32_t* get_address_of_largestLoadedContentIndex_1() { return &___largestLoadedContentIndex_1; }
	inline void set_largestLoadedContentIndex_1(int32_t value)
	{
		___largestLoadedContentIndex_1 = value;
	}

	inline static int32_t get_offset_of_smalledLoadedContentIndex_2() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___smalledLoadedContentIndex_2)); }
	inline int32_t get_smalledLoadedContentIndex_2() const { return ___smalledLoadedContentIndex_2; }
	inline int32_t* get_address_of_smalledLoadedContentIndex_2() { return &___smalledLoadedContentIndex_2; }
	inline void set_smalledLoadedContentIndex_2(int32_t value)
	{
		___smalledLoadedContentIndex_2 = value;
	}

	inline static int32_t get_offset_of_contentSceneNames_3() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___contentSceneNames_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_contentSceneNames_3() const { return ___contentSceneNames_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_contentSceneNames_3() { return &___contentSceneNames_3; }
	inline void set_contentSceneNames_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___contentSceneNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentSceneNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_sortedContentScenes_4() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___sortedContentScenes_4)); }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* get_sortedContentScenes_4() const { return ___sortedContentScenes_4; }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8** get_address_of_sortedContentScenes_4() { return &___sortedContentScenes_4; }
	inline void set_sortedContentScenes_4(SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* value)
	{
		___sortedContentScenes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedContentScenes_4), (void*)value);
	}

	inline static int32_t get_offset_of_sortedLightingScenes_5() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524, ___sortedLightingScenes_5)); }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* get_sortedLightingScenes_5() const { return ___sortedLightingScenes_5; }
	inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8** get_address_of_sortedLightingScenes_5() { return &___sortedLightingScenes_5; }
	inline void set_sortedLightingScenes_5(SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* value)
	{
		___sortedLightingScenes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedLightingScenes_5), (void*)value);
	}
};

struct SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::CacheSortedContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CacheSortedContentPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetNextContentPerfMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetPrevContentPerfMarker_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::RefreshLoadedContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RefreshLoadedContentPerfMarker_9;

public:
	inline static int32_t get_offset_of_CacheSortedContentPerfMarker_6() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields, ___CacheSortedContentPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CacheSortedContentPerfMarker_6() const { return ___CacheSortedContentPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CacheSortedContentPerfMarker_6() { return &___CacheSortedContentPerfMarker_6; }
	inline void set_CacheSortedContentPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CacheSortedContentPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_GetNextContentPerfMarker_7() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields, ___GetNextContentPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetNextContentPerfMarker_7() const { return ___GetNextContentPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetNextContentPerfMarker_7() { return &___GetNextContentPerfMarker_7; }
	inline void set_GetNextContentPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetNextContentPerfMarker_7 = value;
	}

	inline static int32_t get_offset_of_GetPrevContentPerfMarker_8() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields, ___GetPrevContentPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetPrevContentPerfMarker_8() const { return ___GetPrevContentPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetPrevContentPerfMarker_8() { return &___GetPrevContentPerfMarker_8; }
	inline void set_GetPrevContentPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetPrevContentPerfMarker_8 = value;
	}

	inline static int32_t get_offset_of_RefreshLoadedContentPerfMarker_9() { return static_cast<int32_t>(offsetof(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields, ___RefreshLoadedContentPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RefreshLoadedContentPerfMarker_9() const { return ___RefreshLoadedContentPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RefreshLoadedContentPerfMarker_9() { return &___RefreshLoadedContentPerfMarker_9; }
	inline void set_RefreshLoadedContentPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RefreshLoadedContentPerfMarker_9 = value;
	}
};


// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct  Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>
struct  Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96  : public BaseEventSystem_t4F31D058A4C4064E414278F4E8704CB19661FB93
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_13), (void*)value);
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Cubemap
struct  Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108
struct  U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::sceneToLoad
	String_t* ___sceneToLoad_3;
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::mode
	int32_t ___mode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneToLoad_3() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___sceneToLoad_3)); }
	inline String_t* get_sceneToLoad_3() const { return ___sceneToLoad_3; }
	inline String_t** get_address_of_sceneToLoad_3() { return &___sceneToLoad_3; }
	inline void set_sceneToLoad_3(String_t* value)
	{
		___sceneToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToLoad_3), (void*)value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_activationToken_5() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___activationToken_5)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_5() const { return ___activationToken_5; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_5() { return &___activationToken_5; }
	inline void set_activationToken_5(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115
struct  U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::mode
	int32_t ___mode_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::scenesToLoad
	RuntimeObject* ___scenesToLoad_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_6;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<loadedContentScenes>5__3
	RuntimeObject* ___U3CloadedContentScenesU3E5__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___mode_3)); }
	inline int32_t get_mode_3() const { return ___mode_3; }
	inline int32_t* get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(int32_t value)
	{
		___mode_3 = value;
	}

	inline static int32_t get_offset_of_scenesToLoad_4() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___scenesToLoad_4)); }
	inline RuntimeObject* get_scenesToLoad_4() const { return ___scenesToLoad_4; }
	inline RuntimeObject** get_address_of_scenesToLoad_4() { return &___scenesToLoad_4; }
	inline void set_scenesToLoad_4(RuntimeObject* value)
	{
		___scenesToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenesToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_activationToken_5() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___activationToken_5)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_5() const { return ___activationToken_5; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_5() { return &___activationToken_5; }
	inline void set_activationToken_5(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CU3E7__wrap1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_6 = value;
	}

	inline static int32_t get_offset_of_U3CloadedContentScenesU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CloadedContentScenesU3E5__3_7)); }
	inline RuntimeObject* get_U3CloadedContentScenesU3E5__3_7() const { return ___U3CloadedContentScenesU3E5__3_7; }
	inline RuntimeObject** get_address_of_U3CloadedContentScenesU3E5__3_7() { return &___U3CloadedContentScenesU3E5__3_7; }
	inline void set_U3CloadedContentScenesU3E5__3_7(RuntimeObject* value)
	{
		___U3CloadedContentScenesU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadedContentScenesU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111
struct  U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::tag
	String_t* ___tag_3;
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::mode
	int32_t ___mode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_tag_3() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___tag_3)); }
	inline String_t* get_tag_3() const { return ___tag_3; }
	inline String_t** get_address_of_tag_3() { return &___tag_3; }
	inline void set_tag_3(String_t* value)
	{
		___tag_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_3), (void*)value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_activationToken_5() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___activationToken_5)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_5() const { return ___activationToken_5; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_5() { return &___activationToken_5; }
	inline void set_activationToken_5(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___U3CU3E7__wrap1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105
struct  U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::wrap
	bool ___wrap_3;
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::mode
	int32_t ___mode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_wrap_3() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___wrap_3)); }
	inline bool get_wrap_3() const { return ___wrap_3; }
	inline bool* get_address_of_wrap_3() { return &___wrap_3; }
	inline void set_wrap_3(bool value)
	{
		___wrap_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_activationToken_5() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___activationToken_5)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_5() const { return ___activationToken_5; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_5() { return &___activationToken_5; }
	inline void set_activationToken_5(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___U3CU3E7__wrap1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107
struct  U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::wrap
	bool ___wrap_3;
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::mode
	int32_t ___mode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_wrap_3() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___wrap_3)); }
	inline bool get_wrap_3() const { return ___wrap_3; }
	inline bool* get_address_of_wrap_3() { return &___wrap_3; }
	inline void set_wrap_3(bool value)
	{
		___wrap_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_activationToken_5() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___activationToken_5)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_5() const { return ___activationToken_5; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_5() { return &___activationToken_5; }
	inline void set_activationToken_5(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___U3CU3E7__wrap1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125
struct  U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::activationToken
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_3;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::progressOffset
	float ___progressOffset_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::sceneType
	int32_t ___sceneType_5;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::scenesToLoad
	RuntimeObject* ___scenesToLoad_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::sceneOpInProgressWhenFinished
	bool ___sceneOpInProgressWhenFinished_7;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::progressTarget
	float ___progressTarget_8;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_9;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<validNames>5__3
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CvalidNamesU3E5__3_10;
	// System.Collections.Generic.List`1<System.Int32> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<validIndexes>5__4
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CvalidIndexesU3E5__4_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<totalSceneOps>5__5
	int32_t ___U3CtotalSceneOpsU3E5__5_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<scenesLoadedAndActivated>5__6
	bool ___U3CscenesLoadedAndActivatedU3E5__6_13;
	// System.Collections.Generic.List`1<UnityEngine.AsyncOperation> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<loadSceneOps>5__7
	List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * ___U3CloadSceneOpsU3E5__7_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<completedAllSceneOps>5__8
	bool ___U3CcompletedAllSceneOpsU3E5__8_15;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_16;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_activationToken_2() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___activationToken_2)); }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * get_activationToken_2() const { return ___activationToken_2; }
	inline SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B ** get_address_of_activationToken_2() { return &___activationToken_2; }
	inline void set_activationToken_2(SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * value)
	{
		___activationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToken_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressOffset_4() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___progressOffset_4)); }
	inline float get_progressOffset_4() const { return ___progressOffset_4; }
	inline float* get_address_of_progressOffset_4() { return &___progressOffset_4; }
	inline void set_progressOffset_4(float value)
	{
		___progressOffset_4 = value;
	}

	inline static int32_t get_offset_of_sceneType_5() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___sceneType_5)); }
	inline int32_t get_sceneType_5() const { return ___sceneType_5; }
	inline int32_t* get_address_of_sceneType_5() { return &___sceneType_5; }
	inline void set_sceneType_5(int32_t value)
	{
		___sceneType_5 = value;
	}

	inline static int32_t get_offset_of_scenesToLoad_6() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___scenesToLoad_6)); }
	inline RuntimeObject* get_scenesToLoad_6() const { return ___scenesToLoad_6; }
	inline RuntimeObject** get_address_of_scenesToLoad_6() { return &___scenesToLoad_6; }
	inline void set_scenesToLoad_6(RuntimeObject* value)
	{
		___scenesToLoad_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenesToLoad_6), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOpInProgressWhenFinished_7() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___sceneOpInProgressWhenFinished_7)); }
	inline bool get_sceneOpInProgressWhenFinished_7() const { return ___sceneOpInProgressWhenFinished_7; }
	inline bool* get_address_of_sceneOpInProgressWhenFinished_7() { return &___sceneOpInProgressWhenFinished_7; }
	inline void set_sceneOpInProgressWhenFinished_7(bool value)
	{
		___sceneOpInProgressWhenFinished_7 = value;
	}

	inline static int32_t get_offset_of_progressTarget_8() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___progressTarget_8)); }
	inline float get_progressTarget_8() const { return ___progressTarget_8; }
	inline float* get_address_of_progressTarget_8() { return &___progressTarget_8; }
	inline void set_progressTarget_8(float value)
	{
		___progressTarget_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_9() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CU3E7__wrap1_9)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_9() const { return ___U3CU3E7__wrap1_9; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_9() { return &___U3CU3E7__wrap1_9; }
	inline void set_U3CU3E7__wrap1_9(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_9 = value;
	}

	inline static int32_t get_offset_of_U3CvalidNamesU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CvalidNamesU3E5__3_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CvalidNamesU3E5__3_10() const { return ___U3CvalidNamesU3E5__3_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CvalidNamesU3E5__3_10() { return &___U3CvalidNamesU3E5__3_10; }
	inline void set_U3CvalidNamesU3E5__3_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CvalidNamesU3E5__3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidNamesU3E5__3_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalidIndexesU3E5__4_11() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CvalidIndexesU3E5__4_11)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CvalidIndexesU3E5__4_11() const { return ___U3CvalidIndexesU3E5__4_11; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CvalidIndexesU3E5__4_11() { return &___U3CvalidIndexesU3E5__4_11; }
	inline void set_U3CvalidIndexesU3E5__4_11(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CvalidIndexesU3E5__4_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidIndexesU3E5__4_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtotalSceneOpsU3E5__5_12() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CtotalSceneOpsU3E5__5_12)); }
	inline int32_t get_U3CtotalSceneOpsU3E5__5_12() const { return ___U3CtotalSceneOpsU3E5__5_12; }
	inline int32_t* get_address_of_U3CtotalSceneOpsU3E5__5_12() { return &___U3CtotalSceneOpsU3E5__5_12; }
	inline void set_U3CtotalSceneOpsU3E5__5_12(int32_t value)
	{
		___U3CtotalSceneOpsU3E5__5_12 = value;
	}

	inline static int32_t get_offset_of_U3CscenesLoadedAndActivatedU3E5__6_13() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CscenesLoadedAndActivatedU3E5__6_13)); }
	inline bool get_U3CscenesLoadedAndActivatedU3E5__6_13() const { return ___U3CscenesLoadedAndActivatedU3E5__6_13; }
	inline bool* get_address_of_U3CscenesLoadedAndActivatedU3E5__6_13() { return &___U3CscenesLoadedAndActivatedU3E5__6_13; }
	inline void set_U3CscenesLoadedAndActivatedU3E5__6_13(bool value)
	{
		___U3CscenesLoadedAndActivatedU3E5__6_13 = value;
	}

	inline static int32_t get_offset_of_U3CloadSceneOpsU3E5__7_14() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CloadSceneOpsU3E5__7_14)); }
	inline List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * get_U3CloadSceneOpsU3E5__7_14() const { return ___U3CloadSceneOpsU3E5__7_14; }
	inline List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 ** get_address_of_U3CloadSceneOpsU3E5__7_14() { return &___U3CloadSceneOpsU3E5__7_14; }
	inline void set_U3CloadSceneOpsU3E5__7_14(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * value)
	{
		___U3CloadSceneOpsU3E5__7_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadSceneOpsU3E5__7_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcompletedAllSceneOpsU3E5__8_15() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CcompletedAllSceneOpsU3E5__8_15)); }
	inline bool get_U3CcompletedAllSceneOpsU3E5__8_15() const { return ___U3CcompletedAllSceneOpsU3E5__8_15; }
	inline bool* get_address_of_U3CcompletedAllSceneOpsU3E5__8_15() { return &___U3CcompletedAllSceneOpsU3E5__8_15; }
	inline void set_U3CcompletedAllSceneOpsU3E5__8_15(bool value)
	{
		___U3CcompletedAllSceneOpsU3E5__8_15 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_16() { return static_cast<int32_t>(offsetof(U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5, ___U3CU3Eu__1_16)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_16() const { return ___U3CU3Eu__1_16; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_16() { return &___U3CU3Eu__1_16; }
	inline void set_U3CU3Eu__1_16(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109
struct  U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::sceneToUnload
	String_t* ___sceneToUnload_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneToUnload_3() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027, ___sceneToUnload_3)); }
	inline String_t* get_sceneToUnload_3() const { return ___sceneToUnload_3; }
	inline String_t** get_address_of_sceneToUnload_3() { return &___sceneToUnload_3; }
	inline void set_sceneToUnload_3(String_t* value)
	{
		___sceneToUnload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToUnload_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117
struct  U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::scenesToUnload
	RuntimeObject* ___scenesToUnload_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_scenesToUnload_3() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___scenesToUnload_3)); }
	inline RuntimeObject* get_scenesToUnload_3() const { return ___scenesToUnload_3; }
	inline RuntimeObject** get_address_of_scenesToUnload_3() { return &___scenesToUnload_3; }
	inline void set_scenesToUnload_3(RuntimeObject* value)
	{
		___scenesToUnload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenesToUnload_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___U3CU3E7__wrap1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113
struct  U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::tag
	String_t* ___tag_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_tag_3() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___tag_3)); }
	inline String_t* get_tag_3() const { return ___tag_3; }
	inline String_t** get_address_of_tag_3() { return &___tag_3; }
	inline void set_tag_3(String_t* value)
	{
		___tag_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___U3CU3E7__wrap1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127
struct  U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<>4__this
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::progressOffset
	float ___progressOffset_3;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::sceneType
	int32_t ___sceneType_4;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::scenesToUnload
	RuntimeObject* ___scenesToUnload_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::sceneOpInProgressWhenFinished
	bool ___sceneOpInProgressWhenFinished_6;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::progressTarget
	float ___progressTarget_7;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_8;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<validNames>5__3
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CvalidNamesU3E5__3_9;
	// System.Collections.Generic.List`1<System.Int32> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<validIndexes>5__4
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CvalidIndexesU3E5__4_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<totalSceneOps>5__5
	int32_t ___U3CtotalSceneOpsU3E5__5_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<scenesUnloaded>5__6
	bool ___U3CscenesUnloadedU3E5__6_12;
	// System.Collections.Generic.List`1<UnityEngine.AsyncOperation> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<unloadSceneOps>5__7
	List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * ___U3CunloadSceneOpsU3E5__7_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<completedAllSceneOps>5__8
	bool ___U3CcompletedAllSceneOpsU3E5__8_14;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_15;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_progressOffset_3() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___progressOffset_3)); }
	inline float get_progressOffset_3() const { return ___progressOffset_3; }
	inline float* get_address_of_progressOffset_3() { return &___progressOffset_3; }
	inline void set_progressOffset_3(float value)
	{
		___progressOffset_3 = value;
	}

	inline static int32_t get_offset_of_sceneType_4() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___sceneType_4)); }
	inline int32_t get_sceneType_4() const { return ___sceneType_4; }
	inline int32_t* get_address_of_sceneType_4() { return &___sceneType_4; }
	inline void set_sceneType_4(int32_t value)
	{
		___sceneType_4 = value;
	}

	inline static int32_t get_offset_of_scenesToUnload_5() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___scenesToUnload_5)); }
	inline RuntimeObject* get_scenesToUnload_5() const { return ___scenesToUnload_5; }
	inline RuntimeObject** get_address_of_scenesToUnload_5() { return &___scenesToUnload_5; }
	inline void set_scenesToUnload_5(RuntimeObject* value)
	{
		___scenesToUnload_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenesToUnload_5), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOpInProgressWhenFinished_6() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___sceneOpInProgressWhenFinished_6)); }
	inline bool get_sceneOpInProgressWhenFinished_6() const { return ___sceneOpInProgressWhenFinished_6; }
	inline bool* get_address_of_sceneOpInProgressWhenFinished_6() { return &___sceneOpInProgressWhenFinished_6; }
	inline void set_sceneOpInProgressWhenFinished_6(bool value)
	{
		___sceneOpInProgressWhenFinished_6 = value;
	}

	inline static int32_t get_offset_of_progressTarget_7() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___progressTarget_7)); }
	inline float get_progressTarget_7() const { return ___progressTarget_7; }
	inline float* get_address_of_progressTarget_7() { return &___progressTarget_7; }
	inline void set_progressTarget_7(float value)
	{
		___progressTarget_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CU3E7__wrap1_8)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_8 = value;
	}

	inline static int32_t get_offset_of_U3CvalidNamesU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CvalidNamesU3E5__3_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CvalidNamesU3E5__3_9() const { return ___U3CvalidNamesU3E5__3_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CvalidNamesU3E5__3_9() { return &___U3CvalidNamesU3E5__3_9; }
	inline void set_U3CvalidNamesU3E5__3_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CvalidNamesU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidNamesU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalidIndexesU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CvalidIndexesU3E5__4_10)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CvalidIndexesU3E5__4_10() const { return ___U3CvalidIndexesU3E5__4_10; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CvalidIndexesU3E5__4_10() { return &___U3CvalidIndexesU3E5__4_10; }
	inline void set_U3CvalidIndexesU3E5__4_10(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CvalidIndexesU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidIndexesU3E5__4_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtotalSceneOpsU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CtotalSceneOpsU3E5__5_11)); }
	inline int32_t get_U3CtotalSceneOpsU3E5__5_11() const { return ___U3CtotalSceneOpsU3E5__5_11; }
	inline int32_t* get_address_of_U3CtotalSceneOpsU3E5__5_11() { return &___U3CtotalSceneOpsU3E5__5_11; }
	inline void set_U3CtotalSceneOpsU3E5__5_11(int32_t value)
	{
		___U3CtotalSceneOpsU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CscenesUnloadedU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CscenesUnloadedU3E5__6_12)); }
	inline bool get_U3CscenesUnloadedU3E5__6_12() const { return ___U3CscenesUnloadedU3E5__6_12; }
	inline bool* get_address_of_U3CscenesUnloadedU3E5__6_12() { return &___U3CscenesUnloadedU3E5__6_12; }
	inline void set_U3CscenesUnloadedU3E5__6_12(bool value)
	{
		___U3CscenesUnloadedU3E5__6_12 = value;
	}

	inline static int32_t get_offset_of_U3CunloadSceneOpsU3E5__7_13() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CunloadSceneOpsU3E5__7_13)); }
	inline List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * get_U3CunloadSceneOpsU3E5__7_13() const { return ___U3CunloadSceneOpsU3E5__7_13; }
	inline List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 ** get_address_of_U3CunloadSceneOpsU3E5__7_13() { return &___U3CunloadSceneOpsU3E5__7_13; }
	inline void set_U3CunloadSceneOpsU3E5__7_13(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * value)
	{
		___U3CunloadSceneOpsU3E5__7_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunloadSceneOpsU3E5__7_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcompletedAllSceneOpsU3E5__8_14() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CcompletedAllSceneOpsU3E5__8_14)); }
	inline bool get_U3CcompletedAllSceneOpsU3E5__8_14() const { return ___U3CcompletedAllSceneOpsU3E5__8_14; }
	inline bool* get_address_of_U3CcompletedAllSceneOpsU3E5__8_14() { return &___U3CcompletedAllSceneOpsU3E5__8_14; }
	inline void set_U3CcompletedAllSceneOpsU3E5__8_14(bool value)
	{
		___U3CcompletedAllSceneOpsU3E5__8_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_15() { return static_cast<int32_t>(offsetof(U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA, ___U3CU3Eu__1_15)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_15() const { return ___U3CU3Eu__1_15; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_15() { return &___U3CU3Eu__1_15; }
	inline void set_U3CU3Eu__1_15(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct  SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::targetLightingSettings
	RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___targetLightingSettings_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::currentLightingSettings
	RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___currentLightingSettings_5;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::prevLightingSettings
	RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___prevLightingSettings_6;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::targetSunlightSettings
	RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___targetSunlightSettings_7;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::currentSunlightSettings
	RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___currentSunlightSettings_8;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::prevSunlightSettings
	RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___prevSunlightSettings_9;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::targetRenderSettings
	RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___targetRenderSettings_10;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::currentRenderSettings
	RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___currentRenderSettings_11;
	// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::prevRenderSettings
	RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___prevRenderSettings_12;
	// Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::transitionType
	int32_t ___transitionType_13;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::transitionDuration
	float ___transitionDuration_14;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::transitionElapsed
	float ___transitionElapsed_15;
	// UnityEngine.Light Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::sharedSunLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___sharedSunLight_16;

public:
	inline static int32_t get_offset_of_targetLightingSettings_4() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___targetLightingSettings_4)); }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  get_targetLightingSettings_4() const { return ___targetLightingSettings_4; }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B * get_address_of_targetLightingSettings_4() { return &___targetLightingSettings_4; }
	inline void set_targetLightingSettings_4(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  value)
	{
		___targetLightingSettings_4 = value;
	}

	inline static int32_t get_offset_of_currentLightingSettings_5() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___currentLightingSettings_5)); }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  get_currentLightingSettings_5() const { return ___currentLightingSettings_5; }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B * get_address_of_currentLightingSettings_5() { return &___currentLightingSettings_5; }
	inline void set_currentLightingSettings_5(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  value)
	{
		___currentLightingSettings_5 = value;
	}

	inline static int32_t get_offset_of_prevLightingSettings_6() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___prevLightingSettings_6)); }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  get_prevLightingSettings_6() const { return ___prevLightingSettings_6; }
	inline RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B * get_address_of_prevLightingSettings_6() { return &___prevLightingSettings_6; }
	inline void set_prevLightingSettings_6(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  value)
	{
		___prevLightingSettings_6 = value;
	}

	inline static int32_t get_offset_of_targetSunlightSettings_7() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___targetSunlightSettings_7)); }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  get_targetSunlightSettings_7() const { return ___targetSunlightSettings_7; }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * get_address_of_targetSunlightSettings_7() { return &___targetSunlightSettings_7; }
	inline void set_targetSunlightSettings_7(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  value)
	{
		___targetSunlightSettings_7 = value;
	}

	inline static int32_t get_offset_of_currentSunlightSettings_8() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___currentSunlightSettings_8)); }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  get_currentSunlightSettings_8() const { return ___currentSunlightSettings_8; }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * get_address_of_currentSunlightSettings_8() { return &___currentSunlightSettings_8; }
	inline void set_currentSunlightSettings_8(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  value)
	{
		___currentSunlightSettings_8 = value;
	}

	inline static int32_t get_offset_of_prevSunlightSettings_9() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___prevSunlightSettings_9)); }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  get_prevSunlightSettings_9() const { return ___prevSunlightSettings_9; }
	inline RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * get_address_of_prevSunlightSettings_9() { return &___prevSunlightSettings_9; }
	inline void set_prevSunlightSettings_9(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  value)
	{
		___prevSunlightSettings_9 = value;
	}

	inline static int32_t get_offset_of_targetRenderSettings_10() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___targetRenderSettings_10)); }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  get_targetRenderSettings_10() const { return ___targetRenderSettings_10; }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * get_address_of_targetRenderSettings_10() { return &___targetRenderSettings_10; }
	inline void set_targetRenderSettings_10(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  value)
	{
		___targetRenderSettings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___targetRenderSettings_10))->___SkyboxMaterial_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___targetRenderSettings_10))->___CustomReflection_18), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_currentRenderSettings_11() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___currentRenderSettings_11)); }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  get_currentRenderSettings_11() const { return ___currentRenderSettings_11; }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * get_address_of_currentRenderSettings_11() { return &___currentRenderSettings_11; }
	inline void set_currentRenderSettings_11(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  value)
	{
		___currentRenderSettings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentRenderSettings_11))->___SkyboxMaterial_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentRenderSettings_11))->___CustomReflection_18), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_prevRenderSettings_12() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___prevRenderSettings_12)); }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  get_prevRenderSettings_12() const { return ___prevRenderSettings_12; }
	inline RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * get_address_of_prevRenderSettings_12() { return &___prevRenderSettings_12; }
	inline void set_prevRenderSettings_12(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  value)
	{
		___prevRenderSettings_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___prevRenderSettings_12))->___SkyboxMaterial_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___prevRenderSettings_12))->___CustomReflection_18), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_transitionType_13() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___transitionType_13)); }
	inline int32_t get_transitionType_13() const { return ___transitionType_13; }
	inline int32_t* get_address_of_transitionType_13() { return &___transitionType_13; }
	inline void set_transitionType_13(int32_t value)
	{
		___transitionType_13 = value;
	}

	inline static int32_t get_offset_of_transitionDuration_14() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___transitionDuration_14)); }
	inline float get_transitionDuration_14() const { return ___transitionDuration_14; }
	inline float* get_address_of_transitionDuration_14() { return &___transitionDuration_14; }
	inline void set_transitionDuration_14(float value)
	{
		___transitionDuration_14 = value;
	}

	inline static int32_t get_offset_of_transitionElapsed_15() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___transitionElapsed_15)); }
	inline float get_transitionElapsed_15() const { return ___transitionElapsed_15; }
	inline float* get_address_of_transitionElapsed_15() { return &___transitionElapsed_15; }
	inline void set_transitionElapsed_15(float value)
	{
		___transitionElapsed_15 = value;
	}

	inline static int32_t get_offset_of_sharedSunLight_16() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4, ___sharedSunLight_16)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_sharedSunLight_16() const { return ___sharedSunLight_16; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_sharedSunLight_16() { return &___sharedSunLight_16; }
	inline void set_sharedSunLight_16(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___sharedSunLight_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedSunLight_16), (void*)value);
	}
};

struct SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::UpdateTransitionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateTransitionPerfMarker_0;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::ApplySettingsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsPerfMarker_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::FindOrCreateSunlightPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FindOrCreateSunlightPerfMarker_2;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::DisableSunlightPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableSunlightPerfMarker_3;

public:
	inline static int32_t get_offset_of_UpdateTransitionPerfMarker_0() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields, ___UpdateTransitionPerfMarker_0)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateTransitionPerfMarker_0() const { return ___UpdateTransitionPerfMarker_0; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateTransitionPerfMarker_0() { return &___UpdateTransitionPerfMarker_0; }
	inline void set_UpdateTransitionPerfMarker_0(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateTransitionPerfMarker_0 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsPerfMarker_1() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields, ___ApplySettingsPerfMarker_1)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsPerfMarker_1() const { return ___ApplySettingsPerfMarker_1; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsPerfMarker_1() { return &___ApplySettingsPerfMarker_1; }
	inline void set_ApplySettingsPerfMarker_1(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsPerfMarker_1 = value;
	}

	inline static int32_t get_offset_of_FindOrCreateSunlightPerfMarker_2() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields, ___FindOrCreateSunlightPerfMarker_2)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FindOrCreateSunlightPerfMarker_2() const { return ___FindOrCreateSunlightPerfMarker_2; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FindOrCreateSunlightPerfMarker_2() { return &___FindOrCreateSunlightPerfMarker_2; }
	inline void set_FindOrCreateSunlightPerfMarker_2(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FindOrCreateSunlightPerfMarker_2 = value;
	}

	inline static int32_t get_offset_of_DisableSunlightPerfMarker_3() { return static_cast<int32_t>(offsetof(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields, ___DisableSunlightPerfMarker_3)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableSunlightPerfMarker_3() const { return ___DisableSunlightPerfMarker_3; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableSunlightPerfMarker_3() { return &___DisableSunlightPerfMarker_3; }
	inline void set_DisableSunlightPerfMarker_3(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableSunlightPerfMarker_3 = value;
	}
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct  MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060  : public BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_15;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_16;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * ___contentTracker_17;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * ___lightingExecutor_18;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_19;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_20;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_21;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_22;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_23;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_24;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_25;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_26;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_27;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_28;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_29;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_32;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_34;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_35;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_37;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_38;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_15() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___managerSceneOpInProgress_15)); }
	inline bool get_managerSceneOpInProgress_15() const { return ___managerSceneOpInProgress_15; }
	inline bool* get_address_of_managerSceneOpInProgress_15() { return &___managerSceneOpInProgress_15; }
	inline void set_managerSceneOpInProgress_15(bool value)
	{
		___managerSceneOpInProgress_15 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_16() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___managerSceneOpProgress_16)); }
	inline float get_managerSceneOpProgress_16() const { return ___managerSceneOpProgress_16; }
	inline float* get_address_of_managerSceneOpProgress_16() { return &___managerSceneOpProgress_16; }
	inline void set_managerSceneOpProgress_16(float value)
	{
		___managerSceneOpProgress_16 = value;
	}

	inline static int32_t get_offset_of_contentTracker_17() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___contentTracker_17)); }
	inline SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * get_contentTracker_17() const { return ___contentTracker_17; }
	inline SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 ** get_address_of_contentTracker_17() { return &___contentTracker_17; }
	inline void set_contentTracker_17(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * value)
	{
		___contentTracker_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_17), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_18() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___lightingExecutor_18)); }
	inline SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * get_lightingExecutor_18() const { return ___lightingExecutor_18; }
	inline SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 ** get_address_of_lightingExecutor_18() { return &___lightingExecutor_18; }
	inline void set_lightingExecutor_18(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * value)
	{
		___lightingExecutor_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CNameU3Ek__BackingField_19() const { return ___U3CNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_19() { return &___U3CNameU3Ek__BackingField_19; }
	inline void set_U3CNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillLoadContentU3Ek__BackingField_20)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_20() const { return ___U3COnWillLoadContentU3Ek__BackingField_20; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_20() { return &___U3COnWillLoadContentU3Ek__BackingField_20; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_20(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnContentLoadedU3Ek__BackingField_21)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_21() const { return ___U3COnContentLoadedU3Ek__BackingField_21; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_21() { return &___U3COnContentLoadedU3Ek__BackingField_21; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_21(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillUnloadContentU3Ek__BackingField_22)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_22() const { return ___U3COnWillUnloadContentU3Ek__BackingField_22; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_22() { return &___U3COnWillUnloadContentU3Ek__BackingField_22; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_22(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnContentUnloadedU3Ek__BackingField_23)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_23() const { return ___U3COnContentUnloadedU3Ek__BackingField_23; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_23() { return &___U3COnContentUnloadedU3Ek__BackingField_23; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_23(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillLoadLightingU3Ek__BackingField_24)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_24() const { return ___U3COnWillLoadLightingU3Ek__BackingField_24; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_24() { return &___U3COnWillLoadLightingU3Ek__BackingField_24; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_24(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnLightingLoadedU3Ek__BackingField_25)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_25() const { return ___U3COnLightingLoadedU3Ek__BackingField_25; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_25() { return &___U3COnLightingLoadedU3Ek__BackingField_25; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_25(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillUnloadLightingU3Ek__BackingField_26)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_26() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_26; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_26() { return &___U3COnWillUnloadLightingU3Ek__BackingField_26; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_26(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnLightingUnloadedU3Ek__BackingField_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_27() const { return ___U3COnLightingUnloadedU3Ek__BackingField_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_27() { return &___U3COnLightingUnloadedU3Ek__BackingField_27; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillLoadSceneU3Ek__BackingField_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_28() const { return ___U3COnWillLoadSceneU3Ek__BackingField_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_28() { return &___U3COnWillLoadSceneU3Ek__BackingField_28; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnSceneLoadedU3Ek__BackingField_29)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_29() const { return ___U3COnSceneLoadedU3Ek__BackingField_29; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_29() { return &___U3COnSceneLoadedU3Ek__BackingField_29; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_29(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnWillUnloadSceneU3Ek__BackingField_30)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_30() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_30; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_30() { return &___U3COnWillUnloadSceneU3Ek__BackingField_30; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_30(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3COnSceneUnloadedU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_31() const { return ___U3COnSceneUnloadedU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_31() { return &___U3COnSceneUnloadedU3Ek__BackingField_31; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CSceneOperationInProgressU3Ek__BackingField_32)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_32() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_32() { return &___U3CSceneOperationInProgressU3Ek__BackingField_32; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_32(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CSceneOperationProgressU3Ek__BackingField_33)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_33() const { return ___U3CSceneOperationProgressU3Ek__BackingField_33; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_33() { return &___U3CSceneOperationProgressU3Ek__BackingField_33; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_33(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CLightingOperationInProgressU3Ek__BackingField_34)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_34() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_34() { return &___U3CLightingOperationInProgressU3Ek__BackingField_34; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_34(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CLightingOperationProgressU3Ek__BackingField_35)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_35() const { return ___U3CLightingOperationProgressU3Ek__BackingField_35; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_35() { return &___U3CLightingOperationProgressU3Ek__BackingField_35; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_35(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CActiveLightingSceneU3Ek__BackingField_36)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_36() const { return ___U3CActiveLightingSceneU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_36() { return &___U3CActiveLightingSceneU3Ek__BackingField_36; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_36(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CWaitingToProceedU3Ek__BackingField_37)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_37() const { return ___U3CWaitingToProceedU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_37() { return &___U3CWaitingToProceedU3Ek__BackingField_37; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_37(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CSourceIdU3Ek__BackingField_38)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_38() const { return ___U3CSourceIdU3Ek__BackingField_38; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_38() { return &___U3CSourceIdU3Ek__BackingField_38; }
	inline void set_U3CSourceIdU3Ek__BackingField_38(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060, ___U3CSourceNameU3Ek__BackingField_39)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_39() const { return ___U3CSourceNameU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_39() { return &___U3CSourceNameU3Ek__BackingField_39; }
	inline void set_U3CSourceNameU3Ek__BackingField_39(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_39), (void*)value);
	}
};

struct MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_42;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_57;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___UpdatePerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_40() const { return ___UpdatePerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_40() { return &___UpdatePerfMarker_40; }
	inline void set_UpdatePerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___LoadNextContentPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_41() const { return ___LoadNextContentPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_41() { return &___LoadNextContentPerfMarker_41; }
	inline void set_LoadNextContentPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___LoadPrevContentPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_42() const { return ___LoadPrevContentPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_42() { return &___LoadPrevContentPerfMarker_42; }
	inline void set_LoadPrevContentPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_42 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___LoadContentByTagPerfMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_43() const { return ___LoadContentByTagPerfMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_43() { return &___LoadContentByTagPerfMarker_43; }
	inline void set_LoadContentByTagPerfMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___UnloadContentByTagPerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_44() const { return ___UnloadContentByTagPerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_44() { return &___UnloadContentByTagPerfMarker_44; }
	inline void set_UnloadContentByTagPerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___LoadContentPerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_45() const { return ___LoadContentPerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_45() { return &___LoadContentPerfMarker_45; }
	inline void set_LoadContentPerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___UnloadContentPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_46() const { return ___UnloadContentPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_46() { return &___UnloadContentPerfMarker_46; }
	inline void set_UnloadContentPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___IsContentLoadedPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_47() const { return ___IsContentLoadedPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_47() { return &___IsContentLoadedPerfMarker_47; }
	inline void set_IsContentLoadedPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___SetLightingScenePerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_48() const { return ___SetLightingScenePerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_48() { return &___SetLightingScenePerfMarker_48; }
	inline void set_SetLightingScenePerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___SetManagerScenePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_49() const { return ___SetManagerScenePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_49() { return &___SetManagerScenePerfMarker_49; }
	inline void set_SetManagerScenePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___LoadScenesInternalPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_50() const { return ___LoadScenesInternalPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_50() { return &___LoadScenesInternalPerfMarker_50; }
	inline void set_LoadScenesInternalPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___UnloadScenesInternalPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_51() const { return ___UnloadScenesInternalPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_51() { return &___UnloadScenesInternalPerfMarker_51; }
	inline void set_UnloadScenesInternalPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___InvokeLoadedActionsPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_52() const { return ___InvokeLoadedActionsPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_52() { return &___InvokeLoadedActionsPerfMarker_52; }
	inline void set_InvokeLoadedActionsPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___InvokeWillLoadActionsPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_53() const { return ___InvokeWillLoadActionsPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_53() { return &___InvokeWillLoadActionsPerfMarker_53; }
	inline void set_InvokeWillLoadActionsPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___InvokeWillUnloadActionsPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_54() const { return ___InvokeWillUnloadActionsPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_54() { return &___InvokeWillUnloadActionsPerfMarker_54; }
	inline void set_InvokeWillUnloadActionsPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___InvokeUnloadedActionsPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_55() const { return ___InvokeUnloadedActionsPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_55() { return &___InvokeUnloadedActionsPerfMarker_55; }
	inline void set_InvokeUnloadedActionsPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___GetScenePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_56() const { return ___GetScenePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_56() { return &___GetScenePerfMarker_56; }
	inline void set_GetScenePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields, ___GetLoadedContentScenesPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_57() const { return ___GetLoadedContentScenesPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_57() { return &___GetLoadedContentScenesPerfMarker_57; }
	inline void set_GetLoadedContentScenesPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_57 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct  MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5  : public BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::useManagerScene
	bool ___useManagerScene_5;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::managerScene
	SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  ___managerScene_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::useLightingScene
	bool ___useLightingScene_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::defaultLightingSceneIndex
	int32_t ___defaultLightingSceneIndex_8;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::lightingScenes
	List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * ___lightingScenes_9;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::contentScenes
	List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * ___contentScenes_10;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::permittedLightingSceneComponentTypes
	SystemTypeU5BU5D_t9F8AA420B9E84F9B003F0A81E82618716DF2DC55* ___permittedLightingSceneComponentTypes_11;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::contentTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___contentTags_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/CachedLightingSettings> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::cachedLightingSettings
	List_1_t96467018E4F52244E703DAB4178353A4922BE597 * ___cachedLightingSettings_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::editorManageBuildSettings
	bool ___editorManageBuildSettings_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::editorEnforceSceneOrder
	bool ___editorEnforceSceneOrder_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::editorManageLoadedScenes
	bool ___editorManageLoadedScenes_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::editorEnforceLightingSceneTypes
	bool ___editorEnforceLightingSceneTypes_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::editorLightingCacheOutOfDate
	bool ___editorLightingCacheOutOfDate_18;

public:
	inline static int32_t get_offset_of_useManagerScene_5() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___useManagerScene_5)); }
	inline bool get_useManagerScene_5() const { return ___useManagerScene_5; }
	inline bool* get_address_of_useManagerScene_5() { return &___useManagerScene_5; }
	inline void set_useManagerScene_5(bool value)
	{
		___useManagerScene_5 = value;
	}

	inline static int32_t get_offset_of_managerScene_6() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___managerScene_6)); }
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  get_managerScene_6() const { return ___managerScene_6; }
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C * get_address_of_managerScene_6() { return &___managerScene_6; }
	inline void set_managerScene_6(SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  value)
	{
		___managerScene_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___managerScene_6))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___managerScene_6))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___managerScene_6))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___managerScene_6))->___Asset_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_useLightingScene_7() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___useLightingScene_7)); }
	inline bool get_useLightingScene_7() const { return ___useLightingScene_7; }
	inline bool* get_address_of_useLightingScene_7() { return &___useLightingScene_7; }
	inline void set_useLightingScene_7(bool value)
	{
		___useLightingScene_7 = value;
	}

	inline static int32_t get_offset_of_defaultLightingSceneIndex_8() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___defaultLightingSceneIndex_8)); }
	inline int32_t get_defaultLightingSceneIndex_8() const { return ___defaultLightingSceneIndex_8; }
	inline int32_t* get_address_of_defaultLightingSceneIndex_8() { return &___defaultLightingSceneIndex_8; }
	inline void set_defaultLightingSceneIndex_8(int32_t value)
	{
		___defaultLightingSceneIndex_8 = value;
	}

	inline static int32_t get_offset_of_lightingScenes_9() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___lightingScenes_9)); }
	inline List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * get_lightingScenes_9() const { return ___lightingScenes_9; }
	inline List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 ** get_address_of_lightingScenes_9() { return &___lightingScenes_9; }
	inline void set_lightingScenes_9(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * value)
	{
		___lightingScenes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingScenes_9), (void*)value);
	}

	inline static int32_t get_offset_of_contentScenes_10() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___contentScenes_10)); }
	inline List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * get_contentScenes_10() const { return ___contentScenes_10; }
	inline List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 ** get_address_of_contentScenes_10() { return &___contentScenes_10; }
	inline void set_contentScenes_10(List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * value)
	{
		___contentScenes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentScenes_10), (void*)value);
	}

	inline static int32_t get_offset_of_permittedLightingSceneComponentTypes_11() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___permittedLightingSceneComponentTypes_11)); }
	inline SystemTypeU5BU5D_t9F8AA420B9E84F9B003F0A81E82618716DF2DC55* get_permittedLightingSceneComponentTypes_11() const { return ___permittedLightingSceneComponentTypes_11; }
	inline SystemTypeU5BU5D_t9F8AA420B9E84F9B003F0A81E82618716DF2DC55** get_address_of_permittedLightingSceneComponentTypes_11() { return &___permittedLightingSceneComponentTypes_11; }
	inline void set_permittedLightingSceneComponentTypes_11(SystemTypeU5BU5D_t9F8AA420B9E84F9B003F0A81E82618716DF2DC55* value)
	{
		___permittedLightingSceneComponentTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___permittedLightingSceneComponentTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_contentTags_12() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___contentTags_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_contentTags_12() const { return ___contentTags_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_contentTags_12() { return &___contentTags_12; }
	inline void set_contentTags_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___contentTags_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTags_12), (void*)value);
	}

	inline static int32_t get_offset_of_cachedLightingSettings_13() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___cachedLightingSettings_13)); }
	inline List_1_t96467018E4F52244E703DAB4178353A4922BE597 * get_cachedLightingSettings_13() const { return ___cachedLightingSettings_13; }
	inline List_1_t96467018E4F52244E703DAB4178353A4922BE597 ** get_address_of_cachedLightingSettings_13() { return &___cachedLightingSettings_13; }
	inline void set_cachedLightingSettings_13(List_1_t96467018E4F52244E703DAB4178353A4922BE597 * value)
	{
		___cachedLightingSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedLightingSettings_13), (void*)value);
	}

	inline static int32_t get_offset_of_editorManageBuildSettings_14() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___editorManageBuildSettings_14)); }
	inline bool get_editorManageBuildSettings_14() const { return ___editorManageBuildSettings_14; }
	inline bool* get_address_of_editorManageBuildSettings_14() { return &___editorManageBuildSettings_14; }
	inline void set_editorManageBuildSettings_14(bool value)
	{
		___editorManageBuildSettings_14 = value;
	}

	inline static int32_t get_offset_of_editorEnforceSceneOrder_15() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___editorEnforceSceneOrder_15)); }
	inline bool get_editorEnforceSceneOrder_15() const { return ___editorEnforceSceneOrder_15; }
	inline bool* get_address_of_editorEnforceSceneOrder_15() { return &___editorEnforceSceneOrder_15; }
	inline void set_editorEnforceSceneOrder_15(bool value)
	{
		___editorEnforceSceneOrder_15 = value;
	}

	inline static int32_t get_offset_of_editorManageLoadedScenes_16() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___editorManageLoadedScenes_16)); }
	inline bool get_editorManageLoadedScenes_16() const { return ___editorManageLoadedScenes_16; }
	inline bool* get_address_of_editorManageLoadedScenes_16() { return &___editorManageLoadedScenes_16; }
	inline void set_editorManageLoadedScenes_16(bool value)
	{
		___editorManageLoadedScenes_16 = value;
	}

	inline static int32_t get_offset_of_editorEnforceLightingSceneTypes_17() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___editorEnforceLightingSceneTypes_17)); }
	inline bool get_editorEnforceLightingSceneTypes_17() const { return ___editorEnforceLightingSceneTypes_17; }
	inline bool* get_address_of_editorEnforceLightingSceneTypes_17() { return &___editorEnforceLightingSceneTypes_17; }
	inline void set_editorEnforceLightingSceneTypes_17(bool value)
	{
		___editorEnforceLightingSceneTypes_17 = value;
	}

	inline static int32_t get_offset_of_editorLightingCacheOutOfDate_18() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5, ___editorLightingCacheOutOfDate_18)); }
	inline bool get_editorLightingCacheOutOfDate_18() const { return ___editorLightingCacheOutOfDate_18; }
	inline bool* get_address_of_editorLightingCacheOutOfDate_18() { return &___editorLightingCacheOutOfDate_18; }
	inline void set_editorLightingCacheOutOfDate_18(bool value)
	{
		___editorLightingCacheOutOfDate_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[]
struct SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  m_Items[1];

public:
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Asset_6), (void*)NULL);
		#endif
	}
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Asset_6), (void*)NULL);
		#endif
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


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_gshared (Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_gshared (RuntimeObject* ___source0, Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * ___keySelector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::.ctor(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem__ctor_m7F7F3210B7D8E47ED7FBDE1C860373F73B13A2ED (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m287A28559A7697A16A2E02CC53A9B46D079B8438_inline (BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mC1D39C40A3285FE63A62438923C8168FE25ADC25 (BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96 * __this, BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * ___profile0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_PrevContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_get_PrevContentExists_mCECB8F20A8642233A42CAE228F53AE47FB84C87E (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_NextContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_get_NextContentExists_mD261B61D5993D1702A8D392CC8FD010B62C0A94A (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method);
// System.String[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_ContentSceneNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SceneContentTracker_get_ContentSceneNames_mE1A78B5E9FDC19CE25DD11BEEA7D6BBA597747DD_inline (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::.ctor(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker__ctor_mBBFBC12E22F32121D3F0B5A1EC8FC08C857B3775 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor__ctor_m76F68BE611BC2B1BE86A1D54EF042BCD1AC32A03 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_UseManagerScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystemProfile_get_UseManagerScene_m074C9A2570F76C59B7130F20246541DF500F64ED (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_ManagerScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  MixedRealitySceneSystemProfile_get_ManagerScene_mB8DE3C97E86592DAFB89ADA36FC2331413189036_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetManagerScene_mEDABA62BB621AAFC379E287A801471D6641DADB9 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___managerSceneName0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_UseLightingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystemProfile_get_UseLightingScene_mA18D01C101072D509F1766F2AAEB45943FAF6438 (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_DefaultLightingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  MixedRealitySceneSystemProfile_get_DefaultLightingScene_mE3CFF0CDB47D9312CE6734D70BF5209496F32A2C (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScene(System.String,Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetLightingScene_m6B5157783F543D1EA1534C0F6C35A31A136A54B8 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___newLightingSceneName0, int32_t ___transitionType1, float ___transitionDuration2, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::UpdateTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_UpdateTransition_m5230B9A47BB19465AF133B249B23157B8F07F98A (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_SceneOperationInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationInProgress_m3FAEB23418819548EAD82D05CB2B8FF2425CAF95_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_SceneOperationProgress(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationProgress_mEB1B6F831A704913D294C705993FE41B8EE374AF_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_LightingOperationInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationInProgress_mAA1F1AEAD40470657659EE993D7BF0EDB264E780_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_LightingOperationProgress(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationProgress_m7F5C675B4623852B82B1ABF9ADB9A534E4F6D72B_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SceneOperationInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_SceneOperationInProgress_mE51A59A4149D9F05D48814C2A8224D1CB58BCD8A_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_LightingOperationInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_LightingOperationInProgress_m8EB05861947F8C1D0DC3778048DAF26A2B7E2124_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnSceneLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneLoaded_m10FE20603C360C002F73AFDB3BC886BAC131AFA6_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnContentLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentLoaded_mFF319D6F5B46C68E5A9B1F7E0A572E026FAEF022_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>::Invoke(!0)
inline void Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85 (Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnLightingLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingLoaded_mB29843423B6E59EE8F62AE10566E71CE770CB3E0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadScene_mF79FD1114F82B22A71839ED62C827747C46DC832_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillLoadContent_mB75B7D082769532ABE1D3D36E55E7F26D1E8BE7D_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadLighting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadLighting_m2F92B704FB3607602A7C8DCCC0A40FD60429D3C0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadScene_mBE2BA9F0CD738E20389754BB365B85E1675C61D7_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillUnloadContent_m1B7E0981AB07E900A755DAE362BE6924061BD05E_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadLighting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadLighting_m53A24A50EE707CF0AE68F62DC67A570F7EA98AA5_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnSceneUnloaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneUnloaded_m169C081514B84600E187CEC39B2B51519C59E80B_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnContentUnloaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentUnloaded_mBDC3B6242A2CFF1D3C05696EF7095D30E2FE5FC0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnLightingUnloaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingUnloaded_mBC40F24371836298D839044E53D2542100688DB6_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138__ctor_m57C252D1A4A3D4CDDF47AC25D4F213A89C97A475 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils::FindScene(System.String,UnityEngine.SceneManagement.Scene&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeSceneUtils_FindScene_m6B43F506C9BE6DA04D17C7971673F1A42C776FFB (String_t* ___sceneName0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * ___scene1, int32_t* ___sceneIndex2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_ContentSceneNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* MixedRealitySceneSystem_get_ContentSceneNames_m72BDED2147E275DA75D74CB08E3878B2579C94C5 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_IsContentLoaded_mC24E656B0B14ABEAFBD4DAD9BE0921ED1578AF11 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SourceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_SourceName_m8BEFA2CFA1D42185D07AF74D25CE8CCD5A62980C_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138_U3CU3Em__Finally1_m6BCEF641C3E485C24E2A0BE5D349D2B5164A77EB (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  MixedRealitySceneSystem_GetScene_m7198DBCD227A7CF143FFD5B2FA25711EEB9E339C (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138_System_IDisposable_Dispose_m59FD8C8631CED21043D448567CE3F197B69BBC27 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetScenesU3Ed__138_System_Collections_Generic_IEnumerableU3CUnityEngine_SceneManagement_SceneU3E_GetEnumerator_m042063B0EA6C5B1737BE659E9780FE474CC7D838 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContent(System.Collections.Generic.IEnumerable`1<System.String>,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToLoad0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__108_MoveNext_m721E210F9AF46BDDEF1943DB200F314BBCD4121C (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__108_SetStateMachine_m4D40E424EFCEA363D2DFCAC1C08CE3074E7864BF (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::CanSceneOpProceed(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, int32_t ___sceneType0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenes(System.Collections.Generic.IEnumerable`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_GetLoadedContentScenes_m7799014FCDE2F04C9FC46C9641161242F6BDB3CA (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject** ___loadedContentScenes0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternal(System.Collections.Generic.IEnumerable`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToUnload0, int32_t ___sceneType1, float ___progressOffset2, float ___progressTarget3, bool ___sceneOpInProgressWhenFinished4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternal(System.Collections.Generic.IEnumerable`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToLoad0, int32_t ___sceneType1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, float ___progressOffset3, float ___progressTarget4, bool ___sceneOpInProgressWhenFinished5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__115_MoveNext_m03253CFEF48D53944E29B787DBD6F3AA484E6642 (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__115_SetStateMachine_m4F6A89134A71C9237053F1CF2EB6C92025F60BCA (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::GetContentSceneNamesByTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystemProfile_GetContentSceneNamesByTag_m0F8F15A3F74776491021DE1B4E0554B52FD8365C (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentByTagU3Ed__111_MoveNext_mBB6E6D63EBC9703B7B23D552398A63D00F6733A6 (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentByTagU3Ed__111_SetStateMachine_m74AC348D44643B10DDD55C7C29E8E6E86E35DA08 (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetNextContent(System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_GetNextContent_mC7AF91F8686DC105AF08A8141478B0718BECD306 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, bool ___wrap0, String_t** ___contentSceneName1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextContentU3Ed__105_MoveNext_mC7A8AF0B5402C90A17E71FA8B4829EB0076E7737 (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextContentU3Ed__105_SetStateMachine_m576ADE0027B4F2C1D1CAAF3D17DBC498F279EEF2 (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetPrevContent(System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_GetPrevContent_m3EC73F929593CC7964A05B72294E30BF3683F1C4 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, bool ___wrap0, String_t** ___contentSceneName1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadPrevContentU3Ed__107_MoveNext_m6E4EBB3DAC2DA0C13D41C5267936086E37B9A5ED (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadPrevContentU3Ed__107_SetStateMachine_mD41987973F0EBBDF2252C7D5DA9FB3106F1D220D (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::SetReadyToProceed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneActivationToken_SetReadyToProceed_m090CC0F30450C4D421307F928F24A28F3086AC6E (SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * __this, bool ___readyToProceed0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetSceneOpProgress(System.Boolean,System.Single,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___inProgress0, float ___progress1, int32_t ___sceneType2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeWillLoadActions_m6000EBCDADBB5F540BE559A1EF940FA8D431DDDC (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AsyncOperation>::.ctor()
inline void List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47 (int32_t ___buildIndex0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mD57AC68A3BEF58E3AA2A6DB8FF97ADB5EDC9F84B (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::get_AllowSceneActivation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneActivationToken_get_AllowSceneActivation_m81B4A7DCD9A96D3AEDE009C169653E93F8D60AC0_inline (SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AsyncOperation>::Add(!0)
inline void List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25 (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.AsyncOperation>::get_Item(System.Int32)
inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * (*) (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AsyncOperation>::get_Count()
inline int32_t List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_inline (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SceneOperationProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealitySceneSystem_get_SceneOperationProgress_m905900F563F4809DE6FF7AA6A5ED5DB5BD0A7130_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::RefreshLoadedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker_RefreshLoadedContent_m90D7CEC8ADE1C0B571B22BB4D05AF692C68842E0 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeLoadedActions_m00B43F413B0F91AEFCB495C49653C1DDA6419CDA (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScenesInternalU3Ed__125_MoveNext_mF7C040E0713E930B421F41B7F00461DCB33C53B0 (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScenesInternalU3Ed__125_SetStateMachine_mC96B998DC8A456C783913D211948AAB6EB58FDB3 (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_ActiveLightingScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_ActiveLightingScene_mD8121BEAFC07751C224F8FAC758D4EFD1DE3CDBF_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::GetLightingSceneSettings(System.String,Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo&,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings&,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings&,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystemProfile_GetLightingSceneSettings_m8D92258A9BF3F803DE8F537222D05F6ED71AA6FC (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, String_t* ___lightingSceneName0, SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C * ___lightingScene1, RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B * ___lightingSettings2, RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * ___renderSettings3, RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * ___sunlightSettings4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_ActiveLightingScene(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_ActiveLightingScene_m6C680D8072984AEDF32085CBB9E3D29373EFF42E_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::StartTransition(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings,Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_StartTransition_mF226B047F423046A6A873D5DB68EE2391F21B0D0 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___targetLightingSettings0, RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___targetRenderSettings1, RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___targetSunlightSettings2, int32_t ___transitionType3, float ___transitionDuration4, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_LightingScenes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystemProfile_get_LightingScenes_m4DB634A6825E611FD03DC280896168B9C6D4747B_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLightingSceneU3Ed__121_MoveNext_m43135087D76934D405B9EA80ACAF75A3BBEC3E0A (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLightingSceneU3Ed__121_SetStateMachine_m4D214F5CBD7CE35A808B311032BF5A8D5DCE9318 (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetManagerSceneU3Ed__123_MoveNext_m4DFF0119C63A50A62BB9DBDC07BA03C972664CE8 (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetManagerSceneU3Ed__123_SetStateMachine_m5968600EBBA207E51C546C18DC65AD43400D83B4 (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContent(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadContent_m7A2D6D7306B624B4828A92F20F7B1E86D8B41A2B (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToUnload0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__109_MoveNext_m1BEF6C5F9DE0D6151A1F1E8E62005196AAA2510A (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__109_SetStateMachine_m1DC375DC50D1C74ED65DB0A4C7395AE3012A6AB1 (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__117_MoveNext_m05198CEF905977F3B7A740FFFDA7969F696A0AE8 (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__117_SetStateMachine_mA2512D923B9C97CD7748FA95307C6D45160A7287 (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentByTagU3Ed__113_MoveNext_m2109E0F46D90C590CDFF1E6705C5A73575D8F991 (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentByTagU3Ed__113_SetStateMachine_mA21AAA5FEB4ADCAC0D03605F63AAB6A61910303C (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeWillUnloadActions_mC4D444433E92E10302D7B2415B83892A2052C6FB (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_mE89C114E7045F6574072A53FF4CA219CA742A20D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeUnloadedActions_mB978A03F32BD2DBDE5E4DB4FD511BDA7F4105B65 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesInternalU3Ed__127_MoveNext_m48BCDDF16478D2608506FA45E8483EC2F74FD056 (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesInternalU3Ed__127_SetStateMachine_m20134336A87F77CB62CC3746D10CE3E2B83912E4 (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::CacheSortedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker_CacheSortedContent_mB169B1FF5367385CC8B03DA3E1DD8B0AB1C58297 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile::get_ContentScenes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystemProfile_get_ContentScenes_m5B2F21314D1C35779B833ACA80683E2E955CE42D_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01 (Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD (RuntimeObject* ___source0, Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 *, const RuntimeMethod*))Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_gshared)(___source0, ___keySelector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_gshared)(___source0, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::ApplySettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_ApplySettings_m82CABC8380FC5B08D6B71A1394F4A0C36EB00747 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::Lerp(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  RuntimeLightingSettings_Lerp_mF00C79EFBA21866E10232EDB29F8AA24F5193081 (RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___from0, RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___to1, float ___t2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::Lerp(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  RuntimeRenderSettings_Lerp_mD1ECA3B155E6CE29EF6954CA848579AF21E4EDE6 (RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___from0, RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___to1, float ___t2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::Lerp(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  RuntimeSunlightSettings_Lerp_m33AB3BC7A2B8710E56D7F2B9FD402A79292B72FB (RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___from0, RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___to1, float ___t2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings::Black(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  RuntimeLightingSettings_Black_m8AE470265B854BB65FAB21166BFBE79FC14DF1C4 (RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___source0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings::Black(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  RuntimeRenderSettings_Black_m3518B6CD3DA66ACACC676D1F6BF9DC26FD1DA866 (RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___source0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings::Black(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  RuntimeSunlightSettings_Black_m746313130C737A955B4AE0B0DBDE3B7E88764006 (RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientEquatorColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientEquatorColor_mCC956A35722BFDA1E7D800A0A0243DECF2B0FC81 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientGroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientGroundColor_m9D21B5C414EB7705F291DC0A43DD5AD78FB4E880 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientIntensity_m1E97F76AFF47C18DE4EF7EF08580CA57661B709D (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientLight(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientLight_m0BD3CBB34DDA694D6459FB5A68859A4C070670D2 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientMode(UnityEngine.Rendering.AmbientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientMode_mE14A1AA6475471C282CE090BE7AC86D2AF64F47B (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientSkyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientSkyColor_m197774105B2AFF4A4CEEA8C9CF0F4016F7931B67 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_customReflection(UnityEngine.Cubemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_customReflection_mB1741F9FDF8D9ED94804F86F99EA45C5F5B1BE20 (Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_defaultReflectionMode(UnityEngine.Rendering.DefaultReflectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_defaultReflectionMode_mCAE1783A02343BB9C7D1682B22956D31944D4540 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_defaultReflectionResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_defaultReflectionResolution_m7E846EC66874166071BF3F0B6DB717EF56D001DA (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fog_mD367E22D3EF66CA9FAAD7AF7712E891B2F569275 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogColor_mC46154762710EFAA869A4E972C16D1FE9B0EA01F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogDensity_mC82D5FB8E350FF4A45D41B360FA1FC00384FAA94 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogEndDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogEndDistance_m09D18D44027CBEDD3D0DBF9EC5DC5FA5FE9DFA0B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogMode(UnityEngine.FogMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogMode_m791A6875CFF4A9C3A937CDFCA765AD6D6D00B703 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogStartDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogStartDistance_m75DB7FF50F338FEA287BD5409A8A172EE9A40615 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_reflectionBounces(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_reflectionBounces_m63D9C4477966A067181276430851B498D75A0FB4 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_reflectionIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_reflectionIntensity_mDC27E1257D7A4697150824EC3BE8FD2E0B30D706 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_subtractiveShadowColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_subtractiveShadowColor_mB9251ABE3D854B5F9C718A58E4FBDE0A8E19402C (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::FindOrCreateSunlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_FindOrCreateSunlight_mD030600BEBAB9B9DC5B1C3DA69406B601B76C0F4 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method);
// UnityEngine.Light UnityEngine.RenderSettings::get_sun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D (const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::DisableSunlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_DisableSunlight_mE79611D3D2C9A8A2ADF72BAF6E770166F2802268 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GameObject_AddComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mF9F6CCD702ADA838CB4637910387D3D6C0F93270 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_type_mD68B010AE47ECDDF9C13D9F99F13EB69E9A9F7F4 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_sun(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_sun_m3911EA71EAA0B3B4DCA212C36444527BEF9910BE (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m75C2B3BFC56B2B7F951DF31F352FEF6F9F729247 (U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem__ctor_m21ED99247AF4A12C1EF51155ABF17F2656A0EB07 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___registrar0, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealitySceneSystemProfile profile) : this(profile)
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_0 = ___profile1;
		MixedRealitySceneSystem__ctor_m7F7F3210B7D8E47ED7FBDE1C860373F73B13A2ED(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m287A28559A7697A16A2E02CC53A9B46D079B8438_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::.ctor(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem__ctor_m7F7F3210B7D8E47ED7FBDE1C860373F73B13A2ED (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DD218D0CF38202A9CB4C8EFF024D2B0DC996D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Scene System";
		__this->set_U3CNameU3Ek__BackingField_19(_stringLiteral58DD218D0CF38202A9CB4C8EFF024D2B0DC996D7);
		// public string ActiveLightingScene { get; private set; } = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U3CActiveLightingSceneU3Ek__BackingField_36(L_0);
		// public string SourceName { get; } = "Mixed Reality Scene System";
		__this->set_U3CSourceNameU3Ek__BackingField_39(_stringLiteral58DD218D0CF38202A9CB4C8EFF024D2B0DC996D7);
		// MixedRealitySceneSystemProfile profile) : base(profile)
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_1 = ___profile0;
		BaseCoreSystem__ctor_mC1D39C40A3285FE63A62438923C8168FE25ADC25(__this, L_1, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealitySceneSystemProfile profile => ConfigurationProfile as MixedRealitySceneSystemProfile;
		BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tE5EE73AC6AA29C6B2AC587C906E6F65096C867BD * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5_il2cpp_TypeInfo_var));
	}
}
// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_Name_mA34D32A0188CEA998780D27EA2095CBE4E054E6F (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Scene System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_Name_m7761AEB0B8594A9F014C72CEB582488B41EDF77D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Scene System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillLoadContent_mB75B7D082769532ABE1D3D36E55E7F26D1E8BE7D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillLoadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnWillLoadContentU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillLoadContent(System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillLoadContent_mFBBE4E70DCA60F16DC05544B40F7743896ECBAA9 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillLoadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = ___value0;
		__this->set_U3COnWillLoadContentU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnContentLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentLoaded_mFF319D6F5B46C68E5A9B1F7E0A572E026FAEF022 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentLoaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnContentLoadedU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnContentLoaded(System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnContentLoaded_m608E497D476D10D29F5D59E32EA617D6B0768269 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentLoaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = ___value0;
		__this->set_U3COnContentLoadedU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillUnloadContent_m1B7E0981AB07E900A755DAE362BE6924061BD05E (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillUnloadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnWillUnloadContentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillUnloadContent(System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillUnloadContent_m145B50FA5843D445C4A126869DCCB3A50BFB337F (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillUnloadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = ___value0;
		__this->set_U3COnWillUnloadContentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnContentUnloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentUnloaded_mBDC3B6242A2CFF1D3C05696EF7095D30E2FE5FC0 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentUnloaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnContentUnloadedU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnContentUnloaded(System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnContentUnloaded_m24EFB329585DF82AE81FC3C4CD88FE40BA8033BE (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentUnloaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = ___value0;
		__this->set_U3COnContentUnloadedU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadLighting_m2F92B704FB3607602A7C8DCCC0A40FD60429D3C0 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillLoadLightingU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillLoadLighting(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillLoadLighting_mC51B4106193F5AE5D4EB175AC049B0DFC37916A3 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnWillLoadLightingU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnLightingLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingLoaded_mB29843423B6E59EE8F62AE10566E71CE770CB3E0 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnLightingLoadedU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnLightingLoaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnLightingLoaded_mCF1AEB9B55175A4017E4C1F72C16A4E3C2A53110 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnLightingLoadedU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadLighting_m53A24A50EE707CF0AE68F62DC67A570F7EA98AA5 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillUnloadLightingU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillUnloadLighting(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillUnloadLighting_m94744F4023B49B6BC0B0C9093219E34A1BD2518C (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnWillUnloadLightingU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnLightingUnloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingUnloaded_mBC40F24371836298D839044E53D2542100688DB6 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnLightingUnloadedU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnLightingUnloaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnLightingUnloaded_m2D11231580297F715099194FD6430F513FE9173F (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnLightingUnloadedU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillLoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadScene_mF79FD1114F82B22A71839ED62C827747C46DC832 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillLoadSceneU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillLoadScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillLoadScene_mFDD5439C8BA09AAEC43381A6048AA21D189B797F (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnWillLoadSceneU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnSceneLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneLoaded_m10FE20603C360C002F73AFDB3BC886BAC131AFA6 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnSceneLoadedU3Ek__BackingField_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnSceneLoaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnSceneLoaded_m66747C048FE6F5D1FE90CE065A4C591F09777D80 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnSceneLoadedU3Ek__BackingField_29(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnWillUnloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadScene_mBE2BA9F0CD738E20389754BB365B85E1675C61D7 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillUnloadSceneU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnWillUnloadScene(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnWillUnloadScene_mBC3E7A71C2272E4DAAF1850C33DFC31DEF6CFB8B (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnWillUnloadSceneU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_OnSceneUnloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneUnloaded_m169C081514B84600E187CEC39B2B51519C59E80B (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnSceneUnloadedU3Ek__BackingField_31();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_OnSceneUnloaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_OnSceneUnloaded_mCA9CA3C869F91A0021F4AC14534B68F2B2E9E1A4 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___value0;
		__this->set_U3COnSceneUnloadedU3Ek__BackingField_31(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SceneOperationInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_SceneOperationInProgress_mE51A59A4149D9F05D48814C2A8224D1CB58BCD8A (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool SceneOperationInProgress { get; private set; } = false;
		bool L_0 = __this->get_U3CSceneOperationInProgressU3Ek__BackingField_32();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_SceneOperationInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationInProgress_m3FAEB23418819548EAD82D05CB2B8FF2425CAF95 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SceneOperationInProgress { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSceneOperationInProgressU3Ek__BackingField_32(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SceneOperationProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealitySceneSystem_get_SceneOperationProgress_m905900F563F4809DE6FF7AA6A5ED5DB5BD0A7130 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public float SceneOperationProgress { get; private set; } = 0;
		float L_0 = __this->get_U3CSceneOperationProgressU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_SceneOperationProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationProgress_mEB1B6F831A704913D294C705993FE41B8EE374AF (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SceneOperationProgress { get; private set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CSceneOperationProgressU3Ek__BackingField_33(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_LightingOperationInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_LightingOperationInProgress_m8EB05861947F8C1D0DC3778048DAF26A2B7E2124 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool LightingOperationInProgress { get; private set; } = false;
		bool L_0 = __this->get_U3CLightingOperationInProgressU3Ek__BackingField_34();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_LightingOperationInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationInProgress_mAA1F1AEAD40470657659EE993D7BF0EDB264E780 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LightingOperationInProgress { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CLightingOperationInProgressU3Ek__BackingField_34(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_LightingOperationProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealitySceneSystem_get_LightingOperationProgress_mF0D3C85C5BA579AC1A98D26EB18BF844A055A519 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public float LightingOperationProgress { get; private set; } = 0;
		float L_0 = __this->get_U3CLightingOperationProgressU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_LightingOperationProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationProgress_m7F5C675B4623852B82B1ABF9ADB9A534E4F6D72B (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float LightingOperationProgress { get; private set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CLightingOperationProgressU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_ActiveLightingScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_ActiveLightingScene_mD8121BEAFC07751C224F8FAC758D4EFD1DE3CDBF (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public string ActiveLightingScene { get; private set; } = string.Empty;
		String_t* L_0 = __this->get_U3CActiveLightingSceneU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_ActiveLightingScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_ActiveLightingScene_m6C680D8072984AEDF32085CBB9E3D29373EFF42E (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ActiveLightingScene { get; private set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->set_U3CActiveLightingSceneU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_WaitingToProceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_WaitingToProceed_m333970BB7972E40CAB23E40A196D1C866A1A576D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool WaitingToProceed { get; private set; } = false;
		bool L_0 = __this->get_U3CWaitingToProceedU3Ek__BackingField_37();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::set_WaitingToProceed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_WaitingToProceed_m47F8E7D16AF0247C3EF6339E430F8BC734E2135D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool WaitingToProceed { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CWaitingToProceedU3Ek__BackingField_37(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_PrevContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_PrevContentExists_m6A605928F34E5D009D79D859AE065F9960414E86 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool PrevContentExists => contentTracker.PrevContentExists;
		SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_0 = __this->get_contentTracker_17();
		NullCheck(L_0);
		bool L_1;
		L_1 = SceneContentTracker_get_PrevContentExists_mCECB8F20A8642233A42CAE228F53AE47FB84C87E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_NextContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_NextContentExists_m88D71D156110C73FC1BC2952BC6949CD4C768990 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool NextContentExists => contentTracker.NextContentExists;
		SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_0 = __this->get_contentTracker_17();
		NullCheck(L_0);
		bool L_1;
		L_1 = SceneContentTracker_get_NextContentExists_mD261B61D5993D1702A8D392CC8FD010B62C0A94A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_ContentSceneNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* MixedRealitySceneSystem_get_ContentSceneNames_m72BDED2147E275DA75D74CB08E3878B2579C94C5 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public string[] ContentSceneNames => contentTracker.ContentSceneNames;
		SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_0 = __this->get_contentTracker_17();
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = SceneContentTracker_get_ContentSceneNames_mE1A78B5E9FDC19CE25DD11BEEA7D6BBA597747DD_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySceneSystem_get_SourceId_m882FE1D5B4F5903DBD7324CD99A40951E3B4F63D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_38();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_SourceName_m8BEFA2CFA1D42185D07AF74D25CE8CCD5A62980C (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Scene System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_Initialize_m394203D96D056321707319008CC858C38571AE23 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// contentTracker = new SceneContentTracker(profile);
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_0;
		L_0 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
		SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_1 = (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 *)il2cpp_codegen_object_new(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		SceneContentTracker__ctor_mBBFBC12E22F32121D3F0B5A1EC8FC08C857B3775(L_1, L_0, /*hidden argument*/NULL);
		__this->set_contentTracker_17(L_1);
		// lightingExecutor = new SceneLightingExecutor();
		SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * L_2 = (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 *)il2cpp_codegen_object_new(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		SceneLightingExecutor__ctor_m76F68BE611BC2B1BE86A1D54EF042BCD1AC32A03(L_2, /*hidden argument*/NULL);
		__this->set_lightingExecutor_18(L_2);
		// if (!Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// if (profile.UseManagerScene)
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_4;
		L_4 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = MixedRealitySceneSystemProfile_get_UseManagerScene_m074C9A2570F76C59B7130F20246541DF500F64ED(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// SetManagerScene(profile.ManagerScene.Name);
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_6;
		L_6 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_7;
		L_7 = MixedRealitySceneSystemProfile_get_ManagerScene_mB8DE3C97E86592DAFB89ADA36FC2331413189036_inline(L_6, /*hidden argument*/NULL);
		String_t* L_8 = L_7.get_Name_1();
		MixedRealitySceneSystem_SetManagerScene_mEDABA62BB621AAFC379E287A801471D6641DADB9(__this, L_8, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// if (profile.UseLightingScene)
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_9;
		L_9 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = MixedRealitySceneSystemProfile_get_UseLightingScene_mA18D01C101072D509F1766F2AAEB45943FAF6438(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// SetLightingScene(profile.DefaultLightingScene.Name, LightingSceneTransitionType.None);
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_11;
		L_11 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_12;
		L_12 = MixedRealitySceneSystemProfile_get_DefaultLightingScene_mE3CFF0CDB47D9312CE6734D70BF5209496F32A2C(L_11, /*hidden argument*/NULL);
		String_t* L_13 = L_12.get_Name_1();
		MixedRealitySceneSystem_SetLightingScene_m6B5157783F543D1EA1534C0F6C35A31A136A54B8(__this, L_13, 0, (1.0f), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_Enable_mF8FCEC841068D43B34B5D31D7D8C1072F59B34CF (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_Disable_mECCCCD0C8543FAD04107C71ECFA6739B97D07739 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_Destroy_m1256B583D335CAD2EBC7C4326D25FF559E17AC36 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_Update_m9FAE7F156E714787E5FA41CC48B0153D32A2E60C (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
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
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_40();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (profile.UseLightingScene)
			MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_2;
			L_2 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(__this, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_3;
			L_3 = MixedRealitySceneSystemProfile_get_UseLightingScene_mA18D01C101072D509F1766F2AAEB45943FAF6438(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001b:
		{
			// lightingExecutor.UpdateTransition(Time.unscaledDeltaTime);
			SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * L_4 = __this->get_lightingExecutor_18();
			float L_5;
			L_5 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
			NullCheck(L_4);
			SceneLightingExecutor_UpdateTransition_m5230B9A47BB19465AF133B249B23157B8F07F98A(L_4, L_5, /*hidden argument*/NULL);
		}

IL_002b:
		{
			// }
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContent(System.Boolean,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadNextContent_m412AE368B8E995297FF5FB2CC73C5D6BFBDB58C6 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___wrap0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		bool L_0 = ___wrap0;
		(&V_0)->set_wrap_3(L_0);
		int32_t L_1 = ___mode1;
		(&V_0)->set_mode_4(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m9E4617B4F17579D0C50DEC25D5FCDFF28DA1C671_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContent(System.Boolean,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadPrevContent_m71B24CFE61DC2B6DF452311333A3B41AB80A526D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___wrap0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		bool L_0 = ___wrap0;
		(&V_0)->set_wrap_3(L_0);
		int32_t L_1 = ___mode1;
		(&V_0)->set_mode_4(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_m5363E4281F947C6BDD542D79A5CFD0772B2836DC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContent(System.String,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadContent_mB247CD0E93BA2F1D96FF31A6EF37FB6D87592560 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneToLoad0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___sceneToLoad0;
		(&V_0)->set_sceneToLoad_3(L_0);
		int32_t L_1 = ___mode1;
		(&V_0)->set_mode_4(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_m4AC9ED810D2AAB56935260E2A4B42EDFCBC335EA_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadContent_m4A413BDA6F010C0E2F2DAA730B93C1C2821679C1 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneToUnload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___sceneToUnload0;
		(&V_0)->set_sceneToUnload_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m1E5EE2FFA8817D6865D2CC569DCE2FC881D8B5C2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTag(System.String,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadContentByTag_m842376E24639D9E036DF82E221CD8757F28D7D97 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___tag0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___tag0;
		(&V_0)->set_tag_3(L_0);
		int32_t L_1 = ___mode1;
		(&V_0)->set_mode_4(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mB16A0FFEEEC3B2544046EFDB802F1FFD745E1379_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadContentByTag_m28A258FCA2C5970A739F626E92BBFD78695ED052 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___tag0;
		(&V_0)->set_tag_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_m1C231EB3794092A1D48DAE01632792DF7157FBFC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContent(System.Collections.Generic.IEnumerable`1<System.String>,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToLoad0, int32_t ___mode1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject* L_0 = ___scenesToLoad0;
		(&V_0)->set_scenesToLoad_4(L_0);
		int32_t L_1 = ___mode1;
		(&V_0)->set_mode_3(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_mF258E7F601A6D1AD03591A101FD35C04C8CCFE3B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContent(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadContent_m7A2D6D7306B624B4828A92F20F7B1E86D8B41A2B (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToUnload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject* L_0 = ___scenesToUnload0;
		(&V_0)->set_scenesToUnload_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m879734283292462F50149C3412109F3C6562C06C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_IsContentLoaded_mC24E656B0B14ABEAFBD4DAD9BE0921ED1578AF11 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		// using (IsContentLoadedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_IsContentLoadedPerfMarker_47();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// Scene scene = SceneManager.GetSceneByName(sceneName);
			String_t* L_2 = ___sceneName0;
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
			L_3 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			// return scene.IsValid() && scene.isLoaded;
			bool L_4;
			L_4 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0027;
			}
		}

IL_001e:
		{
			bool L_5;
			L_5 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
			G_B4_0 = ((int32_t)(L_5));
			goto IL_0028;
		}

IL_0027:
		{
			G_B4_0 = 0;
		}

IL_0028:
		{
			V_3 = (bool)G_B4_0;
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScene(System.String,Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetLightingScene_m6B5157783F543D1EA1534C0F6C35A31A136A54B8 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___newLightingSceneName0, int32_t ___transitionType1, float ___transitionDuration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___newLightingSceneName0;
		(&V_0)->set_newLightingSceneName_3(L_0);
		int32_t L_1 = ___transitionType1;
		(&V_0)->set_transitionType_4(L_1);
		float L_2 = ___transitionDuration2;
		(&V_0)->set_transitionDuration_5(L_2);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3;
		L_3 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1  L_4 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_m3762CC5E000DAABBFC73D8280168F2FABB985F06_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetManagerScene_mEDABA62BB621AAFC379E287A801471D6641DADB9 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___managerSceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___managerSceneName0;
		(&V_0)->set_managerSceneName_2(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m523A6BADAD8FBAD062207741BEA4D83C747E8EBD_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternal(System.Collections.Generic.IEnumerable`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToLoad0, int32_t ___sceneType1, SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * ___activationToken2, float ___progressOffset3, float ___progressTarget4, bool ___sceneOpInProgressWhenFinished5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		RuntimeObject* L_0 = ___scenesToLoad0;
		(&V_0)->set_scenesToLoad_6(L_0);
		int32_t L_1 = ___sceneType1;
		(&V_0)->set_sceneType_5(L_1);
		SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_2 = ___activationToken2;
		(&V_0)->set_activationToken_2(L_2);
		float L_3 = ___progressOffset3;
		(&V_0)->set_progressOffset_4(L_3);
		float L_4 = ___progressTarget4;
		(&V_0)->set_progressTarget_8(L_4);
		bool L_5 = ___sceneOpInProgressWhenFinished5;
		(&V_0)->set_sceneOpInProgressWhenFinished_7(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6;
		L_6 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_6);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5  L_7 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_8 = L_7.get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mB382B9C7F308E9E0DD002C7D68AF02A240B3E5BB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
		L_10 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternal(System.Collections.Generic.IEnumerable`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___scenesToUnload0, int32_t ___sceneType1, float ___progressOffset2, float ___progressTarget3, bool ___sceneOpInProgressWhenFinished4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject* L_0 = ___scenesToUnload0;
		(&V_0)->set_scenesToUnload_5(L_0);
		int32_t L_1 = ___sceneType1;
		(&V_0)->set_sceneType_4(L_1);
		float L_2 = ___progressOffset2;
		(&V_0)->set_progressOffset_3(L_2);
		float L_3 = ___progressTarget3;
		(&V_0)->set_progressTarget_7(L_3);
		bool L_4 = ___sceneOpInProgressWhenFinished4;
		(&V_0)->set_sceneOpInProgressWhenFinished_6(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA  L_6 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mD72C36B4513FE4DD900AE0DA0C89CF8EAB37612D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetSceneOpProgress(System.Boolean,System.Single,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___inProgress0, float ___progress1, int32_t ___sceneType2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sceneType2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_0014:
	{
		// managerSceneOpInProgress = inProgress;
		bool L_1 = ___inProgress0;
		__this->set_managerSceneOpInProgress_15(L_1);
		// managerSceneOpProgress = progress;
		float L_2 = ___progress1;
		__this->set_managerSceneOpProgress_16(L_2);
		// break;
		return;
	}

IL_0023:
	{
		// SceneOperationInProgress = inProgress;
		bool L_3 = ___inProgress0;
		MixedRealitySceneSystem_set_SceneOperationInProgress_m3FAEB23418819548EAD82D05CB2B8FF2425CAF95_inline(__this, L_3, /*hidden argument*/NULL);
		// SceneOperationProgress = progress;
		float L_4 = ___progress1;
		MixedRealitySceneSystem_set_SceneOperationProgress_mEB1B6F831A704913D294C705993FE41B8EE374AF_inline(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0032:
	{
		// LightingOperationInProgress = inProgress;
		bool L_5 = ___inProgress0;
		MixedRealitySceneSystem_set_LightingOperationInProgress_mAA1F1AEAD40470657659EE993D7BF0EDB264E780_inline(__this, L_5, /*hidden argument*/NULL);
		// LightingOperationProgress = progress;
		float L_6 = ___progress1;
		MixedRealitySceneSystem_set_LightingOperationProgress_m7F5C675B4623852B82B1ABF9ADB9A534E4F6D72B_inline(__this, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0041:
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_7 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926_RuntimeMethod_var)));
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::CanSceneOpProceed(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, int32_t ___sceneType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sceneType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_0014:
	{
		// return !managerSceneOpInProgress;
		bool L_1 = __this->get_managerSceneOpInProgress_15();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_001e:
	{
		// return !SceneOperationInProgress;
		bool L_2;
		L_2 = MixedRealitySceneSystem_get_SceneOperationInProgress_mE51A59A4149D9F05D48814C2A8224D1CB58BCD8A_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		// return !LightingOperationInProgress;
		bool L_3;
		L_3 = MixedRealitySceneSystem_get_LightingOperationInProgress_m8EB05861947F8C1D0DC3778048DAF26A2B7E2124_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_4 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeLoadedActions_m00B43F413B0F91AEFCB495C49653C1DDA6419CDA (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B14_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B13_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B17_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B16_0 = NULL;
	{
		// using (InvokeLoadedActionsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_InvokeLoadedActionsPerfMarker_52();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// foreach (string sceneName in sceneNames)
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = ___sceneNames0;
				NullCheck(L_2);
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
				L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
				V_2 = L_3;
			}

IL_0015:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0031;
				}

IL_0017:
				{
					// foreach (string sceneName in sceneNames)
					String_t* L_4;
					L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
					V_3 = L_4;
					// OnSceneLoaded?.Invoke(sceneName);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5;
					L_5 = MixedRealitySceneSystem_get_OnSceneLoaded_m10FE20603C360C002F73AFDB3BC886BAC131AFA6_inline(__this, /*hidden argument*/NULL);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = L_5;
					G_B4_0 = L_6;
					if (L_6)
					{
						G_B5_0 = L_6;
						goto IL_002b;
					}
				}

IL_0028:
				{
					goto IL_0031;
				}

IL_002b:
				{
					String_t* L_7 = V_3;
					NullCheck(G_B5_0);
					Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
				}

IL_0031:
				{
					// foreach (string sceneName in sceneNames)
					bool L_8;
					L_8 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
					if (L_8)
					{
						goto IL_0017;
					}
				}

IL_003a:
				{
					IL2CPP_LEAVE(0x4A, FINALLY_003c);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_003c;
			}

FINALLY_003c:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
				IL2CPP_END_FINALLY(60)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(60)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x4A, IL_004a)
			}

IL_004a:
			{
				int32_t L_9 = ___sceneType1;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				int32_t L_10 = ___sceneType1;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_0068;
				}
			}

IL_0052:
			{
				goto IL_0080;
			}

IL_0054:
			{
				// OnContentLoaded?.Invoke(sceneNames);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_11;
				L_11 = MixedRealitySceneSystem_get_OnContentLoaded_mFF319D6F5B46C68E5A9B1F7E0A572E026FAEF022_inline(__this, /*hidden argument*/NULL);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_12 = L_11;
				G_B13_0 = L_12;
				if (L_12)
				{
					G_B14_0 = L_12;
					goto IL_0060;
				}
			}

IL_005d:
			{
				goto IL_0080;
			}

IL_0060:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = ___sceneNames0;
				NullCheck(G_B14_0);
				Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85(G_B14_0, L_13, /*hidden argument*/Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
				// break;
				goto IL_0080;
			}

IL_0068:
			{
				// OnLightingLoaded?.Invoke(sceneNames[0]);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14;
				L_14 = MixedRealitySceneSystem_get_OnLightingLoaded_mB29843423B6E59EE8F62AE10566E71CE770CB3E0_inline(__this, /*hidden argument*/NULL);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = L_14;
				G_B16_0 = L_15;
				if (L_15)
				{
					G_B17_0 = L_15;
					goto IL_0074;
				}
			}

IL_0071:
			{
				goto IL_0080;
			}

IL_0074:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = ___sceneNames0;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
				NullCheck(G_B17_0);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B17_0, L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			}

IL_0080:
			{
				// }
				IL2CPP_LEAVE(0xB1, FINALLY_00a3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0082;
			throw e;
		}

CATCH_0082:
		{ // begin catch(System.Exception)
			// Debug.LogError("Error when attempting to invoke loaded actions for " + string.Join(", ", sceneNames));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = ___sceneNames0;
			String_t* L_19;
			L_19 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_18, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral432B5A2A299CD526FE39636A6BD78836CF37A173)), L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_20, /*hidden argument*/NULL);
			// Debug.LogException(e);
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB1, FINALLY_00a3);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeWillLoadActions_m6000EBCDADBB5F540BE559A1EF940FA8D431DDDC (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B14_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B13_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B17_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B16_0 = NULL;
	{
		// using (InvokeWillLoadActionsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_InvokeWillLoadActionsPerfMarker_53();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// foreach (string sceneName in sceneNames)
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = ___sceneNames0;
				NullCheck(L_2);
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
				L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
				V_2 = L_3;
			}

IL_0015:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0031;
				}

IL_0017:
				{
					// foreach (string sceneName in sceneNames)
					String_t* L_4;
					L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
					V_3 = L_4;
					// OnWillLoadScene?.Invoke(sceneName);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5;
					L_5 = MixedRealitySceneSystem_get_OnWillLoadScene_mF79FD1114F82B22A71839ED62C827747C46DC832_inline(__this, /*hidden argument*/NULL);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = L_5;
					G_B4_0 = L_6;
					if (L_6)
					{
						G_B5_0 = L_6;
						goto IL_002b;
					}
				}

IL_0028:
				{
					goto IL_0031;
				}

IL_002b:
				{
					String_t* L_7 = V_3;
					NullCheck(G_B5_0);
					Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
				}

IL_0031:
				{
					// foreach (string sceneName in sceneNames)
					bool L_8;
					L_8 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
					if (L_8)
					{
						goto IL_0017;
					}
				}

IL_003a:
				{
					IL2CPP_LEAVE(0x4A, FINALLY_003c);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_003c;
			}

FINALLY_003c:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
				IL2CPP_END_FINALLY(60)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(60)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x4A, IL_004a)
			}

IL_004a:
			{
				int32_t L_9 = ___sceneType1;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				int32_t L_10 = ___sceneType1;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_0068;
				}
			}

IL_0052:
			{
				goto IL_0080;
			}

IL_0054:
			{
				// OnWillLoadContent?.Invoke(sceneNames);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_11;
				L_11 = MixedRealitySceneSystem_get_OnWillLoadContent_mB75B7D082769532ABE1D3D36E55E7F26D1E8BE7D_inline(__this, /*hidden argument*/NULL);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_12 = L_11;
				G_B13_0 = L_12;
				if (L_12)
				{
					G_B14_0 = L_12;
					goto IL_0060;
				}
			}

IL_005d:
			{
				goto IL_0080;
			}

IL_0060:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = ___sceneNames0;
				NullCheck(G_B14_0);
				Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85(G_B14_0, L_13, /*hidden argument*/Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
				// break;
				goto IL_0080;
			}

IL_0068:
			{
				// OnWillLoadLighting?.Invoke(sceneNames[0]);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14;
				L_14 = MixedRealitySceneSystem_get_OnWillLoadLighting_m2F92B704FB3607602A7C8DCCC0A40FD60429D3C0_inline(__this, /*hidden argument*/NULL);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = L_14;
				G_B16_0 = L_15;
				if (L_15)
				{
					G_B17_0 = L_15;
					goto IL_0074;
				}
			}

IL_0071:
			{
				goto IL_0080;
			}

IL_0074:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = ___sceneNames0;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
				NullCheck(G_B17_0);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B17_0, L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			}

IL_0080:
			{
				// }
				IL2CPP_LEAVE(0xB1, FINALLY_00a3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0082;
			throw e;
		}

CATCH_0082:
		{ // begin catch(System.Exception)
			// Debug.LogError("Error when attempting to invoke will load actions for " + string.Join(", ", sceneNames));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = ___sceneNames0;
			String_t* L_19;
			L_19 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_18, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E1FB7F3F0DC27E83C7AF56826D19EBFD6AAD08C)), L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_20, /*hidden argument*/NULL);
			// Debug.LogException(e);
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB1, FINALLY_00a3);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeWillUnloadActions_mC4D444433E92E10302D7B2415B83892A2052C6FB (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B14_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B13_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B17_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B16_0 = NULL;
	{
		// using (InvokeWillUnloadActionsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_InvokeWillUnloadActionsPerfMarker_54();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// foreach (string sceneName in sceneNames)
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = ___sceneNames0;
				NullCheck(L_2);
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
				L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
				V_2 = L_3;
			}

IL_0015:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0031;
				}

IL_0017:
				{
					// foreach (string sceneName in sceneNames)
					String_t* L_4;
					L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
					V_3 = L_4;
					// OnWillUnloadScene?.Invoke(sceneName);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5;
					L_5 = MixedRealitySceneSystem_get_OnWillUnloadScene_mBE2BA9F0CD738E20389754BB365B85E1675C61D7_inline(__this, /*hidden argument*/NULL);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = L_5;
					G_B4_0 = L_6;
					if (L_6)
					{
						G_B5_0 = L_6;
						goto IL_002b;
					}
				}

IL_0028:
				{
					goto IL_0031;
				}

IL_002b:
				{
					String_t* L_7 = V_3;
					NullCheck(G_B5_0);
					Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
				}

IL_0031:
				{
					// foreach (string sceneName in sceneNames)
					bool L_8;
					L_8 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
					if (L_8)
					{
						goto IL_0017;
					}
				}

IL_003a:
				{
					IL2CPP_LEAVE(0x4A, FINALLY_003c);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_003c;
			}

FINALLY_003c:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
				IL2CPP_END_FINALLY(60)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(60)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x4A, IL_004a)
			}

IL_004a:
			{
				int32_t L_9 = ___sceneType1;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				int32_t L_10 = ___sceneType1;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_0068;
				}
			}

IL_0052:
			{
				goto IL_0080;
			}

IL_0054:
			{
				// OnWillUnloadContent?.Invoke(sceneNames);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_11;
				L_11 = MixedRealitySceneSystem_get_OnWillUnloadContent_m1B7E0981AB07E900A755DAE362BE6924061BD05E_inline(__this, /*hidden argument*/NULL);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_12 = L_11;
				G_B13_0 = L_12;
				if (L_12)
				{
					G_B14_0 = L_12;
					goto IL_0060;
				}
			}

IL_005d:
			{
				goto IL_0080;
			}

IL_0060:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = ___sceneNames0;
				NullCheck(G_B14_0);
				Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85(G_B14_0, L_13, /*hidden argument*/Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
				// break;
				goto IL_0080;
			}

IL_0068:
			{
				// OnWillUnloadLighting?.Invoke(sceneNames[0]);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14;
				L_14 = MixedRealitySceneSystem_get_OnWillUnloadLighting_m53A24A50EE707CF0AE68F62DC67A570F7EA98AA5_inline(__this, /*hidden argument*/NULL);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = L_14;
				G_B16_0 = L_15;
				if (L_15)
				{
					G_B17_0 = L_15;
					goto IL_0074;
				}
			}

IL_0071:
			{
				goto IL_0080;
			}

IL_0074:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = ___sceneNames0;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
				NullCheck(G_B17_0);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B17_0, L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			}

IL_0080:
			{
				// }
				IL2CPP_LEAVE(0xB1, FINALLY_00a3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0082;
			throw e;
		}

CATCH_0082:
		{ // begin catch(System.Exception)
			// Debug.LogError("Error when attempting to invoke will unload actions for " + string.Join(", ", sceneNames));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = ___sceneNames0;
			String_t* L_19;
			L_19 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_18, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD63963D3C52B82EAA58D69A2B640FFB152894DAC)), L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_20, /*hidden argument*/NULL);
			// Debug.LogException(e);
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB1, FINALLY_00a3);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActions(System.Collections.Generic.List`1<System.String>,Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_InvokeUnloadedActions_mB978A03F32BD2DBDE5E4DB4FD511BDA7F4105B65 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___sceneNames0, int32_t ___sceneType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B14_0 = NULL;
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * G_B13_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B17_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B16_0 = NULL;
	{
		// using (InvokeUnloadedActionsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_InvokeUnloadedActionsPerfMarker_55();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// foreach (string sceneName in sceneNames)
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = ___sceneNames0;
				NullCheck(L_2);
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
				L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
				V_2 = L_3;
			}

IL_0015:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0031;
				}

IL_0017:
				{
					// foreach (string sceneName in sceneNames)
					String_t* L_4;
					L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
					V_3 = L_4;
					// OnSceneUnloaded?.Invoke(sceneName);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5;
					L_5 = MixedRealitySceneSystem_get_OnSceneUnloaded_m169C081514B84600E187CEC39B2B51519C59E80B_inline(__this, /*hidden argument*/NULL);
					Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = L_5;
					G_B4_0 = L_6;
					if (L_6)
					{
						G_B5_0 = L_6;
						goto IL_002b;
					}
				}

IL_0028:
				{
					goto IL_0031;
				}

IL_002b:
				{
					String_t* L_7 = V_3;
					NullCheck(G_B5_0);
					Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
				}

IL_0031:
				{
					// foreach (string sceneName in sceneNames)
					bool L_8;
					L_8 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
					if (L_8)
					{
						goto IL_0017;
					}
				}

IL_003a:
				{
					IL2CPP_LEAVE(0x4A, FINALLY_003c);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_003c;
			}

FINALLY_003c:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
				IL2CPP_END_FINALLY(60)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(60)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x4A, IL_004a)
			}

IL_004a:
			{
				int32_t L_9 = ___sceneType1;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				int32_t L_10 = ___sceneType1;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_0068;
				}
			}

IL_0052:
			{
				goto IL_0080;
			}

IL_0054:
			{
				// OnContentUnloaded?.Invoke(sceneNames);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_11;
				L_11 = MixedRealitySceneSystem_get_OnContentUnloaded_mBDC3B6242A2CFF1D3C05696EF7095D30E2FE5FC0_inline(__this, /*hidden argument*/NULL);
				Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_12 = L_11;
				G_B13_0 = L_12;
				if (L_12)
				{
					G_B14_0 = L_12;
					goto IL_0060;
				}
			}

IL_005d:
			{
				goto IL_0080;
			}

IL_0060:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = ___sceneNames0;
				NullCheck(G_B14_0);
				Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85(G_B14_0, L_13, /*hidden argument*/Action_1_Invoke_m55B1C5D861F7F221FEBE8D5A682CBBA0ACD69F85_RuntimeMethod_var);
				// break;
				goto IL_0080;
			}

IL_0068:
			{
				// OnLightingUnloaded?.Invoke(sceneNames[0]);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14;
				L_14 = MixedRealitySceneSystem_get_OnLightingUnloaded_mBC40F24371836298D839044E53D2542100688DB6_inline(__this, /*hidden argument*/NULL);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = L_14;
				G_B16_0 = L_15;
				if (L_15)
				{
					G_B17_0 = L_15;
					goto IL_0074;
				}
			}

IL_0071:
			{
				goto IL_0080;
			}

IL_0074:
			{
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = ___sceneNames0;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
				NullCheck(G_B17_0);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B17_0, L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			}

IL_0080:
			{
				// }
				IL2CPP_LEAVE(0xB1, FINALLY_00a3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0082;
			throw e;
		}

CATCH_0082:
		{ // begin catch(System.Exception)
			// Debug.LogError("Error when attempting to invoke unloaded actions for " + string.Join(", ", sceneNames));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = ___sceneNames0;
			String_t* L_19;
			L_19 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_18, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC34C3A167E54774249C25AC16C66CA6DC2A8D8D2)), L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_20, /*hidden argument*/NULL);
			// Debug.LogException(e);
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB1, FINALLY_00a3);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenes(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystem_GetScenes_mE19B32D01E11BF71B514962EE0B69A4CD2C9D228 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject* ___sceneNames0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_0 = (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 *)il2cpp_codegen_object_new(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464_il2cpp_TypeInfo_var);
		U3CGetScenesU3Ed__138__ctor_m57C252D1A4A3D4CDDF47AC25D4F213A89C97A475(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_2 = L_1;
		RuntimeObject* L_3 = ___sceneNames0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__sceneNames_4(L_3);
		return L_2;
	}
}
// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  MixedRealitySceneSystem_GetScene_m7198DBCD227A7CF143FFD5B2FA25711EEB9E339C (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetScenePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_GetScenePerfMarker_56();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// Scene scene = default(Scene);
		il2cpp_codegen_initobj((&V_2), sizeof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE ));
		// RuntimeSceneUtils.FindScene(sceneName, out scene, out sceneIndex);
		String_t* L_2 = ___sceneName0;
		bool L_3;
		L_3 = RuntimeSceneUtils_FindScene_m6B43F506C9BE6DA04D17C7971673F1A42C776FFB(L_2, (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// return scene;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4 = V_2;
		V_4 = L_4;
		IL2CPP_LEAVE(0x34, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5 = V_4;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenes(System.Collections.Generic.IEnumerable`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_GetLoadedContentScenes_m7799014FCDE2F04C9FC46C9641161242F6BDB3CA (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject** ___loadedContentScenes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetLoadedContentScenesPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_GetLoadedContentScenesPerfMarker_57();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// List<string> loadedContentScenesList = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_2 = L_2;
			// foreach (string sceneName in ContentSceneNames)
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
			L_3 = MixedRealitySceneSystem_get_ContentSceneNames_m72BDED2147E275DA75D74CB08E3878B2579C94C5(__this, /*hidden argument*/NULL);
			V_3 = L_3;
			V_4 = 0;
			goto IL_003e;
		}

IL_0020:
		{
			// foreach (string sceneName in ContentSceneNames)
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_3;
			int32_t L_5 = V_4;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_5 = L_7;
			// if (IsContentLoaded(sceneName))
			String_t* L_8 = V_5;
			bool L_9;
			L_9 = MixedRealitySceneSystem_IsContentLoaded_mC24E656B0B14ABEAFBD4DAD9BE0921ED1578AF11(__this, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0038;
			}
		}

IL_0030:
		{
			// loadedContentScenesList.Add(sceneName);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_2;
			String_t* L_11 = V_5;
			NullCheck(L_10);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, L_11, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0038:
		{
			int32_t L_12 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		}

IL_003e:
		{
			// foreach (string sceneName in ContentSceneNames)
			int32_t L_13 = V_4;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_3;
			NullCheck(L_14);
			if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
			{
				goto IL_0020;
			}
		}

IL_0045:
		{
			// loadedContentScenes = loadedContentScenesList;
			RuntimeObject** L_15 = ___loadedContentScenes0;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_2;
			*((RuntimeObject **)L_15) = (RuntimeObject *)L_16;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_16);
			// return loadedContentScenesList.Count > 0;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = V_2;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_17, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
			V_6 = (bool)((((int32_t)L_18) > ((int32_t)0))? 1 : 0);
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// }
		bool L_19 = V_6;
		return L_19;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_System_Collections_IEqualityComparer_Equals_mC9E6BDF06F832EECA9015BFB50A17B0FFBFCCC8F (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealitySceneSystem_System_Collections_IEqualityComparer_GetHashCode_mD3893CF58262318BBBB2A6F8F3FA91358563B104 (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0;
		L_0 = MixedRealitySceneSystem_get_SourceName_m8BEFA2CFA1D42185D07AF74D25CE8CCD5A62980C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2;
		L_2 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySceneSystem__cctor_m5C98A46006AA6B9842BA0E6DFEEF93A471E596CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral165DFCC85DF53AA32CD45BB261E1060EDBF92F0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral249AABBF38B3F47C5F4EF654D1DB72B6B94755CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2941F5A3D240146BAD2F15CAB373A2E72D506778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C7B1236C7563D00C1D47D4EA08C98B5B6450DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42CF1044BF34E24B7A8043ACCFE074851EBC0ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BDBC647165CB0AFFC0AC59CEF3DF409B96EDE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51ED4D583249DF91F3B37899DD41A7FDDBC7F795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral707FB91DC74E929D4F3196E7809FB6D5CCDB7EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F6AB4F6C244619A6771952208541FA3852C4F47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01B6B1CBDE7350C9EF247F228B355475C12F74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACB7C7A8A32293DFA2A84A5B359F6DD4AE3379A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD0542E8360BD5E1D933C0E1A78BE14183187B7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE022FB7C5B4F99027863852DF71F43220B300F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB066C486D7E21985C73ECA9A3B7E58F390C19F47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB299DB4F774B56142C5CA543510D8F5564EC6186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE78CB6D9F3CBC2EAAB7FF14CCDF00780209911);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD87677BAC91B13B797FC698F20C5F7991495C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBD4612CFDF71BA19532B3F44A9F5A3DF043FDE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral707FB91DC74E929D4F3196E7809FB6D5CCDB7EC4, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_40(L_0);
		// private static readonly ProfilerMarker LoadNextContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.LoadNextContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral34C7B1236C7563D00C1D47D4EA08C98B5B6450DB, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_LoadNextContentPerfMarker_41(L_1);
		// private static readonly ProfilerMarker LoadPrevContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.LoadPrevContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralAD0542E8360BD5E1D933C0E1A78BE14183187B7E, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_LoadPrevContentPerfMarker_42(L_2);
		// private static readonly ProfilerMarker LoadContentByTagPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.LoadContentByTag");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteralAE022FB7C5B4F99027863852DF71F43220B300F7, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_LoadContentByTagPerfMarker_43(L_3);
		// private static readonly ProfilerMarker UnloadContentByTagPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.UnloadContentByTag");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral4BDBC647165CB0AFFC0AC59CEF3DF409B96EDE84, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_UnloadContentByTagPerfMarker_44(L_4);
		// private static readonly ProfilerMarker LoadContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.LoadContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteral51ED4D583249DF91F3B37899DD41A7FDDBC7F795, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_LoadContentPerfMarker_45(L_5);
		// private static readonly ProfilerMarker UnloadContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.UnloadContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteral42CF1044BF34E24B7A8043ACCFE074851EBC0ED5, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_UnloadContentPerfMarker_46(L_6);
		// private static readonly ProfilerMarker IsContentLoadedPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.IsContentLoaded");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_7), _stringLiteral8F6AB4F6C244619A6771952208541FA3852C4F47, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_IsContentLoadedPerfMarker_47(L_7);
		// private static readonly ProfilerMarker SetLightingScenePerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.SetLightingScene");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_8), _stringLiteralCBE78CB6D9F3CBC2EAAB7FF14CCDF00780209911, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_SetLightingScenePerfMarker_48(L_8);
		// private static readonly ProfilerMarker SetManagerScenePerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.SetManagerScene");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_9), _stringLiteralFBD4612CFDF71BA19532B3F44A9F5A3DF043FDE8, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_SetManagerScenePerfMarker_49(L_9);
		// private static readonly ProfilerMarker LoadScenesInternalPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.LoadScenesInternal");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_10), _stringLiteralACB7C7A8A32293DFA2A84A5B359F6DD4AE3379A8, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_LoadScenesInternalPerfMarker_50(L_10);
		// private static readonly ProfilerMarker UnloadScenesInternalPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.UnloadScenesInternal");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_11), _stringLiteral2941F5A3D240146BAD2F15CAB373A2E72D506778, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_UnloadScenesInternalPerfMarker_51(L_11);
		// private static readonly ProfilerMarker InvokeLoadedActionsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.InvokeLoadedActions");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_12), _stringLiteral165DFCC85DF53AA32CD45BB261E1060EDBF92F0D, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_InvokeLoadedActionsPerfMarker_52(L_12);
		// private static readonly ProfilerMarker InvokeWillLoadActionsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.InvokeWillLoadActions");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteralB066C486D7E21985C73ECA9A3B7E58F390C19F47, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_InvokeWillLoadActionsPerfMarker_53(L_13);
		// private static readonly ProfilerMarker InvokeWillUnloadActionsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.InvokeWillUnloadActions");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_14), _stringLiteralB299DB4F774B56142C5CA543510D8F5564EC6186, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_InvokeWillUnloadActionsPerfMarker_54(L_14);
		// private static readonly ProfilerMarker InvokeUnloadedActionsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.InvokeUnloadedActions");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_15;
		memset((&L_15), 0, sizeof(L_15));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_15), _stringLiteral249AABBF38B3F47C5F4EF654D1DB72B6B94755CE, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_InvokeUnloadedActionsPerfMarker_55(L_15);
		// private static readonly ProfilerMarker GetScenePerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.GetScene");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_16), _stringLiteralCD87677BAC91B13B797FC698F20C5F7991495C87, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_GetScenePerfMarker_56(L_16);
		// private static readonly ProfilerMarker GetLoadedContentScenesPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem.GetLoadedContentScenes");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_17;
		memset((&L_17), 0, sizeof(L_17));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_17), _stringLiteralA01B6B1CBDE7350C9EF247F228B355475C12F74E, /*hidden argument*/NULL);
		((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->set_GetLoadedContentScenesPerfMarker_57(L_17);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138__ctor_m57C252D1A4A3D4CDDF47AC25D4F213A89C97A475 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138_System_IDisposable_Dispose_m59FD8C8631CED21043D448567CE3F197B69BBC27 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetScenesU3Ed__138_U3CU3Em__Finally1_m6BCEF641C3E485C24E2A0BE5D349D2B5164A77EB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetScenesU3Ed__138_MoveNext_m05C21126CBFD4B45A861360A476EE3EA82D4AD12 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008c;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (string sceneName in sceneNames)
			RuntimeObject* L_4 = __this->get_sceneNames_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_6(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			// foreach (string sceneName in sceneNames)
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_6);
			String_t* L_7;
			L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			// yield return GetScene(sceneName);
			MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_8 = V_2;
			String_t* L_9 = V_3;
			NullCheck(L_8);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_10;
			L_10 = MixedRealitySceneSystem_GetScene_m7198DBCD227A7CF143FFD5B2FA25711EEB9E339C(L_8, L_9, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008c;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			// foreach (string sceneName in sceneNames)
			RuntimeObject* L_11 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_11);
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3CGetScenesU3Ed__138_U3CU3Em__Finally1_m6BCEF641C3E485C24E2A0BE5D349D2B5164A77EB(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_008c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0085;
	}

FAULT_0085:
	{ // begin fault (depth: 1)
		U3CGetScenesU3Ed__138_System_IDisposable_Dispose_m59FD8C8631CED21043D448567CE3F197B69BBC27(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(133)
	} // end fault
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008c:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138_U3CU3Em__Finally1_m6BCEF641C3E485C24E2A0BE5D349D2B5164A77EB (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  U3CGetScenesU3Ed__138_System_Collections_Generic_IEnumeratorU3CUnityEngine_SceneManagement_SceneU3E_get_Current_m2B3DEFA0C9EDC33DE79A25C2D069CF0AEE49DF7B (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	{
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScenesU3Ed__138_System_Collections_IEnumerator_Reset_m427F698DDF976C357F64A3D80CEBDF2E6B39C664 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetScenesU3Ed__138_System_Collections_IEnumerator_Reset_m427F698DDF976C357F64A3D80CEBDF2E6B39C664_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetScenesU3Ed__138_System_Collections_IEnumerator_get_Current_mD122E632D1F8F1426547BC216CACA1976ED49842 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = __this->get_U3CU3E2__current_1();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1 = L_0;
		RuntimeObject * L_2 = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetScenesU3Ed__138_System_Collections_Generic_IEnumerableU3CUnityEngine_SceneManagement_SceneU3E_GetEnumerator_m042063B0EA6C5B1737BE659E9780FE474CC7D838 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_3 = (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 *)il2cpp_codegen_object_new(U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464_il2cpp_TypeInfo_var);
		U3CGetScenesU3Ed__138__ctor_m57C252D1A4A3D4CDDF47AC25D4F213A89C97A475(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_4 = V_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__sceneNames_4();
		NullCheck(L_6);
		L_6->set_sceneNames_3(L_7);
		U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetScenesU3Ed__138_System_Collections_IEnumerable_GetEnumerator_m075EFBDEB6A93167A204A1C6354390136AE68441 (U3CGetScenesU3Ed__138_t734419D141B6F00404A9B615A323D548941C9464 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetScenesU3Ed__138_System_Collections_Generic_IEnumerableU3CUnityEngine_SceneManagement_SceneU3E_GetEnumerator_m042063B0EA6C5B1737BE659E9780FE474CC7D838(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__108_MoveNext_m721E210F9AF46BDDEF1943DB200F314BBCD4121C (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
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
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0061;
			}
		}

IL_0011:
		{
			// await LoadContent(new string[] { sceneToLoad }, mode, activationToken);
			MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_3 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
			String_t* L_6 = __this->get_sceneToLoad_3();
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			int32_t L_7 = __this->get_mode_4();
			SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_8 = __this->get_activationToken_5();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D(L_3, (RuntimeObject*)(RuntimeObject*)L_5, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007d;
			}
		}

IL_0041:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_2;
			__this->set_U3CU3Eu__1_6(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76_mB68286AD1417BA37577AA0316E84AFE5AB464788_RuntimeMethod_var);
			goto IL_00b0;
		}

IL_0061:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_6();
			V_2 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007d:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_009d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0086;
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_009d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentU3Ed__108_MoveNext_m721E210F9AF46BDDEF1943DB200F314BBCD4121C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * _thisAdjusted = reinterpret_cast<U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *>(__this + _offset);
	U3CLoadContentU3Ed__108_MoveNext_m721E210F9AF46BDDEF1943DB200F314BBCD4121C(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__108::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__108_SetStateMachine_m4D40E424EFCEA363D2DFCAC1C08CE3074E7864BF (U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentU3Ed__108_SetStateMachine_m4D40E424EFCEA363D2DFCAC1C08CE3074E7864BF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 * _thisAdjusted = reinterpret_cast<U3CLoadContentU3Ed__108_t95FCC80B30BE0BB7559976477DABDA311DF8EC76 *>(__this + _offset);
	U3CLoadContentU3Ed__108_SetStateMachine_m4D40E424EFCEA363D2DFCAC1C08CE3074E7864BF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__115_MoveNext_m03253CFEF48D53944E29B787DBD6F3AA484E6642 (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 13);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)2))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (LoadContentPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_LoadContentPerfMarker_45();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				switch (L_5)
				{
					case 0:
					{
						goto IL_006c;
					}
					case 1:
					{
						goto IL_0105;
					}
					case 2:
					{
						goto IL_01ab;
					}
				}
			}

IL_0038:
			{
				// if (!CanSceneOpProceed(SceneType.Content))
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_6 = V_1;
				NullCheck(L_6);
				bool L_7;
				L_7 = MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744(L_6, 1, /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_0050;
				}
			}

IL_0041:
			{
				// Debug.LogError("Attempting to perform a scene op when a scene op is already in progress.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x291, FINALLY_0254);
			}

IL_0050:
			{
				// if (mode == LoadSceneMode.Single && GetLoadedContentScenes(out loadedContentScenes))
				int32_t L_8 = __this->get_mode_3();
				if (L_8)
				{
					goto IL_01ab;
				}
			}

IL_005b:
			{
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_9 = V_1;
				RuntimeObject** L_10 = __this->get_address_of_U3CloadedContentScenesU3E5__3_7();
				NullCheck(L_9);
				bool L_11;
				L_11 = MixedRealitySceneSystem_GetLoadedContentScenes_m7799014FCDE2F04C9FC46C9641161242F6BDB3CA(L_9, (RuntimeObject**)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_01ab;
				}
			}

IL_006c:
			{
			}

IL_006d:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_12 = V_0;
					if (!L_12)
					{
						goto IL_00ba;
					}
				}

IL_0070:
				{
					// await UnloadScenesInternal(loadedContentScenes, SceneType.Content, 0, 0.5f, true);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_13 = V_1;
					RuntimeObject* L_14 = __this->get_U3CloadedContentScenesU3E5__3_7();
					NullCheck(L_13);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15;
					L_15 = MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD(L_13, L_14, 1, (0.0f), (0.5f), (bool)1, /*hidden argument*/NULL);
					NullCheck(L_15);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16;
					L_16 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_15, /*hidden argument*/NULL);
					V_3 = L_16;
					bool L_17;
					L_17 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_17)
					{
						goto IL_00d6;
					}
				}

IL_0097:
				{
					int32_t L_18 = 0;
					V_0 = L_18;
					__this->set_U3CU3E1__state_0(L_18);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19 = V_3;
					__this->set_U3CU3Eu__1_8(L_19);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_RuntimeMethod_var);
					IL2CPP_LEAVE(0x2A4, FINALLY_0254);
				}

IL_00ba:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_21 = __this->get_U3CU3Eu__1_8();
					V_3 = L_21;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_22 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_23 = (-1);
					V_0 = L_23;
					__this->set_U3CU3E1__state_0(L_23);
				}

IL_00d6:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					// }
					goto IL_0105;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_00df;
				throw e;
			}

CATCH_00df:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to unload content " + String.Join(", ", loadedContentScenes));
				RuntimeObject* L_24 = __this->get_U3CloadedContentScenesU3E5__3_7();
				String_t* L_25;
				L_25 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_24, /*hidden argument*/NULL);
				String_t* L_26;
				L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F2C876136CD92EF044000F361B1C35D1C1D82D7)), L_25, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_26, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_0105;
			} // end catch (depth: 3)

IL_0105:
			{
			}

IL_0106:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_27 = V_0;
					if ((((int32_t)L_27) == ((int32_t)1)))
					{
						goto IL_015a;
					}
				}

IL_010a:
				{
					// await LoadScenesInternal(scenesToLoad, SceneType.Content, activationToken, 0.5f, 1f, false);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_28 = V_1;
					RuntimeObject* L_29 = __this->get_scenesToLoad_4();
					SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_30 = __this->get_activationToken_5();
					NullCheck(L_28);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_31;
					L_31 = MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB(L_28, L_29, 1, L_30, (0.5f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_31);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32;
					L_32 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_31, /*hidden argument*/NULL);
					V_3 = L_32;
					bool L_33;
					L_33 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_33)
					{
						goto IL_0176;
					}
				}

IL_0137:
				{
					int32_t L_34 = 1;
					V_0 = L_34;
					__this->set_U3CU3E1__state_0(L_34);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_35 = V_3;
					__this->set_U3CU3Eu__1_8(L_35);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_36 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_36, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_RuntimeMethod_var);
					IL2CPP_LEAVE(0x2A4, FINALLY_0254);
				}

IL_015a:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37 = __this->get_U3CU3Eu__1_8();
					V_3 = L_37;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_38 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_39 = (-1);
					V_0 = L_39;
					__this->set_U3CU3E1__state_0(L_39);
				}

IL_0176:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					// }
					goto IL_024b;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0182;
				throw e;
			}

CATCH_0182:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to load content" + String.Join(", ", scenesToLoad));
				RuntimeObject* L_40 = __this->get_scenesToLoad_4();
				String_t* L_41;
				L_41 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_40, /*hidden argument*/NULL);
				String_t* L_42;
				L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24F314FC49884A8A3F49E67DE3443ECAA3EAC9E5)), L_41, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_42, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_024b;
			} // end catch (depth: 3)

IL_01ab:
			{
			}

IL_01ac:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_43 = V_0;
					if ((((int32_t)L_43) == ((int32_t)2)))
					{
						goto IL_0200;
					}
				}

IL_01b0:
				{
					// await LoadScenesInternal(scenesToLoad, SceneType.Content, activationToken);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_44 = V_1;
					RuntimeObject* L_45 = __this->get_scenesToLoad_4();
					SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_46 = __this->get_activationToken_5();
					NullCheck(L_44);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_47;
					L_47 = MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB(L_44, L_45, 1, L_46, (0.0f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_47);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_48;
					L_48 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_47, /*hidden argument*/NULL);
					V_3 = L_48;
					bool L_49;
					L_49 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_49)
					{
						goto IL_021c;
					}
				}

IL_01dd:
				{
					int32_t L_50 = 2;
					V_0 = L_50;
					__this->set_U3CU3E1__state_0(L_50);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_51 = V_3;
					__this->set_U3CU3Eu__1_8(L_51);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_52 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_52, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748_m9BEC1AAF59D677DF9AD3AAD017C0761CE472BF9C_RuntimeMethod_var);
					IL2CPP_LEAVE(0x2A4, FINALLY_0254);
				}

IL_0200:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_53 = __this->get_U3CU3Eu__1_8();
					V_3 = L_53;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_54 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_55 = (-1);
					V_0 = L_55;
					__this->set_U3CU3E1__state_0(L_55);
				}

IL_021c:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					// }
					goto IL_024b;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0225;
				throw e;
			}

CATCH_0225:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to load content" + String.Join(", ", scenesToLoad));
				RuntimeObject* L_56 = __this->get_scenesToLoad_4();
				String_t* L_57;
				L_57 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_56, /*hidden argument*/NULL);
				String_t* L_58;
				L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24F314FC49884A8A3F49E67DE3443ECAA3EAC9E5)), L_57, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_58, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_024b;
			} // end catch (depth: 3)

IL_024b:
			{
				// }
				__this->set_U3CloadedContentScenesU3E5__3_7((RuntimeObject*)NULL);
				IL2CPP_LEAVE(0x26A, FINALLY_0254);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0254;
		}

FINALLY_0254:
		{ // begin finally (depth: 2)
			{
				int32_t L_59 = V_0;
				if ((((int32_t)L_59) >= ((int32_t)0)))
				{
					goto IL_0269;
				}
			}

IL_0258:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_60 = __this->get_address_of_U3CU3E7__wrap1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_60, /*hidden argument*/NULL);
			}

IL_0269:
			{
				IL2CPP_END_FINALLY(596)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(596)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x291, IL_0291)
			IL2CPP_JUMP_TBL(0x2A4, IL_02a4)
			IL2CPP_JUMP_TBL(0x26A, IL_026a)
		}

IL_026a:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_61 = __this->get_address_of_U3CU3E7__wrap1_6();
			il2cpp_codegen_initobj(L_61, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0291;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0278;
		throw e;
	}

CATCH_0278:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_62 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_63 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_62, L_63, /*hidden argument*/NULL);
		goto IL_02a4;
	} // end catch (depth: 1)

IL_0291:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_64 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_64, /*hidden argument*/NULL);
	}

IL_02a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentU3Ed__115_MoveNext_m03253CFEF48D53944E29B787DBD6F3AA484E6642_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * _thisAdjusted = reinterpret_cast<U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *>(__this + _offset);
	U3CLoadContentU3Ed__115_MoveNext_m03253CFEF48D53944E29B787DBD6F3AA484E6642(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContent>d__115::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentU3Ed__115_SetStateMachine_m4F6A89134A71C9237053F1CF2EB6C92025F60BCA (U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentU3Ed__115_SetStateMachine_m4F6A89134A71C9237053F1CF2EB6C92025F60BCA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 * _thisAdjusted = reinterpret_cast<U3CLoadContentU3Ed__115_t1F82076EF46C459C9AEBBAC53F92D7C6E7CEC748 *>(__this + _offset);
	U3CLoadContentU3Ed__115_SetStateMachine_m4F6A89134A71C9237053F1CF2EB6C92025F60BCA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentByTagU3Ed__111_MoveNext_mBB6E6D63EBC9703B7B23D552398A63D00F6733A6 (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (LoadContentByTagPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_LoadContentByTagPerfMarker_43();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_007a;
				}
			}

IL_0028:
			{
				// await LoadContent(profile.GetContentSceneNamesByTag(tag), mode, activationToken);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_6 = V_1;
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_7 = V_1;
				NullCheck(L_7);
				MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_8;
				L_8 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(L_7, /*hidden argument*/NULL);
				String_t* L_9 = __this->get_tag_3();
				NullCheck(L_8);
				RuntimeObject* L_10;
				L_10 = MixedRealitySceneSystemProfile_GetContentSceneNamesByTag_m0F8F15A3F74776491021DE1B4E0554B52FD8365C(L_8, L_9, /*hidden argument*/NULL);
				int32_t L_11 = __this->get_mode_4();
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_12 = __this->get_activationToken_5();
				NullCheck(L_6);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
				L_13 = MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D(L_6, L_10, L_11, L_12, /*hidden argument*/NULL);
				NullCheck(L_13);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14;
				L_14 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_13, /*hidden argument*/NULL);
				V_3 = L_14;
				bool L_15;
				L_15 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_15)
				{
					goto IL_0096;
				}
			}

IL_005a:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = V_3;
				__this->set_U3CU3Eu__1_7(L_17);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997_mDC829516C939EF0E64F63F7317133983B2A27C5D_RuntimeMethod_var);
				IL2CPP_LEAVE(0xEF, FINALLY_009f);
			}

IL_007a:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19 = __this->get_U3CU3Eu__1_7();
				V_3 = L_19;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_20 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_0096:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0xB5, FINALLY_009f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009f;
		}

FINALLY_009f:
		{ // begin finally (depth: 2)
			{
				int32_t L_22 = V_0;
				if ((((int32_t)L_22) >= ((int32_t)0)))
				{
					goto IL_00b4;
				}
			}

IL_00a3:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_23 = __this->get_address_of_U3CU3E7__wrap1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_23, /*hidden argument*/NULL);
			}

IL_00b4:
			{
				IL2CPP_END_FINALLY(159)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(159)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xEF, IL_00ef)
			IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		}

IL_00b5:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_24 = __this->get_address_of_U3CU3E7__wrap1_6();
			il2cpp_codegen_initobj(L_24, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_00dc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c3;
		throw e;
	}

CATCH_00c3:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_25, L_26, /*hidden argument*/NULL);
		goto IL_00ef;
	} // end catch (depth: 1)

IL_00dc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentByTagU3Ed__111_MoveNext_mBB6E6D63EBC9703B7B23D552398A63D00F6733A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * _thisAdjusted = reinterpret_cast<U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *>(__this + _offset);
	U3CLoadContentByTagU3Ed__111_MoveNext_mBB6E6D63EBC9703B7B23D552398A63D00F6733A6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadContentByTag>d__111::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadContentByTagU3Ed__111_SetStateMachine_m74AC348D44643B10DDD55C7C29E8E6E86E35DA08 (U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadContentByTagU3Ed__111_SetStateMachine_m74AC348D44643B10DDD55C7C29E8E6E86E35DA08_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 * _thisAdjusted = reinterpret_cast<U3CLoadContentByTagU3Ed__111_t3F8D34C1006EDEE9B96B1590E3E5D15E80289997 *>(__this + _offset);
	U3CLoadContentByTagU3Ed__111_SetStateMachine_m74AC348D44643B10DDD55C7C29E8E6E86E35DA08(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextContentU3Ed__105_MoveNext_mC7A8AF0B5402C90A17E71FA8B4829EB0076E7737 (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E372FFBC086D1D7FFE4E2271BDAFE8E18BFEB7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (LoadNextContentPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_LoadNextContentPerfMarker_41();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_008d;
				}
			}

IL_0028:
			{
				// if (contentTracker.GetNextContent(wrap, out nextContent))
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_6 = V_1;
				NullCheck(L_6);
				SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_7 = L_6->get_contentTracker_17();
				bool L_8 = __this->get_wrap_3();
				NullCheck(L_7);
				bool L_9;
				L_9 = SceneContentTracker_GetNextContent_mC7AF91F8686DC105AF08A8141478B0718BECD306(L_7, L_8, (String_t**)(&V_3), /*hidden argument*/NULL);
				if (!L_9)
				{
					goto IL_00b3;
				}
			}

IL_003d:
			{
				// await LoadContent(new string[] { nextContent }, mode, activationToken);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_10 = V_1;
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
				String_t* L_13 = V_3;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_13);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
				int32_t L_14 = __this->get_mode_4();
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_15 = __this->get_activationToken_5();
				NullCheck(L_10);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16;
				L_16 = MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D(L_10, (RuntimeObject*)(RuntimeObject*)L_12, L_14, L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17;
				L_17 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_16, /*hidden argument*/NULL);
				V_4 = L_17;
				bool L_18;
				L_18 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_18)
				{
					goto IL_00aa;
				}
			}

IL_0069:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20 = V_4;
				__this->set_U3CU3Eu__1_7(L_20);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C_m431555C007A4BD8D45CA3CBFC3038567D49654A5_RuntimeMethod_var);
				IL2CPP_LEAVE(0x10F, FINALLY_00bf);
			}

IL_008d:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = __this->get_U3CU3Eu__1_7();
				V_4 = L_22;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_23 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00aa:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				// }
				goto IL_00bd;
			}

IL_00b3:
			{
				// Debug.LogWarning("Attempted to load next content when no next content exists. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB6E372FFBC086D1D7FFE4E2271BDAFE8E18BFEB7, /*hidden argument*/NULL);
			}

IL_00bd:
			{
				// }
				IL2CPP_LEAVE(0xD5, FINALLY_00bf);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bf;
		}

FINALLY_00bf:
		{ // begin finally (depth: 2)
			{
				int32_t L_25 = V_0;
				if ((((int32_t)L_25) >= ((int32_t)0)))
				{
					goto IL_00d4;
				}
			}

IL_00c3:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_26 = __this->get_address_of_U3CU3E7__wrap1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_26, /*hidden argument*/NULL);
			}

IL_00d4:
			{
				IL2CPP_END_FINALLY(191)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(191)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10F, IL_010f)
			IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		}

IL_00d5:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3E7__wrap1_6();
			il2cpp_codegen_initobj(L_27, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_00fc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e3;
		throw e;
	}

CATCH_00e3:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, L_29, /*hidden argument*/NULL);
		goto IL_010f;
	} // end catch (depth: 1)

IL_00fc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, /*hidden argument*/NULL);
	}

IL_010f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadNextContentU3Ed__105_MoveNext_mC7A8AF0B5402C90A17E71FA8B4829EB0076E7737_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * _thisAdjusted = reinterpret_cast<U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *>(__this + _offset);
	U3CLoadNextContentU3Ed__105_MoveNext_mC7A8AF0B5402C90A17E71FA8B4829EB0076E7737(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadNextContent>d__105::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextContentU3Ed__105_SetStateMachine_m576ADE0027B4F2C1D1CAAF3D17DBC498F279EEF2 (U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadNextContentU3Ed__105_SetStateMachine_m576ADE0027B4F2C1D1CAAF3D17DBC498F279EEF2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C * _thisAdjusted = reinterpret_cast<U3CLoadNextContentU3Ed__105_t07D051C33FC83D6C38091E170547E3F146917C5C *>(__this + _offset);
	U3CLoadNextContentU3Ed__105_SetStateMachine_m576ADE0027B4F2C1D1CAAF3D17DBC498F279EEF2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadPrevContentU3Ed__107_MoveNext_m6E4EBB3DAC2DA0C13D41C5267936086E37B9A5ED (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB51F1E9911FAFD2B3FBCEDB0F01F6EDB71929368);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (LoadPrevContentPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_LoadPrevContentPerfMarker_42();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_008d;
				}
			}

IL_0028:
			{
				// if (contentTracker.GetPrevContent(wrap, out prevContent))
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_6 = V_1;
				NullCheck(L_6);
				SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_7 = L_6->get_contentTracker_17();
				bool L_8 = __this->get_wrap_3();
				NullCheck(L_7);
				bool L_9;
				L_9 = SceneContentTracker_GetPrevContent_m3EC73F929593CC7964A05B72294E30BF3683F1C4(L_7, L_8, (String_t**)(&V_3), /*hidden argument*/NULL);
				if (!L_9)
				{
					goto IL_00b3;
				}
			}

IL_003d:
			{
				// await LoadContent(new string[] { prevContent }, mode, activationToken);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_10 = V_1;
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
				String_t* L_13 = V_3;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_13);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
				int32_t L_14 = __this->get_mode_4();
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_15 = __this->get_activationToken_5();
				NullCheck(L_10);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16;
				L_16 = MixedRealitySceneSystem_LoadContent_m6C9B349CFE02A1982B912F60F236824B051CA83D(L_10, (RuntimeObject*)(RuntimeObject*)L_12, L_14, L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17;
				L_17 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_16, /*hidden argument*/NULL);
				V_4 = L_17;
				bool L_18;
				L_18 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_18)
				{
					goto IL_00aa;
				}
			}

IL_0069:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20 = V_4;
				__this->set_U3CU3Eu__1_7(L_20);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730_mD21761A410C4D62712A0CEF40D92D846EF206FCA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x10F, FINALLY_00bf);
			}

IL_008d:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = __this->get_U3CU3Eu__1_7();
				V_4 = L_22;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_23 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00aa:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				// }
				goto IL_00bd;
			}

IL_00b3:
			{
				// Debug.LogWarning("Attempted to load prev content when no next content exists. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB51F1E9911FAFD2B3FBCEDB0F01F6EDB71929368, /*hidden argument*/NULL);
			}

IL_00bd:
			{
				// }
				IL2CPP_LEAVE(0xD5, FINALLY_00bf);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bf;
		}

FINALLY_00bf:
		{ // begin finally (depth: 2)
			{
				int32_t L_25 = V_0;
				if ((((int32_t)L_25) >= ((int32_t)0)))
				{
					goto IL_00d4;
				}
			}

IL_00c3:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_26 = __this->get_address_of_U3CU3E7__wrap1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_26, /*hidden argument*/NULL);
			}

IL_00d4:
			{
				IL2CPP_END_FINALLY(191)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(191)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10F, IL_010f)
			IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		}

IL_00d5:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3E7__wrap1_6();
			il2cpp_codegen_initobj(L_27, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_00fc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e3;
		throw e;
	}

CATCH_00e3:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, L_29, /*hidden argument*/NULL);
		goto IL_010f;
	} // end catch (depth: 1)

IL_00fc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, /*hidden argument*/NULL);
	}

IL_010f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadPrevContentU3Ed__107_MoveNext_m6E4EBB3DAC2DA0C13D41C5267936086E37B9A5ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * _thisAdjusted = reinterpret_cast<U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *>(__this + _offset);
	U3CLoadPrevContentU3Ed__107_MoveNext_m6E4EBB3DAC2DA0C13D41C5267936086E37B9A5ED(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadPrevContent>d__107::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadPrevContentU3Ed__107_SetStateMachine_mD41987973F0EBBDF2252C7D5DA9FB3106F1D220D (U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadPrevContentU3Ed__107_SetStateMachine_mD41987973F0EBBDF2252C7D5DA9FB3106F1D220D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 * _thisAdjusted = reinterpret_cast<U3CLoadPrevContentU3Ed__107_t38CA3494DF60B2C4B21079D9A9B5E91DAB4BE730 *>(__this + _offset);
	U3CLoadPrevContentU3Ed__107_SetStateMachine_mD41987973F0EBBDF2252C7D5DA9FB3106F1D220D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScenesInternalU3Ed__125_MoveNext_mF7C040E0713E930B421F41B7F00461DCB33C53B0 (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F8E185D9FD03516C20F82A74126E6F58D82304A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF65FCD07A554FAE05DDF1CCCA1E52545321A2F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD39C4582F68A51DCD84109E53C5CE99CE9FDB745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_9;
	memset((&V_9), 0, sizeof(V_9));
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_15;
	memset((&V_15), 0, sizeof(V_15));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Exception_t * V_18 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 11);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * G_B8_0 = NULL;
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * G_B7_0 = NULL;
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * G_B28_0 = NULL;
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * G_B29_1 = NULL;
	int32_t G_B41_0 = 0;
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * G_B49_0 = NULL;
	SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * G_B48_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_3();
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
			// using (LoadScenesInternalPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_LoadScenesInternalPerfMarker_50();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_9(L_4);
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
					goto IL_031b;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_0403;
				}
			}

IL_0033:
			{
				// activationToken?.SetReadyToProceed(false);
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_7 = __this->get_activationToken_2();
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_8 = L_7;
				G_B7_0 = L_8;
				if (L_8)
				{
					G_B8_0 = L_8;
					goto IL_003f;
				}
			}

IL_003c:
			{
				goto IL_0045;
			}

IL_003f:
			{
				NullCheck(G_B8_0);
				SceneActivationToken_SetReadyToProceed_m090CC0F30450C4D421307F928F24A28F3086AC6E(G_B8_0, (bool)0, /*hidden argument*/NULL);
			}

IL_0045:
			{
				// SetSceneOpProgress(true, progressOffset, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_9 = V_1;
				float L_10 = __this->get_progressOffset_4();
				int32_t L_11 = __this->get_sceneType_5();
				NullCheck(L_9);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_9, (bool)1, L_10, L_11, /*hidden argument*/NULL);
				// List<string> validNames = new List<string>();
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
				List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_12, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
				__this->set_U3CvalidNamesU3E5__3_10(L_12);
				// List<int> validIndexes = new List<int>();
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
				List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_13, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
				__this->set_U3CvalidIndexesU3E5__4_11(L_13);
				// foreach (string sceneName in scenesToLoad)
				RuntimeObject* L_14 = __this->get_scenesToLoad_6();
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_14);
				V_3 = L_15;
			}

IL_007a:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00c3;
				}

IL_007c:
				{
					// foreach (string sceneName in scenesToLoad)
					RuntimeObject* L_16 = V_3;
					NullCheck(L_16);
					String_t* L_17;
					L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_16);
					V_4 = L_17;
					// if (!RuntimeSceneUtils.FindScene(sceneName, out scene, out sceneIndex))
					String_t* L_18 = V_4;
					bool L_19;
					L_19 = RuntimeSceneUtils_FindScene_m6B43F506C9BE6DA04D17C7971673F1A42C776FFB(L_18, (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
					if (L_19)
					{
						goto IL_00a9;
					}
				}

IL_0091:
				{
					// Debug.LogError("Can't load invalid scene " + sceneName + " - make sure the scene name is spelled correctly and that you have added the scene to your MixedRealitySceneSystem profile's content scenes array.");
					String_t* L_20 = V_4;
					String_t* L_21;
					L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralAF65FCD07A554FAE05DDF1CCCA1E52545321A2F3, L_20, _stringLiteral1F8E185D9FD03516C20F82A74126E6F58D82304A, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
					Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_21, /*hidden argument*/NULL);
					// }
					goto IL_00c3;
				}

IL_00a9:
				{
					// validIndexes.Add(sceneIndex);
					List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_22 = __this->get_U3CvalidIndexesU3E5__4_11();
					int32_t L_23 = V_6;
					NullCheck(L_22);
					List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_22, L_23, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
					// validNames.Add(sceneName);
					List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_24 = __this->get_U3CvalidNamesU3E5__3_10();
					String_t* L_25 = V_4;
					NullCheck(L_24);
					List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_24, L_25, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
				}

IL_00c3:
				{
					// foreach (string sceneName in scenesToLoad)
					RuntimeObject* L_26 = V_3;
					NullCheck(L_26);
					bool L_27;
					L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
					if (L_27)
					{
						goto IL_007c;
					}
				}

IL_00cb:
				{
					IL2CPP_LEAVE(0xDB, FINALLY_00cd);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00cd;
			}

FINALLY_00cd:
			{ // begin finally (depth: 3)
				{
					int32_t L_28 = V_0;
					if ((((int32_t)L_28) >= ((int32_t)0)))
					{
						goto IL_00da;
					}
				}

IL_00d1:
				{
					RuntimeObject* L_29 = V_3;
					if (!L_29)
					{
						goto IL_00da;
					}
				}

IL_00d4:
				{
					RuntimeObject* L_30 = V_3;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_30);
				}

IL_00da:
				{
					IL2CPP_END_FINALLY(205)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(205)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xDB, IL_00db)
			}

IL_00db:
			{
				// int totalSceneOps = validIndexes.Count;
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_31 = __this->get_U3CvalidIndexesU3E5__4_11();
				NullCheck(L_31);
				int32_t L_32;
				L_32 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_31, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
				__this->set_U3CtotalSceneOpsU3E5__5_12(L_32);
				// if (totalSceneOps < 1)
				int32_t L_33 = __this->get_U3CtotalSceneOpsU3E5__5_12();
				if ((((int32_t)L_33) >= ((int32_t)1)))
				{
					goto IL_011c;
				}
			}

IL_00f5:
			{
				// Debug.LogWarning("No valid scenes found to load.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralD39C4582F68A51DCD84109E53C5CE99CE9FDB745, /*hidden argument*/NULL);
				// SetSceneOpProgress(sceneOpInProgressWhenFinished, progressTarget, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_34 = V_1;
				bool L_35 = __this->get_sceneOpInProgressWhenFinished_7();
				float L_36 = __this->get_progressTarget_8();
				int32_t L_37 = __this->get_sceneType_5();
				NullCheck(L_34);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x4B4, FINALLY_0477);
			}

IL_011c:
			{
				// InvokeWillLoadActions(validNames, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_38 = V_1;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = __this->get_U3CvalidNamesU3E5__3_10();
				int32_t L_40 = __this->get_sceneType_5();
				NullCheck(L_38);
				MixedRealitySceneSystem_InvokeWillLoadActions_m6000EBCDADBB5F540BE559A1EF940FA8D431DDDC(L_38, L_39, L_40, /*hidden argument*/NULL);
				// if (validIndexes.Count > 0)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_41 = __this->get_U3CvalidIndexesU3E5__4_11();
				NullCheck(L_41);
				int32_t L_42;
				L_42 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_41, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
				if ((((int32_t)L_42) <= ((int32_t)0)))
				{
					goto IL_0351;
				}
			}

IL_013f:
			{
				// List<AsyncOperation> loadSceneOps = new List<AsyncOperation>();
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_43 = (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *)il2cpp_codegen_object_new(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_il2cpp_TypeInfo_var);
				List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF(L_43, /*hidden argument*/List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF_RuntimeMethod_var);
				__this->set_U3CloadSceneOpsU3E5__7_14(L_43);
				// foreach (int sceneIndex in validIndexes)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_44 = __this->get_U3CvalidIndexesU3E5__4_11();
				NullCheck(L_44);
				Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_45;
				L_45 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_44, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
				V_7 = L_45;
			}

IL_0157:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01a8;
				}

IL_0159:
				{
					// foreach (int sceneIndex in validIndexes)
					int32_t L_46;
					L_46 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
					V_8 = L_46;
					// Scene scene = SceneManager.GetSceneByBuildIndex(sceneIndex);
					int32_t L_47 = V_8;
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_48;
					L_48 = SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47(L_47, /*hidden argument*/NULL);
					V_9 = L_48;
					// if (scene.isLoaded)
					bool L_49;
					L_49 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_9), /*hidden argument*/NULL);
					if (L_49)
					{
						goto IL_01a8;
					}
				}

IL_0174:
				{
					// AsyncOperation sceneOp = SceneManager.LoadSceneAsync(sceneIndex, LoadSceneMode.Additive);
					int32_t L_50 = V_8;
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_51;
					L_51 = SceneManager_LoadSceneAsync_mD57AC68A3BEF58E3AA2A6DB8FF97ADB5EDC9F84B(L_50, 1, /*hidden argument*/NULL);
					V_10 = L_51;
					// sceneOp.allowSceneActivation = (activationToken != null) ? activationToken.AllowSceneActivation : true;
					AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_52 = V_10;
					SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_53 = __this->get_activationToken_2();
					G_B27_0 = L_52;
					if (L_53)
					{
						G_B28_0 = L_52;
						goto IL_018b;
					}
				}

IL_0188:
				{
					G_B29_0 = 1;
					G_B29_1 = G_B27_0;
					goto IL_0196;
				}

IL_018b:
				{
					SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_54 = __this->get_activationToken_2();
					NullCheck(L_54);
					bool L_55;
					L_55 = SceneActivationToken_get_AllowSceneActivation_m81B4A7DCD9A96D3AEDE009C169653E93F8D60AC0_inline(L_54, /*hidden argument*/NULL);
					G_B29_0 = ((int32_t)(L_55));
					G_B29_1 = G_B28_0;
				}

IL_0196:
				{
					NullCheck(G_B29_1);
					AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(G_B29_1, (bool)G_B29_0, /*hidden argument*/NULL);
					// loadSceneOps.Add(sceneOp);
					List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_56 = __this->get_U3CloadSceneOpsU3E5__7_14();
					AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_57 = V_10;
					NullCheck(L_56);
					List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25(L_56, L_57, /*hidden argument*/List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25_RuntimeMethod_var);
				}

IL_01a8:
				{
					// foreach (int sceneIndex in validIndexes)
					bool L_58;
					L_58 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
					if (L_58)
					{
						goto IL_0159;
					}
				}

IL_01b1:
				{
					IL2CPP_LEAVE(0x1C5, FINALLY_01b3);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01b3;
			}

FINALLY_01b3:
			{ // begin finally (depth: 3)
				{
					int32_t L_59 = V_0;
					if ((((int32_t)L_59) >= ((int32_t)0)))
					{
						goto IL_01c4;
					}
				}

IL_01b7:
				{
					Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
				}

IL_01c4:
				{
					IL2CPP_END_FINALLY(435)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(435)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x1C5, IL_01c5)
			}

IL_01c5:
			{
				// bool completedAllSceneOps = false;
				__this->set_U3CcompletedAllSceneOpsU3E5__8_15((bool)0);
				goto IL_033f;
			}

IL_01d1:
			{
				// if (!Application.isPlaying)
				bool L_60;
				L_60 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_60)
				{
					goto IL_01dd;
				}
			}

IL_01d8:
			{
				// return;
				IL2CPP_LEAVE(0x4B4, FINALLY_0477);
			}

IL_01dd:
			{
				// completedAllSceneOps = true;
				__this->set_U3CcompletedAllSceneOpsU3E5__8_15((bool)1);
				// bool readyToProceed = false;
				V_11 = (bool)0;
				// bool allowSceneActivation = (activationToken != null) ? activationToken.AllowSceneActivation : true;
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_61 = __this->get_activationToken_2();
				if (L_61)
				{
					goto IL_01f2;
				}
			}

IL_01ef:
			{
				G_B41_0 = 1;
				goto IL_01fd;
			}

IL_01f2:
			{
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_62 = __this->get_activationToken_2();
				NullCheck(L_62);
				bool L_63;
				L_63 = SceneActivationToken_get_AllowSceneActivation_m81B4A7DCD9A96D3AEDE009C169653E93F8D60AC0_inline(L_62, /*hidden argument*/NULL);
				G_B41_0 = ((int32_t)(L_63));
			}

IL_01fd:
			{
				V_12 = (bool)G_B41_0;
				// float sceneOpProgress = 0;
				V_13 = (0.0f);
				// for (int i = 0; i < loadSceneOps.Count; i++)
				V_14 = 0;
				goto IL_0284;
			}

IL_020b:
			{
				// loadSceneOps[i].allowSceneActivation = allowSceneActivation;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_64 = __this->get_U3CloadSceneOpsU3E5__7_14();
				int32_t L_65 = V_14;
				NullCheck(L_64);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_66;
				L_66 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				bool L_67 = V_12;
				NullCheck(L_66);
				AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_66, L_67, /*hidden argument*/NULL);
				// if (loadSceneOps[i].isDone)
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_68 = __this->get_U3CloadSceneOpsU3E5__7_14();
				int32_t L_69 = V_14;
				NullCheck(L_68);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_70;
				L_70 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				NullCheck(L_70);
				bool L_71;
				L_71 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_70, /*hidden argument*/NULL);
				if (!L_71)
				{
					goto IL_023f;
				}
			}

IL_0233:
			{
				// sceneOpProgress += 1;
				float L_72 = V_13;
				V_13 = ((float)il2cpp_codegen_add((float)L_72, (float)(1.0f)));
				// }
				goto IL_027e;
			}

IL_023f:
			{
				// readyToProceed |= loadSceneOps[i].progress >= SceneActivationLoadProgress;
				bool L_73 = V_11;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_74 = __this->get_U3CloadSceneOpsU3E5__7_14();
				int32_t L_75 = V_14;
				NullCheck(L_74);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_76;
				L_76 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_74, L_75, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				NullCheck(L_76);
				float L_77;
				L_77 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_76, /*hidden argument*/NULL);
				V_11 = (bool)((int32_t)((int32_t)L_73|(int32_t)((((int32_t)((!(((float)L_77) >= ((float)(0.899999976f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
				// sceneOpProgress += loadSceneOps[i].progress;
				float L_78 = V_13;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_79 = __this->get_U3CloadSceneOpsU3E5__7_14();
				int32_t L_80 = V_14;
				NullCheck(L_79);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_81;
				L_81 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_79, L_80, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				NullCheck(L_81);
				float L_82;
				L_82 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_81, /*hidden argument*/NULL);
				V_13 = ((float)il2cpp_codegen_add((float)L_78, (float)L_82));
				// completedAllSceneOps = false;
				__this->set_U3CcompletedAllSceneOpsU3E5__8_15((bool)0);
			}

IL_027e:
			{
				// for (int i = 0; i < loadSceneOps.Count; i++)
				int32_t L_83 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			}

IL_0284:
			{
				// for (int i = 0; i < loadSceneOps.Count; i++)
				int32_t L_84 = V_14;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_85 = __this->get_U3CloadSceneOpsU3E5__7_14();
				NullCheck(L_85);
				int32_t L_86;
				L_86 = List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_inline(L_85, /*hidden argument*/List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_RuntimeMethod_var);
				if ((((int32_t)L_84) < ((int32_t)L_86)))
				{
					goto IL_020b;
				}
			}

IL_0296:
			{
				// activationToken?.SetReadyToProceed(readyToProceed);
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_87 = __this->get_activationToken_2();
				SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * L_88 = L_87;
				G_B48_0 = L_88;
				if (L_88)
				{
					G_B49_0 = L_88;
					goto IL_02a2;
				}
			}

IL_029f:
			{
				goto IL_02a9;
			}

IL_02a2:
			{
				bool L_89 = V_11;
				NullCheck(G_B49_0);
				SceneActivationToken_SetReadyToProceed_m090CC0F30450C4D421307F928F24A28F3086AC6E(G_B49_0, L_89, /*hidden argument*/NULL);
			}

IL_02a9:
			{
				// sceneOpProgress = Mathf.Clamp01(SceneOperationProgress / totalSceneOps);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_90 = V_1;
				NullCheck(L_90);
				float L_91;
				L_91 = MixedRealitySceneSystem_get_SceneOperationProgress_m905900F563F4809DE6FF7AA6A5ED5DB5BD0A7130_inline(L_90, /*hidden argument*/NULL);
				int32_t L_92 = __this->get_U3CtotalSceneOpsU3E5__5_12();
				float L_93;
				L_93 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_91/(float)((float)((float)L_92)))), /*hidden argument*/NULL);
				V_13 = L_93;
				// SetSceneOpProgress(true, Mathf.Lerp(progressOffset, progressTarget, sceneOpProgress), sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_94 = V_1;
				float L_95 = __this->get_progressOffset_4();
				float L_96 = __this->get_progressTarget_8();
				float L_97 = V_13;
				float L_98;
				L_98 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_95, L_96, L_97, /*hidden argument*/NULL);
				int32_t L_99 = __this->get_sceneType_5();
				NullCheck(L_94);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_94, (bool)1, L_98, L_99, /*hidden argument*/NULL);
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_100;
				L_100 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_16 = L_100;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_101;
				L_101 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_16), /*hidden argument*/NULL);
				V_15 = L_101;
				bool L_102;
				L_102 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), /*hidden argument*/NULL);
				if (L_102)
				{
					goto IL_0338;
				}
			}

IL_02f7:
			{
				int32_t L_103 = 0;
				V_0 = L_103;
				__this->set_U3CU3E1__state_0(L_103);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_104 = V_15;
				__this->set_U3CU3Eu__1_16(L_104);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_105 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_105, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_RuntimeMethod_var);
				IL2CPP_LEAVE(0x4C7, FINALLY_0477);
			}

IL_031b:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_106 = __this->get_U3CU3Eu__1_16();
				V_15 = L_106;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_107 = __this->get_address_of_U3CU3Eu__1_16();
				il2cpp_codegen_initobj(L_107, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_108 = (-1);
				V_0 = L_108;
				__this->set_U3CU3E1__state_0(L_108);
			}

IL_0338:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), /*hidden argument*/NULL);
			}

IL_033f:
			{
				// while (!completedAllSceneOps)
				bool L_109 = __this->get_U3CcompletedAllSceneOpsU3E5__8_15();
				if (!L_109)
				{
					goto IL_01d1;
				}
			}

IL_034a:
			{
				// }
				__this->set_U3CloadSceneOpsU3E5__7_14((List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *)NULL);
			}

IL_0351:
			{
				// bool scenesLoadedAndActivated = false;
				__this->set_U3CscenesLoadedAndActivatedU3E5__6_13((bool)0);
				goto IL_0427;
			}

IL_035d:
			{
				// if (!Application.isPlaying)
				bool L_110;
				L_110 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_110)
				{
					goto IL_0369;
				}
			}

IL_0364:
			{
				// return;
				IL2CPP_LEAVE(0x4B4, FINALLY_0477);
			}

IL_0369:
			{
				// scenesLoadedAndActivated = true;
				__this->set_U3CscenesLoadedAndActivatedU3E5__6_13((bool)1);
				// foreach (int sceneIndex in validIndexes)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_111 = __this->get_U3CvalidIndexesU3E5__4_11();
				NullCheck(L_111);
				Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_112;
				L_112 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_111, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
				V_7 = L_112;
			}

IL_037d:
			try
			{ // begin try (depth: 3)
				{
					goto IL_03a9;
				}

IL_037f:
				{
					// foreach (int sceneIndex in validIndexes)
					int32_t L_113;
					L_113 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
					// Scene scene = SceneManager.GetSceneByBuildIndex(sceneIndex);
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_114;
					L_114 = SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47(L_113, /*hidden argument*/NULL);
					V_17 = L_114;
					// scenesLoadedAndActivated &= (scene.IsValid() & scene.isLoaded);
					bool L_115 = __this->get_U3CscenesLoadedAndActivatedU3E5__6_13();
					bool L_116;
					L_116 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_17), /*hidden argument*/NULL);
					bool L_117;
					L_117 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_17), /*hidden argument*/NULL);
					__this->set_U3CscenesLoadedAndActivatedU3E5__6_13((bool)((int32_t)((int32_t)L_115&(int32_t)((int32_t)((int32_t)L_116&(int32_t)L_117)))));
				}

IL_03a9:
				{
					// foreach (int sceneIndex in validIndexes)
					bool L_118;
					L_118 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
					if (L_118)
					{
						goto IL_037f;
					}
				}

IL_03b2:
				{
					IL2CPP_LEAVE(0x3C6, FINALLY_03b4);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_03b4;
			}

FINALLY_03b4:
			{ // begin finally (depth: 3)
				{
					int32_t L_119 = V_0;
					if ((((int32_t)L_119) >= ((int32_t)0)))
					{
						goto IL_03c5;
					}
				}

IL_03b8:
				{
					Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
				}

IL_03c5:
				{
					IL2CPP_END_FINALLY(948)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(948)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x3C6, IL_03c6)
			}

IL_03c6:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_120;
				L_120 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_16 = L_120;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_121;
				L_121 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_16), /*hidden argument*/NULL);
				V_15 = L_121;
				bool L_122;
				L_122 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), /*hidden argument*/NULL);
				if (L_122)
				{
					goto IL_0420;
				}
			}

IL_03df:
			{
				int32_t L_123 = 1;
				V_0 = L_123;
				__this->set_U3CU3E1__state_0(L_123);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_124 = V_15;
				__this->set_U3CU3Eu__1_16(L_124);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_125 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_125, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5_mE6C124C932DAFB61879D79AA44D982AAA08B438B_RuntimeMethod_var);
				IL2CPP_LEAVE(0x4C7, FINALLY_0477);
			}

IL_0403:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_126 = __this->get_U3CU3Eu__1_16();
				V_15 = L_126;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_127 = __this->get_address_of_U3CU3Eu__1_16();
				il2cpp_codegen_initobj(L_127, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_128 = (-1);
				V_0 = L_128;
				__this->set_U3CU3E1__state_0(L_128);
			}

IL_0420:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_15), /*hidden argument*/NULL);
			}

IL_0427:
			{
				// while (!scenesLoadedAndActivated)
				bool L_129 = __this->get_U3CscenesLoadedAndActivatedU3E5__6_13();
				if (!L_129)
				{
					goto IL_035d;
				}
			}

IL_0432:
			{
				// contentTracker.RefreshLoadedContent();
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_130 = V_1;
				NullCheck(L_130);
				SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_131 = L_130->get_contentTracker_17();
				NullCheck(L_131);
				SceneContentTracker_RefreshLoadedContent_m90D7CEC8ADE1C0B571B22BB4D05AF692C68842E0(L_131, /*hidden argument*/NULL);
				// SetSceneOpProgress(sceneOpInProgressWhenFinished, progressTarget, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_132 = V_1;
				bool L_133 = __this->get_sceneOpInProgressWhenFinished_7();
				float L_134 = __this->get_progressTarget_8();
				int32_t L_135 = __this->get_sceneType_5();
				NullCheck(L_132);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_132, L_133, L_134, L_135, /*hidden argument*/NULL);
				// InvokeLoadedActions(validNames, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_136 = V_1;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_137 = __this->get_U3CvalidNamesU3E5__3_10();
				int32_t L_138 = __this->get_sceneType_5();
				NullCheck(L_136);
				MixedRealitySceneSystem_InvokeLoadedActions_m00B43F413B0F91AEFCB495C49653C1DDA6419CDA(L_136, L_137, L_138, /*hidden argument*/NULL);
				// }
				__this->set_U3CvalidNamesU3E5__3_10((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
				__this->set_U3CvalidIndexesU3E5__4_11((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL);
				IL2CPP_LEAVE(0x48D, FINALLY_0477);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0477;
		}

FINALLY_0477:
		{ // begin finally (depth: 2)
			{
				int32_t L_139 = V_0;
				if ((((int32_t)L_139) >= ((int32_t)0)))
				{
					goto IL_048c;
				}
			}

IL_047b:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_140 = __this->get_address_of_U3CU3E7__wrap1_9();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_140, /*hidden argument*/NULL);
			}

IL_048c:
			{
				IL2CPP_END_FINALLY(1143)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1143)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4B4, IL_04b4)
			IL2CPP_JUMP_TBL(0x4C7, IL_04c7)
			IL2CPP_JUMP_TBL(0x48D, IL_048d)
		}

IL_048d:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_141 = __this->get_address_of_U3CU3E7__wrap1_9();
			il2cpp_codegen_initobj(L_141, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_04b4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_049b;
		throw e;
	}

CATCH_049b:
	{ // begin catch(System.Exception)
		V_18 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_142 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_143 = V_18;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_142, L_143, /*hidden argument*/NULL);
		goto IL_04c7;
	} // end catch (depth: 1)

IL_04b4:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_144 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_144, /*hidden argument*/NULL);
	}

IL_04c7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadScenesInternalU3Ed__125_MoveNext_mF7C040E0713E930B421F41B7F00461DCB33C53B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * _thisAdjusted = reinterpret_cast<U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *>(__this + _offset);
	U3CLoadScenesInternalU3Ed__125_MoveNext_mF7C040E0713E930B421F41B7F00461DCB33C53B0(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<LoadScenesInternal>d__125::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadScenesInternalU3Ed__125_SetStateMachine_mC96B998DC8A456C783913D211948AAB6EB58FDB3 (U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadScenesInternalU3Ed__125_SetStateMachine_mC96B998DC8A456C783913D211948AAB6EB58FDB3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 * _thisAdjusted = reinterpret_cast<U3CLoadScenesInternalU3Ed__125_t2FE4E40B1FDCEE1C3C18645D4D4B8B2DEE04D4B5 *>(__this + _offset);
	U3CLoadScenesInternalU3Ed__125_SetStateMachine_mC96B998DC8A456C783913D211948AAB6EB58FDB3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLightingSceneU3Ed__121_MoveNext_m43135087D76934D405B9EA80ACAF75A3BBEC3E0A (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7CCDFB0E8AE260356DF7060F430DFFEF181D8409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D23BB46984C572DD75D55BDEE3ABB4F24AD485A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268319C24C23F7C52FDAE5CC9C9DBB93AEFBD870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8110670B52ABA8ECC8A78D435AB15217C5B42D5D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 14);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
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
			// using (SetLightingScenePerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_SetLightingScenePerfMarker_48();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6(L_4);
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
					goto IL_0160;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_01fc;
				}
			}

IL_0033:
			{
				// if (ActiveLightingScene == newLightingSceneName)
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = MixedRealitySceneSystem_get_ActiveLightingScene_mD8121BEAFC07751C224F8FAC758D4EFD1DE3CDBF_inline(L_7, /*hidden argument*/NULL);
				String_t* L_9 = __this->get_newLightingSceneName_3();
				bool L_10;
				L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_9, /*hidden argument*/NULL);
				if (!L_10)
				{
					goto IL_004b;
				}
			}

IL_0046:
			{
				// return;
				IL2CPP_LEAVE(0x2DF, FINALLY_02a2);
			}

IL_004b:
			{
				// if (!CanSceneOpProceed(SceneType.Lighting))
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744(L_11, 2, /*hidden argument*/NULL);
				if (L_12)
				{
					goto IL_0063;
				}
			}

IL_0054:
			{
				// Debug.LogError("Attempting to perform a scene op when a scene op is already in progress.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x2DF, FINALLY_02a2);
			}

IL_0063:
			{
				// RuntimeLightingSettings lightingSettings = default(RuntimeLightingSettings);
				il2cpp_codegen_initobj((&V_4), sizeof(RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B ));
				// RuntimeRenderSettings renderSettings = default(RuntimeRenderSettings);
				il2cpp_codegen_initobj((&V_5), sizeof(RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F ));
				// RuntimeSunlightSettings sunSettings = default(RuntimeSunlightSettings);
				il2cpp_codegen_initobj((&V_6), sizeof(RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 ));
				// if (!string.IsNullOrEmpty(newLightingSceneName) && !profile.GetLightingSceneSettings(
				//     newLightingSceneName,
				//     out lightingScene,
				//     out lightingSettings,
				//     out renderSettings,
				//     out sunSettings))
				String_t* L_13 = __this->get_newLightingSceneName_3();
				bool L_14;
				L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_00c2;
				}
			}

IL_0088:
			{
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_15 = V_1;
				NullCheck(L_15);
				MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_16;
				L_16 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(L_15, /*hidden argument*/NULL);
				String_t* L_17 = __this->get_newLightingSceneName_3();
				NullCheck(L_16);
				bool L_18;
				L_18 = MixedRealitySceneSystemProfile_GetLightingSceneSettings_m8D92258A9BF3F803DE8F537222D05F6ED71AA6FC(L_16, L_17, (SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C *)(&V_3), (RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B *)(&V_4), (RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F *)(&V_5), (RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 *)(&V_6), /*hidden argument*/NULL);
				if (L_18)
				{
					goto IL_00c2;
				}
			}

IL_00a3:
			{
				// Debug.LogWarning("Couldn't find lighting scene " + newLightingSceneName + " in profile - taking no action.");
				String_t* L_19 = __this->get_newLightingSceneName_3();
				String_t* L_20;
				L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral268319C24C23F7C52FDAE5CC9C9DBB93AEFBD870, L_19, _stringLiteral8110670B52ABA8ECC8A78D435AB15217C5B42D5D, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_20, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x2DF, FINALLY_02a2);
			}

IL_00c2:
			{
				// ActiveLightingScene = newLightingSceneName;
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_21 = V_1;
				String_t* L_22 = __this->get_newLightingSceneName_3();
				NullCheck(L_21);
				MixedRealitySceneSystem_set_ActiveLightingScene_m6C680D8072984AEDF32085CBB9E3D29373EFF42E_inline(L_21, L_22, /*hidden argument*/NULL);
				// if (!Application.isPlaying)
				bool L_23;
				L_23 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_23)
				{
					goto IL_00da;
				}
			}

IL_00d5:
			{
				// return;
				IL2CPP_LEAVE(0x2DF, FINALLY_02a2);
			}

IL_00da:
			{
				// lightingExecutor.StartTransition(lightingSettings, renderSettings, sunSettings, transitionType, transitionDuration);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_24 = V_1;
				NullCheck(L_24);
				SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * L_25 = L_24->get_lightingExecutor_18();
				RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_26 = V_4;
				RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_27 = V_5;
				RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_28 = V_6;
				int32_t L_29 = __this->get_transitionType_4();
				float L_30 = __this->get_transitionDuration_5();
				NullCheck(L_25);
				SceneLightingExecutor_StartTransition_mF226B047F423046A6A873D5DB68EE2391F21B0D0(L_25, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
				// List<string> lightingSceneNames = new List<string>();
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
				List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_31, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
				__this->set_U3ClightingSceneNamesU3E5__3_7(L_31);
				// foreach (SceneInfo lso in profile.LightingScenes)
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_32 = V_1;
				NullCheck(L_32);
				MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_33;
				L_33 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(L_32, /*hidden argument*/NULL);
				NullCheck(L_33);
				RuntimeObject* L_34;
				L_34 = MixedRealitySceneSystemProfile_get_LightingScenes_m4DB634A6825E611FD03DC280896168B9C6D4747B_inline(L_33, /*hidden argument*/NULL);
				NullCheck(L_34);
				RuntimeObject* L_35;
				L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>::GetEnumerator() */, IEnumerable_1_t7CCDFB0E8AE260356DF7060F430DFFEF181D8409_il2cpp_TypeInfo_var, L_34);
				V_7 = L_35;
			}

IL_0114:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0145;
				}

IL_0116:
				{
					// foreach (SceneInfo lso in profile.LightingScenes)
					RuntimeObject* L_36 = V_7;
					NullCheck(L_36);
					SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_37;
					L_37 = InterfaceFuncInvoker0< SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>::get_Current() */, IEnumerator_1_t9D23BB46984C572DD75D55BDEE3ABB4F24AD485A_il2cpp_TypeInfo_var, L_36);
					V_8 = L_37;
					// if (lso.Name != newLightingSceneName)
					SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_38 = V_8;
					String_t* L_39 = L_38.get_Name_1();
					String_t* L_40 = __this->get_newLightingSceneName_3();
					bool L_41;
					L_41 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_39, L_40, /*hidden argument*/NULL);
					if (!L_41)
					{
						goto IL_0145;
					}
				}

IL_0133:
				{
					// lightingSceneNames.Add(lso.Name);
					List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = __this->get_U3ClightingSceneNamesU3E5__3_7();
					SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_43 = V_8;
					String_t* L_44 = L_43.get_Name_1();
					NullCheck(L_42);
					List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_42, L_44, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
				}

IL_0145:
				{
					// foreach (SceneInfo lso in profile.LightingScenes)
					RuntimeObject* L_45 = V_7;
					NullCheck(L_45);
					bool L_46;
					L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_45);
					if (L_46)
					{
						goto IL_0116;
					}
				}

IL_014e:
				{
					IL2CPP_LEAVE(0x160, FINALLY_0150);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0150;
			}

FINALLY_0150:
			{ // begin finally (depth: 3)
				{
					int32_t L_47 = V_0;
					if ((((int32_t)L_47) >= ((int32_t)0)))
					{
						goto IL_015f;
					}
				}

IL_0154:
				{
					RuntimeObject* L_48 = V_7;
					if (!L_48)
					{
						goto IL_015f;
					}
				}

IL_0158:
				{
					RuntimeObject* L_49 = V_7;
					NullCheck(L_49);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_49);
				}

IL_015f:
				{
					IL2CPP_END_FINALLY(336)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(336)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x160, IL_0160)
			}

IL_0160:
			{
			}

IL_0161:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_50 = V_0;
					if (!L_50)
					{
						goto IL_01ba;
					}
				}

IL_0164:
				{
					// await LoadScenesInternal(new string[] { newLightingSceneName }, SceneType.Lighting, null, 0f, 0.5f, true);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_51 = V_1;
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_52;
					String_t* L_54 = __this->get_newLightingSceneName_3();
					NullCheck(L_53);
					ArrayElementTypeCheck (L_53, L_54);
					(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_54);
					NullCheck(L_51);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_55;
					L_55 = MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB(L_51, (RuntimeObject*)(RuntimeObject*)L_53, 2, (SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B *)NULL, (0.0f), (0.5f), (bool)1, /*hidden argument*/NULL);
					NullCheck(L_55);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_56;
					L_56 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_55, /*hidden argument*/NULL);
					V_9 = L_56;
					bool L_57;
					L_57 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					if (L_57)
					{
						goto IL_01d7;
					}
				}

IL_0196:
				{
					int32_t L_58 = 0;
					V_0 = L_58;
					__this->set_U3CU3E1__state_0(L_58);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_59 = V_9;
					__this->set_U3CU3Eu__1_8(L_59);
					AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_60 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_60, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_RuntimeMethod_var);
					IL2CPP_LEAVE(0x2F2, FINALLY_02a2);
				}

IL_01ba:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = __this->get_U3CU3Eu__1_8();
					V_9 = L_61;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_62 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_63 = (-1);
					V_0 = L_63;
					__this->set_U3CU3E1__state_0(L_63);
				}

IL_01d7:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					// }
					goto IL_01fc;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_01e0;
				throw e;
			}

CATCH_01e0:
			{ // begin catch(System.Exception)
				// Debug.LogError("Exception when attempting to load lighting scene " + newLightingSceneName);
				String_t* L_64 = __this->get_newLightingSceneName_3();
				String_t* L_65;
				L_65 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97F7815AD56148656C76ADE3962C4D9FDC0CBC59)), L_64, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_65, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_01fc;
			} // end catch (depth: 3)

IL_01fc:
			{
			}

IL_01fd:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_66 = V_0;
					if ((((int32_t)L_66) == ((int32_t)1)))
					{
						goto IL_024d;
					}
				}

IL_0201:
				{
					// await UnloadScenesInternal(lightingSceneNames, SceneType.Lighting, 0.5f, 1f, false);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_67 = V_1;
					List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_68 = __this->get_U3ClightingSceneNamesU3E5__3_7();
					NullCheck(L_67);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_69;
					L_69 = MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD(L_67, L_68, 2, (0.5f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_69);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_70;
					L_70 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_69, /*hidden argument*/NULL);
					V_9 = L_70;
					bool L_71;
					L_71 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					if (L_71)
					{
						goto IL_026a;
					}
				}

IL_0229:
				{
					int32_t L_72 = 1;
					V_0 = L_72;
					__this->set_U3CU3E1__state_0(L_72);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_73 = V_9;
					__this->set_U3CU3Eu__1_8(L_73);
					AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_74 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_74, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1_mCC54F1FA6DA8E82E35B21E093D41CC3A25F33D56_RuntimeMethod_var);
					IL2CPP_LEAVE(0x2F2, FINALLY_02a2);
				}

IL_024d:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_75 = __this->get_U3CU3Eu__1_8();
					V_9 = L_75;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_76 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_76, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_77 = (-1);
					V_0 = L_77;
					__this->set_U3CU3E1__state_0(L_77);
				}

IL_026a:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					// }
					goto IL_0299;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0273;
				throw e;
			}

CATCH_0273:
			{ // begin catch(System.Exception)
				// Debug.LogError("Exception when attempting to unload lighting scene " + string.Join(", ", lightingSceneNames));
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_78 = __this->get_U3ClightingSceneNamesU3E5__3_7();
				String_t* L_79;
				L_79 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_78, /*hidden argument*/NULL);
				String_t* L_80;
				L_80 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA440B9635BDCA4A03E0EC86D7BE6AC7DB0E3B89A)), L_79, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_80, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_0299;
			} // end catch (depth: 3)

IL_0299:
			{
				// }
				__this->set_U3ClightingSceneNamesU3E5__3_7((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
				IL2CPP_LEAVE(0x2B8, FINALLY_02a2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02a2;
		}

FINALLY_02a2:
		{ // begin finally (depth: 2)
			{
				int32_t L_81 = V_0;
				if ((((int32_t)L_81) >= ((int32_t)0)))
				{
					goto IL_02b7;
				}
			}

IL_02a6:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_82 = __this->get_address_of_U3CU3E7__wrap1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_82, /*hidden argument*/NULL);
			}

IL_02b7:
			{
				IL2CPP_END_FINALLY(674)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(674)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2DF, IL_02df)
			IL2CPP_JUMP_TBL(0x2F2, IL_02f2)
			IL2CPP_JUMP_TBL(0x2B8, IL_02b8)
		}

IL_02b8:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_83 = __this->get_address_of_U3CU3E7__wrap1_6();
			il2cpp_codegen_initobj(L_83, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_02df;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02c6;
		throw e;
	}

CATCH_02c6:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_84 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_85 = V_10;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_84, L_85, /*hidden argument*/NULL);
		goto IL_02f2;
	} // end catch (depth: 1)

IL_02df:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_86 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_86, /*hidden argument*/NULL);
	}

IL_02f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetLightingSceneU3Ed__121_MoveNext_m43135087D76934D405B9EA80ACAF75A3BBEC3E0A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * _thisAdjusted = reinterpret_cast<U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *>(__this + _offset);
	U3CSetLightingSceneU3Ed__121_MoveNext_m43135087D76934D405B9EA80ACAF75A3BBEC3E0A(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetLightingScene>d__121::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLightingSceneU3Ed__121_SetStateMachine_m4D214F5CBD7CE35A808B311032BF5A8D5DCE9318 (U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetLightingSceneU3Ed__121_SetStateMachine_m4D214F5CBD7CE35A808B311032BF5A8D5DCE9318_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 * _thisAdjusted = reinterpret_cast<U3CSetLightingSceneU3Ed__121_t59B8699C533BCABA986B4CAAE1D5172ACA8855D1 *>(__this + _offset);
	U3CSetLightingSceneU3Ed__121_SetStateMachine_m4D214F5CBD7CE35A808B311032BF5A8D5DCE9318(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetManagerSceneU3Ed__123_MoveNext_m4DFF0119C63A50A62BB9DBDC07BA03C972664CE8 (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
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
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (SetManagerScenePerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_SetManagerScenePerfMarker_49();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_004b;
				}
			}

IL_0028:
			{
				// Scene scene = SceneManager.GetSceneByName(managerSceneName);
				String_t* L_6 = __this->get_managerSceneName_2();
				IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
				Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_7;
				L_7 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_6, /*hidden argument*/NULL);
				V_3 = L_7;
				// if (scene.IsValid() && !scene.isLoaded)
				bool L_8;
				L_8 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_004b;
				}
			}

IL_003d:
			{
				bool L_9;
				L_9 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
				if (L_9)
				{
					goto IL_004b;
				}
			}

IL_0046:
			{
				// return;
				IL2CPP_LEAVE(0x126, FINALLY_00e9);
			}

IL_004b:
			{
			}

IL_004c:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_10 = V_0;
					if (!L_10)
					{
						goto IL_00a5;
					}
				}

IL_004f:
				{
					// await LoadScenesInternal(new string[] { managerSceneName }, SceneType.Manager);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_11 = V_1;
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
					StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
					String_t* L_14 = __this->get_managerSceneName_2();
					NullCheck(L_13);
					ArrayElementTypeCheck (L_13, L_14);
					(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
					NullCheck(L_11);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15;
					L_15 = MixedRealitySceneSystem_LoadScenesInternal_m62ADD45BE8A5891BE125433AD80397FDC50E8ABB(L_11, (RuntimeObject*)(RuntimeObject*)L_13, 0, (SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B *)NULL, (0.0f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_15);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16;
					L_16 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_15, /*hidden argument*/NULL);
					V_4 = L_16;
					bool L_17;
					L_17 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
					if (L_17)
					{
						goto IL_00c2;
					}
				}

IL_0081:
				{
					int32_t L_18 = 0;
					V_0 = L_18;
					__this->set_U3CU3E1__state_0(L_18);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19 = V_4;
					__this->set_U3CU3Eu__1_5(L_19);
					AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198_m2B1233CC498EB5AAB7633175CC4BF6666B4E34F5_RuntimeMethod_var);
					IL2CPP_LEAVE(0x139, FINALLY_00e9);
				}

IL_00a5:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_21 = __this->get_U3CU3Eu__1_5();
					V_4 = L_21;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_22 = __this->get_address_of_U3CU3Eu__1_5();
					il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_23 = (-1);
					V_0 = L_23;
					__this->set_U3CU3E1__state_0(L_23);
				}

IL_00c2:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
					// }
					goto IL_00e7;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_00cb;
				throw e;
			}

CATCH_00cb:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to set manager scene " + managerSceneName);
				String_t* L_24 = __this->get_managerSceneName_2();
				String_t* L_25;
				L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0B82E0983768A3BCEDA42F98C0348059CD3EDF4)), L_24, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_25, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_00e7;
			} // end catch (depth: 3)

IL_00e7:
			{
				// }
				IL2CPP_LEAVE(0xFF, FINALLY_00e9);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e9;
		}

FINALLY_00e9:
		{ // begin finally (depth: 2)
			{
				int32_t L_26 = V_0;
				if ((((int32_t)L_26) >= ((int32_t)0)))
				{
					goto IL_00fe;
				}
			}

IL_00ed:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3E7__wrap1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_27, /*hidden argument*/NULL);
			}

IL_00fe:
			{
				IL2CPP_END_FINALLY(233)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(233)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x126, IL_0126)
			IL2CPP_JUMP_TBL(0x139, IL_0139)
			IL2CPP_JUMP_TBL(0xFF, IL_00ff)
		}

IL_00ff:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_28 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_28, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0126;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_010d;
		throw e;
	}

CATCH_010d:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_30 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_29, L_30, /*hidden argument*/NULL);
		goto IL_0139;
	} // end catch (depth: 1)

IL_0126:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_31, /*hidden argument*/NULL);
	}

IL_0139:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetManagerSceneU3Ed__123_MoveNext_m4DFF0119C63A50A62BB9DBDC07BA03C972664CE8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * _thisAdjusted = reinterpret_cast<U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *>(__this + _offset);
	U3CSetManagerSceneU3Ed__123_MoveNext_m4DFF0119C63A50A62BB9DBDC07BA03C972664CE8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<SetManagerScene>d__123::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetManagerSceneU3Ed__123_SetStateMachine_m5968600EBBA207E51C546C18DC65AD43400D83B4 (U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetManagerSceneU3Ed__123_SetStateMachine_m5968600EBBA207E51C546C18DC65AD43400D83B4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 * _thisAdjusted = reinterpret_cast<U3CSetManagerSceneU3Ed__123_t279D121D1E1E781ED3D2162C44B479493EC6C198 *>(__this + _offset);
	U3CSetManagerSceneU3Ed__123_SetStateMachine_m5968600EBBA207E51C546C18DC65AD43400D83B4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__109_MoveNext_m1BEF6C5F9DE0D6151A1F1E8E62005196AAA2510A (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
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
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055;
			}
		}

IL_0011:
		{
			// await UnloadContent(new string[] { sceneToUnload });
			MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_3 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
			String_t* L_6 = __this->get_sceneToUnload_3();
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = MixedRealitySceneSystem_UnloadContent_m7A2D6D7306B624B4828A92F20F7B1E86D8B41A2B(L_3, (RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
			L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0071;
			}
		}

IL_0035:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_2;
			__this->set_U3CU3Eu__1_4(L_11);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027_m7A3BDC4CFFE739A7417E8F07D5BCE1E5FCAEADA3_RuntimeMethod_var);
			goto IL_00a4;
		}

IL_0055:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_4();
			V_2 = L_13;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0071:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0091;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007a;
		throw e;
	}

CATCH_007a:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, L_17, /*hidden argument*/NULL);
		goto IL_00a4;
	} // end catch (depth: 1)

IL_0091:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentU3Ed__109_MoveNext_m1BEF6C5F9DE0D6151A1F1E8E62005196AAA2510A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * _thisAdjusted = reinterpret_cast<U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *>(__this + _offset);
	U3CUnloadContentU3Ed__109_MoveNext_m1BEF6C5F9DE0D6151A1F1E8E62005196AAA2510A(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__109::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__109_SetStateMachine_m1DC375DC50D1C74ED65DB0A4C7395AE3012A6AB1 (U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentU3Ed__109_SetStateMachine_m1DC375DC50D1C74ED65DB0A4C7395AE3012A6AB1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 * _thisAdjusted = reinterpret_cast<U3CUnloadContentU3Ed__109_t07F77F376C025BFE28FE7576538C1B82A5BDE027 *>(__this + _offset);
	U3CUnloadContentU3Ed__109_SetStateMachine_m1DC375DC50D1C74ED65DB0A4C7395AE3012A6AB1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__117_MoveNext_m05198CEF905977F3B7A740FFFDA7969F696A0AE8 (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
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
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (UnloadContentPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_UnloadContentPerfMarker_46();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0040;
				}
			}

IL_0028:
			{
				// if (!CanSceneOpProceed(SceneType.Content))
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_6 = V_1;
				NullCheck(L_6);
				bool L_7;
				L_7 = MixedRealitySceneSystem_CanSceneOpProceed_m219FC67F0B56000E763B91DE96E351F281BE6744(L_6, 1, /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_0040;
				}
			}

IL_0031:
			{
				// Debug.LogError("Attempting to perform a scene op when a scene op is already in progress.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3908975757E42E03F1CA894B586F4EA2C1A28DFE, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x118, FINALLY_00db);
			}

IL_0040:
			{
			}

IL_0041:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_8 = V_0;
					if (!L_8)
					{
						goto IL_008e;
					}
				}

IL_0044:
				{
					// await UnloadScenesInternal(scenesToUnload, SceneType.Content);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_9 = V_1;
					RuntimeObject* L_10 = __this->get_scenesToUnload_3();
					NullCheck(L_9);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
					L_11 = MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD(L_9, L_10, 1, (0.0f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_11);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12;
					L_12 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_11, /*hidden argument*/NULL);
					V_3 = L_12;
					bool L_13;
					L_13 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_13)
					{
						goto IL_00aa;
					}
				}

IL_006b:
				{
					int32_t L_14 = 0;
					V_0 = L_14;
					__this->set_U3CU3E1__state_0(L_14);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = V_3;
					__this->set_U3CU3Eu__1_5(L_15);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9_m12801F8B91580685DE8C3E620D3E1C2C84AFC353_RuntimeMethod_var);
					IL2CPP_LEAVE(0x12B, FINALLY_00db);
				}

IL_008e:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = __this->get_U3CU3Eu__1_5();
					V_3 = L_17;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_18 = __this->get_address_of_U3CU3Eu__1_5();
					il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_19 = (-1);
					V_0 = L_19;
					__this->set_U3CU3E1__state_0(L_19);
				}

IL_00aa:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					// }
					goto IL_00d9;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_00b3;
				throw e;
			}

CATCH_00b3:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to unload content " + String.Join(", ", scenesToUnload));
				RuntimeObject* L_20 = __this->get_scenesToUnload_3();
				String_t* L_21;
				L_21 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_20, /*hidden argument*/NULL);
				String_t* L_22;
				L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F2C876136CD92EF044000F361B1C35D1C1D82D7)), L_21, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_22, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_00d9;
			} // end catch (depth: 3)

IL_00d9:
			{
				// }
				IL2CPP_LEAVE(0xF1, FINALLY_00db);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00db;
		}

FINALLY_00db:
		{ // begin finally (depth: 2)
			{
				int32_t L_23 = V_0;
				if ((((int32_t)L_23) >= ((int32_t)0)))
				{
					goto IL_00f0;
				}
			}

IL_00df:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_24 = __this->get_address_of_U3CU3E7__wrap1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_24, /*hidden argument*/NULL);
			}

IL_00f0:
			{
				IL2CPP_END_FINALLY(219)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(219)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x118, IL_0118)
			IL2CPP_JUMP_TBL(0x12B, IL_012b)
			IL2CPP_JUMP_TBL(0xF1, IL_00f1)
		}

IL_00f1:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_25 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_25, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0118;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ff;
		throw e;
	}

CATCH_00ff:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_27 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_26, L_27, /*hidden argument*/NULL);
		goto IL_012b;
	} // end catch (depth: 1)

IL_0118:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, /*hidden argument*/NULL);
	}

IL_012b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentU3Ed__117_MoveNext_m05198CEF905977F3B7A740FFFDA7969F696A0AE8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * _thisAdjusted = reinterpret_cast<U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *>(__this + _offset);
	U3CUnloadContentU3Ed__117_MoveNext_m05198CEF905977F3B7A740FFFDA7969F696A0AE8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContent>d__117::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentU3Ed__117_SetStateMachine_mA2512D923B9C97CD7748FA95307C6D45160A7287 (U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentU3Ed__117_SetStateMachine_mA2512D923B9C97CD7748FA95307C6D45160A7287_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 * _thisAdjusted = reinterpret_cast<U3CUnloadContentU3Ed__117_t9672E2C4696700E2DE677E63B225D5F2D9D94BD9 *>(__this + _offset);
	U3CUnloadContentU3Ed__117_SetStateMachine_mA2512D923B9C97CD7748FA95307C6D45160A7287(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentByTagU3Ed__113_MoveNext_m2109E0F46D90C590CDFF1E6705C5A73575D8F991 (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (UnloadContentByTagPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_UnloadContentByTagPerfMarker_44();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
			}

IL_0028:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_6 = V_0;
					if (!L_6)
					{
						goto IL_0080;
					}
				}

IL_002b:
				{
					// await UnloadScenesInternal(profile.GetContentSceneNamesByTag(tag), SceneType.Content);
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_7 = V_1;
					MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_8 = V_1;
					NullCheck(L_8);
					MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_9;
					L_9 = MixedRealitySceneSystem_get_profile_m517FFEE2C64F3D27F4B5927D40D72AF2A3F52404(L_8, /*hidden argument*/NULL);
					String_t* L_10 = __this->get_tag_3();
					NullCheck(L_9);
					RuntimeObject* L_11;
					L_11 = MixedRealitySceneSystemProfile_GetContentSceneNamesByTag_m0F8F15A3F74776491021DE1B4E0554B52FD8365C(L_9, L_10, /*hidden argument*/NULL);
					NullCheck(L_7);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12;
					L_12 = MixedRealitySceneSystem_UnloadScenesInternal_m36DB002D20ECA983A94E30F8255E2045A4A53FCD(L_7, L_11, 1, (0.0f), (1.0f), (bool)0, /*hidden argument*/NULL);
					NullCheck(L_12);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13;
					L_13 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_12, /*hidden argument*/NULL);
					V_3 = L_13;
					bool L_14;
					L_14 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_14)
					{
						goto IL_009c;
					}
				}

IL_005d:
				{
					int32_t L_15 = 0;
					V_0 = L_15;
					__this->set_U3CU3E1__state_0(L_15);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = V_3;
					__this->set_U3CU3Eu__1_5(L_16);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE_mE2712EB84747D1255202D04DB49D07B3F05FF699_RuntimeMethod_var);
					IL2CPP_LEAVE(0x113, FINALLY_00c3);
				}

IL_0080:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = __this->get_U3CU3Eu__1_5();
					V_3 = L_18;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_19 = __this->get_address_of_U3CU3Eu__1_5();
					il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_20 = (-1);
					V_0 = L_20;
					__this->set_U3CU3E1__state_0(L_20);
				}

IL_009c:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					// }
					goto IL_00c1;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_00a5;
				throw e;
			}

CATCH_00a5:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when attempting to unload content by tag " + tag);
				String_t* L_21 = __this->get_tag_3();
				String_t* L_22;
				L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DDDA5269F8E4C7121601AF4C0096E4ABDB21BC7)), L_21, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_22, /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// }
				goto IL_00c1;
			} // end catch (depth: 3)

IL_00c1:
			{
				// }
				IL2CPP_LEAVE(0xD9, FINALLY_00c3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c3;
		}

FINALLY_00c3:
		{ // begin finally (depth: 2)
			{
				int32_t L_23 = V_0;
				if ((((int32_t)L_23) >= ((int32_t)0)))
				{
					goto IL_00d8;
				}
			}

IL_00c7:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_24 = __this->get_address_of_U3CU3E7__wrap1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_24, /*hidden argument*/NULL);
			}

IL_00d8:
			{
				IL2CPP_END_FINALLY(195)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(195)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x113, IL_0113)
			IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		}

IL_00d9:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_25 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_25, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0100;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e7;
		throw e;
	}

CATCH_00e7:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_27 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_26, L_27, /*hidden argument*/NULL);
		goto IL_0113;
	} // end catch (depth: 1)

IL_0100:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, /*hidden argument*/NULL);
	}

IL_0113:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentByTagU3Ed__113_MoveNext_m2109E0F46D90C590CDFF1E6705C5A73575D8F991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * _thisAdjusted = reinterpret_cast<U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *>(__this + _offset);
	U3CUnloadContentByTagU3Ed__113_MoveNext_m2109E0F46D90C590CDFF1E6705C5A73575D8F991(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadContentByTag>d__113::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadContentByTagU3Ed__113_SetStateMachine_mA21AAA5FEB4ADCAC0D03605F63AAB6A61910303C (U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadContentByTagU3Ed__113_SetStateMachine_mA21AAA5FEB4ADCAC0D03605F63AAB6A61910303C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE * _thisAdjusted = reinterpret_cast<U3CUnloadContentByTagU3Ed__113_tFB66390260359D3F6FB06AE594B3ADC00E30E8BE *>(__this + _offset);
	U3CUnloadContentByTagU3Ed__113_SetStateMachine_mA21AAA5FEB4ADCAC0D03605F63AAB6A61910303C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesInternalU3Ed__127_MoveNext_m48BCDDF16478D2608506FA45E8483EC2F74FD056 (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F8E185D9FD03516C20F82A74126E6F58D82304A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9029A55184DF0A7FB220743934304A76498C17F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC6A17C1836ADDF38F24AA406ACF506245B2E2A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * V_11 = NULL;
	int32_t V_12 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_13;
	memset((&V_13), 0, sizeof(V_13));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t * V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 11);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_1 = __this->get_U3CU3E4__this_2();
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
			// using (UnloadScenesInternalPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060_il2cpp_TypeInfo_var))->get_UnloadScenesInternalPerfMarker_51();
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
					goto IL_0284;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_0367;
				}
			}

IL_0033:
			{
				// SetSceneOpProgress(true, progressOffset, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_7 = V_1;
				float L_8 = __this->get_progressOffset_3();
				int32_t L_9 = __this->get_sceneType_4();
				NullCheck(L_7);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_7, (bool)1, L_8, L_9, /*hidden argument*/NULL);
				// List<string> validNames = new List<string>();
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
				List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
				__this->set_U3CvalidNamesU3E5__3_9(L_10);
				// List<int> validIndexes = new List<int>();
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
				List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_11, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
				__this->set_U3CvalidIndexesU3E5__4_10(L_11);
				// foreach (string sceneName in scenesToUnload)
				RuntimeObject* L_12 = __this->get_scenesToUnload_5();
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
			}

IL_0068:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00b1;
				}

IL_006a:
				{
					// foreach (string sceneName in scenesToUnload)
					RuntimeObject* L_14 = V_3;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_14);
					V_4 = L_15;
					// if (!RuntimeSceneUtils.FindScene(sceneName, out scene, out sceneIndex))
					String_t* L_16 = V_4;
					bool L_17;
					L_17 = RuntimeSceneUtils_FindScene_m6B43F506C9BE6DA04D17C7971673F1A42C776FFB(L_16, (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
					if (L_17)
					{
						goto IL_0097;
					}
				}

IL_007f:
				{
					// Debug.LogError("Can't unload invalid scene " + sceneName + " - make sure the scene name is spelled correctly and that you have added the scene to your MixedRealitySceneSystem profile's content scenes array.");
					String_t* L_18 = V_4;
					String_t* L_19;
					L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral9029A55184DF0A7FB220743934304A76498C17F0, L_18, _stringLiteral1F8E185D9FD03516C20F82A74126E6F58D82304A, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
					Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
					// }
					goto IL_00b1;
				}

IL_0097:
				{
					// validIndexes.Add(sceneIndex);
					List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = __this->get_U3CvalidIndexesU3E5__4_10();
					int32_t L_21 = V_6;
					NullCheck(L_20);
					List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_20, L_21, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
					// validNames.Add(sceneName);
					List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22 = __this->get_U3CvalidNamesU3E5__3_9();
					String_t* L_23 = V_4;
					NullCheck(L_22);
					List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_22, L_23, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
				}

IL_00b1:
				{
					// foreach (string sceneName in scenesToUnload)
					RuntimeObject* L_24 = V_3;
					NullCheck(L_24);
					bool L_25;
					L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
					if (L_25)
					{
						goto IL_006a;
					}
				}

IL_00b9:
				{
					IL2CPP_LEAVE(0xC9, FINALLY_00bb);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00bb;
			}

FINALLY_00bb:
			{ // begin finally (depth: 3)
				{
					int32_t L_26 = V_0;
					if ((((int32_t)L_26) >= ((int32_t)0)))
					{
						goto IL_00c8;
					}
				}

IL_00bf:
				{
					RuntimeObject* L_27 = V_3;
					if (!L_27)
					{
						goto IL_00c8;
					}
				}

IL_00c2:
				{
					RuntimeObject* L_28 = V_3;
					NullCheck(L_28);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
				}

IL_00c8:
				{
					IL2CPP_END_FINALLY(187)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(187)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xC9, IL_00c9)
			}

IL_00c9:
			{
				// int totalSceneOps = validIndexes.Count;
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_29 = __this->get_U3CvalidIndexesU3E5__4_10();
				NullCheck(L_29);
				int32_t L_30;
				L_30 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_29, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
				__this->set_U3CtotalSceneOpsU3E5__5_11(L_30);
				// if (totalSceneOps < 1)
				int32_t L_31 = __this->get_U3CtotalSceneOpsU3E5__5_11();
				if ((((int32_t)L_31) >= ((int32_t)1)))
				{
					goto IL_010a;
				}
			}

IL_00e3:
			{
				// Debug.LogWarning("No valid scenes found to unload.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBDC6A17C1836ADDF38F24AA406ACF506245B2E2A, /*hidden argument*/NULL);
				// SetSceneOpProgress(sceneOpInProgressWhenFinished, progressTarget, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_32 = V_1;
				bool L_33 = __this->get_sceneOpInProgressWhenFinished_6();
				float L_34 = __this->get_progressTarget_7();
				int32_t L_35 = __this->get_sceneType_4();
				NullCheck(L_32);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x418, FINALLY_03db);
			}

IL_010a:
			{
				// InvokeWillUnloadActions(validNames, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_36 = V_1;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_37 = __this->get_U3CvalidNamesU3E5__3_9();
				int32_t L_38 = __this->get_sceneType_4();
				NullCheck(L_36);
				MixedRealitySceneSystem_InvokeWillUnloadActions_mC4D444433E92E10302D7B2415B83892A2052C6FB(L_36, L_37, L_38, /*hidden argument*/NULL);
				// if (validIndexes.Count > 0)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_39 = __this->get_U3CvalidIndexesU3E5__4_10();
				NullCheck(L_39);
				int32_t L_40;
				L_40 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_39, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
				if ((((int32_t)L_40) <= ((int32_t)0)))
				{
					goto IL_02ba;
				}
			}

IL_012d:
			{
				// List<AsyncOperation> unloadSceneOps = new List<AsyncOperation>();
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_41 = (List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *)il2cpp_codegen_object_new(List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2_il2cpp_TypeInfo_var);
				List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF(L_41, /*hidden argument*/List_1__ctor_mA57C4B5D4FA6A57B085F61C7BFC0696BD80E72DF_RuntimeMethod_var);
				__this->set_U3CunloadSceneOpsU3E5__7_13(L_41);
				// foreach (int sceneIndex in validIndexes)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_42 = __this->get_U3CvalidIndexesU3E5__4_10();
				NullCheck(L_42);
				Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_43;
				L_43 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_42, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
				V_8 = L_43;
			}

IL_0145:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0178;
				}

IL_0147:
				{
					// foreach (int sceneIndex in validIndexes)
					int32_t L_44;
					L_44 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
					V_9 = L_44;
					// Scene scene = SceneManager.GetSceneByBuildIndex(sceneIndex);
					int32_t L_45 = V_9;
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_46;
					L_46 = SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47(L_45, /*hidden argument*/NULL);
					V_10 = L_46;
					// if (!scene.isLoaded)
					bool L_47;
					L_47 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_10), /*hidden argument*/NULL);
					if (!L_47)
					{
						goto IL_0178;
					}
				}

IL_0162:
				{
					// AsyncOperation sceneOp = SceneManager.UnloadSceneAsync(sceneIndex);
					int32_t L_48 = V_9;
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_49;
					L_49 = SceneManager_UnloadSceneAsync_mE89C114E7045F6574072A53FF4CA219CA742A20D(L_48, /*hidden argument*/NULL);
					V_11 = L_49;
					// unloadSceneOps.Add(sceneOp);
					List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_50 = __this->get_U3CunloadSceneOpsU3E5__7_13();
					AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_51 = V_11;
					NullCheck(L_50);
					List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25(L_50, L_51, /*hidden argument*/List_1_Add_mDE3A73AFD462478C03F984196B706656ED374B25_RuntimeMethod_var);
				}

IL_0178:
				{
					// foreach (int sceneIndex in validIndexes)
					bool L_52;
					L_52 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
					if (L_52)
					{
						goto IL_0147;
					}
				}

IL_0181:
				{
					IL2CPP_LEAVE(0x195, FINALLY_0183);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0183;
			}

FINALLY_0183:
			{ // begin finally (depth: 3)
				{
					int32_t L_53 = V_0;
					if ((((int32_t)L_53) >= ((int32_t)0)))
					{
						goto IL_0194;
					}
				}

IL_0187:
				{
					Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
				}

IL_0194:
				{
					IL2CPP_END_FINALLY(387)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(387)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x195, IL_0195)
			}

IL_0195:
			{
				// bool completedAllSceneOps = false;
				__this->set_U3CcompletedAllSceneOpsU3E5__8_14((bool)0);
				// float sceneOpProgress = 0;
				V_7 = (0.0f);
				goto IL_02a8;
			}

IL_01a8:
			{
				// if (!Application.isPlaying)
				bool L_54;
				L_54 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_54)
				{
					goto IL_01b4;
				}
			}

IL_01af:
			{
				// return;
				IL2CPP_LEAVE(0x418, FINALLY_03db);
			}

IL_01b4:
			{
				// completedAllSceneOps = true;
				__this->set_U3CcompletedAllSceneOpsU3E5__8_14((bool)1);
				// sceneOpProgress = 0;
				V_7 = (0.0f);
				// for (int i = 0; i < unloadSceneOps.Count; i++)
				V_12 = 0;
				goto IL_0203;
			}

IL_01c7:
			{
				// sceneOpProgress += unloadSceneOps[i].progress;
				float L_55 = V_7;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_56 = __this->get_U3CunloadSceneOpsU3E5__7_13();
				int32_t L_57 = V_12;
				NullCheck(L_56);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_58;
				L_58 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_56, L_57, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				NullCheck(L_58);
				float L_59;
				L_59 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_58, /*hidden argument*/NULL);
				V_7 = ((float)il2cpp_codegen_add((float)L_55, (float)L_59));
				// completedAllSceneOps &= unloadSceneOps[i].isDone;
				bool L_60 = __this->get_U3CcompletedAllSceneOpsU3E5__8_14();
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_61 = __this->get_U3CunloadSceneOpsU3E5__7_13();
				int32_t L_62 = V_12;
				NullCheck(L_61);
				AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_63;
				L_63 = List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_mC9B8B8819EFD1B5CADE200580F0079428B7D06B6_RuntimeMethod_var);
				NullCheck(L_63);
				bool L_64;
				L_64 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_63, /*hidden argument*/NULL);
				__this->set_U3CcompletedAllSceneOpsU3E5__8_14((bool)((int32_t)((int32_t)L_60&(int32_t)L_64)));
				// for (int i = 0; i < unloadSceneOps.Count; i++)
				int32_t L_65 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
			}

IL_0203:
			{
				// for (int i = 0; i < unloadSceneOps.Count; i++)
				int32_t L_66 = V_12;
				List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 * L_67 = __this->get_U3CunloadSceneOpsU3E5__7_13();
				NullCheck(L_67);
				int32_t L_68;
				L_68 = List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_inline(L_67, /*hidden argument*/List_1_get_Count_m95BB802A1D68FADBCF61B8C1056D701363AAF9C6_RuntimeMethod_var);
				if ((((int32_t)L_66) < ((int32_t)L_68)))
				{
					goto IL_01c7;
				}
			}

IL_0212:
			{
				// sceneOpProgress = Mathf.Clamp01(SceneOperationProgress / totalSceneOps);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_69 = V_1;
				NullCheck(L_69);
				float L_70;
				L_70 = MixedRealitySceneSystem_get_SceneOperationProgress_m905900F563F4809DE6FF7AA6A5ED5DB5BD0A7130_inline(L_69, /*hidden argument*/NULL);
				int32_t L_71 = __this->get_U3CtotalSceneOpsU3E5__5_11();
				float L_72;
				L_72 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_70/(float)((float)((float)L_71)))), /*hidden argument*/NULL);
				V_7 = L_72;
				// SetSceneOpProgress(true, Mathf.Lerp(progressOffset, progressTarget, sceneOpProgress), sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_73 = V_1;
				float L_74 = __this->get_progressOffset_3();
				float L_75 = __this->get_progressTarget_7();
				float L_76 = V_7;
				float L_77;
				L_77 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_74, L_75, L_76, /*hidden argument*/NULL);
				int32_t L_78 = __this->get_sceneType_4();
				NullCheck(L_73);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_73, (bool)1, L_77, L_78, /*hidden argument*/NULL);
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_79;
				L_79 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_14 = L_79;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_80;
				L_80 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_14), /*hidden argument*/NULL);
				V_13 = L_80;
				bool L_81;
				L_81 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
				if (L_81)
				{
					goto IL_02a1;
				}
			}

IL_0260:
			{
				int32_t L_82 = 0;
				V_0 = L_82;
				__this->set_U3CU3E1__state_0(L_82);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_83 = V_13;
				__this->set_U3CU3Eu__1_15(L_83);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_84 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_84, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_RuntimeMethod_var);
				IL2CPP_LEAVE(0x42B, FINALLY_03db);
			}

IL_0284:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_85 = __this->get_U3CU3Eu__1_15();
				V_13 = L_85;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_86 = __this->get_address_of_U3CU3Eu__1_15();
				il2cpp_codegen_initobj(L_86, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_87 = (-1);
				V_0 = L_87;
				__this->set_U3CU3E1__state_0(L_87);
			}

IL_02a1:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
			}

IL_02a8:
			{
				// while (!completedAllSceneOps)
				bool L_88 = __this->get_U3CcompletedAllSceneOpsU3E5__8_14();
				if (!L_88)
				{
					goto IL_01a8;
				}
			}

IL_02b3:
			{
				// }
				__this->set_U3CunloadSceneOpsU3E5__7_13((List_1_t866E470B044C42DE7E15C40DDD3579A1008859B2 *)NULL);
			}

IL_02ba:
			{
				// bool scenesUnloaded = false;
				__this->set_U3CscenesUnloadedU3E5__6_12((bool)0);
				goto IL_038b;
			}

IL_02c6:
			{
				// if (!Application.isPlaying)
				bool L_89;
				L_89 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
				if (L_89)
				{
					goto IL_02d2;
				}
			}

IL_02cd:
			{
				// return;
				IL2CPP_LEAVE(0x418, FINALLY_03db);
			}

IL_02d2:
			{
				// scenesUnloaded = true;
				__this->set_U3CscenesUnloadedU3E5__6_12((bool)1);
				// foreach (int sceneIndex in validIndexes)
				List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_90 = __this->get_U3CvalidIndexesU3E5__4_10();
				NullCheck(L_90);
				Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_91;
				L_91 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_90, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
				V_8 = L_91;
			}

IL_02e6:
			try
			{ // begin try (depth: 3)
				{
					goto IL_030d;
				}

IL_02e8:
				{
					// foreach (int sceneIndex in validIndexes)
					int32_t L_92;
					L_92 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
					// Scene scene = SceneManager.GetSceneByBuildIndex(sceneIndex);
					IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
					Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_93;
					L_93 = SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47(L_92, /*hidden argument*/NULL);
					V_15 = L_93;
					// scenesUnloaded &= !scene.isLoaded;
					bool L_94 = __this->get_U3CscenesUnloadedU3E5__6_12();
					bool L_95;
					L_95 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_15), /*hidden argument*/NULL);
					__this->set_U3CscenesUnloadedU3E5__6_12((bool)((int32_t)((int32_t)L_94&(int32_t)((((int32_t)L_95) == ((int32_t)0))? 1 : 0))));
				}

IL_030d:
				{
					// foreach (int sceneIndex in validIndexes)
					bool L_96;
					L_96 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
					if (L_96)
					{
						goto IL_02e8;
					}
				}

IL_0316:
				{
					IL2CPP_LEAVE(0x32A, FINALLY_0318);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0318;
			}

FINALLY_0318:
			{ // begin finally (depth: 3)
				{
					int32_t L_97 = V_0;
					if ((((int32_t)L_97) >= ((int32_t)0)))
					{
						goto IL_0329;
					}
				}

IL_031c:
				{
					Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_8), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
				}

IL_0329:
				{
					IL2CPP_END_FINALLY(792)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(792)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x32A, IL_032a)
			}

IL_032a:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_98;
				L_98 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_14 = L_98;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_99;
				L_99 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_14), /*hidden argument*/NULL);
				V_13 = L_99;
				bool L_100;
				L_100 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
				if (L_100)
				{
					goto IL_0384;
				}
			}

IL_0343:
			{
				int32_t L_101 = 1;
				V_0 = L_101;
				__this->set_U3CU3E1__state_0(L_101);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_102 = V_13;
				__this->set_U3CU3Eu__1_15(L_102);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_103 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_103, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA_mB916A4A582D24AF97AE8DF7033B3B876C9588612_RuntimeMethod_var);
				IL2CPP_LEAVE(0x42B, FINALLY_03db);
			}

IL_0367:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_104 = __this->get_U3CU3Eu__1_15();
				V_13 = L_104;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_105 = __this->get_address_of_U3CU3Eu__1_15();
				il2cpp_codegen_initobj(L_105, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_106 = (-1);
				V_0 = L_106;
				__this->set_U3CU3E1__state_0(L_106);
			}

IL_0384:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
			}

IL_038b:
			{
				// while (!scenesUnloaded)
				bool L_107 = __this->get_U3CscenesUnloadedU3E5__6_12();
				if (!L_107)
				{
					goto IL_02c6;
				}
			}

IL_0396:
			{
				// contentTracker.RefreshLoadedContent();
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_108 = V_1;
				NullCheck(L_108);
				SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * L_109 = L_108->get_contentTracker_17();
				NullCheck(L_109);
				SceneContentTracker_RefreshLoadedContent_m90D7CEC8ADE1C0B571B22BB4D05AF692C68842E0(L_109, /*hidden argument*/NULL);
				// SetSceneOpProgress(sceneOpInProgressWhenFinished, progressTarget, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_110 = V_1;
				bool L_111 = __this->get_sceneOpInProgressWhenFinished_6();
				float L_112 = __this->get_progressTarget_7();
				int32_t L_113 = __this->get_sceneType_4();
				NullCheck(L_110);
				MixedRealitySceneSystem_SetSceneOpProgress_mF73273F0816C17141F73127631E2F316CD19E926(L_110, L_111, L_112, L_113, /*hidden argument*/NULL);
				// InvokeUnloadedActions(validNames, sceneType);
				MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * L_114 = V_1;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_115 = __this->get_U3CvalidNamesU3E5__3_9();
				int32_t L_116 = __this->get_sceneType_4();
				NullCheck(L_114);
				MixedRealitySceneSystem_InvokeUnloadedActions_mB978A03F32BD2DBDE5E4DB4FD511BDA7F4105B65(L_114, L_115, L_116, /*hidden argument*/NULL);
				// }
				__this->set_U3CvalidNamesU3E5__3_9((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
				__this->set_U3CvalidIndexesU3E5__4_10((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL);
				IL2CPP_LEAVE(0x3F1, FINALLY_03db);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_03db;
		}

FINALLY_03db:
		{ // begin finally (depth: 2)
			{
				int32_t L_117 = V_0;
				if ((((int32_t)L_117) >= ((int32_t)0)))
				{
					goto IL_03f0;
				}
			}

IL_03df:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_118 = __this->get_address_of_U3CU3E7__wrap1_8();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_118, /*hidden argument*/NULL);
			}

IL_03f0:
			{
				IL2CPP_END_FINALLY(987)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(987)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x418, IL_0418)
			IL2CPP_JUMP_TBL(0x42B, IL_042b)
			IL2CPP_JUMP_TBL(0x3F1, IL_03f1)
		}

IL_03f1:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_119 = __this->get_address_of_U3CU3E7__wrap1_8();
			il2cpp_codegen_initobj(L_119, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0418;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_03ff;
		throw e;
	}

CATCH_03ff:
	{ // begin catch(System.Exception)
		V_16 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_120 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_121 = V_16;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_120, L_121, /*hidden argument*/NULL);
		goto IL_042b;
	} // end catch (depth: 1)

IL_0418:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_122 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_122, /*hidden argument*/NULL);
	}

IL_042b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadScenesInternalU3Ed__127_MoveNext_m48BCDDF16478D2608506FA45E8483EC2F74FD056_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * _thisAdjusted = reinterpret_cast<U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *>(__this + _offset);
	U3CUnloadScenesInternalU3Ed__127_MoveNext_m48BCDDF16478D2608506FA45E8483EC2F74FD056(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<UnloadScenesInternal>d__127::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesInternalU3Ed__127_SetStateMachine_m20134336A87F77CB62CC3746D10CE3E2B83912E4 (U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnloadScenesInternalU3Ed__127_SetStateMachine_m20134336A87F77CB62CC3746D10CE3E2B83912E4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA * _thisAdjusted = reinterpret_cast<U3CUnloadScenesInternalU3Ed__127_tAB78BF78251F14142BA016F3DAAB393EFC0179CA *>(__this + _offset);
	U3CUnloadScenesInternalU3Ed__127_SetStateMachine_m20134336A87F77CB62CC3746D10CE3E2B83912E4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::.ctor(Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker__ctor_mBBFBC12E22F32121D3F0B5A1EC8FC08C857B3775 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * ___profile0, const RuntimeMethod* method)
{
	{
		// public SceneContentTracker(MixedRealitySceneSystemProfile profile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.profile = profile;
		MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_0 = ___profile0;
		__this->set_profile_0(L_0);
		// CacheSortedContent();
		SceneContentTracker_CacheSortedContent_mB169B1FF5367385CC8B03DA3E1DD8B0AB1C58297(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_ContentSceneNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SceneContentTracker_get_ContentSceneNames_mE1A78B5E9FDC19CE25DD11BEEA7D6BBA597747DD (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public string[] ContentSceneNames => contentSceneNames;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_contentSceneNames_3();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_SortedContentScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* SceneContentTracker_get_SortedContentScenes_m410DEFFE05C75D3836B8FDF8649AD38A463322D3 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public SceneInfo[] SortedContentScenes => sortedContentScenes;
		SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_0 = __this->get_sortedContentScenes_4();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_SortedLightingScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* SceneContentTracker_get_SortedLightingScenes_m52B046F843742C5CD5C2B74E9035EC923766716D (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public SceneInfo[] SortedLightingScenes => sortedLightingScenes;
		SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_0 = __this->get_sortedLightingScenes_5();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_PrevContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_get_PrevContentExists_mCECB8F20A8642233A42CAE228F53AE47FB84C87E (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public bool PrevContentExists { get { return smalledLoadedContentIndex > 0; } }
		int32_t L_0 = __this->get_smalledLoadedContentIndex_2();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::get_NextContentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_get_NextContentExists_mD261B61D5993D1702A8D392CC8FD010B62C0A94A (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public bool NextContentExists { get { return largestLoadedContentIndex < contentSceneNames.Length - 1; } }
		int32_t L_0 = __this->get_largestLoadedContentIndex_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_contentSceneNames_3();
		NullCheck(L_1);
		return (bool)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1))))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::CacheSortedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker_CacheSortedContent_mB169B1FF5367385CC8B03DA3E1DD8B0AB1C58297 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCacheSortedContentU3Eb__18_0_m278C75C3FCD2D9237F2E176F6BD6DF42875A866F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCacheSortedContentU3Eb__18_1_mB08FB9667047799768AA8167F633C7674F6ECF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
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
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * G_B3_2 = NULL;
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * G_B2_2 = NULL;
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * G_B5_2 = NULL;
	Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * G_B4_2 = NULL;
	{
		// using (CacheSortedContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->get_CacheSortedContentPerfMarker_6();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// sortedContentScenes = profile.ContentScenes.OrderBy(s => s.BuildIndex).ToArray();
			MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_2 = __this->get_profile_0();
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = MixedRealitySceneSystemProfile_get_ContentScenes_m5B2F21314D1C35779B833ACA80683E2E955CE42D_inline(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_4 = ((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_5 = L_4;
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = __this;
			if (L_5)
			{
				G_B3_0 = L_5;
				G_B3_1 = L_3;
				G_B3_2 = __this;
				goto IL_0039;
			}
		}

IL_0022:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
			U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * L_6 = ((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_7 = (Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 *)il2cpp_codegen_object_new(Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439_il2cpp_TypeInfo_var);
			Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CCacheSortedContentU3Eb__18_0_m278C75C3FCD2D9237F2E176F6BD6DF42875A866F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_RuntimeMethod_var);
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_8 = L_7;
			((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_8);
			G_B3_0 = L_8;
			G_B3_1 = G_B2_1;
			G_B3_2 = G_B2_2;
		}

IL_0039:
		{
			RuntimeObject* L_9;
			L_9 = Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD(G_B3_1, G_B3_0, /*hidden argument*/Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_RuntimeMethod_var);
			SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_10;
			L_10 = Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1(L_9, /*hidden argument*/Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_RuntimeMethod_var);
			NullCheck(G_B3_2);
			G_B3_2->set_sortedContentScenes_4(L_10);
			// sortedLightingScenes = profile.LightingScenes.OrderBy(s => s.BuildIndex).ToArray();
			MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * L_11 = __this->get_profile_0();
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = MixedRealitySceneSystemProfile_get_LightingScenes_m4DB634A6825E611FD03DC280896168B9C6D4747B_inline(L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_13 = ((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->get_U3CU3E9__18_1_2();
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_14 = L_13;
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			G_B4_2 = __this;
			if (L_14)
			{
				G_B5_0 = L_14;
				G_B5_1 = L_12;
				G_B5_2 = __this;
				goto IL_0073;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
			U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * L_15 = ((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_16 = (Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 *)il2cpp_codegen_object_new(Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439_il2cpp_TypeInfo_var);
			Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3CCacheSortedContentU3Eb__18_1_mB08FB9667047799768AA8167F633C7674F6ECF3A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4182F9A7936AFC720BFA8F69B0D6CF5841DBDA01_RuntimeMethod_var);
			Func_2_t6BFF220EC81BE99DE60946FC54417091BB2BE439 * L_17 = L_16;
			((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->set_U3CU3E9__18_1_2(L_17);
			G_B5_0 = L_17;
			G_B5_1 = G_B4_1;
			G_B5_2 = G_B4_2;
		}

IL_0073:
		{
			RuntimeObject* L_18;
			L_18 = Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD(G_B5_1, G_B5_0, /*hidden argument*/Enumerable_OrderBy_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m616B53B7E6FA545A6262F6C8574CB2420B6691CD_RuntimeMethod_var);
			SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_19;
			L_19 = Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1(L_18, /*hidden argument*/Enumerable_ToArray_TisSceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C_mB5864957ADDD526C8DF2D6514ABD75C3212519A1_RuntimeMethod_var);
			NullCheck(G_B5_2);
			G_B5_2->set_sortedLightingScenes_5(L_19);
			// contentSceneNames = new string[sortedContentScenes.Length];
			SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_20 = __this->get_sortedContentScenes_4();
			NullCheck(L_20);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))));
			__this->set_contentSceneNames_3(L_21);
			// for (int i = 0; i < contentSceneNames.Length; i++)
			V_2 = 0;
			goto IL_00b6;
		}

IL_0099:
		{
			// contentSceneNames[i] = sortedContentScenes[i].Name;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = __this->get_contentSceneNames_3();
			int32_t L_23 = V_2;
			SceneInfoU5BU5D_tEBCF8B73ABDAAA5C2016DB7831814FEF374307E8* L_24 = __this->get_sortedContentScenes_4();
			int32_t L_25 = V_2;
			NullCheck(L_24);
			String_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_Name_1();
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_26);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (String_t*)L_26);
			// for (int i = 0; i < contentSceneNames.Length; i++)
			int32_t L_27 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00b6:
		{
			// for (int i = 0; i < contentSceneNames.Length; i++)
			int32_t L_28 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = __this->get_contentSceneNames_3();
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
			{
				goto IL_0099;
			}
		}

IL_00c1:
		{
			// }
			IL2CPP_LEAVE(0xD1, FINALLY_00c3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c3;
	}

FINALLY_00c3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(195)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(195)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD1, IL_00d1)
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetNextContent(System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_GetNextContent_mC7AF91F8686DC105AF08A8141478B0718BECD306 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, bool ___wrap0, String_t** ___contentSceneName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetNextContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->get_GetNextContentPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// contentSceneName = string.Empty;
			String_t** L_2 = ___contentSceneName1;
			String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
			// int nextIndex = largestLoadedContentIndex + 1;
			int32_t L_4 = __this->get_largestLoadedContentIndex_1();
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
			// if (nextIndex >= contentSceneNames.Length)
			int32_t L_5 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_contentSceneNames_3();
			NullCheck(L_6);
			if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
			{
				goto IL_003e;
			}
		}

IL_0029:
		{
			// if (wrap)
			bool L_7 = ___wrap0;
			if (!L_7)
			{
				goto IL_003a;
			}
		}

IL_002c:
		{
			// contentSceneName = contentSceneNames[0];
			String_t** L_8 = ___contentSceneName1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = __this->get_contentSceneNames_3();
			NullCheck(L_9);
			int32_t L_10 = 0;
			String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			*((RuntimeObject **)L_8) = (RuntimeObject *)L_11;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)L_11);
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}

IL_003a:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}

IL_003e:
		{
			// contentSceneName = contentSceneNames[nextIndex];
			String_t** L_12 = ___contentSceneName1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_contentSceneNames_3();
			int32_t L_14 = V_2;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			*((RuntimeObject **)L_12) = (RuntimeObject *)L_16;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_16);
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::GetPrevContent(System.Boolean,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneContentTracker_GetPrevContent_m3EC73F929593CC7964A05B72294E30BF3683F1C4 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, bool ___wrap0, String_t** ___contentSceneName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetPrevContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->get_GetPrevContentPerfMarker_8();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// contentSceneName = string.Empty;
			String_t** L_2 = ___contentSceneName1;
			String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
			// int prevIndex = smalledLoadedContentIndex - 1;
			int32_t L_4 = __this->get_smalledLoadedContentIndex_2();
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
			// if (prevIndex < 0)
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) >= ((int32_t)0)))
			{
				goto IL_0040;
			}
		}

IL_0022:
		{
			// if (wrap)
			bool L_6 = ___wrap0;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0025:
		{
			// contentSceneName = contentSceneNames[contentSceneNames.Length - 1];
			String_t** L_7 = ___contentSceneName1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get_contentSceneNames_3();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = __this->get_contentSceneNames_3();
			NullCheck(L_9);
			NullCheck(L_8);
			int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)1));
			String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			*((RuntimeObject **)L_7) = (RuntimeObject *)L_11;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_11);
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_003c:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_0040:
		{
			// contentSceneName = contentSceneNames[prevIndex];
			String_t** L_12 = ___contentSceneName1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_contentSceneNames_3();
			int32_t L_14 = V_2;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			*((RuntimeObject **)L_12) = (RuntimeObject *)L_16;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_16);
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::RefreshLoadedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker_RefreshLoadedContent_m90D7CEC8ADE1C0B571B22BB4D05AF692C68842E0 (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RefreshLoadedContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->get_RefreshLoadedContentPerfMarker_9();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// largestLoadedContentIndex = -1;
			__this->set_largestLoadedContentIndex_1((-1));
			// smalledLoadedContentIndex = contentSceneNames.Length;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_contentSceneNames_3();
			NullCheck(L_2);
			__this->set_smalledLoadedContentIndex_2(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
			// for (int i = 0; i < contentSceneNames.Length; i++)
			V_2 = 0;
			goto IL_0066;
		}

IL_0027:
		{
			// Scene scene = SceneManager.GetSceneByName(contentSceneNames[i]);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_contentSceneNames_3();
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_7;
			L_7 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			// if (scene.isLoaded)
			bool L_8;
			L_8 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0062;
			}
		}

IL_003e:
		{
			// largestLoadedContentIndex = Mathf.Max(i, largestLoadedContentIndex);
			int32_t L_9 = V_2;
			int32_t L_10 = __this->get_largestLoadedContentIndex_1();
			int32_t L_11;
			L_11 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_9, L_10, /*hidden argument*/NULL);
			__this->set_largestLoadedContentIndex_1(L_11);
			// smalledLoadedContentIndex = Mathf.Min(i, smalledLoadedContentIndex);
			int32_t L_12 = V_2;
			int32_t L_13 = __this->get_smalledLoadedContentIndex_2();
			int32_t L_14;
			L_14 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_12, L_13, /*hidden argument*/NULL);
			__this->set_smalledLoadedContentIndex_2(L_14);
		}

IL_0062:
		{
			// for (int i = 0; i < contentSceneNames.Length; i++)
			int32_t L_15 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		}

IL_0066:
		{
			// for (int i = 0; i < contentSceneNames.Length; i++)
			int32_t L_16 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = __this->get_contentSceneNames_3();
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
			{
				goto IL_0027;
			}
		}

IL_0071:
		{
			// }
			IL2CPP_LEAVE(0x81, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContentTracker__cctor_mF8D10CFA8ED2D19FA68E8FFE294924B95A4D0A9C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EB39ED71628F697714EE1B3136423D971F7EC9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FA90EAF56427D5BC910FA1B48A0320CA080976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC438E5E28F7B301BFD8594CF74C954FFED3C6A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEED6412EA29A39E6C76073F2D4CECBF419333699);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker CacheSortedContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneContentTracker.CacheSortedContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralEC438E5E28F7B301BFD8594CF74C954FFED3C6A9, /*hidden argument*/NULL);
		((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->set_CacheSortedContentPerfMarker_6(L_0);
		// private static readonly ProfilerMarker GetNextContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneContentTracker.GetNextContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralEED6412EA29A39E6C76073F2D4CECBF419333699, /*hidden argument*/NULL);
		((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->set_GetNextContentPerfMarker_7(L_1);
		// private static readonly ProfilerMarker GetPrevContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneContentTracker.GetPrevContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral49FA90EAF56427D5BC910FA1B48A0320CA080976, /*hidden argument*/NULL);
		((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->set_GetPrevContentPerfMarker_8(L_2);
		// private static readonly ProfilerMarker RefreshLoadedContentPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneContentTracker.RefreshLoadedContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral3EB39ED71628F697714EE1B3136423D971F7EC9E, /*hidden argument*/NULL);
		((SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_StaticFields*)il2cpp_codegen_static_fields_for(SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524_il2cpp_TypeInfo_var))->set_RefreshLoadedContentPerfMarker_9(L_3);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::StartTransition(Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeLightingSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeRenderSettings,Microsoft.MixedReality.Toolkit.SceneSystem.RuntimeSunlightSettings,Microsoft.MixedReality.Toolkit.SceneSystem.LightingSceneTransitionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_StartTransition_mF226B047F423046A6A873D5DB68EE2391F21B0D0 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  ___targetLightingSettings0, RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  ___targetRenderSettings1, RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  ___targetSunlightSettings2, int32_t ___transitionType3, float ___transitionDuration4, const RuntimeMethod* method)
{
	{
		// this.transitionElapsed = 0;
		__this->set_transitionElapsed_15((0.0f));
		// this.transitionType = transitionType;
		int32_t L_0 = ___transitionType3;
		__this->set_transitionType_13(L_0);
		// this.transitionDuration = transitionDuration;
		float L_1 = ___transitionDuration4;
		__this->set_transitionDuration_14(L_1);
		// this.targetLightingSettings = targetLightingSettings;
		RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_2 = ___targetLightingSettings0;
		__this->set_targetLightingSettings_4(L_2);
		// this.targetRenderSettings = targetRenderSettings;
		RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_3 = ___targetRenderSettings1;
		__this->set_targetRenderSettings_10(L_3);
		// this.targetSunlightSettings = targetSunlightSettings;
		RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_4 = ___targetSunlightSettings2;
		__this->set_targetSunlightSettings_7(L_4);
		int32_t L_5 = ___transitionType3;
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		// currentLightingSettings = targetLightingSettings;
		RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_6 = ___targetLightingSettings0;
		__this->set_currentLightingSettings_5(L_6);
		// currentRenderSettings = targetRenderSettings;
		RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_7 = ___targetRenderSettings1;
		__this->set_currentRenderSettings_11(L_7);
		// currentSunlightSettings = targetSunlightSettings;
		RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_8 = ___targetSunlightSettings2;
		__this->set_currentSunlightSettings_8(L_8);
		// transitionElapsed = transitionDuration;
		float L_9 = ___transitionDuration4;
		__this->set_transitionElapsed_15(L_9);
		// ApplySettings();
		SceneLightingExecutor_ApplySettings_m82CABC8380FC5B08D6B71A1394F4A0C36EB00747(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0058:
	{
		// prevLightingSettings = currentLightingSettings;
		RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_10 = __this->get_currentLightingSettings_5();
		__this->set_prevLightingSettings_6(L_10);
		// prevRenderSettings = currentRenderSettings;
		RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_11 = __this->get_currentRenderSettings_11();
		__this->set_prevRenderSettings_12(L_11);
		// prevSunlightSettings = currentSunlightSettings;
		RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_12 = __this->get_currentSunlightSettings_8();
		__this->set_prevSunlightSettings_9(L_12);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::UpdateTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_UpdateTransition_m5230B9A47BB19465AF133B249B23157B8F07F98A (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdateTransitionPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->get_UpdateTransitionPerfMarker_0();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (transitionElapsed < transitionDuration)
			float L_2 = __this->get_transitionElapsed_15();
			float L_3 = __this->get_transitionDuration_14();
			if ((!(((float)L_2) < ((float)L_3))))
			{
				goto IL_0067;
			}
		}

IL_001c:
		{
			// transitionElapsed += deltaTime;
			float L_4 = __this->get_transitionElapsed_15();
			float L_5 = ___deltaTime0;
			__this->set_transitionElapsed_15(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
			// if (transitionElapsed >= transitionDuration)
			float L_6 = __this->get_transitionElapsed_15();
			float L_7 = __this->get_transitionDuration_14();
			if ((!(((float)L_6) >= ((float)L_7))))
			{
				goto IL_0067;
			}
		}

IL_0038:
		{
			// currentLightingSettings = targetLightingSettings;
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_8 = __this->get_targetLightingSettings_4();
			__this->set_currentLightingSettings_5(L_8);
			// currentRenderSettings = targetRenderSettings;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_9 = __this->get_targetRenderSettings_10();
			__this->set_currentRenderSettings_11(L_9);
			// currentSunlightSettings = targetSunlightSettings;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_10 = __this->get_targetSunlightSettings_7();
			__this->set_currentSunlightSettings_8(L_10);
			// ApplySettings();
			SceneLightingExecutor_ApplySettings_m82CABC8380FC5B08D6B71A1394F4A0C36EB00747(__this, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x1D1, FINALLY_01c3);
		}

IL_0067:
		{
			// float transitionProgress = Mathf.Clamp01(transitionElapsed / transitionDuration);
			float L_11 = __this->get_transitionElapsed_15();
			float L_12 = __this->get_transitionDuration_14();
			float L_13;
			L_13 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
			V_2 = L_13;
			// switch (transitionType)
			int32_t L_14 = __this->get_transitionType_13();
			V_3 = L_14;
			int32_t L_15 = V_3;
			switch (L_15)
			{
				case 0:
				{
					goto IL_01bb;
				}
				case 1:
				{
					goto IL_00e5;
				}
				case 2:
				{
					goto IL_0098;
				}
			}
		}

IL_0093:
		{
			goto IL_01bb;
		}

IL_0098:
		{
			// currentLightingSettings = RuntimeLightingSettings.Lerp(prevLightingSettings, targetLightingSettings, transitionProgress);
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_16 = __this->get_prevLightingSettings_6();
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_17 = __this->get_targetLightingSettings_4();
			float L_18 = V_2;
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_19;
			L_19 = RuntimeLightingSettings_Lerp_mF00C79EFBA21866E10232EDB29F8AA24F5193081(L_16, L_17, L_18, /*hidden argument*/NULL);
			__this->set_currentLightingSettings_5(L_19);
			// currentRenderSettings = RuntimeRenderSettings.Lerp(prevRenderSettings, targetRenderSettings, transitionProgress);
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_20 = __this->get_prevRenderSettings_12();
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_21 = __this->get_targetRenderSettings_10();
			float L_22 = V_2;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_23;
			L_23 = RuntimeRenderSettings_Lerp_mD1ECA3B155E6CE29EF6954CA848579AF21E4EDE6(L_20, L_21, L_22, /*hidden argument*/NULL);
			__this->set_currentRenderSettings_11(L_23);
			// currentSunlightSettings = RuntimeSunlightSettings.Lerp(prevSunlightSettings, targetSunlightSettings, transitionProgress);
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_24 = __this->get_prevSunlightSettings_9();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_25 = __this->get_targetSunlightSettings_7();
			float L_26 = V_2;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_27;
			L_27 = RuntimeSunlightSettings_Lerp_m33AB3BC7A2B8710E56D7F2B9FD402A79292B72FB(L_24, L_25, L_26, /*hidden argument*/NULL);
			__this->set_currentSunlightSettings_8(L_27);
			// break;
			goto IL_01bb;
		}

IL_00e5:
		{
			// if (transitionProgress < 0.5f)
			float L_28 = V_2;
			if ((!(((float)L_28) < ((float)(0.5f)))))
			{
				goto IL_0152;
			}
		}

IL_00ed:
		{
			// float fadeOutProgress = transitionProgress / 0.5f;
			float L_29 = V_2;
			V_4 = ((float)((float)L_29/(float)(0.5f)));
			// currentLightingSettings = RuntimeLightingSettings.Lerp(
			//     prevLightingSettings,
			//     RuntimeLightingSettings.Black(prevLightingSettings),
			//     fadeOutProgress);
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_30 = __this->get_prevLightingSettings_6();
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_31 = __this->get_prevLightingSettings_6();
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_32;
			L_32 = RuntimeLightingSettings_Black_m8AE470265B854BB65FAB21166BFBE79FC14DF1C4(L_31, /*hidden argument*/NULL);
			float L_33 = V_4;
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_34;
			L_34 = RuntimeLightingSettings_Lerp_mF00C79EFBA21866E10232EDB29F8AA24F5193081(L_30, L_32, L_33, /*hidden argument*/NULL);
			__this->set_currentLightingSettings_5(L_34);
			// currentRenderSettings = RuntimeRenderSettings.Lerp(
			//     prevRenderSettings,
			//     RuntimeRenderSettings.Black(prevRenderSettings),
			//     fadeOutProgress);
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_35 = __this->get_prevRenderSettings_12();
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_36 = __this->get_prevRenderSettings_12();
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_37;
			L_37 = RuntimeRenderSettings_Black_m3518B6CD3DA66ACACC676D1F6BF9DC26FD1DA866(L_36, /*hidden argument*/NULL);
			float L_38 = V_4;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_39;
			L_39 = RuntimeRenderSettings_Lerp_mD1ECA3B155E6CE29EF6954CA848579AF21E4EDE6(L_35, L_37, L_38, /*hidden argument*/NULL);
			__this->set_currentRenderSettings_11(L_39);
			// currentSunlightSettings = RuntimeSunlightSettings.Lerp(
			//     prevSunlightSettings,
			//     RuntimeSunlightSettings.Black(prevSunlightSettings),
			//     fadeOutProgress);
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_40 = __this->get_prevSunlightSettings_9();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_41 = __this->get_prevSunlightSettings_9();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_42;
			L_42 = RuntimeSunlightSettings_Black_m746313130C737A955B4AE0B0DBDE3B7E88764006(L_41, /*hidden argument*/NULL);
			float L_43 = V_4;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_44;
			L_44 = RuntimeSunlightSettings_Lerp_m33AB3BC7A2B8710E56D7F2B9FD402A79292B72FB(L_40, L_42, L_43, /*hidden argument*/NULL);
			__this->set_currentSunlightSettings_8(L_44);
			// }
			goto IL_01bb;
		}

IL_0152:
		{
			// float fadeInProgress = (transitionProgress - 0.5f) / 0.5f;
			float L_45 = V_2;
			V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_45, (float)(0.5f)))/(float)(0.5f)));
			// currentLightingSettings = RuntimeLightingSettings.Lerp(
			//     RuntimeLightingSettings.Black(targetLightingSettings),
			//     targetLightingSettings,
			//     fadeInProgress);
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_46 = __this->get_targetLightingSettings_4();
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_47;
			L_47 = RuntimeLightingSettings_Black_m8AE470265B854BB65FAB21166BFBE79FC14DF1C4(L_46, /*hidden argument*/NULL);
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_48 = __this->get_targetLightingSettings_4();
			float L_49 = V_5;
			RuntimeLightingSettings_tCDD3B33EE87AE77E3D66753A0A7CD95E54B7703B  L_50;
			L_50 = RuntimeLightingSettings_Lerp_mF00C79EFBA21866E10232EDB29F8AA24F5193081(L_47, L_48, L_49, /*hidden argument*/NULL);
			__this->set_currentLightingSettings_5(L_50);
			// currentRenderSettings = RuntimeRenderSettings.Lerp(
			//     RuntimeRenderSettings.Black(targetRenderSettings),
			//     targetRenderSettings,
			//     fadeInProgress);
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_51 = __this->get_targetRenderSettings_10();
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_52;
			L_52 = RuntimeRenderSettings_Black_m3518B6CD3DA66ACACC676D1F6BF9DC26FD1DA866(L_51, /*hidden argument*/NULL);
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_53 = __this->get_targetRenderSettings_10();
			float L_54 = V_5;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F  L_55;
			L_55 = RuntimeRenderSettings_Lerp_mD1ECA3B155E6CE29EF6954CA848579AF21E4EDE6(L_52, L_53, L_54, /*hidden argument*/NULL);
			__this->set_currentRenderSettings_11(L_55);
			// currentSunlightSettings = RuntimeSunlightSettings.Lerp(
			//     RuntimeSunlightSettings.Black(targetSunlightSettings),
			//     targetSunlightSettings,
			//     fadeInProgress);
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_56 = __this->get_targetSunlightSettings_7();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_57;
			L_57 = RuntimeSunlightSettings_Black_m746313130C737A955B4AE0B0DBDE3B7E88764006(L_56, /*hidden argument*/NULL);
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_58 = __this->get_targetSunlightSettings_7();
			float L_59 = V_5;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710  L_60;
			L_60 = RuntimeSunlightSettings_Lerp_m33AB3BC7A2B8710E56D7F2B9FD402A79292B72FB(L_57, L_58, L_59, /*hidden argument*/NULL);
			__this->set_currentSunlightSettings_8(L_60);
		}

IL_01bb:
		{
			// ApplySettings();
			SceneLightingExecutor_ApplySettings_m82CABC8380FC5B08D6B71A1394F4A0C36EB00747(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x1D1, FINALLY_01c3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c3;
	}

FINALLY_01c3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(451)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(451)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D1, IL_01d1)
	}

IL_01d1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::ApplySettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_ApplySettings_m82CABC8380FC5B08D6B71A1394F4A0C36EB00747 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
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
		// using (ApplySettingsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->get_ApplySettingsPerfMarker_1();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// RenderSettings.ambientEquatorColor = currentRenderSettings.AmbientEquatorColor;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_2 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = L_2->get_AmbientEquatorColor_7();
			RenderSettings_set_ambientEquatorColor_mCC956A35722BFDA1E7D800A0A0243DECF2B0FC81(L_3, /*hidden argument*/NULL);
			// RenderSettings.ambientGroundColor = currentRenderSettings.AmbientGroundColor;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_4 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = L_4->get_AmbientGroundColor_8();
			RenderSettings_set_ambientGroundColor_m9D21B5C414EB7705F291DC0A43DD5AD78FB4E880(L_5, /*hidden argument*/NULL);
			// RenderSettings.ambientIntensity = currentRenderSettings.AmbientIntensity;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_6 = __this->get_address_of_currentRenderSettings_11();
			float L_7 = L_6->get_AmbientIntensity_10();
			RenderSettings_set_ambientIntensity_m1E97F76AFF47C18DE4EF7EF08580CA57661B709D(L_7, /*hidden argument*/NULL);
			// RenderSettings.ambientLight = currentRenderSettings.AmbientLight;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_8 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = L_8->get_AmbientLight_9();
			RenderSettings_set_ambientLight_m0BD3CBB34DDA694D6459FB5A68859A4C070670D2(L_9, /*hidden argument*/NULL);
			// RenderSettings.ambientMode = (AmbientMode)currentRenderSettings.AmbientMode;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_10 = __this->get_address_of_currentRenderSettings_11();
			int32_t L_11 = L_10->get_AmbientMode_11();
			RenderSettings_set_ambientMode_mE14A1AA6475471C282CE090BE7AC86D2AF64F47B(L_11, /*hidden argument*/NULL);
			// RenderSettings.ambientSkyColor = currentRenderSettings.AmbientSkyColor;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_12 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = L_12->get_AmbientSkyColor_6();
			RenderSettings_set_ambientSkyColor_m197774105B2AFF4A4CEEA8C9CF0F4016F7931B67(L_13, /*hidden argument*/NULL);
			// RenderSettings.customReflection = currentRenderSettings.CustomReflection;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_14 = __this->get_address_of_currentRenderSettings_11();
			Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * L_15 = L_14->get_CustomReflection_18();
			RenderSettings_set_customReflection_mB1741F9FDF8D9ED94804F86F99EA45C5F5B1BE20(L_15, /*hidden argument*/NULL);
			// RenderSettings.defaultReflectionMode = (DefaultReflectionMode)currentRenderSettings.DefaultReflectionMode;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_16 = __this->get_address_of_currentRenderSettings_11();
			int32_t L_17 = L_16->get_DefaultReflectionMode_14();
			RenderSettings_set_defaultReflectionMode_mCAE1783A02343BB9C7D1682B22956D31944D4540(L_17, /*hidden argument*/NULL);
			// RenderSettings.defaultReflectionResolution = currentRenderSettings.DefaultReflectionResolution;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_18 = __this->get_address_of_currentRenderSettings_11();
			int32_t L_19 = L_18->get_DefaultReflectionResolution_15();
			RenderSettings_set_defaultReflectionResolution_m7E846EC66874166071BF3F0B6DB717EF56D001DA(L_19, /*hidden argument*/NULL);
			// RenderSettings.fog = currentRenderSettings.Fog;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_20 = __this->get_address_of_currentRenderSettings_11();
			bool L_21 = L_20->get_Fog_0();
			RenderSettings_set_fog_mD367E22D3EF66CA9FAAD7AF7712E891B2F569275(L_21, /*hidden argument*/NULL);
			// RenderSettings.fogColor = currentRenderSettings.FogColor;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_22 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = L_22->get_FogColor_1();
			RenderSettings_set_fogColor_mC46154762710EFAA869A4E972C16D1FE9B0EA01F(L_23, /*hidden argument*/NULL);
			// RenderSettings.fogDensity = currentRenderSettings.FogDensity;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_24 = __this->get_address_of_currentRenderSettings_11();
			float L_25 = L_24->get_FogDensity_3();
			RenderSettings_set_fogDensity_mC82D5FB8E350FF4A45D41B360FA1FC00384FAA94(L_25, /*hidden argument*/NULL);
			// RenderSettings.fogEndDistance = currentRenderSettings.LinearFogEnd;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_26 = __this->get_address_of_currentRenderSettings_11();
			float L_27 = L_26->get_LinearFogEnd_5();
			RenderSettings_set_fogEndDistance_m09D18D44027CBEDD3D0DBF9EC5DC5FA5FE9DFA0B(L_27, /*hidden argument*/NULL);
			// RenderSettings.fogMode = currentRenderSettings.FogMode;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_28 = __this->get_address_of_currentRenderSettings_11();
			int32_t L_29 = L_28->get_FogMode_2();
			RenderSettings_set_fogMode_m791A6875CFF4A9C3A937CDFCA765AD6D6D00B703(L_29, /*hidden argument*/NULL);
			// RenderSettings.fogStartDistance = currentRenderSettings.LinearFogStart;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_30 = __this->get_address_of_currentRenderSettings_11();
			float L_31 = L_30->get_LinearFogStart_4();
			RenderSettings_set_fogStartDistance_m75DB7FF50F338FEA287BD5409A8A172EE9A40615(L_31, /*hidden argument*/NULL);
			// RenderSettings.reflectionBounces = currentRenderSettings.ReflectionBounces;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_32 = __this->get_address_of_currentRenderSettings_11();
			int32_t L_33 = L_32->get_ReflectionBounces_16();
			RenderSettings_set_reflectionBounces_m63D9C4477966A067181276430851B498D75A0FB4(L_33, /*hidden argument*/NULL);
			// RenderSettings.reflectionIntensity = currentRenderSettings.ReflectionIntensity;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_34 = __this->get_address_of_currentRenderSettings_11();
			float L_35 = L_34->get_ReflectionIntensity_17();
			RenderSettings_set_reflectionIntensity_mDC27E1257D7A4697150824EC3BE8FD2E0B30D706(L_35, /*hidden argument*/NULL);
			// RenderSettings.skybox = currentRenderSettings.SkyboxMaterial;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_36 = __this->get_address_of_currentRenderSettings_11();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = L_36->get_SkyboxMaterial_13();
			RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_37, /*hidden argument*/NULL);
			// RenderSettings.subtractiveShadowColor = currentRenderSettings.SubtractiveShadowColor;
			RuntimeRenderSettings_tC8B708A9629D8C6459EB393106782B796CE78B6F * L_38 = __this->get_address_of_currentRenderSettings_11();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = L_38->get_SubtractiveShadowColor_12();
			RenderSettings_set_subtractiveShadowColor_mB9251ABE3D854B5F9C718A58E4FBDE0A8E19402C(L_39, /*hidden argument*/NULL);
			// if (currentSunlightSettings.UseSunlight)
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_40 = __this->get_address_of_currentSunlightSettings_8();
			bool L_41 = L_40->get_UseSunlight_0();
			if (!L_41)
			{
				goto IL_01aa;
			}
		}

IL_014b:
		{
			// FindOrCreateSunlight();
			SceneLightingExecutor_FindOrCreateSunlight_mD030600BEBAB9B9DC5B1C3DA69406B601B76C0F4(__this, /*hidden argument*/NULL);
			// Light sunLight = RenderSettings.sun;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_42;
			L_42 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
			// sunLight.color = currentSunlightSettings.Color;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_43 = L_42;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_44 = __this->get_address_of_currentSunlightSettings_8();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = L_44->get_Color_1();
			NullCheck(L_43);
			Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_43, L_45, /*hidden argument*/NULL);
			// sunLight.intensity = currentSunlightSettings.Intensity;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_46 = L_43;
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_47 = __this->get_address_of_currentSunlightSettings_8();
			float L_48 = L_47->get_Intensity_2();
			NullCheck(L_46);
			Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_46, L_48, /*hidden argument*/NULL);
			// sunLight.transform.rotation = Quaternion.Euler(currentSunlightSettings.XRotation, currentSunlightSettings.YRotation, currentSunlightSettings.ZRotation);
			NullCheck(L_46);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
			L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_50 = __this->get_address_of_currentSunlightSettings_8();
			float L_51 = L_50->get_XRotation_3();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_52 = __this->get_address_of_currentSunlightSettings_8();
			float L_53 = L_52->get_YRotation_4();
			RuntimeSunlightSettings_tB8AA0F263C56853741756B439C29F95A16036710 * L_54 = __this->get_address_of_currentSunlightSettings_8();
			float L_55 = L_54->get_ZRotation_5();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
			L_56 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_51, L_53, L_55, /*hidden argument*/NULL);
			NullCheck(L_49);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_49, L_56, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x1C0, FINALLY_01b2);
		}

IL_01aa:
		{
			// DisableSunlight();
			SceneLightingExecutor_DisableSunlight_mE79611D3D2C9A8A2ADF72BAF6E770166F2802268(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x1C0, FINALLY_01b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b2;
	}

FINALLY_01b2:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(434)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(434)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C0, IL_01c0)
	}

IL_01c0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::FindOrCreateSunlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_FindOrCreateSunlight_mD030600BEBAB9B9DC5B1C3DA69406B601B76C0F4 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mF9F6CCD702ADA838CB4637910387D3D6C0F93270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADFFFF29BA35CFF6D1258F13562669FB12D31FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DBCFAD40B2ACF389125D6046C09CA8EC087BDB);
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
	{
		// using (FindOrCreateSunlightPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->get_FindOrCreateSunlightPerfMarker_2();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (RenderSettings.sun == null)
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2;
			L_2 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_006f;
			}
		}

IL_001b:
		{
			// if (sharedSunLight == null)
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = __this->get_sharedSunLight_16();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0064;
			}
		}

IL_0029:
		{
			// Debug.Log("Shared sunlight is null, creating a shared sunlight");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF9DBCFAD40B2ACF389125D6046C09CA8EC087BDB, /*hidden argument*/NULL);
			// sharedSunLight = new GameObject("Shared Sunlight").AddComponent<Light>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_6, _stringLiteralCADFFFF29BA35CFF6D1258F13562669FB12D31FA, /*hidden argument*/NULL);
			NullCheck(L_6);
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7;
			L_7 = GameObject_AddComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mF9F6CCD702ADA838CB4637910387D3D6C0F93270(L_6, /*hidden argument*/GameObject_AddComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mF9F6CCD702ADA838CB4637910387D3D6C0F93270_RuntimeMethod_var);
			__this->set_sharedSunLight_16(L_7);
			// sharedSunLight.type = LightType.Directional;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = __this->get_sharedSunLight_16();
			NullCheck(L_8);
			Light_set_type_mD68B010AE47ECDDF9C13D9F99F13EB69E9A9F7F4(L_8, 1, /*hidden argument*/NULL);
			// sharedSunLight.intensity = 0;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_9 = __this->get_sharedSunLight_16();
			NullCheck(L_9);
			Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_9, (0.0f), /*hidden argument*/NULL);
		}

IL_0064:
		{
			// RenderSettings.sun = sharedSunLight;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = __this->get_sharedSunLight_16();
			RenderSettings_set_sun_m3911EA71EAA0B3B4DCA212C36444527BEF9910BE(L_10, /*hidden argument*/NULL);
		}

IL_006f:
		{
			// RenderSettings.sun.enabled = true;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_11;
			L_11 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
			NullCheck(L_11);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::DisableSunlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor_DisableSunlight_mE79611D3D2C9A8A2ADF72BAF6E770166F2802268 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
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
	{
		// using (DisableSunlightPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->get_DisableSunlightPerfMarker_3();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (RenderSettings.sun != null)
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2;
			L_2 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			// RenderSettings.sun.enabled = false;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4;
			L_4 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
			NullCheck(L_4);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		}

IL_0026:
		{
			// if (sharedSunLight != null)
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_5 = __this->get_sharedSunLight_16();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0040;
			}
		}

IL_0034:
		{
			// sharedSunLight.enabled = false;
			Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7 = __this->get_sharedSunLight_16();
			NullCheck(L_7);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		}

IL_0040:
		{
			// }
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
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor__ctor_m76F68BE611BC2B1BE86A1D54EF042BCD1AC32A03 (SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLightingExecutor__cctor_m6D37619B7FFCB93D4908B3D56916D82177AFBFE6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3160EFFA84B470717B7B2CD41D17212E82AACB30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB960F9A5B2F68587728C88944309D9592572E897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC68C0D03D538050C93B02C339CF037C693C3BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA967C74C7F8F4FB284859D52589D06A3861E7F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateTransitionPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneLightingExecutor.UpdateTransition");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralB960F9A5B2F68587728C88944309D9592572E897, /*hidden argument*/NULL);
		((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->set_UpdateTransitionPerfMarker_0(L_0);
		// private static readonly ProfilerMarker ApplySettingsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneLightingExecutor.ApplySettings");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralEA967C74C7F8F4FB284859D52589D06A3861E7F2, /*hidden argument*/NULL);
		((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->set_ApplySettingsPerfMarker_1(L_1);
		// private static readonly ProfilerMarker FindOrCreateSunlightPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneLightingExecutor.FindOrCreateSunlight");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralCAC68C0D03D538050C93B02C339CF037C693C3BB, /*hidden argument*/NULL);
		((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->set_FindOrCreateSunlightPerfMarker_2(L_2);
		// private static readonly ProfilerMarker DisableSunlightPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySceneSystem+SceneLightingExecutor.DisableSunlight");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral3160EFFA84B470717B7B2CD41D17212E82AACB30, /*hidden argument*/NULL);
		((SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_StaticFields*)il2cpp_codegen_static_fields_for(SceneLightingExecutor_t0616ECDFB1F827245E3508EBDB8A9BF1C33E00A4_il2cpp_TypeInfo_var))->set_DisableSunlightPerfMarker_3(L_3);
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
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m555FF05A24D159BCBFEBE84D1B9E6C9E02A0B113 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * L_0 = (U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 *)il2cpp_codegen_object_new(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m75C2B3BFC56B2B7F951DF31F352FEF6F9F729247(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m75C2B3BFC56B2B7F951DF31F352FEF6F9F729247 (U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::<CacheSortedContent>b__18_0(Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCacheSortedContentU3Eb__18_0_m278C75C3FCD2D9237F2E176F6BD6DF42875A866F (U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * __this, SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  ___s0, const RuntimeMethod* method)
{
	{
		// sortedContentScenes = profile.ContentScenes.OrderBy(s => s.BuildIndex).ToArray();
		SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_0 = ___s0;
		int32_t L_1 = L_0.get_BuildIndex_4();
		return L_1;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker/<>c::<CacheSortedContent>b__18_1(Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCacheSortedContentU3Eb__18_1_mB08FB9667047799768AA8167F633C7674F6ECF3A (U3CU3Ec_t154B218BD0C13CC1A4DF07EF0836F068C03438F8 * __this, SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  ___s0, const RuntimeMethod* method)
{
	{
		// sortedLightingScenes = profile.LightingScenes.OrderBy(s => s.BuildIndex).ToArray();
		SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_0 = ___s0;
		int32_t L_1 = L_0.get_BuildIndex_4();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m287A28559A7697A16A2E02CC53A9B46D079B8438_inline (BaseCoreSystem_tC7FFCF21BEDE96AA9C2DC1EB775ED6C3293B3E96 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SceneContentTracker_get_ContentSceneNames_mE1A78B5E9FDC19CE25DD11BEEA7D6BBA597747DD_inline (SceneContentTracker_tB0C5F7B3FC7E61D9669D6EDEED042A7C70729524 * __this, const RuntimeMethod* method)
{
	{
		// public string[] ContentSceneNames => contentSceneNames;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_contentSceneNames_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  MixedRealitySceneSystemProfile_get_ManagerScene_mB8DE3C97E86592DAFB89ADA36FC2331413189036_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method)
{
	{
		// public SceneInfo ManagerScene => managerScene;
		SceneInfo_t047A7B4A8FE3C0FA9BC4FC2AE944084F58BE8B0C  L_0 = __this->get_managerScene_6();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationInProgress_m3FAEB23418819548EAD82D05CB2B8FF2425CAF95_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SceneOperationInProgress { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSceneOperationInProgressU3Ek__BackingField_32(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_SceneOperationProgress_mEB1B6F831A704913D294C705993FE41B8EE374AF_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SceneOperationProgress { get; private set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CSceneOperationProgressU3Ek__BackingField_33(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationInProgress_mAA1F1AEAD40470657659EE993D7BF0EDB264E780_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool LightingOperationInProgress { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CLightingOperationInProgressU3Ek__BackingField_34(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_LightingOperationProgress_m7F5C675B4623852B82B1ABF9ADB9A534E4F6D72B_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float LightingOperationProgress { get; private set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CLightingOperationProgressU3Ek__BackingField_35(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_SceneOperationInProgress_mE51A59A4149D9F05D48814C2A8224D1CB58BCD8A_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool SceneOperationInProgress { get; private set; } = false;
		bool L_0 = __this->get_U3CSceneOperationInProgressU3Ek__BackingField_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealitySceneSystem_get_LightingOperationInProgress_m8EB05861947F8C1D0DC3778048DAF26A2B7E2124_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public bool LightingOperationInProgress { get; private set; } = false;
		bool L_0 = __this->get_U3CLightingOperationInProgressU3Ek__BackingField_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneLoaded_m10FE20603C360C002F73AFDB3BC886BAC131AFA6_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnSceneLoadedU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentLoaded_mFF319D6F5B46C68E5A9B1F7E0A572E026FAEF022_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentLoaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnContentLoadedU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingLoaded_mB29843423B6E59EE8F62AE10566E71CE770CB3E0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingLoaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnLightingLoadedU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadScene_mF79FD1114F82B22A71839ED62C827747C46DC832_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillLoadSceneU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillLoadContent_mB75B7D082769532ABE1D3D36E55E7F26D1E8BE7D_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillLoadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnWillLoadContentU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillLoadLighting_m2F92B704FB3607602A7C8DCCC0A40FD60429D3C0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillLoadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillLoadLightingU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadScene_mBE2BA9F0CD738E20389754BB365B85E1675C61D7_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadScene { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillUnloadSceneU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnWillUnloadContent_m1B7E0981AB07E900A755DAE362BE6924061BD05E_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnWillUnloadContent { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnWillUnloadContentU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnWillUnloadLighting_m53A24A50EE707CF0AE68F62DC67A570F7EA98AA5_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnWillUnloadLighting { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnWillUnloadLightingU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnSceneUnloaded_m169C081514B84600E187CEC39B2B51519C59E80B_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnSceneUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnSceneUnloadedU3Ek__BackingField_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * MixedRealitySceneSystem_get_OnContentUnloaded_mBDC3B6242A2CFF1D3C05696EF7095D30E2FE5FC0_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<IEnumerable<string>> OnContentUnloaded { get; set; }
		Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * L_0 = __this->get_U3COnContentUnloadedU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * MixedRealitySceneSystem_get_OnLightingUnloaded_mBC40F24371836298D839044E53D2542100688DB6_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public Action<string> OnLightingUnloaded { get; set; }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_U3COnLightingUnloadedU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_SourceName_m8BEFA2CFA1D42185D07AF74D25CE8CCD5A62980C_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Scene System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_39();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneActivationToken_get_AllowSceneActivation_m81B4A7DCD9A96D3AEDE009C169653E93F8D60AC0_inline (SceneActivationToken_t263A4FDA157BFF30F008BDBD7A8D541CEB78803B * __this, const RuntimeMethod* method)
{
	{
		// public bool AllowSceneActivation { get; set; } = false;
		bool L_0 = __this->get_U3CAllowSceneActivationU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealitySceneSystem_get_SceneOperationProgress_m905900F563F4809DE6FF7AA6A5ED5DB5BD0A7130_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public float SceneOperationProgress { get; private set; } = 0;
		float L_0 = __this->get_U3CSceneOperationProgressU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySceneSystem_get_ActiveLightingScene_mD8121BEAFC07751C224F8FAC758D4EFD1DE3CDBF_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, const RuntimeMethod* method)
{
	{
		// public string ActiveLightingScene { get; private set; } = string.Empty;
		String_t* L_0 = __this->get_U3CActiveLightingSceneU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealitySceneSystem_set_ActiveLightingScene_m6C680D8072984AEDF32085CBB9E3D29373EFF42E_inline (MixedRealitySceneSystem_t922F97882EAA2B7722B34A156F10B4B7EC08C060 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ActiveLightingScene { get; private set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->set_U3CActiveLightingSceneU3Ek__BackingField_36(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystemProfile_get_LightingScenes_m4DB634A6825E611FD03DC280896168B9C6D4747B_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method)
{
	{
		// public IEnumerable<SceneInfo> LightingScenes { get { return lightingScenes; } }
		List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * L_0 = __this->get_lightingScenes_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySceneSystemProfile_get_ContentScenes_m5B2F21314D1C35779B833ACA80683E2E955CE42D_inline (MixedRealitySceneSystemProfile_t12F9369B3D44E739747DCDE452E52C7BD90F41A5 * __this, const RuntimeMethod* method)
{
	{
		// public IEnumerable<SceneInfo> ContentScenes { get { return contentScenes; } }
		List_1_t3E94E64DA734ECF78315C1ADF2DBE34012609FF3 * L_0 = __this->get_contentScenes_10();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
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
