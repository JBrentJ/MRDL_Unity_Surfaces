#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct  FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct  SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.RuntimeInitializeLoadType
struct  RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct  DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct  DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct  RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2 (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, int32_t ___loadType0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * __this, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
static void Microsoft_MixedReality_OpenXR_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x69\x63\x72\x6F\x73\x6F\x66\x74\x2E\x4D\x69\x78\x65\x64\x52\x65\x61\x6C\x69\x74\x79\x2E\x4F\x70\x65\x6E\x58\x52\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[4];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_remoteHostName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x68\x6F\x73\x74\x6E\x61\x6D\x65\x20\x6F\x72\x20\x49\x50\x20\x61\x64\x64\x72\x65\x73\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x72\x75\x6E\x6E\x69\x6E\x67\x20\x69\x6E\x20\x6E\x65\x74\x77\x6F\x72\x6B\x20\x73\x65\x72\x76\x65\x72\x20\x6D\x6F\x64\x65\x20\x74\x6F\x20\x63\x6F\x6E\x6E\x65\x63\x74\x20\x74\x6F\x2E"), NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_remoteHostPort(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x70\x6F\x72\x74\x20\x6E\x75\x6D\x62\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x73\x65\x72\x76\x65\x72\x27\x73\x20\x68\x61\x6E\x64\x73\x68\x61\x6B\x65\x20\x70\x6F\x72\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_maxBitrate(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x6D\x61\x78\x20\x62\x69\x74\x72\x61\x74\x65\x20\x69\x6E\x20\x4B\x62\x70\x73\x20\x74\x6F\x20\x75\x73\x65\x20\x66\x6F\x72\x20\x74\x68\x65\x20\x63\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x2E"), NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_videoCodec(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x76\x69\x64\x65\x6F\x20\x63\x6F\x64\x65\x63\x20\x74\x6F\x20\x75\x73\x65\x20\x66\x6F\x72\x20\x74\x68\x65\x20\x63\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x2E"), NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_enableAudio(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x61\x62\x6C\x65\x2F\x64\x69\x73\x61\x62\x6C\x65\x20\x61\x75\x64\x69\x6F\x20\x72\x65\x6D\x6F\x74\x69\x6E\x67\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_CustomAttributesCacheGenerator_AnchorSubsystemExtensions_LoadAnchorStoreAsync_m82E41FE29BA05A8452E893F01AF66D7E7603EAFC(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
}
static void AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_CustomAttributesCacheGenerator_AnchorSubsystem_RegisterDescriptor_m65C4EE373B92CD294FD0CF1B085A4C2937A7FF73(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 4LL, NULL);
	}
}
static void Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_U3CContextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
}
static void PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_CustomAttributesCacheGenerator_PlaneSubsystem_RegisterDescriptor_m42912E97BB0237E103E7ABBC41B8AD8E1B4AAEBB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 4LL, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CInstanceU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSystemIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSessionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSessionStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CReferenceSpaceU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CIsAnchorExtensionSupportedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_Instance_m5A9F29436F87D80536EFB362C6EBB43A2E432292(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_SystemId_mDE025D0FBC203A6A2C0D7E7D09F5D781222F8D24(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_Session_m2872A7AF12BD3DA6152700984C2D43EFB38A2C92(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_SessionState_m47F3E01BD477A073D3A0A57969B7763D7465E72B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_ReferenceSpace_m57127B8E52032FB1BD0F3FF188C7F4349F88B7E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_IsAnchorExtensionSupported_mDF9440D7059738CAF0C3AE3A0E9DE5A4A6AAF6BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CPoseFlagsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CRotationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CPositionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CRadiusU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PoseFlags_t1148F2477DC15F8C90C5A712E559624AF5810B19_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Microsoft_MixedReality_OpenXR_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Microsoft_MixedReality_OpenXR_AttributeGenerators[49] = 
{
	AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_CustomAttributesCacheGenerator,
	U3CU3Ec_t9BE7C6DFEA49FAB08737BB5CC7B186836270B637_CustomAttributesCacheGenerator,
	AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_CustomAttributesCacheGenerator,
	PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_CustomAttributesCacheGenerator,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator,
	PoseFlags_t1148F2477DC15F8C90C5A712E559624AF5810B19_CustomAttributesCacheGenerator,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_remoteHostName,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_remoteHostPort,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_maxBitrate,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_videoCodec,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_m_enableAudio,
	Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_U3CContextU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CInstanceU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSystemIdU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSessionU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CSessionStateU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CReferenceSpaceU3Ek__BackingField,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_U3CIsAnchorExtensionSupportedU3Ek__BackingField,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CPoseFlagsU3Ek__BackingField,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CRotationU3Ek__BackingField,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CPositionU3Ek__BackingField,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_U3CRadiusU3Ek__BackingField,
	EditorRemotingPlugin_tB211EF9EB505283B6601090682F9BA730C18B927_CustomAttributesCacheGenerator_EditorRemotingPlugin_U3COnSystemChangeU3Eb__13_0_m437E12AF7B7A1A2E6E1351F50A9BB04A771C03B1,
	AnchorSubsystemExtensions_t21742F0A1AC854D179343BFDF95BCA0269424C90_CustomAttributesCacheGenerator_AnchorSubsystemExtensions_LoadAnchorStoreAsync_m82E41FE29BA05A8452E893F01AF66D7E7603EAFC,
	AnchorSubsystem_t2BB79D99F1A04BB110B79EEF6A1C02CE8988FF37_CustomAttributesCacheGenerator_AnchorSubsystem_RegisterDescriptor_m65C4EE373B92CD294FD0CF1B085A4C2937A7FF73,
	Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_Feature_get_Context_m85C7C0C0F5CD34B379D8E7DCE32D825F3EAAE9A4,
	Feature_t3DD634385138DF52E05906E76F0A941A462684D6_CustomAttributesCacheGenerator_Feature_set_Context_mCCADDAA6EEA39828A9C92057A5B74D119B9579DB,
	PlaneSubsystem_t0B2A2C8C6D408C9A8A9037196FF81A718B552974_CustomAttributesCacheGenerator_PlaneSubsystem_RegisterDescriptor_m42912E97BB0237E103E7ABBC41B8AD8E1B4AAEBB,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_Instance_m5A9F29436F87D80536EFB362C6EBB43A2E432292,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_Instance_mA2E46C8CC8B83E1A1CEAC09328FEFF7C198C4C05,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_SystemId_mDE025D0FBC203A6A2C0D7E7D09F5D781222F8D24,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_SystemId_m8BB53E3B251CFFB0CBDD85C8E4FCDF3FE587220E,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_Session_m2872A7AF12BD3DA6152700984C2D43EFB38A2C92,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_Session_mB2C7C488B9692236259C1A4F89B6EA66539B02BC,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_SessionState_m47F3E01BD477A073D3A0A57969B7763D7465E72B,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_SessionState_mBE3DE7CD6CB6825F772B017808E545A48361364B,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_ReferenceSpace_m57127B8E52032FB1BD0F3FF188C7F4349F88B7E6,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_ReferenceSpace_m2BDBC63F650A8CA6C0EE67C1AD4E8BE3CB794A9D,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_get_IsAnchorExtensionSupported_mDF9440D7059738CAF0C3AE3A0E9DE5A4A6AAF6BC,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_set_IsAnchorExtensionSupported_m4A3D039CF271B4860ACEDB0B4A10D7E20FB92EBA,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemCreateU3Eb__33_0_mCD7DA3DD5A51CE21D94F8AB8CDB5899EB8AB2479,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemStartU3Eb__34_0_m6362A2E720267EE2AF9E0EA5AF68FB8536E85C57,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemStopU3Eb__35_0_mBA1323B6FF0BC9E3E59D9B77A1985A366B34A309,
	OpenXRPlugin_t926897BA1FB5EEA64294A12E1762AD0D0C38D85A_CustomAttributesCacheGenerator_OpenXRPlugin_U3COnSubsystemDestroyU3Eb__36_0_mF0DF76DD20B94E1B17F55C512B27049A105EAC91,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_PoseFlags_mA28565283DA04AE23A0756BC8F4ACF3411D65809,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Rotation_m5795DFEFC4A04F44B31B0E0F66E0F69E69C49F59,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Position_m7D540B7BDE4A2A26FD5059DDF313C8258A0565FB,
	HandJointLocation_tB1E35091B5716C3101EF4D3BF0DD6EF5058E6864_CustomAttributesCacheGenerator_HandJointLocation_get_Radius_m0AD28C74DFA0FF755ED24593F02CF25A43F9EE8B,
	Microsoft_MixedReality_OpenXR_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
