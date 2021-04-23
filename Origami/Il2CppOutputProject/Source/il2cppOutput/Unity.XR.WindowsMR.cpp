#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>[]
struct EntryU5BU5D_t17D4C9628A2D23EEBCAA795C5F1AAD7A4C42CF60;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct KeyCollection_tFAE3E69598B93CA315C7A4F3ED96F27C5102F8C6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct ValueCollection_tE9D45A1597E4E32B2E96FDE952D6265CD93A4924;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.WSA.SpatialMappingBase
struct SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54;
// UnityEngine.XR.WSA.SpatialMappingBase/Surface
struct Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D;
// UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback
struct SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592;
// UnityEngine.XR.WSA.SpatialMappingCollider
struct SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2;
// UnityEngine.XR.WSA.SpatialMappingContext
struct SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956;
// UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692;
// UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89;
// UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback
struct GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6;
// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest[]
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord[]
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1;
// UnityEngine.XR.WSA.SpatialMappingRenderer
struct SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB;
// UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15____D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05C07D1FCAF258FA9A5BB24E01F6316B3F11BE63;
IL2CPP_EXTERN_C String_t* _stringLiteral19EA9A5EB531CE393DCA73F73B60048CF49D5D7E;
IL2CPP_EXTERN_C String_t* _stringLiteral307527C227AC648BB119BCB457EBB8466E79827C;
IL2CPP_EXTERN_C String_t* _stringLiteral31CF5C222B7921A07D0A9EF275277FC32788832F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9A40DDD9AF3D33ED1C157EA10B0DD27C405802;
IL2CPP_EXTERN_C String_t* _stringLiteral44A541D01189AFFA834A25E0A93A328341730C75;
IL2CPP_EXTERN_C String_t* _stringLiteral62234BEF4038675D8DA131376AEB172897EAB03D;
IL2CPP_EXTERN_C String_t* _stringLiteral82AA2F03AC2CF34CF663318762D43CC36CFFC6C1;
IL2CPP_EXTERN_C String_t* _stringLiteral83D748A4D24B0945189E5C60B86FCDCF5E71A290;
IL2CPP_EXTERN_C String_t* _stringLiteral85EE1AFFF61EEAA487746F3F8C1685BB1C03665C;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB0E19A896B1E91498D0F86C6128A4E144E79F;
IL2CPP_EXTERN_C String_t* _stringLiteralA5720A5DE163F01678ACB0606AF0EEED421C94EB;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5BF571DE9975A9AA7E383FF7EA6E291929C5DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE9F75EABE0850F0B8A701C7B2478D0F8C395D79;
IL2CPP_EXTERN_C String_t* _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1FA74A105812D05EDBBA6CA1731A9A0C697ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6EF0B99606BAD040095156CE2B1FAAC0C59C6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9641356B56AB3E220318DB9A52C7620EC3E8076;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m03B4ABDDD2484F8DD29BC579D18F63D2D69B8CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4EF301E32DD6BA510761DF9393AB9EA87C5CB686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingBase_OnSurfaceChanged_m8DF08A2DABB49D3C56628EF2E199D128A50F3E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_m4986DE9A169D6A444E7FD3CAD56479EFB9E761AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_OnSurfaceDataReady_m504770F8B83EB20DF9020AAE149461207F847D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m1F1967D704E5FE3AD22823A3F582232B7CB9E811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m531DFED41F5A4968FD1E2672AA38C55D49452F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GetHighestPriorityCallback_BeginInvoke_m1CE22675CEE0E13C0A8E683B62D6CE4B3E1DEB80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_AddRequiredComponentsForBaking_m39F67F97247869F12E9E806B6D21AB100AA9F7EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_DestroySurface_m61864CCED61827A61A95FA29FAD6ED9920F67E04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ForEachSurfaceInCache_mE2BFDBAD198BBC7314E600477E1209864D8C2F12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnAddOrUpdateSurface_m88092554E531DD3FEF57CE0272920428FFF44A8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnDestroy_mAF2456D391A059BD21C03AC4F8D0CC1119677E54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnDisable_mB17047369711C050E2A6C4725FFE888A4530A32D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnEnable_m0AE105AB92958A9BDAB9089065C05341B5BEA907_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnRemoveSurface_m170B065EDEEE321145D9AFE0FDE9C3202F63B134_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ProcessEvictedObjects_m2717BF741005C02CDBB9137EDF32C6EE4E088AD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_Start_m63DC442935AE91EEDD3F0EA013E8CDC49B51E44B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_TryGetHighestPriorityRequest_m13220FB84B555EBE712CAB161B61F380D5849A70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_UpdateSurfaceData_m54007C547C0BEA915A1178C572AA8F8D2BF598B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_Update_m2A9E883E6650605A6615668798362076DE627665_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase__cctor_mDE92F7F277D10B7F98485323B7E58847C05CB24B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_AddRequiredComponentsForBaking_m713A141669C87A26C040C213FBDC53A0AFEAB7BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_OnBeginSurfaceEviction_m21A70B520DA8C193B777EE78E39AE86AE103CACF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_OnSurfaceDataReady_m091E11BE2C56B1B6DEEF271012886CE195B90950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_m4986DE9A169D6A444E7FD3CAD56479EFB9E761AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider__ctor_mF5B1E8581795F2235B94D2192D5370FE2691E781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_PropagateDataReadyEventToComponents_m16907610BA5CF7D52CF280FD949E783E9ECFD5CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_UpdateInFlightRecords_mB8AD8D918F398F51B66087489675B921FC57BD21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext__cctor_mE1027CD21E2DC2792C377C0FAC92F4A42B5506CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext__ctor_mE213514204AEFCDC1130E4496A75CAC9C190EEC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_DestroySurface_mD0C57EF7CC663F5487EC4AB804E6AED68460E2BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_OnBeginSurfaceEviction_mCD9F24ED93F611DFA1A51A198CC5CC00D5291AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_OnSurfaceDataReady_m420A3B0A5C033BCC60642E85BAF41408A07B0BFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer__ctor_m14922A96C242112D7063A6D099A62FAE3683AA77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceDataReadyCallback_BeginInvoke_mB767F35E7B337B4AC98E4294929A4E0262A964DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m1F1967D704E5FE3AD22823A3F582232B7CB9E811_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m531DFED41F5A4968FD1E2672AA38C55D49452F22_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C;;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com;;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD;
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1C9214707077BD8585D010C1E3AE7AB53D01423B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t17D4C9628A2D23EEBCAA795C5F1AAD7A4C42CF60* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFAE3E69598B93CA315C7A4F3ED96F27C5102F8C6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE9D45A1597E4E32B2E96FDE952D6265CD93A4924 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___entries_1)); }
	inline EntryU5BU5D_t17D4C9628A2D23EEBCAA795C5F1AAD7A4C42CF60* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t17D4C9628A2D23EEBCAA795C5F1AAD7A4C42CF60** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t17D4C9628A2D23EEBCAA795C5F1AAD7A4C42CF60* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___keys_7)); }
	inline KeyCollection_tFAE3E69598B93CA315C7A4F3ED96F27C5102F8C6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFAE3E69598B93CA315C7A4F3ED96F27C5102F8C6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFAE3E69598B93CA315C7A4F3ED96F27C5102F8C6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ___values_8)); }
	inline ValueCollection_tE9D45A1597E4E32B2E96FDE952D6265CD93A4924 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE9D45A1597E4E32B2E96FDE952D6265CD93A4924 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE9D45A1597E4E32B2E96FDE952D6265CD93A4924 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____items_1)); }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* get__items_1() const { return ____items_1; }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_StaticFields, ____emptyArray_5)); }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.XR.WSA.SpatialMappingContext
struct  SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord> UnityEngine.XR.WSA.SpatialMappingContext::m_Components
	List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * ___m_Components_1;
	// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest[] UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightRequests
	SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* ___m_InFlightRequests_2;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightSurfaces
	int32_t ___m_InFlightSurfaces_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_NextIndex
	int32_t ___m_NextIndex_4;

public:
	inline static int32_t get_offset_of_m_Components_1() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_Components_1)); }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * get_m_Components_1() const { return ___m_Components_1; }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 ** get_address_of_m_Components_1() { return &___m_Components_1; }
	inline void set_m_Components_1(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * value)
	{
		___m_Components_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Components_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_InFlightRequests_2() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_InFlightRequests_2)); }
	inline SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* get_m_InFlightRequests_2() const { return ___m_InFlightRequests_2; }
	inline SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD** get_address_of_m_InFlightRequests_2() { return &___m_InFlightRequests_2; }
	inline void set_m_InFlightRequests_2(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* value)
	{
		___m_InFlightRequests_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InFlightRequests_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_InFlightSurfaces_3() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_InFlightSurfaces_3)); }
	inline int32_t get_m_InFlightSurfaces_3() const { return ___m_InFlightSurfaces_3; }
	inline int32_t* get_address_of_m_InFlightSurfaces_3() { return &___m_InFlightSurfaces_3; }
	inline void set_m_InFlightSurfaces_3(int32_t value)
	{
		___m_InFlightSurfaces_3 = value;
	}

	inline static int32_t get_offset_of_m_NextIndex_4() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_NextIndex_4)); }
	inline int32_t get_m_NextIndex_4() const { return ___m_NextIndex_4; }
	inline int32_t* get_address_of_m_NextIndex_4() { return &___m_NextIndex_4; }
	inline void set_m_NextIndex_4(int32_t value)
	{
		___m_NextIndex_4 = value;
	}
};

struct SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields
{
public:
	// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::instance
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields, ___instance_0)); }
	inline SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * get_instance_0() const { return ___instance_0; }
	inline SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::smComponent
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692, ___smComponent_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smComponent_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::smComponent
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89, ___smComponent_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smComponent_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	int32_t ___m_Observer_1;

public:
	inline static int32_t get_offset_of_m_Observer_1() { return static_cast<int32_t>(offsetof(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864, ___m_Observer_1)); }
	inline int32_t get_m_Observer_1() const { return ___m_Observer_1; }
	inline int32_t* get_address_of_m_Observer_1() { return &___m_Observer_1; }
	inline void set_m_Observer_1(int32_t value)
	{
		___m_Observer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke
{
	int32_t ___m_Observer_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com
{
	int32_t ___m_Observer_1;
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A__padding[12];
	};

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248, ___value_1)); }
	inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * get_value_1() const { return ___value_1; }
	inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord
struct  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C 
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_Component
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	// UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_OnDataReady
	SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___m_OnDataReady_1;
	// UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_GetHighestPri
	GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___m_GetHighestPri_2;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_SurfaceObserver
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___m_SurfaceObserver_3;

public:
	inline static int32_t get_offset_of_m_Component_0() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_Component_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_m_Component_0() const { return ___m_Component_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_m_Component_0() { return &___m_Component_0; }
	inline void set_m_Component_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___m_Component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Component_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDataReady_1() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_OnDataReady_1)); }
	inline SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * get_m_OnDataReady_1() const { return ___m_OnDataReady_1; }
	inline SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 ** get_address_of_m_OnDataReady_1() { return &___m_OnDataReady_1; }
	inline void set_m_OnDataReady_1(SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * value)
	{
		___m_OnDataReady_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDataReady_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GetHighestPri_2() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_GetHighestPri_2)); }
	inline GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * get_m_GetHighestPri_2() const { return ___m_GetHighestPri_2; }
	inline GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 ** get_address_of_m_GetHighestPri_2() { return &___m_GetHighestPri_2; }
	inline void set_m_GetHighestPri_2(GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * value)
	{
		___m_GetHighestPri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GetHighestPri_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfaceObserver_3() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_SurfaceObserver_3)); }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * get_m_SurfaceObserver_3() const { return ___m_SurfaceObserver_3; }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 ** get_address_of_m_SurfaceObserver_3() { return &___m_SurfaceObserver_3; }
	inline void set_m_SurfaceObserver_3(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * value)
	{
		___m_SurfaceObserver_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfaceObserver_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke
{
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke ___m_SurfaceObserver_3;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com
{
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com* ___m_SurfaceObserver_3;
};

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::D15896F389DBE7C4EB4B27E5CA408E92D08149C9
	__StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0;

public:
	inline static int32_t get_offset_of_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15_StaticFields, ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0)); }
	inline __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  get_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() const { return ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A * get_address_of_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return &___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline void set_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0(__StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  value)
	{
		___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Object>
struct  Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___dictionary_0)); }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___current_3)); }
	inline KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B, ___dictionary_0)); }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B, ___current_3)); }
	inline KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___list_0)); }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * get_list_0() const { return ___list_0; }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___current_3)); }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  get_current_3() const { return ___current_3; }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_LODType
struct  LODType_t6235D9BF8D6E80394CA294F59A09EB49845140A2 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_LODType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LODType_t6235D9BF8D6E80394CA294F59A09EB49845140A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType
struct  VolumeType_t0D39A83EC4E176177D28FFCAB4C40E9C72A98F00 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t0D39A83EC4E176177D28FFCAB4C40E9C72A98F00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState
struct  RenderState_tA3E5217912C63B212E5FC61718AC41D1560C437B 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderState_tA3E5217912C63B212E5FC61718AC41D1560C437B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___id_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_id_0() const { return ___id_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputMesh_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputAnchor_2)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputAnchor_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputCollider_3)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCollider_3), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.PhysicMaterial
struct  PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingBase_Surface
struct  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase_Surface::<surfaceId>k__BackingField
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___U3CsurfaceIdU3Ek__BackingField_0;
	// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase_Surface::<updateTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CupdateTimeU3Ek__BackingField_1;
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase_Surface::<gameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CgameObjectU3Ek__BackingField_2;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase_Surface::<surfaceData>k__BackingField
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___U3CsurfaceDataU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_Surface::<remainingUpdatesToLive>k__BackingField
	int32_t ___U3CremainingUpdatesToLiveU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase_Surface::<awaitingBake>k__BackingField
	bool ___U3CawaitingBakeU3Ek__BackingField_5;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshFilter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CmeshFilterU3Ek__BackingField_6;
	// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshRenderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CmeshRendererU3Ek__BackingField_7;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CmeshColliderU3Ek__BackingField_8;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase_Surface::<worldAnchor>k__BackingField
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___U3CworldAnchorU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CsurfaceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CsurfaceIdU3Ek__BackingField_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_U3CsurfaceIdU3Ek__BackingField_0() const { return ___U3CsurfaceIdU3Ek__BackingField_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_U3CsurfaceIdU3Ek__BackingField_0() { return &___U3CsurfaceIdU3Ek__BackingField_0; }
	inline void set_U3CsurfaceIdU3Ek__BackingField_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___U3CsurfaceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CupdateTimeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CupdateTimeU3Ek__BackingField_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CupdateTimeU3Ek__BackingField_1() const { return ___U3CupdateTimeU3Ek__BackingField_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CupdateTimeU3Ek__BackingField_1() { return &___U3CupdateTimeU3Ek__BackingField_1; }
	inline void set_U3CupdateTimeU3Ek__BackingField_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CupdateTimeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CgameObjectU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CgameObjectU3Ek__BackingField_2() const { return ___U3CgameObjectU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CgameObjectU3Ek__BackingField_2() { return &___U3CgameObjectU3Ek__BackingField_2; }
	inline void set_U3CgameObjectU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CgameObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsurfaceDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CsurfaceDataU3Ek__BackingField_3)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_U3CsurfaceDataU3Ek__BackingField_3() const { return ___U3CsurfaceDataU3Ek__BackingField_3; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_U3CsurfaceDataU3Ek__BackingField_3() { return &___U3CsurfaceDataU3Ek__BackingField_3; }
	inline void set_U3CsurfaceDataU3Ek__BackingField_3(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___U3CsurfaceDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputCollider_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CremainingUpdatesToLiveU3Ek__BackingField_4)); }
	inline int32_t get_U3CremainingUpdatesToLiveU3Ek__BackingField_4() const { return ___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return &___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline void set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(int32_t value)
	{
		___U3CremainingUpdatesToLiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CawaitingBakeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CawaitingBakeU3Ek__BackingField_5)); }
	inline bool get_U3CawaitingBakeU3Ek__BackingField_5() const { return ___U3CawaitingBakeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CawaitingBakeU3Ek__BackingField_5() { return &___U3CawaitingBakeU3Ek__BackingField_5; }
	inline void set_U3CawaitingBakeU3Ek__BackingField_5(bool value)
	{
		___U3CawaitingBakeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshFilterU3Ek__BackingField_6)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CmeshFilterU3Ek__BackingField_6() const { return ___U3CmeshFilterU3Ek__BackingField_6; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CmeshFilterU3Ek__BackingField_6() { return &___U3CmeshFilterU3Ek__BackingField_6; }
	inline void set_U3CmeshFilterU3Ek__BackingField_6(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CmeshFilterU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshFilterU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshRendererU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshRendererU3Ek__BackingField_7)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CmeshRendererU3Ek__BackingField_7() const { return ___U3CmeshRendererU3Ek__BackingField_7; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CmeshRendererU3Ek__BackingField_7() { return &___U3CmeshRendererU3Ek__BackingField_7; }
	inline void set_U3CmeshRendererU3Ek__BackingField_7(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CmeshRendererU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshRendererU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshColliderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshColliderU3Ek__BackingField_8)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CmeshColliderU3Ek__BackingField_8() const { return ___U3CmeshColliderU3Ek__BackingField_8; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CmeshColliderU3Ek__BackingField_8() { return &___U3CmeshColliderU3Ek__BackingField_8; }
	inline void set_U3CmeshColliderU3Ek__BackingField_8(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CmeshColliderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshColliderU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CworldAnchorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CworldAnchorU3Ek__BackingField_9)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_U3CworldAnchorU3Ek__BackingField_9() const { return ___U3CworldAnchorU3Ek__BackingField_9; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_U3CworldAnchorU3Ek__BackingField_9() { return &___U3CworldAnchorU3Ek__BackingField_9; }
	inline void set_U3CworldAnchorU3Ek__BackingField_9(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___U3CworldAnchorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CworldAnchorU3Ek__BackingField_9), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest
struct  SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 
{
public:
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::m_RequestData
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___m_RequestData_0;
	// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::m_Requester
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___m_Requester_1;

public:
	inline static int32_t get_offset_of_m_RequestData_0() { return static_cast<int32_t>(offsetof(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059, ___m_RequestData_0)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_m_RequestData_0() const { return ___m_RequestData_0; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_m_RequestData_0() { return &___m_RequestData_0; }
	inline void set_m_RequestData_0(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___m_RequestData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Requester_1() { return static_cast<int32_t>(offsetof(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059, ___m_Requester_1)); }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  get_m_Requester_1() const { return ___m_Requester_1; }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * get_address_of_m_Requester_1() { return &___m_Requester_1; }
	inline void set_m_Requester_1(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		___m_Requester_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke ___m_RequestData_0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke ___m_Requester_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com ___m_RequestData_0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com ___m_Requester_1;
};

// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback
struct  SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback
struct  GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingBase
struct  SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_SurfaceParent_7;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_FreezeUpdates
	bool ___m_FreezeUpdates_8;
	// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType UnityEngine.XR.WSA.SpatialMappingBase::m_VolumeType
	int32_t ___m_VolumeType_9;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SphereRadius
	float ___m_SphereRadius_10;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::m_HalfBoxExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_HalfBoxExtents_11;
	// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::m_LodType
	int32_t ___m_LodType_12;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::m_NumUpdatesBeforeRemoval
	int32_t ___m_NumUpdatesBeforeRemoval_13;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SecondsBetweenUpdates
	float ___m_SecondsBetweenUpdates_14;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_BakePhysics
	bool ___m_BakePhysics_15;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::<observerId>k__BackingField
	int32_t ___U3CobserverIdU3Ek__BackingField_16;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObserver>k__BackingField
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___U3CsurfaceObserverU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObjects>k__BackingField
	Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___U3CsurfaceObjectsU3Ek__BackingField_18;
	// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::<bounds>k__BackingField
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___U3CboundsU3Ek__BackingField_19;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::<lastUpdatedObserverPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20;
	// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::<selectedCamera>k__BackingField
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___U3CselectedCameraU3Ek__BackingField_21;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::<nextSurfaceChangeUpdateTime>k__BackingField
	float ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::m_PendingSurfacesForEviction
	Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___m_PendingSurfacesForEviction_23;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::m_SurfacesToRemoveFromDict
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_SurfacesToRemoveFromDict_24;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParentWasDynamicallyCreated
	bool ___m_SurfaceParentWasDynamicallyCreated_25;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase::bestSurfaceDataNull
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bestSurfaceDataNull_27;

public:
	inline static int32_t get_offset_of_m_SurfaceParent_7() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfaceParent_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_SurfaceParent_7() const { return ___m_SurfaceParent_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_SurfaceParent_7() { return &___m_SurfaceParent_7; }
	inline void set_m_SurfaceParent_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_SurfaceParent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfaceParent_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreezeUpdates_8() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_FreezeUpdates_8)); }
	inline bool get_m_FreezeUpdates_8() const { return ___m_FreezeUpdates_8; }
	inline bool* get_address_of_m_FreezeUpdates_8() { return &___m_FreezeUpdates_8; }
	inline void set_m_FreezeUpdates_8(bool value)
	{
		___m_FreezeUpdates_8 = value;
	}

	inline static int32_t get_offset_of_m_VolumeType_9() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_VolumeType_9)); }
	inline int32_t get_m_VolumeType_9() const { return ___m_VolumeType_9; }
	inline int32_t* get_address_of_m_VolumeType_9() { return &___m_VolumeType_9; }
	inline void set_m_VolumeType_9(int32_t value)
	{
		___m_VolumeType_9 = value;
	}

	inline static int32_t get_offset_of_m_SphereRadius_10() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SphereRadius_10)); }
	inline float get_m_SphereRadius_10() const { return ___m_SphereRadius_10; }
	inline float* get_address_of_m_SphereRadius_10() { return &___m_SphereRadius_10; }
	inline void set_m_SphereRadius_10(float value)
	{
		___m_SphereRadius_10 = value;
	}

	inline static int32_t get_offset_of_m_HalfBoxExtents_11() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_HalfBoxExtents_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_HalfBoxExtents_11() const { return ___m_HalfBoxExtents_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_HalfBoxExtents_11() { return &___m_HalfBoxExtents_11; }
	inline void set_m_HalfBoxExtents_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_HalfBoxExtents_11 = value;
	}

	inline static int32_t get_offset_of_m_LodType_12() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_LodType_12)); }
	inline int32_t get_m_LodType_12() const { return ___m_LodType_12; }
	inline int32_t* get_address_of_m_LodType_12() { return &___m_LodType_12; }
	inline void set_m_LodType_12(int32_t value)
	{
		___m_LodType_12 = value;
	}

	inline static int32_t get_offset_of_m_NumUpdatesBeforeRemoval_13() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_NumUpdatesBeforeRemoval_13)); }
	inline int32_t get_m_NumUpdatesBeforeRemoval_13() const { return ___m_NumUpdatesBeforeRemoval_13; }
	inline int32_t* get_address_of_m_NumUpdatesBeforeRemoval_13() { return &___m_NumUpdatesBeforeRemoval_13; }
	inline void set_m_NumUpdatesBeforeRemoval_13(int32_t value)
	{
		___m_NumUpdatesBeforeRemoval_13 = value;
	}

	inline static int32_t get_offset_of_m_SecondsBetweenUpdates_14() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SecondsBetweenUpdates_14)); }
	inline float get_m_SecondsBetweenUpdates_14() const { return ___m_SecondsBetweenUpdates_14; }
	inline float* get_address_of_m_SecondsBetweenUpdates_14() { return &___m_SecondsBetweenUpdates_14; }
	inline void set_m_SecondsBetweenUpdates_14(float value)
	{
		___m_SecondsBetweenUpdates_14 = value;
	}

	inline static int32_t get_offset_of_m_BakePhysics_15() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_BakePhysics_15)); }
	inline bool get_m_BakePhysics_15() const { return ___m_BakePhysics_15; }
	inline bool* get_address_of_m_BakePhysics_15() { return &___m_BakePhysics_15; }
	inline void set_m_BakePhysics_15(bool value)
	{
		___m_BakePhysics_15 = value;
	}

	inline static int32_t get_offset_of_U3CobserverIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CobserverIdU3Ek__BackingField_16)); }
	inline int32_t get_U3CobserverIdU3Ek__BackingField_16() const { return ___U3CobserverIdU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CobserverIdU3Ek__BackingField_16() { return &___U3CobserverIdU3Ek__BackingField_16; }
	inline void set_U3CobserverIdU3Ek__BackingField_16(int32_t value)
	{
		___U3CobserverIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CsurfaceObserverU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CsurfaceObserverU3Ek__BackingField_17)); }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * get_U3CsurfaceObserverU3Ek__BackingField_17() const { return ___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 ** get_address_of_U3CsurfaceObserverU3Ek__BackingField_17() { return &___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline void set_U3CsurfaceObserverU3Ek__BackingField_17(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * value)
	{
		___U3CsurfaceObserverU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsurfaceObserverU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CsurfaceObjectsU3Ek__BackingField_18)); }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * get_U3CsurfaceObjectsU3Ek__BackingField_18() const { return ___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 ** get_address_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return &___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline void set_U3CsurfaceObjectsU3Ek__BackingField_18(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * value)
	{
		___U3CsurfaceObjectsU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsurfaceObjectsU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CboundsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CboundsU3Ek__BackingField_19)); }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  get_U3CboundsU3Ek__BackingField_19() const { return ___U3CboundsU3Ek__BackingField_19; }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * get_address_of_U3CboundsU3Ek__BackingField_19() { return &___U3CboundsU3Ek__BackingField_19; }
	inline void set_U3CboundsU3Ek__BackingField_19(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  value)
	{
		___U3CboundsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() const { return ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return &___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline void set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClastUpdatedObserverPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CselectedCameraU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CselectedCameraU3Ek__BackingField_21)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_U3CselectedCameraU3Ek__BackingField_21() const { return ___U3CselectedCameraU3Ek__BackingField_21; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_U3CselectedCameraU3Ek__BackingField_21() { return &___U3CselectedCameraU3Ek__BackingField_21; }
	inline void set_U3CselectedCameraU3Ek__BackingField_21(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___U3CselectedCameraU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedCameraU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22)); }
	inline float get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() const { return ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline float* get_address_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return &___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline void set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(float value)
	{
		___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_m_PendingSurfacesForEviction_23() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_PendingSurfacesForEviction_23)); }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * get_m_PendingSurfacesForEviction_23() const { return ___m_PendingSurfacesForEviction_23; }
	inline Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 ** get_address_of_m_PendingSurfacesForEviction_23() { return &___m_PendingSurfacesForEviction_23; }
	inline void set_m_PendingSurfacesForEviction_23(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * value)
	{
		___m_PendingSurfacesForEviction_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingSurfacesForEviction_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfacesToRemoveFromDict_24() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfacesToRemoveFromDict_24)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_SurfacesToRemoveFromDict_24() const { return ___m_SurfacesToRemoveFromDict_24; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_SurfacesToRemoveFromDict_24() { return &___m_SurfacesToRemoveFromDict_24; }
	inline void set_m_SurfacesToRemoveFromDict_24(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_SurfacesToRemoveFromDict_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfacesToRemoveFromDict_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfaceParentWasDynamicallyCreated_25() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfaceParentWasDynamicallyCreated_25)); }
	inline bool get_m_SurfaceParentWasDynamicallyCreated_25() const { return ___m_SurfaceParentWasDynamicallyCreated_25; }
	inline bool* get_address_of_m_SurfaceParentWasDynamicallyCreated_25() { return &___m_SurfaceParentWasDynamicallyCreated_25; }
	inline void set_m_SurfaceParentWasDynamicallyCreated_25(bool value)
	{
		___m_SurfaceParentWasDynamicallyCreated_25 = value;
	}

	inline static int32_t get_offset_of_bestSurfaceDataNull_27() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___bestSurfaceDataNull_27)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_bestSurfaceDataNull_27() const { return ___bestSurfaceDataNull_27; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_bestSurfaceDataNull_27() { return &___bestSurfaceDataNull_27; }
	inline void set_bestSurfaceDataNull_27(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___bestSurfaceDataNull_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputCollider_3), (void*)NULL);
		#endif
	}
};

struct SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields
{
public:
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_MovementUpdateThresholdSqr
	float ___s_MovementUpdateThresholdSqr_4;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_EvictionUpdateTickThresholdSqr
	float ___s_EvictionUpdateTickThresholdSqr_5;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::s_ObserverIdCounter
	int32_t ___s_ObserverIdCounter_6;
	// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::s_LodToPcm
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___s_LodToPcm_26;

public:
	inline static int32_t get_offset_of_s_MovementUpdateThresholdSqr_4() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_MovementUpdateThresholdSqr_4)); }
	inline float get_s_MovementUpdateThresholdSqr_4() const { return ___s_MovementUpdateThresholdSqr_4; }
	inline float* get_address_of_s_MovementUpdateThresholdSqr_4() { return &___s_MovementUpdateThresholdSqr_4; }
	inline void set_s_MovementUpdateThresholdSqr_4(float value)
	{
		___s_MovementUpdateThresholdSqr_4 = value;
	}

	inline static int32_t get_offset_of_s_EvictionUpdateTickThresholdSqr_5() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_EvictionUpdateTickThresholdSqr_5)); }
	inline float get_s_EvictionUpdateTickThresholdSqr_5() const { return ___s_EvictionUpdateTickThresholdSqr_5; }
	inline float* get_address_of_s_EvictionUpdateTickThresholdSqr_5() { return &___s_EvictionUpdateTickThresholdSqr_5; }
	inline void set_s_EvictionUpdateTickThresholdSqr_5(float value)
	{
		___s_EvictionUpdateTickThresholdSqr_5 = value;
	}

	inline static int32_t get_offset_of_s_ObserverIdCounter_6() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_ObserverIdCounter_6)); }
	inline int32_t get_s_ObserverIdCounter_6() const { return ___s_ObserverIdCounter_6; }
	inline int32_t* get_address_of_s_ObserverIdCounter_6() { return &___s_ObserverIdCounter_6; }
	inline void set_s_ObserverIdCounter_6(int32_t value)
	{
		___s_ObserverIdCounter_6 = value;
	}

	inline static int32_t get_offset_of_s_LodToPcm_26() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_LodToPcm_26)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_s_LodToPcm_26() const { return ___s_LodToPcm_26; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_s_LodToPcm_26() { return &___s_LodToPcm_26; }
	inline void set_s_LodToPcm_26(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___s_LodToPcm_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LodToPcm_26), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingCollider
struct  SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2  : public SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::m_Layer
	int32_t ___m_Layer_28;
	// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::m_Material
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___m_Material_29;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::m_EnableCollisions
	bool ___m_EnableCollisions_30;

public:
	inline static int32_t get_offset_of_m_Layer_28() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_Layer_28)); }
	inline int32_t get_m_Layer_28() const { return ___m_Layer_28; }
	inline int32_t* get_address_of_m_Layer_28() { return &___m_Layer_28; }
	inline void set_m_Layer_28(int32_t value)
	{
		___m_Layer_28 = value;
	}

	inline static int32_t get_offset_of_m_Material_29() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_Material_29)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_m_Material_29() const { return ___m_Material_29; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_m_Material_29() { return &___m_Material_29; }
	inline void set_m_Material_29(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___m_Material_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnableCollisions_30() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_EnableCollisions_30)); }
	inline bool get_m_EnableCollisions_30() const { return ___m_EnableCollisions_30; }
	inline bool* get_address_of_m_EnableCollisions_30() { return &___m_EnableCollisions_30; }
	inline void set_m_EnableCollisions_30(bool value)
	{
		___m_EnableCollisions_30 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingRenderer
struct  SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB  : public SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54
{
public:
	// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::m_CurrentRenderState
	int32_t ___m_CurrentRenderState_28;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_VisualMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_VisualMaterial_29;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_OcclusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_OcclusionMaterial_30;

public:
	inline static int32_t get_offset_of_m_CurrentRenderState_28() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_CurrentRenderState_28)); }
	inline int32_t get_m_CurrentRenderState_28() const { return ___m_CurrentRenderState_28; }
	inline int32_t* get_address_of_m_CurrentRenderState_28() { return &___m_CurrentRenderState_28; }
	inline void set_m_CurrentRenderState_28(int32_t value)
	{
		___m_CurrentRenderState_28 = value;
	}

	inline static int32_t get_offset_of_m_VisualMaterial_29() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_VisualMaterial_29)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_VisualMaterial_29() const { return ___m_VisualMaterial_29; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_VisualMaterial_29() { return &___m_VisualMaterial_29; }
	inline void set_m_VisualMaterial_29(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_VisualMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualMaterial_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_OcclusionMaterial_30() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_OcclusionMaterial_30)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_OcclusionMaterial_30() const { return ___m_OcclusionMaterial_30; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_OcclusionMaterial_30() { return &___m_OcclusionMaterial_30; }
	inline void set_m_OcclusionMaterial_30(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_OcclusionMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OcclusionMaterial_30), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest[]
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  m_Items[1];

public:
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_Component_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_Component_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord[]
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  m_Items[1];

public:
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF  Dictionary_2_GetEnumerator_m96229BB73AA611A324DC70110E62FE619827A2CD_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  Enumerator_get_Current_mD6B1E9D5866E377F8CAD19D88CECDB8AA7016553_gshared_inline (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E3757A7C76D2E1DB0B77D03FF3DE7406334779A_gshared (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA0C519E84D909C2F0BEABF433D85E0EC6FB7C218_gshared (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m3A05638ECF11AC4B452C86801F0A7263344AB2AC_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m482455899CE0084909A48605A2F722B2F1307FB7_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972_gshared (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD_gshared (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_gshared (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_m6AFBE2E2DD43BE4877B51B515994535F544E1E07_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor()
inline void Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m034B1632BAC1CE797ADE3EF453B3BF7F0C0B8E90_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m571711921F39F8AC923BF9964A3E559DEF2455A2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m6EC9BA4E9FFDEE3AA5687571ABA564FB59BF590E_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver__ctor_mBDC4FE3EC359DB3F2481186A400EB613B9C63E90 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_mDDE2BC259C50248E17B85DDB4C68097E7C97B9DE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m34CF9585F05EE122494CB1FC3151AC877FED820B (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_m47258A0A36E0E79506F872C8E03AB33D8A666B47 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m537FDB6EDF4E405E7D140CFE44828BCB753C60EE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_m03871BCE86A0E5912CB8DAE5174F807FEBA2C613 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Count()
inline int32_t Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, const RuntimeMethod*))Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::GetEnumerator()
inline Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m96229BB73AA611A324DC70110E62FE619827A2CD_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Current()
inline KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  (*) (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *, const RuntimeMethod*))Enumerator_get_Current_mD6B1E9D5866E377F8CAD19D88CECDB8AA7016553_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Value()
inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline (KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 * __this, const RuntimeMethod* method)
{
	return ((  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * (*) (KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_gameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::MoveNext()
inline bool Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1 (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *, const RuntimeMethod*))Enumerator_MoveNext_m2E3757A7C76D2E1DB0B77D03FF3DE7406334779A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Dispose()
inline void Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1 (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *, const RuntimeMethod*))Enumerator_Dispose_mA0C519E84D909C2F0BEABF433D85E0EC6FB7C218_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_inline (KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3A05638ECF11AC4B452C86801F0A7263344AB2AC_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Clear()
inline void Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, const RuntimeMethod*))Dictionary_2_Clear_m482455899CE0084909A48605A2F722B2F1307FB7_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mBC600B152C29512A2F47D435843B491F0A23A338 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_mEA691909114179FEFB851F5A3BA8897A41626B7D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m10DAC55A998837D64FE4BB84A4E29D8A852014F2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_mAB42AB4923890CE64BE6EC93A19002886CC88FAA_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Update(UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Update_m08AD5357474ED266F8242C2CE6B42BCC9C131A29 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m2717BF741005C02CDBB9137EDF32C6EE4E088AD4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_m08248C91683C82EAF76C2B78F18A6156DA5AD13A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_m5529DEFB30F2B54DF0D7A2D293AFC2B1EF7B6C67 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_m305DE7E01DD8F4B32A7DEE6B1F3B2A8ABA912100 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsSphere_m8CC38FF7980EDDCC4D4B9FDB312DB622325BFD70 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, float ___radiusMeters1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsAxisAlignedBox(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsAxisAlignedBox_m26D27F3DBEC734594B04C75A37CE28017CB47340 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_mFE6057264FC068449849BDAA7481A917B2FB75F8_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_mEC35DF531261812F504FBDB432688A4A9B6B03FA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_m88092554E531DD3FEF57CE0272920428FFF44A8A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_m170B065EDEEE321145D9AFE0FDE9C3202F63B134 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Item(!0)
inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4EF301E32DD6BA510761DF9393AB9EA87C5CB686 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Remove(!0)
inline bool Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.WSA.SpatialMappingBase/Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Add(!0,!1)
inline void Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B (const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_awaitingBake(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_updateTime(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_updateTime_m8FDDAF318259294A7184AE968CBC52051BE225F2_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface__ctor_m5034101390586B7DF34E820D9CC592A45C6D5D01 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceId_m0B776CEC7A925E7780973C2E0D787C58B28439F1_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshFilter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_m11215996E1207E53F6F0C1218CA50AD058B80495_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_mAD419F4D32525643B8F2FF5823F130360DA915A1 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_gameObject_mA485C86A72C7B313E831FD5F2853338DF24C87F4_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m09D0BD0AB6A36F2DB45400E12EE2D6CCE0FDF7A1_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_worldAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m89D7EAB5602CF873669A9D4FFAC3D3B8528C3CEE_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8 (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_m6F510DAD1B7465439C2D15C640FF4F0C2FB004BA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_remainingUpdatesToLive(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_remainingUpdatesToLive()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m5D45BD30D4CCCAF01FDC1E4D6ACA402AF2E5C1B4_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_awaitingBake()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m3B199586E0066144D8986804B73E5BDE97FEEB40_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_updateTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m75DE4F8CC5F5EE392829A9B37C5C98B7FC97061A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___t10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___t21, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Invoke(!0)
inline void Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63 (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m33D62027F99886807A3AD366148A4605E0DF45BB (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___target1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_mE79B36D09B8678D3FECB869B2BAE3E32A2B46174 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74 (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___value0, const RuntimeMethod* method);
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshCollider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m54007C547C0BEA915A1178C572AA8F8D2BF598B4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m39F67F97247869F12E9E806B6D21AB100AA9F7EA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m2928D4F59FDD43EDBA2C0A46D5B66BFFB80DAD5B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m03B4ABDDD2484F8DD29BC579D18F63D2D69B8CBC (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_mE2BFDBAD198BBC7314E600477E1209864D8C2F12 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_mD42F9367CEA98C6FABE37B83736BD9C6E405AE5A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * Collider_get_material_m4F6B81A3CD1B3B579579EF2DBA73CEF29072766A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_m7F553859CFEE41A8A022EC44E5132A57EB557164 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
inline void List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mF948151007C0E6D8E5A56D07390BB18A0EFEC22E (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972 (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, const RuntimeMethod*))List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_gshared)(__this, ___match0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
inline void List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C , const RuntimeMethod*))List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m8F2D1733A044CAB323EC721F55EF8CF934305373 (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, const RuntimeMethod*))List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10_gshared)(__this, ___match0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_mD5589ADEDEB5864958872B01F3668CEE8066F9D9 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m16907610BA5CF7D52CF280FD949E783E9ECFD5CA (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_mB8AD8D918F398F51B66087489675B921FC57BD21 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_mB942609B9A2BE4201CFF14AD29E3833D04AC17D8 (double ___trianglesPerCubicMeter0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * SpatialMappingContext_GetSMComponentFromInFlightIndex_mF28F6A135A6D8C4FA7D76EEB7A98D62714C498F6 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
inline Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_mD9CA9D1746AF5AE4D247404CF4E49DA5FEC086A0 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
inline bool Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
inline void Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m86306BA81672224B59FAF4E222F232C6D2CC7946 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::AssertFormat(System.Boolean,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_AssertFormat_m203A9662BBFE84829AF02B23A50E03FCFFEFBC45 (bool ___condition0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, int32_t, const RuntimeMethod*))List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m26851E34E8F7F00E6D82EB593811F3230E8CB3E3 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::RequestMeshAsync(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___dataRequest0, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
inline int32_t List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_mE213514204AEFCDC1130E4496A75CAC9C190EEC9 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m415CCE1F9F6B4654D3505256EFE05B49589A78DF (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6 (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshRenderer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRenderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m61864CCED61827A61A95FA29FAD6ED9920F67E04 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m6600CD1C60856651B8E939DA904984ED9DD82D51 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m439EE5826EC8650A9051CE8878A4DE6E62BAA37E (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_mAF2456D391A059BD21C03AC4F8D0CC1119677E54 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_m2DB6F9468DCD37B2364AC0E1638C2D8C16A0B411 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// get { return m_SurfaceParent; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_SurfaceParent_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SurfaceParent; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_mEA691909114179FEFB851F5A3BA8897A41626B7D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SurfaceParent = value; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_m_SurfaceParent_7(L_0);
		// set { m_SurfaceParent = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m10DAC55A998837D64FE4BB84A4E29D8A852014F2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_FreezeUpdates; }
		bool L_0 = __this->get_m_FreezeUpdates_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_FreezeUpdates; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_freezeUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_freezeUpdates_m71283A8642C61D3B281590D9DB68B99E19CA37F2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FreezeUpdates = value; }
		bool L_0 = ___value0;
		__this->set_m_FreezeUpdates_8(L_0);
		// set { m_FreezeUpdates = value; }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_VolumeType; }
		int32_t L_0 = __this->get_m_VolumeType_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_VolumeType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_volumeType(UnityEngine.XR.WSA.SpatialMappingBase_VolumeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_volumeType_mEBB8681679F9E6175DA61AA547953DFAE5D88E8A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_VolumeType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_VolumeType_9(L_0);
		// set { m_VolumeType = value; }
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_m305DE7E01DD8F4B32A7DEE6B1F3B2A8ABA912100 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_SphereRadius; }
		float L_0 = __this->get_m_SphereRadius_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SphereRadius; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_sphereRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_sphereRadius_mB80949A123DEA71B0D5DC8D9652524D5C526011C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SphereRadius = value; }
		float L_0 = ___value0;
		__this->set_m_SphereRadius_10(L_0);
		// set { m_SphereRadius = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_HalfBoxExtents; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_HalfBoxExtents_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_HalfBoxExtents; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_halfBoxExtents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_halfBoxExtents_m05B08C712E1FC96E29ACC2D4B23C6A1ED3450A33 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HalfBoxExtents = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_HalfBoxExtents_11(L_0);
		// set { m_HalfBoxExtents = value; }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_LodType; }
		int32_t L_0 = __this->get_m_LodType_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_LodType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lodType(UnityEngine.XR.WSA.SpatialMappingBase_LODType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lodType_mE15AE07981E0997DA01FB4FEFD988089301137D9 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_LodType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_LodType_12(L_0);
		// set { m_LodType = value; }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_m6F510DAD1B7465439C2D15C640FF4F0C2FB004BA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_NumUpdatesBeforeRemoval; }
		int32_t L_0 = __this->get_m_NumUpdatesBeforeRemoval_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_NumUpdatesBeforeRemoval; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_numUpdatesBeforeRemoval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_numUpdatesBeforeRemoval_m7E148F9CA6DEBA1A3D91F7599DA082941AED41D9 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_NumUpdatesBeforeRemoval = value; }
		int32_t L_0 = ___value0;
		__this->set_m_NumUpdatesBeforeRemoval_13(L_0);
		// set { m_NumUpdatesBeforeRemoval = value; }
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_m08248C91683C82EAF76C2B78F18A6156DA5AD13A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_SecondsBetweenUpdates; }
		float L_0 = __this->get_m_SecondsBetweenUpdates_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SecondsBetweenUpdates; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_secondsBetweenUpdates(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_secondsBetweenUpdates_mA45FCEA50727DE86AE99BDEF275BC325366BC2AA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SecondsBetweenUpdates = value; }
		float L_0 = ___value0;
		__this->set_m_SecondsBetweenUpdates_14(L_0);
		// set { m_SecondsBetweenUpdates = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_mEC35DF531261812F504FBDB432688A4A9B6B03FA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_BakePhysics;
		bool L_0 = __this->get_m_BakePhysics_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m33D62027F99886807A3AD366148A4605E0DF45BB (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_BakePhysics = value;
		bool L_0 = ___value0;
		__this->set_m_BakePhysics_15(L_0);
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_m11215996E1207E53F6F0C1218CA50AD058B80495 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = __this->get_U3CobserverIdU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_m6AFBE2E2DD43BE4877B51B515994535F544E1E07 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CobserverIdU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = __this->get_U3CsurfaceObserverU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_mDDE2BC259C50248E17B85DDB4C68097E7C97B9DE (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = ___value0;
		__this->set_U3CsurfaceObserverU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = __this->get_U3CsurfaceObjectsU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m034B1632BAC1CE797ADE3EF453B3BF7F0C0B8E90 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = ___value0;
		__this->set_U3CsurfaceObjectsU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = __this->get_U3CboundsU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m537FDB6EDF4E405E7D140CFE44828BCB753C60EE (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = ___value0;
		__this->set_U3CboundsU3Ek__BackingField_19(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_mFE6057264FC068449849BDAA7481A917B2FB75F8 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_U3CselectedCameraU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m571711921F39F8AC923BF9964A3E559DEF2455A2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___value0;
		__this->set_U3CselectedCameraU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_mAB42AB4923890CE64BE6EC93A19002886CC88FAA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = __this->get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m6EC9BA4E9FFDEE3AA5687571ABA564FB59BF590E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * V_0 = NULL;
	{
		// return m_PendingSurfacesForEviction;
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = __this->get_m_PendingSurfacesForEviction_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_pendingSurfacesForEviction(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_pendingSurfacesForEviction_m371E42A047ADBCF42AB6DB206EF93099564264AE (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___value0, const RuntimeMethod* method)
{
	{
		// m_PendingSurfacesForEviction = value;
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = ___value0;
		__this->set_m_PendingSurfacesForEviction_23(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	{
		// return m_SurfacesToRemoveFromDict;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_m_SurfacesToRemoveFromDict_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfacesToRemoveFromDict(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfacesToRemoveFromDict_m11D7CF138798EB1D3BBB76ABD4E6509A6D30A7E0 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___value0, const RuntimeMethod* method)
{
	{
		// m_SurfacesToRemoveFromDict = value;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___value0;
		__this->set_m_SurfacesToRemoveFromDict_24(L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mBC600B152C29512A2F47D435843B491F0A23A338 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_SurfaceParentWasDynamicallyCreated;
		bool L_0 = __this->get_m_SurfaceParentWasDynamicallyCreated_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_mAD419F4D32525643B8F2FF5823F130360DA915A1 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_SurfaceParentWasDynamicallyCreated = value;
		bool L_0 = ___value0;
		__this->set_m_SurfaceParentWasDynamicallyCreated_25(L_0);
		// }
		return;
	}
}
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	{
		// return s_LodToPcm;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_LodToPcm_26();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_mB942609B9A2BE4201CFF14AD29E3833D04AC17D8 (double ___trianglesPerCubicMeter0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (trianglesPerCubicMeter >= 1999.0)
		double L_0 = ___trianglesPerCubicMeter0;
		V_0 = (bool)((((int32_t)((!(((double)L_0) >= ((double)(1999.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return LODType.High;
		V_1 = 0;
		goto IL_0044;
	}

IL_0019:
	{
		// else if (trianglesPerCubicMeter >= 749.0 && trianglesPerCubicMeter <= 751.0)
		double L_2 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_2) >= ((double)(749.0)))))
		{
			goto IL_0036;
		}
	}
	{
		double L_3 = ___trianglesPerCubicMeter0;
		G_B5_0 = ((((int32_t)((!(((double)L_3) <= ((double)(751.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 0;
	}

IL_0037:
	{
		V_2 = (bool)G_B5_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// return LODType.Medium;
		V_1 = 1;
		goto IL_0044;
	}

IL_0040:
	{
		// return LODType.Low;
		V_1 = 2;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Awake_m67B42E703C44CDBC08F7E193207CE23184A90052 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Start_m63DC442935AE91EEDD3F0EA013E8CDC49B51E44B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Start_m63DC442935AE91EEDD3F0EA013E8CDC49B51E44B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// observerId = s_ObserverIdCounter++;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_ObserverIdCounter_6();
		int32_t L_1 = L_0;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		SpatialMappingBase_set_observerId_m6AFBE2E2DD43BE4877B51B515994535F544E1E07_inline(__this, L_1, /*hidden argument*/NULL);
		// surfaceObjects = new Dictionary<int, Surface>();
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_2 = (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *)il2cpp_codegen_object_new(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA(L_2, /*hidden argument*/Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA_RuntimeMethod_var);
		SpatialMappingBase_set_surfaceObjects_m034B1632BAC1CE797ADE3EF453B3BF7F0C0B8E90_inline(__this, L_2, /*hidden argument*/NULL);
		// selectedCamera = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		SpatialMappingBase_set_selectedCamera_m571711921F39F8AC923BF9964A3E559DEF2455A2_inline(__this, L_3, /*hidden argument*/NULL);
		// nextSurfaceChangeUpdateTime = float.MinValue;
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m6EC9BA4E9FFDEE3AA5687571ABA564FB59BF590E_inline(__this, (-(std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		// surfaceObserver = new SurfaceObserver();
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_4 = (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)il2cpp_codegen_object_new(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_il2cpp_TypeInfo_var);
		SurfaceObserver__ctor_mBDC4FE3EC359DB3F2481186A400EB613B9C63E90(L_4, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceObserver_mDDE2BC259C50248E17B85DDB4C68097E7C97B9DE_inline(__this, L_4, /*hidden argument*/NULL);
		// SpatialMappingContext.Instance.RegisterComponent(this, OnSurfaceDataReady, TryGetHighestPriorityRequest, surfaceObserver);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_5 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010(/*hidden argument*/NULL);
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_6 = (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 *)il2cpp_codegen_object_new(SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592_il2cpp_TypeInfo_var);
		SurfaceDataReadyCallback__ctor_m34CF9585F05EE122494CB1FC3151AC877FED820B(L_6, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 12)), /*hidden argument*/NULL);
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_7 = (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 *)il2cpp_codegen_object_new(GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6_il2cpp_TypeInfo_var);
		GetHighestPriorityCallback__ctor_m47258A0A36E0E79506F872C8E03AB33D8A666B47(L_7, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 14)), /*hidden argument*/NULL);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_8 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		// bounds = new Bounds(this.transform.position, halfBoxExtents);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F(__this, /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_12), L_10, L_11, /*hidden argument*/NULL);
		SpatialMappingBase_set_bounds_m537FDB6EDF4E405E7D140CFE44828BCB753C60EE_inline(__this, L_12, /*hidden argument*/NULL);
		// UpdatePosition();
		SpatialMappingBase_UpdatePosition_m03871BCE86A0E5912CB8DAE5174F807FEBA2C613(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnEnable_m0AE105AB92958A9BDAB9089065C05341B5BEA907 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnEnable_m0AE105AB92958A9BDAB9089065C05341B5BEA907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_1, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_4 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_5 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_002e:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_6 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_2 = L_6;
			// if (kvp.Value.gameObject != null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_7);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_3 = L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0062;
			}
		}

IL_004d:
		{
			// kvp.Value.gameObject.SetActive(true);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_11);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		}

IL_0062:
		{
		}

IL_0063:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_13 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002e;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
	}

IL_007e:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_14 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_15, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B16_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B16_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B16_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0121;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_18 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_19 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_18, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_5 = L_19;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0106;
		}

IL_00b1:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_20 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_6 = L_20;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_21);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_21, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_23 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_7 = L_23;
			bool L_24 = V_7;
			if (!L_24)
			{
				goto IL_00f2;
			}
		}

IL_00d3:
		{
			// Debug.LogWarning(string.Format("Can not activate the surface id \"{0}\" because its GameObject is null.", kvp.Key));
			int32_t L_25 = KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_RuntimeMethod_var);
			int32_t L_26 = L_25;
			RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
			String_t* L_28 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral31CF5C222B7921A07D0A9EF275277FC32788832F, L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_28, /*hidden argument*/NULL);
			// continue;
			goto IL_0106;
		}

IL_00f2:
		{
			// kvp.Value.gameObject.SetActive(true);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_29 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_29);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)1, /*hidden argument*/NULL);
		}

IL_0106:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_31 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_00b1;
			}
		}

IL_010f:
		{
			IL2CPP_LEAVE(0x120, FINALLY_0111);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0111;
	}

FINALLY_0111:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(273)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(273)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x120, IL_0120)
	}

IL_0120:
	{
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDisable_mB17047369711C050E2A6C4725FFE888A4530A32D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDisable_mB17047369711C050E2A6C4725FFE888A4530A32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_1, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_4 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_5 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_002e:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_6 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_2 = L_6;
			// if (kvp.Value.gameObject != null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_7);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_3 = L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0062;
			}
		}

IL_004d:
		{
			// kvp.Value.gameObject.SetActive(false);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_11);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)0, /*hidden argument*/NULL);
		}

IL_0062:
		{
		}

IL_0063:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_13 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002e;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
	}

IL_007e:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_14 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_15, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B16_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B16_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B16_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0102;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_18 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_19 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_18, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_5 = L_19;
	}

IL_00ac:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e7;
		}

IL_00ae:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_20 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_6 = L_20;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_21);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_21, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_23 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_7 = L_23;
			bool L_24 = V_7;
			if (!L_24)
			{
				goto IL_00d3;
			}
		}

IL_00d0:
		{
			// continue;
			goto IL_00e7;
		}

IL_00d3:
		{
			// kvp.Value.gameObject.SetActive(false);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_25);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_26, (bool)0, /*hidden argument*/NULL);
		}

IL_00e7:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_27 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_00ae;
			}
		}

IL_00f0:
		{
			IL2CPP_LEAVE(0x101, FINALLY_00f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f2;
	}

FINALLY_00f2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_5), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(242)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(242)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x101, IL_0101)
	}

IL_0101:
	{
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_mAF2456D391A059BD21C03AC4F8D0CC1119677E54 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDestroy_mAF2456D391A059BD21C03AC4F8D0CC1119677E54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// SpatialMappingContext.Instance.DeregisterComponent(this);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010(/*hidden argument*/NULL);
		NullCheck(L_0);
		SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF(L_0, __this, /*hidden argument*/NULL);
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_2 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_2, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0079;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_5 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_6 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_003a:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_7 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_2 = L_7;
			// DestroySurface(kvp.Value);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_8);
		}

IL_0052:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_9 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_003a;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// surfaceObjects.Clear();
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_10 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C(L_10, /*hidden argument*/Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C_RuntimeMethod_var);
	}

IL_0079:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_11 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_12, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B14_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_0092;
	}

IL_0091:
	{
		G_B14_0 = 0;
	}

IL_0092:
	{
		V_3 = (bool)G_B14_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0102;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_16 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_4 = L_16;
	}

IL_00a5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00db;
		}

IL_00a7:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_17 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_5 = L_17;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_18 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_18);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_6 = L_20;
			bool L_21 = V_6;
			if (!L_21)
			{
				goto IL_00cc;
			}
		}

IL_00c9:
		{
			// continue;
			goto IL_00db;
		}

IL_00cc:
		{
			// DestroySurface(kvp.Value);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_22);
		}

IL_00db:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_23 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_00a7;
			}
		}

IL_00e4:
		{
			IL2CPP_LEAVE(0xF5, FINALLY_00e6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e6;
	}

FINALLY_00e6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(230)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(230)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		// pendingSurfacesForEviction.Clear();
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_24 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C(L_24, /*hidden argument*/Dictionary_2_Clear_m8C14C429A65F4126A9A29B3EF82A1487DE26730C_RuntimeMethod_var);
	}

IL_0102:
	{
		// if (surfaceParentWasDynamicallyCreated)
		bool L_25 = SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mBC600B152C29512A2F47D435843B491F0A23A338(__this, /*hidden argument*/NULL);
		V_7 = L_25;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0124;
		}
	}
	{
		// Destroy(surfaceParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_27, /*hidden argument*/NULL);
		// surfaceParent = null;
		SpatialMappingBase_set_surfaceParent_mEA691909114179FEFB851F5A3BA8897A41626B7D(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// surfaceObserver.Dispose();
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_28 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E(L_28, /*hidden argument*/NULL);
		// surfaceObserver = null;
		SpatialMappingBase_set_surfaceObserver_mDDE2BC259C50248E17B85DDB4C68097E7C97B9DE_inline(__this, (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Update_m2A9E883E6650605A6615668798362076DE627665 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Update_m2A9E883E6650605A6615668798362076DE627665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Vector3.SqrMagnitude(lastUpdatedObserverPosition - this.transform.position) > s_MovementUpdateThresholdSqr)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_2, /*hidden argument*/NULL);
		float L_4 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		float L_5 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_MovementUpdateThresholdSqr_4();
		V_0 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// UpdatePosition();
		SpatialMappingBase_UpdatePosition_m03871BCE86A0E5912CB8DAE5174F807FEBA2C613(__this, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (!freezeUpdates)
		bool L_7 = SpatialMappingBase_get_freezeUpdates_m10DAC55A998837D64FE4BB84A4E29D8A852014F2(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		// if (Time.time >= nextSurfaceChangeUpdateTime)
		float L_9 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_10 = SpatialMappingBase_get_nextSurfaceChangeUpdateTime_mAB42AB4923890CE64BE6EC93A19002886CC88FAA_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((!(((float)L_9) >= ((float)L_10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		// surfaceObserver.Update(OnSurfaceChanged);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_12 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_13 = (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 *)il2cpp_codegen_object_new(SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1_il2cpp_TypeInfo_var);
		SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714(L_13, __this, (intptr_t)((intptr_t)SpatialMappingBase_OnSurfaceChanged_m8DF08A2DABB49D3C56628EF2E199D128A50F3E3A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		SurfaceObserver_Update_m08AD5357474ED266F8242C2CE6B42BCC9C131A29(L_12, L_13, /*hidden argument*/NULL);
		// ProcessEvictedObjects();
		SpatialMappingBase_ProcessEvictedObjects_m2717BF741005C02CDBB9137EDF32C6EE4E088AD4(__this, /*hidden argument*/NULL);
		// nextSurfaceChangeUpdateTime = Time.time + secondsBetweenUpdates;
		float L_14 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_15 = SpatialMappingBase_get_secondsBetweenUpdates_m08248C91683C82EAF76C2B78F18A6156DA5AD13A(__this, /*hidden argument*/NULL);
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m6EC9BA4E9FFDEE3AA5687571ABA564FB59BF590E_inline(__this, ((float)il2cpp_codegen_add((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		// SpatialMappingContext.Instance.ComponentHasDataRequests();
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_16 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010(/*hidden argument*/NULL);
		NullCheck(L_16);
		SpatialMappingContext_ComponentHasDataRequests_m5529DEFB30F2B54DF0D7A2D293AFC2B1EF7B6C67(L_16, /*hidden argument*/NULL);
	}

IL_0091:
	{
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_m03871BCE86A0E5912CB8DAE5174F807FEBA2C613 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (volumeType == VolumeType.Sphere)
		int32_t L_0 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// surfaceObserver.SetVolumeAsSphere(this.transform.position, sphereRadius);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_2 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = SpatialMappingBase_get_sphereRadius_m305DE7E01DD8F4B32A7DEE6B1F3B2A8ABA912100(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceObserver_SetVolumeAsSphere_m8CC38FF7980EDDCC4D4B9FDB312DB622325BFD70(L_2, L_4, L_5, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_002f:
	{
		// else if (volumeType == VolumeType.AxisAlignedBox)
		int32_t L_6 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		// surfaceObserver.SetVolumeAsAxisAlignedBox(this.transform.position, halfBoxExtents);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_8 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		SurfaceObserver_SetVolumeAsAxisAlignedBox_m26D27F3DBEC734594B04C75A37CE28017CB47340(L_8, L_10, L_11, /*hidden argument*/NULL);
		// Bounds tempBounds = bounds;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12 = SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline(__this, /*hidden argument*/NULL);
		V_2 = L_12;
		// tempBounds.center = this.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_14, /*hidden argument*/NULL);
		// tempBounds.extents = halfBoxExtents;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F(__this, /*hidden argument*/NULL);
		Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_15, /*hidden argument*/NULL);
		// bounds = tempBounds;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_16 = V_2;
		SpatialMappingBase_set_bounds_m537FDB6EDF4E405E7D140CFE44828BCB753C60EE_inline(__this, L_16, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// lastUpdatedObserverPosition = this.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		SpatialMappingBase_set_lastUpdatedObserverPosition_mFE6057264FC068449849BDAA7481A917B2FB75F8_inline(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnSurfaceChanged(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnSurfaceChanged_m8DF08A2DABB49D3C56628EF2E199D128A50F3E3A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (changeType)
		int32_t L_0 = ___changeType1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002b;
	}

IL_000f:
	{
		// OnAddOrUpdateSurface(surfaceId, updateTime, bakePhysics);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_3 = ___surfaceId0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = ___updateTime3;
		bool L_5 = SpatialMappingBase_get_bakePhysics_mEC35DF531261812F504FBDB432688A4A9B6B03FA(__this, /*hidden argument*/NULL);
		SpatialMappingBase_OnAddOrUpdateSurface_m88092554E531DD3FEF57CE0272920428FFF44A8A(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_002d;
	}

IL_0021:
	{
		// OnRemoveSurface(surfaceId);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_6 = ___surfaceId0;
		SpatialMappingBase_OnRemoveSurface_m170B065EDEEE321145D9AFE0FDE9C3202F63B134(__this, L_6, /*hidden argument*/NULL);
		// break;
		goto IL_002d;
	}

IL_002b:
	{
		// break;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_m88092554E531DD3FEF57CE0272920428FFF44A8A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnAddOrUpdateSurface_m88092554E531DD3FEF57CE0272920428FFF44A8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// Surface surface = null;
		V_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)NULL;
		// if (pendingSurfacesForEviction.ContainsKey(surfaceId.handle))
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_1 = ___surfaceId0;
		int32_t L_2 = L_1.get_handle_0();
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5_RuntimeMethod_var);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// surfaceObjects[surfaceId.handle] = pendingSurfacesForEviction[surfaceId.handle];
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_5 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_6 = ___surfaceId0;
		int32_t L_7 = L_6.get_handle_0();
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_8 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_9 = ___surfaceId0;
		int32_t L_10 = L_9.get_handle_0();
		NullCheck(L_8);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC(L_8, L_10, /*hidden argument*/Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_m4EF301E32DD6BA510761DF9393AB9EA87C5CB686(L_5, L_7, L_11, /*hidden argument*/Dictionary_2_set_Item_m4EF301E32DD6BA510761DF9393AB9EA87C5CB686_RuntimeMethod_var);
		// pendingSurfacesForEviction.Remove(surfaceId.handle);
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_13 = ___surfaceId0;
		int32_t L_14 = L_13.get_handle_0();
		NullCheck(L_12);
		Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953(L_12, L_14, /*hidden argument*/Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953_RuntimeMethod_var);
		goto IL_0097;
	}

IL_0051:
	{
		// else if (!surfaceObjects.ContainsKey(surfaceId.handle))
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_15 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_16 = ___surfaceId0;
		int32_t L_17 = L_16.get_handle_0();
		NullCheck(L_15);
		bool L_18 = Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5(L_15, L_17, /*hidden argument*/Dictionary_2_ContainsKey_mBF346AD0DE2B4AAF76D9B86752886750310E5BF5_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0097;
		}
	}
	{
		// surface = CreateSurface(surfaceId);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_20 = ___surfaceId0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C(__this, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// surface.surfaceData = new SurfaceData();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 ));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_23 = V_4;
		NullCheck(L_22);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_22, L_23, /*hidden argument*/NULL);
		// surfaceObjects.Add(surfaceId.handle, surface);
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_24 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_25 = ___surfaceId0;
		int32_t L_26 = L_25.get_handle_0();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_27 = V_0;
		NullCheck(L_24);
		Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53(L_24, L_26, L_27, /*hidden argument*/Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53_RuntimeMethod_var);
	}

IL_0097:
	{
		// if (surface == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = V_0;
		V_5 = (bool)((((RuntimeObject*)(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)L_28) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00b5;
		}
	}
	{
		// surface = surfaceObjects[surfaceId.handle];
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_30 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_31 = ___surfaceId0;
		int32_t L_32 = L_31.get_handle_0();
		NullCheck(L_30);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_33 = Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC(L_30, L_32, /*hidden argument*/Dictionary_2_get_Item_mC60ADE19B714705018FBA93812895B2620BBEDEC_RuntimeMethod_var);
		V_0 = L_33;
	}

IL_00b5:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_34 = V_0;
		NullCheck(L_34);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_35 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// tempSurfaceData.id = surfaceId;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_36 = ___surfaceId0;
		(&V_1)->set_id_0(L_36);
		// tempSurfaceData.bakeCollider = bakePhysics;
		bool L_37 = ___bakePhysics2;
		(&V_1)->set_bakeCollider_5(L_37);
		// tempSurfaceData.trianglesPerCubicMeter = lodToPcm[(int)lodType];
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_38 = SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B(/*hidden argument*/NULL);
		int32_t L_39 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		(&V_1)->set_trianglesPerCubicMeter_4((((float)((float)L_41))));
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_42 = V_0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_43 = V_1;
		NullCheck(L_42);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_42, L_43, /*hidden argument*/NULL);
		// surface.awaitingBake = true;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_44 = V_0;
		NullCheck(L_44);
		Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline(L_44, (bool)1, /*hidden argument*/NULL);
		// surface.updateTime = updateTime;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_45 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_46 = ___updateTime1;
		NullCheck(L_45);
		Surface_set_updateTime_m8FDDAF318259294A7184AE968CBC52051BE225F2_inline(L_45, L_46, /*hidden argument*/NULL);
		// AddRequiredComponentsForBaking(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_47 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_47);
		// }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_1 = NULL;
	{
		// Surface surface = new Surface();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)il2cpp_codegen_object_new(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D_il2cpp_TypeInfo_var);
		Surface__ctor_m5034101390586B7DF34E820D9CC592A45C6D5D01(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// surface.surfaceId = surfaceId;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = V_0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = ___surfaceId0;
		NullCheck(L_1);
		Surface_set_surfaceId_m0B776CEC7A925E7780973C2E0D787C58B28439F1_inline(L_1, L_2, /*hidden argument*/NULL);
		// surface.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = V_0;
		NullCheck(L_3);
		Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// return surface;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (target == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___target1;
		V_0 = (bool)((((RuntimeObject*)(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0057;
	}

IL_000c:
	{
		// if (bakedData.outputMesh != null && target.meshFilter != null)
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_2 = ___bakedData0;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_3 = L_2.get_outputMesh_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___target1;
		NullCheck(L_5);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_6 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// Destroy(target.meshFilter.mesh);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = ___target1;
		NullCheck(L_9);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_10 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_11 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_11, /*hidden argument*/NULL);
		// target.meshFilter.mesh = bakedData.outputMesh.sharedMesh;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = ___target1;
		NullCheck(L_12);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_13 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_12, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_14 = ___bakedData0;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_15 = L_14.get_outputMesh_1();
		NullCheck(L_15);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_16 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m39F67F97247869F12E9E806B6D21AB100AA9F7EA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_AddRequiredComponentsForBaking_m39F67F97247869F12E9E806B6D21AB100AA9F7EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (surfaceParent == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// surfaceParent = new GameObject(string.Format("Surface Parent{0}", observerId));
		int32_t L_3 = SpatialMappingBase_get_observerId_m11215996E1207E53F6F0C1218CA50AD058B80495_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralEB6EF0B99606BAD040095156CE2B1FAAC0C59C6A, L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_7, L_6, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceParent_mEA691909114179FEFB851F5A3BA8897A41626B7D(__this, L_7, /*hidden argument*/NULL);
		// surfaceParentWasDynamicallyCreated = true;
		SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_mAD419F4D32525643B8F2FF5823F130360DA915A1(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		// surface.gameObject = new GameObject(string.Format("spatial-mapping-surface{0}_{1}", observerId, surface.surfaceId.handle));
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = ___surface0;
		int32_t L_13 = SpatialMappingBase_get_observerId_m11215996E1207E53F6F0C1218CA50AD058B80495_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = ___surface0;
		NullCheck(L_16);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_17 = Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17.get_handle_0();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral05C07D1FCAF258FA9A5BB24E01F6316B3F11BE63, L_15, L_20, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_22, L_21, /*hidden argument*/NULL);
		NullCheck(L_12);
		Surface_set_gameObject_mA485C86A72C7B313E831FD5F2853338DF24C87F4_inline(L_12, L_22, /*hidden argument*/NULL);
		// surface.gameObject.transform.parent = surfaceParent.transform;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = ___surface0;
		NullCheck(L_23);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_25, L_27, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// if (surface.meshFilter == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = ___surface0;
		NullCheck(L_28);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_29 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_30;
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00e5;
		}
	}
	{
		// surface.meshFilter = surface.gameObject.GetComponent<MeshFilter>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_32 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_33 = ___surface0;
		NullCheck(L_33);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_35 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_34, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		NullCheck(L_32);
		Surface_set_meshFilter_m09D0BD0AB6A36F2DB45400E12EE2D6CCE0FDF7A1_inline(L_32, L_35, /*hidden argument*/NULL);
		// if (surface.meshFilter == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_36 = ___surface0;
		NullCheck(L_36);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_37 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_38;
		bool L_39 = V_4;
		if (!L_39)
		{
			goto IL_00e4;
		}
	}
	{
		// surface.meshFilter = surface.gameObject.AddComponent<MeshFilter>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_40 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_41 = ___surface0;
		NullCheck(L_41);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_43 = GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4(L_42, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4_RuntimeMethod_var);
		NullCheck(L_40);
		Surface_set_meshFilter_m09D0BD0AB6A36F2DB45400E12EE2D6CCE0FDF7A1_inline(L_40, L_43, /*hidden argument*/NULL);
	}

IL_00e4:
	{
	}

IL_00e5:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_44 = ___surface0;
		NullCheck(L_44);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_45 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_44, /*hidden argument*/NULL);
		V_0 = L_45;
		// tempSurfaceData.outputMesh = surface.meshFilter;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_46 = ___surface0;
		NullCheck(L_46);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_47 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_46, /*hidden argument*/NULL);
		(&V_0)->set_outputMesh_1(L_47);
		// if (surface.worldAnchor == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_48 = ___surface0;
		NullCheck(L_48);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_49 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_50 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_49, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_50;
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_0145;
		}
	}
	{
		// surface.worldAnchor = surface.gameObject.GetComponent<WorldAnchor>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_52 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_53 = ___surface0;
		NullCheck(L_53);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_55 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_54, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
		NullCheck(L_52);
		Surface_set_worldAnchor_m89D7EAB5602CF873669A9D4FFAC3D3B8528C3CEE_inline(L_52, L_55, /*hidden argument*/NULL);
		// if (surface.worldAnchor == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_56 = ___surface0;
		NullCheck(L_56);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_57 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_57, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_58;
		bool L_59 = V_6;
		if (!L_59)
		{
			goto IL_0144;
		}
	}
	{
		// surface.worldAnchor = surface.gameObject.AddComponent<WorldAnchor>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_60 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_61 = ___surface0;
		NullCheck(L_61);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_62 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_63 = GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_62, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
		NullCheck(L_60);
		Surface_set_worldAnchor_m89D7EAB5602CF873669A9D4FFAC3D3B8528C3CEE_inline(L_60, L_63, /*hidden argument*/NULL);
	}

IL_0144:
	{
	}

IL_0145:
	{
		// tempSurfaceData.outputAnchor = surface.worldAnchor;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_64 = ___surface0;
		NullCheck(L_64);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_65 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_64, /*hidden argument*/NULL);
		(&V_0)->set_outputAnchor_2(L_65);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_66 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_67 = V_0;
		NullCheck(L_66);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_66, L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_m170B065EDEEE321145D9AFE0FDE9C3202F63B134 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnRemoveSurface_m170B065EDEEE321145D9AFE0FDE9C3202F63B134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_1, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_00b7;
	}

IL_0024:
	{
		// if (!surfaceObjects.TryGetValue(surfaceId.handle, out sd))
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_4 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_5 = ___surfaceId0;
		int32_t L_6 = L_5.get_handle_0();
		NullCheck(L_4);
		bool L_7 = Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8(L_4, L_6, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.LogWarning(string.Format("Can not remove the surface id \"{0}\" because it is not an active surface.", surfaceId.handle));
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_9 = ___surfaceId0;
		int32_t L_10 = L_9.get_handle_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral19EA9A5EB531CE393DCA73F73B60048CF49D5D7E, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_13, /*hidden argument*/NULL);
		// return;
		goto IL_00b7;
	}

IL_005c:
	{
		// surfaceObjects.Remove(surfaceId.handle);
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_14 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_15 = ___surfaceId0;
		int32_t L_16 = L_15.get_handle_0();
		NullCheck(L_14);
		Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953(L_14, L_16, /*hidden argument*/Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953_RuntimeMethod_var);
		// if (numUpdatesBeforeRemoval < 1)
		int32_t L_17 = SpatialMappingBase_get_numUpdatesBeforeRemoval_m6F510DAD1B7465439C2D15C640FF4F0C2FB004BA(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)1))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		// DestroySurface(sd);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_19);
		// return;
		goto IL_00b7;
	}

IL_0086:
	{
		// OnBeginSurfaceEviction(ShouldRemainActiveWhileBeingRemoved(sd), sd);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_20 = V_0;
		bool L_21 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6(__this, L_20, /*hidden argument*/NULL);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = V_0;
		VirtActionInvoker2< bool, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(11 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_21, L_22);
		// sd.remainingUpdatesToLive = numUpdatesBeforeRemoval + 1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = V_0;
		int32_t L_24 = SpatialMappingBase_get_numUpdatesBeforeRemoval_m6F510DAD1B7465439C2D15C640FF4F0C2FB004BA(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537_inline(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		// pendingSurfacesForEviction.Add(surfaceId.handle, sd);
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_25 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_26 = ___surfaceId0;
		int32_t L_27 = L_26.get_handle_0();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = V_0;
		NullCheck(L_25);
		Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53(L_25, L_27, L_28, /*hidden argument*/Dictionary_2_Add_m51E5F5D99F0868870A425800BA4F64A79B8D0A53_RuntimeMethod_var);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B9_0 = 0;
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00ad;
	}

IL_001a:
	{
		// GameObject mainCameraGameObject = selectedCamera.gameObject;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// bool parentedToCamera = surface.gameObject == mainCameraGameObject;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// Transform currentTransform = surface.gameObject.transform.parent;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_0066;
	}

IL_0046:
	{
		// if (currentTransform.gameObject == mainCameraGameObject)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = V_2;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_005e;
		}
	}
	{
		// parentedToCamera = true;
		V_1 = (bool)1;
		// break;
		goto IL_0079;
	}

IL_005e:
	{
		// currentTransform = currentTransform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = V_2;
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_0066:
	{
		// while (!parentedToCamera && currentTransform != null)
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0072;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_23));
		goto IL_0073;
	}

IL_0072:
	{
		G_B9_0 = 0;
	}

IL_0073:
	{
		V_6 = (bool)G_B9_0;
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_0046;
		}
	}

IL_0079:
	{
		// if (parentedToCamera == true)
		bool L_25 = V_1;
		V_7 = L_25;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0086;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00ad;
	}

IL_0086:
	{
		// if (BoundsContains(surface.gameObject.transform.position))
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_27 = ___surface0;
		NullCheck(L_27);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		bool L_31 = SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C(__this, L_30, /*hidden argument*/NULL);
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_00a8;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00ad;
	}

IL_00a8:
	{
		// return true;
		V_4 = (bool)1;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		bool L_33 = V_4;
		return L_33;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (volumeType == VolumeType.Sphere)
		int32_t L_0 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// if (Vector3.SqrMagnitude(position - this.transform.position) <= sphereRadius * sphereRadius)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_4, /*hidden argument*/NULL);
		float L_6 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_5, /*hidden argument*/NULL);
		float L_7 = SpatialMappingBase_get_sphereRadius_m305DE7E01DD8F4B32A7DEE6B1F3B2A8ABA912100(__this, /*hidden argument*/NULL);
		float L_8 = SpatialMappingBase_get_sphereRadius_m305DE7E01DD8F4B32A7DEE6B1F3B2A8ABA912100(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_6) <= ((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0068;
	}

IL_0040:
	{
		goto IL_0064;
	}

IL_0043:
	{
		// else if (volumeType == VolumeType.AxisAlignedBox)
		int32_t L_10 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// return bounds.Contains(position);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12 = SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline(__this, /*hidden argument*/NULL);
		V_4 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___position0;
		bool L_14 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_4), L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_0068;
	}

IL_0064:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m61864CCED61827A61A95FA29FAD6ED9920F67E04 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_DestroySurface_m61864CCED61827A61A95FA29FAD6ED9920F67E04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// surface.remainingUpdatesToLive = -1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537_inline(L_0, (-1), /*hidden argument*/NULL);
		// if (surface.meshFilter != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// if (surface.meshFilter.mesh != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___surface0;
		NullCheck(L_5);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_6 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_7 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		// Destroy(surface.meshFilter.mesh);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		NullCheck(L_10);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_11 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_12 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_12, /*hidden argument*/NULL);
	}

IL_0042:
	{
	}

IL_0043:
	{
		// GameObject.Destroy(surface.gameObject);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = ___surface0;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_14, /*hidden argument*/NULL);
		// surface.gameObject = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_15 = ___surface0;
		NullCheck(L_15);
		Surface_set_gameObject_mA485C86A72C7B313E831FD5F2853338DF24C87F4_inline(L_15, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m2717BF741005C02CDBB9137EDF32C6EE4E088AD4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ProcessEvictedObjects_m2717BF741005C02CDBB9137EDF32C6EE4E088AD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_3 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (pendingSurfacesForEviction == null || pendingSurfacesForEviction.Count == 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_1, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0163;
	}

IL_0024:
	{
		// surfacesToRemoveFromDict.Clear();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477(L_4, /*hidden argument*/List_1_Clear_m06BA343FB4E149EB045D8D2603E1AD239E1E4477_RuntimeMethod_var);
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_5 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_6 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010b;
		}

IL_0042:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_7 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_2 = L_7;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_8);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_5 = L_10;
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_007c;
			}
		}

IL_0063:
		{
			// surfacesToRemoveFromDict.Add(kvp.Key);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_12 = SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2(__this, /*hidden argument*/NULL);
			int32_t L_13 = KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_RuntimeMethod_var);
			NullCheck(L_12);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_12, L_13, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			// continue;
			goto IL_010b;
		}

IL_007c:
		{
			// Surface evictionObject = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_14 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			V_3 = L_14;
			// Vector3 surfacePosition = evictionObject.gameObject.transform.position;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_15 = V_3;
			NullCheck(L_15);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
			V_4 = L_18;
			// if (!BoundsContains(surfacePosition) ||
			//     Vector3.SqrMagnitude(surfacePosition - this.transform.position) <= s_EvictionUpdateTickThresholdSqr)
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_4;
			bool L_20 = SpatialMappingBase_BoundsContains_mB9368EF37556231325D13A2095F4AF3F4066F01C(__this, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00c3;
			}
		}

IL_00a0:
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_4;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			NullCheck(L_22);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_21, L_23, /*hidden argument*/NULL);
			float L_25 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_24, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
			float L_26 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_EvictionUpdateTickThresholdSqr_5();
			G_B12_0 = ((((int32_t)((!(((float)L_25) <= ((float)L_26)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00c4;
		}

IL_00c3:
		{
			G_B12_0 = 1;
		}

IL_00c4:
		{
			V_6 = (bool)G_B12_0;
			bool L_27 = V_6;
			if (!L_27)
			{
				goto IL_010a;
			}
		}

IL_00ca:
		{
			// if (evictionObject.remainingUpdatesToLive-- <= 0)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = V_3;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_29 = L_28;
			NullCheck(L_29);
			int32_t L_30 = Surface_get_remainingUpdatesToLive_m5D45BD30D4CCCAF01FDC1E4D6ACA402AF2E5C1B4_inline(L_29, /*hidden argument*/NULL);
			V_8 = L_30;
			int32_t L_31 = V_8;
			NullCheck(L_29);
			Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537_inline(L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
			int32_t L_32 = V_8;
			V_7 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_33 = V_7;
			if (!L_33)
			{
				goto IL_0109;
			}
		}

IL_00ec:
		{
			// DestroySurface(evictionObject);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_34 = V_3;
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_34);
			// surfacesToRemoveFromDict.Add(kvp.Key);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_35 = SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2(__this, /*hidden argument*/NULL);
			int32_t L_36 = KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC1FD5750BADDBCAE55646BB386A2E4069F75DE92_RuntimeMethod_var);
			NullCheck(L_35);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_35, L_36, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		}

IL_0109:
		{
		}

IL_010a:
		{
		}

IL_010b:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_37 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_0042;
			}
		}

IL_0117:
		{
			IL2CPP_LEAVE(0x128, FINALLY_0119);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0119;
	}

FINALLY_0119:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(281)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(281)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x128, IL_0128)
	}

IL_0128:
	{
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		V_9 = 0;
		goto IL_014e;
	}

IL_012d:
	{
		// pendingSurfacesForEviction.Remove(surfacesToRemoveFromDict[i]);
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_38 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_39 = SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2(__this, /*hidden argument*/NULL);
		int32_t L_40 = V_9;
		NullCheck(L_39);
		int32_t L_41 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_38);
		Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953(L_38, L_41, /*hidden argument*/Dictionary_2_Remove_mBDF06651E63454AD682A81998C4EC134CB619953_RuntimeMethod_var);
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_014e:
	{
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		int32_t L_43 = V_9;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_44 = SpatialMappingBase_get_surfacesToRemoveFromDict_m606CAFC00D84776A197134FEB8DEABCB5D2A9FF2(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		int32_t L_45 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_44, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_10;
		if (L_46)
		{
			goto IL_012d;
		}
	}

IL_0163:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::TryGetHighestPriorityRequest(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_TryGetHighestPriorityRequest_m13220FB84B555EBE712CAB161B61F380D5849A70 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___bestSurfaceData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_TryGetHighestPriorityRequest_m13220FB84B555EBE712CAB161B61F380D5849A70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// bestSurfaceData = bestSurfaceDataNull;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = ___bestSurfaceData0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = __this->get_bestSurfaceDataNull_27();
		*(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputCollider_3), (void*)NULL);
		#endif
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_2 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_3 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_3, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
	}

IL_0026:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00eb;
	}

IL_0032:
	{
		// Surface bestSurface = null;
		V_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)NULL;
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_6 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_7 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a2;
		}

IL_0043:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_8 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_3), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_4 = L_8;
			// if (!kvp.Value.awaitingBake)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_9);
			bool L_10 = Surface_get_awaitingBake_m3B199586E0066144D8986804B73E5BDE97FEEB40_inline(L_9, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_0065;
			}
		}

IL_0062:
		{
			// continue;
			goto IL_00a2;
		}

IL_0065:
		{
			// if (bestSurface == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = V_0;
			V_6 = (bool)((((RuntimeObject*)(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_007a;
			}
		}

IL_006f:
		{
			// bestSurface = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_14 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			V_0 = L_14;
			// continue;
			goto IL_00a2;
		}

IL_007a:
		{
			// if (kvp.Value.updateTime < bestSurface.updateTime)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_15 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_15);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_16 = Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline(L_15, /*hidden argument*/NULL);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_17 = V_0;
			NullCheck(L_17);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_18 = Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			bool L_19 = DateTime_op_LessThan_m75DE4F8CC5F5EE392829A9B37C5C98B7FC97061A(L_16, L_18, /*hidden argument*/NULL);
			V_7 = L_19;
			bool L_20 = V_7;
			if (!L_20)
			{
				goto IL_00a1;
			}
		}

IL_0097:
		{
			// bestSurface = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			V_0 = L_21;
		}

IL_00a1:
		{
		}

IL_00a2:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_22 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0043;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_3), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(173)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
	}

IL_00bc:
	{
		// if (bestSurface == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = V_0;
		V_8 = (bool)((((RuntimeObject*)(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)L_23) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00eb;
	}

IL_00cb:
	{
		// AddRequiredComponentsForBaking(bestSurface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_25);
		// UpdateSurfaceData(bestSurface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_26 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(15 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_26);
		// bestSurfaceData = bestSurface.surfaceData;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_27 = ___bestSurfaceData0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = V_0;
		NullCheck(L_28);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_29 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_28, /*hidden argument*/NULL);
		*(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_27 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_27)->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_27)->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_27)->___outputCollider_3), (void*)NULL);
		#endif
		// return true;
		V_2 = (bool)1;
		goto IL_00eb;
	}

IL_00eb:
	{
		// }
		bool L_30 = V_2;
		return L_30;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m54007C547C0BEA915A1178C572AA8F8D2BF598B4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_UpdateSurfaceData_m54007C547C0BEA915A1178C572AA8F8D2BF598B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// tempSurfaceData.id = surface.surfaceId;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_2 = ___surface0;
		NullCheck(L_2);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_3 = Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline(L_2, /*hidden argument*/NULL);
		(&V_0)->set_id_0(L_3);
		// tempSurfaceData.trianglesPerCubicMeter = lodToPcm[(int)lodType];
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = SpatialMappingBase_get_lodToPcm_mFBE96F0FB37447FF4C4065AB86F0ADBB70178A1B(/*hidden argument*/NULL);
		int32_t L_5 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->set_trianglesPerCubicMeter_4((((float)((float)L_7))));
		// tempSurfaceData.bakeCollider = false;
		(&V_0)->set_bakeCollider_5((bool)0);
		// tempSurfaceData.outputMesh = surface.meshFilter;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_9 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_8, /*hidden argument*/NULL);
		(&V_0)->set_outputMesh_1(L_9);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_11 = V_0;
		NullCheck(L_10);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_mE2BFDBAD198BBC7314E600477E1209864D8C2F12 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ForEachSurfaceInCache_mE2BFDBAD198BBC7314E600477E1209864D8C2F12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		// if (callback == null)
		Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_0 = ___callback0;
		V_0 = (bool)((((RuntimeObject*)(Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_00cb;
	}

IL_000f:
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_2 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_3 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_3, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		goto IL_00cb;
	}

IL_0032:
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_6 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_7 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0041:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_8 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_3 = L_8;
			// callback(kvp.Value);
			Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_9 = ___callback0;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_9);
			Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63(L_9, L_10, /*hidden argument*/Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63_RuntimeMethod_var);
		}

IL_0059:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_11 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0041;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x73, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x73, IL_0073)
	}

IL_0073:
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_13 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_12, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_4 = L_13;
	}

IL_0081:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b1;
		}

IL_0083:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_14 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_5 = L_14;
			// if (ShouldRemainActiveWhileBeingRemoved(kvp.Value))
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_15 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			bool L_16 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6(__this, L_15, /*hidden argument*/NULL);
			V_6 = L_16;
			bool L_17 = V_6;
			if (!L_17)
			{
				goto IL_00b0;
			}
		}

IL_00a0:
		{
			// callback(kvp.Value);
			Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_18 = ___callback0;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_18);
			Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63(L_18, L_19, /*hidden argument*/Action_1_Invoke_m4A7C10245773823DA7B25B056136A17888BDAA63_RuntimeMethod_var);
		}

IL_00b0:
		{
		}

IL_00b1:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_20 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0083;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(188)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_mD42F9367CEA98C6FABE37B83736BD9C6E405AE5A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDidApplyAnimationProperties_mDF9C4A11854855CF3707AD567177A009731AE03F (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// OnResetProperties();
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_m2DB6F9468DCD37B2364AC0E1638C2D8C16A0B411 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// OnResetProperties();
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_FreezeUpdates = false;
		__this->set_m_FreezeUpdates_8((bool)0);
		// VolumeType m_VolumeType = VolumeType.AxisAlignedBox;
		__this->set_m_VolumeType_9(1);
		// float m_SphereRadius = 2.0f;
		__this->set_m_SphereRadius_10((2.0f));
		// Vector3 m_HalfBoxExtents = Vector3.one * 4.0f;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, (4.0f), /*hidden argument*/NULL);
		__this->set_m_HalfBoxExtents_11(L_1);
		// LODType m_LodType = LODType.Medium;
		__this->set_m_LodType_12(1);
		// int m_NumUpdatesBeforeRemoval = 10;
		__this->set_m_NumUpdatesBeforeRemoval_13(((int32_t)10));
		// float m_SecondsBetweenUpdates = 2.5f;
		__this->set_m_SecondsBetweenUpdates_14((2.5f));
		// protected bool m_BakePhysics = false;
		__this->set_m_BakePhysics_15((bool)0);
		// private Dictionary<int, Surface> m_PendingSurfacesForEviction = new Dictionary<int, Surface>();
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_2 = (Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 *)il2cpp_codegen_object_new(Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA(L_2, /*hidden argument*/Dictionary_2__ctor_m5661B11DFE0C71075E8A172EF0BEBC0E434824EA_RuntimeMethod_var);
		__this->set_m_PendingSurfacesForEviction_23(L_2);
		// private List<int> m_SurfacesToRemoveFromDict = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_3, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_m_SurfacesToRemoveFromDict_24(L_3);
		// protected bool m_SurfaceParentWasDynamicallyCreated = false;
		__this->set_m_SurfaceParentWasDynamicallyCreated_25((bool)0);
		// private SurfaceData bestSurfaceDataNull = new SurfaceData();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_4 = __this->get_address_of_bestSurfaceDataNull_27();
		il2cpp_codegen_initobj(L_4, sizeof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 ));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__cctor_mDE92F7F277D10B7F98485323B7E58847C05CB24B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__cctor_mDE92F7F277D10B7F98485323B7E58847C05CB24B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly float s_MovementUpdateThresholdSqr = 0.0001f;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_MovementUpdateThresholdSqr_4((0.0001f));
		// static readonly float s_EvictionUpdateTickThresholdSqr = 100.0f; 
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_EvictionUpdateTickThresholdSqr_5((100.0f));
		// static int s_ObserverIdCounter = 0;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(0);
		// private static readonly int[] s_LodToPcm = { 2000, 750, 200 };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15____D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_LodToPcm_26(L_1);
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
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_surfaceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = __this->get_U3CsurfaceIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_surfaceId_m0B776CEC7A925E7780973C2E0D787C58B28439F1 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = ___value0;
		__this->set_U3CsurfaceIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_updateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_updateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_updateTime_m8FDDAF318259294A7184AE968CBC52051BE225F2 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CupdateTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CgameObjectU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_gameObject_mA485C86A72C7B313E831FD5F2853338DF24C87F4 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CgameObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_surfaceData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = __this->get_U3CsurfaceDataU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___value0;
		__this->set_U3CsurfaceDataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_remainingUpdatesToLive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m5D45BD30D4CCCAF01FDC1E4D6ACA402AF2E5C1B4 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = __this->get_U3CremainingUpdatesToLiveU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_remainingUpdatesToLive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_awaitingBake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m3B199586E0066144D8986804B73E5BDE97FEEB40 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = __this->get_U3CawaitingBakeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_awaitingBake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CawaitingBakeU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CmeshFilterU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m09D0BD0AB6A36F2DB45400E12EE2D6CCE0FDF7A1 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = ___value0;
		__this->set_U3CmeshFilterU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CmeshRendererU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___value0;
		__this->set_U3CmeshRendererU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CmeshColliderU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m2928D4F59FDD43EDBA2C0A46D5B66BFFB80DAD5B (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = ___value0;
		__this->set_U3CmeshColliderU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_worldAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = __this->get_U3CworldAnchorU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m89D7EAB5602CF873669A9D4FFAC3D3B8528C3CEE (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___value0;
		__this->set_U3CworldAnchorU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface__ctor_m5034101390586B7DF34E820D9CC592A45C6D5D01 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m34CF9585F05EE122494CB1FC3151AC877FED820B (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_mD9CA9D1746AF5AE4D247404CF4E49DA5FEC086A0 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___bakedData1) - 1), ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
				typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						GenericVirtActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						VirtActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___requester0) - 1), ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::BeginInvoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyCallback_BeginInvoke_mB767F35E7B337B4AC98E4294929A4E0262A964DB (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyCallback_BeginInvoke_mB767F35E7B337B4AC98E4294929A4E0262A964DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___requester0;
	__d_args[1] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &___bakedData1);
	__d_args[2] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___outputWritten2);
	__d_args[3] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_EndInvoke_m118FFFA0EFF39D860366ACDF1FD91B7AC9F55051 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_mE79B36D09B8678D3FECB869B2BAE3E32A2B46174 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_Layer;
		int32_t L_0 = __this->get_m_Layer_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_layer_m520AEB5C0C3BA60A2A2D575A855E434FE7880E99 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_Layer = value;
		int32_t L_0 = ___value0;
		__this->set_m_Layer_28(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * V_0 = NULL;
	{
		// return m_Material;
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = __this->get_m_Material_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_material_m6A2C956014D43440480A2D68997C166DDE2F6220 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___value0, const RuntimeMethod* method)
{
	{
		// m_Material = value;
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = ___value0;
		__this->set_m_Material_29(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_m7F553859CFEE41A8A022EC44E5132A57EB557164 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_EnableCollisions;
		bool L_0 = __this->get_m_EnableCollisions_30();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_enableCollisions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_enableCollisions_m8E888DD954EE93E7672DA14F0ADFA52CACACB1DD (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_EnableCollisions = value;
		bool L_0 = ___value0;
		__this->set_m_EnableCollisions_30(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_Awake_mD0F91D9DF846C1C8CE1F5D602FC43F065A7E1F10 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// bakePhysics = true;
		SpatialMappingBase_set_bakePhysics_m33D62027F99886807A3AD366148A4605E0DF45BB(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnSurfaceDataReady_m091E11BE2C56B1B6DEEF271012886CE195B90950 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnSurfaceDataReady_m091E11BE2C56B1B6DEEF271012886CE195B90950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (!surfaceObjects.TryGetValue(bakedData.id.handle, out surfaceData))
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = L_1.get_id_0();
		int32_t L_3 = L_2.get_handle_0();
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8(L_0, L_3, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_0026:
	{
		// surfaceData.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = V_0;
		NullCheck(L_6);
		Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline(L_6, (bool)0, /*hidden argument*/NULL);
		// if (!outputWritten)
		bool L_7 = ___outputWritten2;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_003c:
	{
		// if (surfaceData.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = V_0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// Debug.LogError(string.Format("A SpatialMappingCollider component can not apply baked data to the surface with id \"{0}\" because its GameObject is null.", bakedData.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_13 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_14 = L_13.get_id_0();
		int32_t L_15 = L_14.get_handle_0();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralDD1FA74A105812D05EDBBA6CA1731A9A0C697ED4, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_18, /*hidden argument*/NULL);
		// return;
		goto IL_00d9;
	}

IL_006f:
	{
		// if (bakedData.outputCollider == null)
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_19 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_20 = L_19.get_outputCollider_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0084;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_0084:
	{
		// if (requester != this)
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_23 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, __this, /*hidden argument*/NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		// CloneBakedComponents(bakedData, surfaceData);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_26 = ___bakedData1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_27 = V_0;
		SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC(__this, L_26, L_27, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// bakedData.outputCollider.gameObject.layer = layer;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_28 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_29 = L_28.get_outputCollider_3();
		NullCheck(L_29);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_29, /*hidden argument*/NULL);
		int32_t L_31 = SpatialMappingCollider_get_layer_mE79B36D09B8678D3FECB869B2BAE3E32A2B46174(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_30, L_31, /*hidden argument*/NULL);
		// if (material != null)
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_32 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_32, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00d9;
		}
	}
	{
		// bakedData.outputCollider.material = material;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_35 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_36 = L_35.get_outputCollider_3();
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_37 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnBeginSurfaceEviction_m21A70B520DA8C193B777EE78E39AE86AE103CACF (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surfaceData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnBeginSurfaceEviction_m21A70B520DA8C193B777EE78E39AE86AE103CACF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (surfaceData.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surfaceData1;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0014:
	{
		// if (surfaceData.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surfaceData1;
		NullCheck(L_4);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_5 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0027:
	{
		// surfaceData.meshCollider.enabled = shouldBeActiveWhileRemoved;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surfaceData1;
		NullCheck(L_8);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_9 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_8, /*hidden argument*/NULL);
		bool L_10 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_9);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_UpdateSurfaceData_mBC5EB61B9080BAB2C3D645A22A30C907AD5972CD (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.UpdateSurfaceData(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		SpatialMappingBase_UpdateSurfaceData_m54007C547C0BEA915A1178C572AA8F8D2BF598B4(__this, L_0, /*hidden argument*/NULL);
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_2 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// tempSurfaceData.bakeCollider = bakePhysics;
		bool L_3 = SpatialMappingBase_get_bakePhysics_mEC35DF531261812F504FBDB432688A4A9B6B03FA(__this, /*hidden argument*/NULL);
		(&V_0)->set_bakeCollider_5(L_3);
		// tempSurfaceData.outputCollider = surface.meshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		NullCheck(L_4);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_5 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_4, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_5);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_7 = V_0;
		NullCheck(L_6);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_AddRequiredComponentsForBaking_m713A141669C87A26C040C213FBDC53A0AFEAB7BC (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_AddRequiredComponentsForBaking_m713A141669C87A26C040C213FBDC53A0AFEAB7BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// base.AddRequiredComponentsForBaking(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		SpatialMappingBase_AddRequiredComponentsForBaking_m39F67F97247869F12E9E806B6D21AB100AA9F7EA(__this, L_0, /*hidden argument*/NULL);
		// if (surface.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_2 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// surface.meshCollider = surface.gameObject.AddComponent<MeshCollider>() as MeshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_8 = GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_7, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
		NullCheck(L_5);
		Surface_set_meshCollider_m2928D4F59FDD43EDBA2C0A46D5B66BFFB80DAD5B_inline(L_5, L_8, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = ___surface0;
		NullCheck(L_9);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_10 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// tempSurfaceData.outputCollider = surface.meshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = ___surface0;
		NullCheck(L_11);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_12 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_11, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_12);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_14 = V_0;
		NullCheck(L_13);
		Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (material == null)
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0027;
	}

IL_0014:
	{
		// ForEachSurfaceInCache(delegate(SpatialMappingBase.Surface surface)
		//     {
		//         if (surface.meshCollider == null)
		//         {
		//             return;
		//         }
		// 
		//         if (surface.gameObject != null)
		//         {
		//             if (surface.gameObject.layer != layer)
		//             {
		//                 surface.gameObject.layer = layer;
		//             }
		//         }
		// 
		//         if (surface.meshCollider.material != material)
		//         {
		//             surface.meshCollider.material = material;
		//         }
		// 
		//         if (surface.meshCollider.enabled != enableCollisions)
		//         {
		//             surface.meshCollider.enabled = enableCollisions;
		//         }
		//     });
		Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_3 = (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *)il2cpp_codegen_object_new(Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4_il2cpp_TypeInfo_var);
		Action_1__ctor_m03B4ABDDD2484F8DD29BC579D18F63D2D69B8CBC(L_3, __this, (intptr_t)((intptr_t)SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_m4986DE9A169D6A444E7FD3CAD56479EFB9E761AE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m03B4ABDDD2484F8DD29BC579D18F63D2D69B8CBC_RuntimeMethod_var);
		SpatialMappingBase_ForEachSurfaceInCache_mE2BFDBAD198BBC7314E600477E1209864D8C2F12(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnResetProperties_m357A522F32322A1A4F06A66F085B4E03DE456312 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// base.OnResetProperties();
		SpatialMappingBase_OnResetProperties_mD42F9367CEA98C6FABE37B83736BD9C6E405AE5A(__this, /*hidden argument*/NULL);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m670D68C9011AEAD66004ABE2423FAC71FC451C5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider__ctor_mF5B1E8581795F2235B94D2192D5370FE2691E781 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider__ctor_mF5B1E8581795F2235B94D2192D5370FE2691E781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_Layer = 0;
		__this->set_m_Layer_28(0);
		// bool m_EnableCollisions = true;
		__this->set_m_EnableCollisions_30((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::<ApplyPropertiesToCachedSurfaces>b__17_0(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_m4986DE9A169D6A444E7FD3CAD56479EFB9E761AE (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_m4986DE9A169D6A444E7FD3CAD56479EFB9E761AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (surface.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_1 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		goto IL_00b5;
	}

IL_0017:
	{
		// if (surface.gameObject != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (surface.gameObject.layer != layer)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_9, /*hidden argument*/NULL);
		int32_t L_11 = SpatialMappingCollider_get_layer_mE79B36D09B8678D3FECB869B2BAE3E32A2B46174(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// surface.gameObject.layer = layer;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = ___surface0;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = SpatialMappingCollider_get_layer_mE79B36D09B8678D3FECB869B2BAE3E32A2B46174(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
	}

IL_0057:
	{
		// if (surface.meshCollider.material != material)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = ___surface0;
		NullCheck(L_16);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_17 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_18 = Collider_get_material_m4F6B81A3CD1B3B579579EF2DBA73CEF29072766A(L_17, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_19 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		// surface.meshCollider.material = material;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = ___surface0;
		NullCheck(L_22);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_23 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_22, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_24 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_23, L_24, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// if (surface.meshCollider.enabled != enableCollisions)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = ___surface0;
		NullCheck(L_25);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_26 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB(L_26, /*hidden argument*/NULL);
		bool L_28 = SpatialMappingCollider_get_enableCollisions_m7F553859CFEE41A8A022EC44E5132A57EB557164(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00b5;
		}
	}
	{
		// surface.meshCollider.enabled = enableCollisions;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_30 = ___surface0;
		NullCheck(L_30);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_31 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_30, /*hidden argument*/NULL);
		bool L_32 = SpatialMappingCollider_get_enableCollisions_m7F553859CFEE41A8A022EC44E5132A57EB557164(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00b5:
	{
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_mE213514204AEFCDC1130E4496A75CAC9C190EEC9 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__ctor_mE213514204AEFCDC1130E4496A75CAC9C190EEC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SMComponentRecord> m_Components = new List<SMComponentRecord>();   
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_0 = (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *)il2cpp_codegen_object_new(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_il2cpp_TypeInfo_var);
		List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52(L_0, /*hidden argument*/List_1__ctor_m92F27154FD86EFA134C0B5E6E4DA50FC28F01D52_RuntimeMethod_var);
		__this->set_m_Components_1(L_0);
		// private SMBakeRequest[] m_InFlightRequests = new SMBakeRequest[kIdealInFlightSurfaceCount]; 
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_1 = (SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD*)(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD*)SZArrayNew(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InFlightRequests_2(L_1);
		// private int m_InFlightSurfaces = 0; 
		__this->set_m_InFlightSurfaces_3(0);
		// private int m_NextIndex = 0;    
		__this->set_m_NextIndex_4(0);
		// private SpatialMappingContext() {}
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// private SpatialMappingContext() {}
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * V_0 = NULL;
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = ((SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var))->get_instance_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return instance; }
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * V_0 = NULL;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_0 = (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_mF948151007C0E6D8E5A56D07390BB18A0EFEC22E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_1 = V_0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		// if (smComponent == null)
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_3 = V_0;
		NullCheck(L_3);
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_4 = L_3->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentNullException("smComponent");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_7 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_7, _stringLiteral85EE1AFFF61EEAA487746F3F8C1685BB1C03665C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var);
	}

IL_002a:
	{
		// if (onDataReady == null)
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_8 = ___onDataReady1;
		V_4 = (bool)((((RuntimeObject*)(SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// throw new ArgumentNullException("onDataReady");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_10 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_10, _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var);
	}

IL_0040:
	{
		// if (getHighestPri == null)
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_11 = ___getHighestPri2;
		V_5 = (bool)((((RuntimeObject*)(GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 *)L_11) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// throw new ArgumentNullException("getHighestPri");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_13 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_13, _stringLiteralA5720A5DE163F01678ACB0606AF0EEED421C94EB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var);
	}

IL_0056:
	{
		// if (observer == null)
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_14 = ___observer3;
		V_6 = (bool)((((RuntimeObject*)(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		// throw new ArgumentNullException("observer");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_16 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_16, _stringLiteral307527C227AC648BB119BCB457EBB8466E79827C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var);
	}

IL_006d:
	{
		// SMComponentRecord findResult = m_Components.Find(record => record.m_Component == smComponent);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_17 = __this->get_m_Components_1();
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_18 = V_0;
		Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * L_19 = (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *)il2cpp_codegen_object_new(Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m1F1967D704E5FE3AD22823A3F582232B7CB9E811_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972_RuntimeMethod_var);
		NullCheck(L_17);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_20 = List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52(L_17, L_19, /*hidden argument*/List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_RuntimeMethod_var);
		V_1 = L_20;
		// if (findResult.m_Component != null)
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_21 = V_1;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_22 = L_21.get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		// throw new ArgumentException("RegisterComponent on a component already registered!");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_25 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_25, _stringLiteral44A541D01189AFFA834A25E0A93A328341730C75, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, SpatialMappingContext_RegisterComponent_m8027F8D525EEFEB831D657E5E5B5B199915CBCB4_RuntimeMethod_var);
	}

IL_00a3:
	{
		// rec.m_Component = smComponent;
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_26 = V_0;
		NullCheck(L_26);
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_27 = L_26->get_smComponent_0();
		(&V_2)->set_m_Component_0(L_27);
		// rec.m_OnDataReady = onDataReady;
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_28 = ___onDataReady1;
		(&V_2)->set_m_OnDataReady_1(L_28);
		// rec.m_GetHighestPri = getHighestPri;
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_29 = ___getHighestPri2;
		(&V_2)->set_m_GetHighestPri_2(L_29);
		// rec.m_SurfaceObserver = observer;
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_30 = ___observer3;
		(&V_2)->set_m_SurfaceObserver_3(L_30);
		// m_Components.Add(rec);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_31 = __this->get_m_Components_1();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_32 = V_2;
		NullCheck(L_31);
		List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009(L_31, L_32, /*hidden argument*/List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_0 = (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m8F2D1733A044CAB323EC721F55EF8CF934305373(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_1 = V_0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		// int removeCount = m_Components.RemoveAll(record => record.m_Component == smComponent);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_3 = __this->get_m_Components_1();
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_4 = V_0;
		Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * L_5 = (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *)il2cpp_codegen_object_new(Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m531DFED41F5A4968FD1E2672AA38C55D49452F22_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m79CE8CA3554CF9EDB5401CD70B51C5E29E19A972_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_6 = List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10(L_3, L_5, /*hidden argument*/List_1_RemoveAll_m17AE403184E6B8ED554DFF30AE38595BF2FDEB10_RuntimeMethod_var);
		V_1 = L_6;
		// if (removeCount == 0)
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// throw new ArgumentException("DeregisterComponent for a component not registered!");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteral3D9A40DDD9AF3D33ED1C157EA10B0DD27C405802, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, SpatialMappingContext_DeregisterComponent_mA2B6842260276F8E0C622E7634AFEE4F6CF410CF_RuntimeMethod_var);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::OnSurfaceDataReady(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_OnSurfaceDataReady_m504770F8B83EB20DF9020AAE149461207F847D4C (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int inFlightIdx = GetInFlightIndexFromSD(sd);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___sd0;
		int32_t L_1 = SpatialMappingContext_GetInFlightIndexFromSD_mD5589ADEDEB5864958872B01F3668CEE8066F9D9(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// PropagateDataReadyEventToComponents(sd, outputWritten, elapsedBakeTimeSeconds, inFlightIdx);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_2 = ___sd0;
		bool L_3 = ___outputWritten1;
		float L_4 = ___elapsedBakeTimeSeconds2;
		int32_t L_5 = V_0;
		SpatialMappingContext_PropagateDataReadyEventToComponents_m16907610BA5CF7D52CF280FD949E783E9ECFD5CA(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// UpdateInFlightRecords(inFlightIdx, elapsedBakeTimeSeconds);
		int32_t L_6 = V_0;
		float L_7 = ___elapsedBakeTimeSeconds2;
		SpatialMappingContext_UpdateInFlightRecords_mB8AD8D918F398F51B66087489675B921FC57BD21(__this, L_6, L_7, /*hidden argument*/NULL);
		// RequestMeshPriorityFromComponents();
		SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_mD5589ADEDEB5864958872B01F3668CEE8066F9D9 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		V_0 = 0;
		goto IL_0067;
	}

IL_0005:
	{
		// SMBakeRequest rq = m_InFlightRequests[inFlightIndex];
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_0 = __this->get_m_InFlightRequests_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (rq.m_RequestData.id.handle == sd.id.handle &&
		//     rq.m_RequestData.trianglesPerCubicMeter == sd.trianglesPerCubicMeter &&
		//     rq.m_RequestData.bakeCollider == sd.bakeCollider)
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_4 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_5 = L_4.get_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_6 = L_5.get_id_0();
		int32_t L_7 = L_6.get_handle_0();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_8 = ___sd0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_9 = L_8.get_id_0();
		int32_t L_10 = L_9.get_handle_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_10))))
		{
			goto IL_0058;
		}
	}
	{
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_11 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_12 = L_11.get_m_RequestData_0();
		float L_13 = L_12.get_trianglesPerCubicMeter_4();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_14 = ___sd0;
		float L_15 = L_14.get_trianglesPerCubicMeter_4();
		if ((!(((float)L_13) == ((float)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_16 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_17 = L_16.get_m_RequestData_0();
		bool L_18 = L_17.get_bakeCollider_5();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_19 = ___sd0;
		bool L_20 = L_19.get_bakeCollider_5();
		G_B5_0 = ((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B5_0 = 0;
	}

IL_0059:
	{
		V_2 = (bool)G_B5_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		// return inFlightIndex;
		int32_t L_22 = V_0;
		V_3 = L_22;
		goto IL_007c;
	}

IL_0062:
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0067:
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		int32_t L_24 = V_0;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_25 = __this->get_m_InFlightRequests_2();
		NullCheck(L_25);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		V_3 = (-1);
		goto IL_007c;
	}

IL_007c:
	{
		// }
		int32_t L_27 = V_3;
		return L_27;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * SpatialMappingContext_GetSMComponentFromInFlightIndex_mF28F6A135A6D8C4FA7D76EEB7A98D62714C498F6 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method)
{
	bool V_0 = false;
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// if (inFlightIndex < 0)
		int32_t L_0 = ___inFlightIndex0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return null;
		V_1 = (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL;
		goto IL_0057;
	}

IL_000e:
	{
		// if (m_InFlightRequests == null ||
		//     inFlightIndex >= m_InFlightRequests.Length ||
		//     m_InFlightRequests[inFlightIndex].IsClear())
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_2 = __this->get_m_InFlightRequests_2();
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___inFlightIndex0;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_4 = __this->get_m_InFlightRequests_2();
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_5 = __this->get_m_InFlightRequests_2();
		int32_t L_6 = ___inFlightIndex0;
		NullCheck(L_5);
		bool L_7 = SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
	}

IL_0035:
	{
		V_2 = (bool)G_B6_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// return null;
		V_1 = (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL;
		goto IL_0057;
	}

IL_003e:
	{
		// return m_InFlightRequests[inFlightIndex].m_Requester.m_Component;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_9 = __this->get_m_InFlightRequests_2();
		int32_t L_10 = ___inFlightIndex0;
		NullCheck(L_9);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_address_of_m_Requester_1();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_12 = L_11->get_m_Component_0();
		V_1 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m16907610BA5CF7D52CF280FD949E783E9ECFD5CA (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_PropagateDataReadyEventToComponents_m16907610BA5CF7D52CF280FD949E783E9ECFD5CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * V_1 = NULL;
	bool V_2 = false;
	Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		// SpatialMappingBase.LODType lod = SpatialMappingBase.GetLODFromTPCM(sd.trianglesPerCubicMeter);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___sd0;
		float L_1 = L_0.get_trianglesPerCubicMeter_4();
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		int32_t L_2 = SpatialMappingBase_GetLODFromTPCM_mB942609B9A2BE4201CFF14AD29E3833D04AC17D8((((double)((double)L_1))), /*hidden argument*/NULL);
		V_0 = L_2;
		// SpatialMappingBase requester = GetSMComponentFromInFlightIndex(inFlightIndex);
		int32_t L_3 = ___inFlightIndex3;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_4 = SpatialMappingContext_GetSMComponentFromInFlightIndex_mF28F6A135A6D8C4FA7D76EEB7A98D62714C498F6(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (outputWritten)
		bool L_5 = ___outputWritten1;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0093;
		}
	}
	{
		// foreach (SMComponentRecord comp in m_Components)
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_7 = __this->get_m_Components_1();
		NullCheck(L_7);
		Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  L_8 = List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537(L_7, /*hidden argument*/List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_RuntimeMethod_var);
		V_3 = L_8;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_002c:
		{
			// foreach (SMComponentRecord comp in m_Components)
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_9 = Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_inline((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_RuntimeMethod_var);
			V_4 = L_9;
			// if (comp.m_Component.lodType == lod && comp.m_Component.bakePhysics == sd.bakeCollider)
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_10 = V_4;
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_11 = L_10.get_m_Component_0();
			NullCheck(L_11);
			int32_t L_12 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C(L_11, /*hidden argument*/NULL);
			int32_t L_13 = V_0;
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_005b;
			}
		}

IL_0045:
		{
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_14 = V_4;
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_15 = L_14.get_m_Component_0();
			NullCheck(L_15);
			bool L_16 = SpatialMappingBase_get_bakePhysics_mEC35DF531261812F504FBDB432688A4A9B6B03FA(L_15, /*hidden argument*/NULL);
			SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_17 = ___sd0;
			bool L_18 = L_17.get_bakeCollider_5();
			G_B6_0 = ((((int32_t)L_16) == ((int32_t)L_18))? 1 : 0);
			goto IL_005c;
		}

IL_005b:
		{
			G_B6_0 = 0;
		}

IL_005c:
		{
			V_5 = (bool)G_B6_0;
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_0075;
			}
		}

IL_0062:
		{
			// comp.m_OnDataReady(requester, sd, outputWritten, elapsedBakeTimeSeconds);
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_20 = V_4;
			SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_21 = L_20.get_m_OnDataReady_1();
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_22 = V_1;
			SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_23 = ___sd0;
			bool L_24 = ___outputWritten1;
			float L_25 = ___elapsedBakeTimeSeconds2;
			NullCheck(L_21);
			SurfaceDataReadyCallback_Invoke_mD9CA9D1746AF5AE4D247404CF4E49DA5FEC086A0(L_21, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		}

IL_0075:
		{
		}

IL_0076:
		{
			// foreach (SMComponentRecord comp in m_Components)
			bool L_26 = Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mA753642A8866BCBB2E09790DACF356585713E7CD_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_002c;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(129)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		goto IL_00ea;
	}

IL_0093:
	{
		// if (inFlightIndex != -1)
		int32_t L_27 = ___inFlightIndex3;
		V_6 = (bool)((((int32_t)((((int32_t)L_27) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00c7;
		}
	}
	{
		// m_InFlightRequests[inFlightIndex].m_Requester.m_OnDataReady(requester, sd, outputWritten, elapsedBakeTimeSeconds);
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_29 = __this->get_m_InFlightRequests_2();
		int32_t L_30 = ___inFlightIndex3;
		NullCheck(L_29);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->get_address_of_m_Requester_1();
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_32 = L_31->get_m_OnDataReady_1();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_33 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_34 = ___sd0;
		bool L_35 = ___outputWritten1;
		float L_36 = ___elapsedBakeTimeSeconds2;
		NullCheck(L_32);
		SurfaceDataReadyCallback_Invoke_mD9CA9D1746AF5AE4D247404CF4E49DA5FEC086A0(L_32, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00c7:
	{
		// Debug.LogError(System.String.Format("SpatialMappingContext unable to notify a component about a failure to cook surface {0}!", sd.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_37 = ___sd0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_38 = L_37.get_id_0();
		int32_t L_39 = L_38.get_handle_0();
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE9F75EABE0850F0B8A701C7B2478D0F8C395D79, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_42, /*hidden argument*/NULL);
	}

IL_00e9:
	{
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_mB8AD8D918F398F51B66087489675B921FC57BD21 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_UpdateInFlightRecords_mB8AD8D918F398F51B66087489675B921FC57BD21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (inFlightIndex == 0 || inFlightIndex == 1)
		int32_t L_0 = ___inFlightIndex0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___inFlightIndex0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 1;
	}

IL_000b:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		// if (m_InFlightSurfaces <= 0)
		int32_t L_3 = __this->get_m_InFlightSurfaces_3();
		V_1 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError("SMContext:  unexpectedly got a data ready event with too few in flight surfaces!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralAC5BF571DE9975A9AA7E383FF7EA6E291929C5DE, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0032:
	{
		// m_InFlightSurfaces--;
		int32_t L_5 = __this->get_m_InFlightSurfaces_3();
		__this->set_m_InFlightSurfaces_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
	}

IL_0042:
	{
		// m_InFlightRequests[inFlightIndex].Clear();
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_6 = __this->get_m_InFlightRequests_2();
		int32_t L_7 = ___inFlightIndex0;
		NullCheck(L_6);
		SMBakeRequest_Clear_m86306BA81672224B59FAF4E222F232C6D2CC7946((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		// if (!m_InFlightRequests[inFlightIndex].IsClear())
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_8 = __this->get_m_InFlightRequests_2();
		int32_t L_9 = ___inFlightIndex0;
		NullCheck(L_8);
		bool L_10 = SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// Debug.AssertFormat(false, "Mesh Baking request \"{0}\" should be clear but is not!", inFlightIndex);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		int32_t L_14 = ___inFlightIndex0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_AssertFormat_m203A9662BBFE84829AF02B23A50E03FCFFEFBC45((bool)0, _stringLiteralA0CB0E19A896B1E91498D0F86C6128A4E144E79F, L_13, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// m_NextIndex = inFlightIndex;
		int32_t L_17 = ___inFlightIndex0;
		__this->set_m_NextIndex_4(L_17);
		goto IL_00ab;
	}

IL_0093:
	{
		// Debug.LogError(System.String.Format("SMContext:  unable to update in flight record for an invalid index {0}!", inFlightIndex));
		int32_t L_18 = ___inFlightIndex0;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral82AA2F03AC2CF34CF663318762D43CC36CFFC6C1, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_21, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B11_0 = NULL;
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B12_1 = NULL;
	{
		// if (m_InFlightSurfaces < kIdealInFlightSurfaceCount)
		int32_t L_0 = __this->get_m_InFlightSurfaces_3();
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0143;
		}
	}
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		V_1 = 0;
		goto IL_012b;
	}

IL_0019:
	{
		// SMComponentRecord comp = m_Components[ii];
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_2 = __this->get_m_Components_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_4 = List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_RuntimeMethod_var);
		V_2 = L_4;
		// if (comp.m_GetHighestPri(out nextRequest))
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_5 = V_2;
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_6 = L_5.get_m_GetHighestPri_2();
		NullCheck(L_6);
		bool L_7 = GetHighestPriorityCallback_Invoke_m26851E34E8F7F00E6D82EB593811F3230E8CB3E3(L_6, (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0126;
		}
	}
	{
		// if (-1 == m_NextIndex || !m_InFlightRequests[m_NextIndex].IsClear())
		int32_t L_9 = __this->get_m_NextIndex_4();
		if ((((int32_t)(-1)) == ((int32_t)L_9)))
		{
			goto IL_0062;
		}
	}
	{
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_10 = __this->get_m_InFlightRequests_2();
		int32_t L_11 = __this->get_m_NextIndex_4();
		NullCheck(L_10);
		bool L_12 = SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B6_0 = 1;
	}

IL_0063:
	{
		V_5 = (bool)G_B6_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// Debug.LogError(System.String.Format("SMContext:  next index {0} may not be clear!", m_NextIndex));
		int32_t L_14 = __this->get_m_NextIndex_4();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF9641356B56AB3E220318DB9A52C7620EC3E8076, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_17, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_008b:
	{
		// if (comp.m_SurfaceObserver.RequestMeshAsync(nextRequest, OnSurfaceDataReady))
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_18 = V_2;
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_19 = L_18.get_m_SurfaceObserver_3();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_20 = V_3;
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_21 = (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 *)il2cpp_codegen_object_new(SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092_il2cpp_TypeInfo_var);
		SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2(L_21, __this, (intptr_t)((intptr_t)SpatialMappingContext_OnSurfaceDataReady_m504770F8B83EB20DF9020AAE149461207F847D4C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_22 = SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95(L_19, L_20, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0116;
		}
	}
	{
		// m_InFlightRequests[m_NextIndex].m_RequestData = nextRequest;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_24 = __this->get_m_InFlightRequests_2();
		int32_t L_25 = __this->get_m_NextIndex_4();
		NullCheck(L_24);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_26 = V_3;
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->set_m_RequestData_0(L_26);
		// m_InFlightRequests[m_NextIndex].m_Requester = comp;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_27 = __this->get_m_InFlightRequests_2();
		int32_t L_28 = __this->get_m_NextIndex_4();
		NullCheck(L_27);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_29 = V_2;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->set_m_Requester_1(L_29);
		// m_InFlightSurfaces++;
		int32_t L_30 = __this->get_m_InFlightSurfaces_3();
		__this->set_m_InFlightSurfaces_3(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		// m_NextIndex = m_NextIndex == 1 ? 0 : 1;
		int32_t L_31 = __this->get_m_NextIndex_4();
		G_B10_0 = __this;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			G_B11_0 = __this;
			goto IL_00f4;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00f5:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_m_NextIndex_4(G_B12_0);
		// m_Components.RemoveAt(ii);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_32 = __this->get_m_Components_1();
		int32_t L_33 = V_1;
		NullCheck(L_32);
		List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342(L_32, L_33, /*hidden argument*/List_1_RemoveAt_m924A71B9A986C7A8F051600FF46E93DFAD73F342_RuntimeMethod_var);
		// m_Components.Add(comp);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_34 = __this->get_m_Components_1();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_35 = V_2;
		NullCheck(L_34);
		List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009(L_34, L_35, /*hidden argument*/List_1_Add_mA1F24FBC4B1846126D906EC04A7A2455761DE009_RuntimeMethod_var);
		// break;
		goto IL_0142;
	}

IL_0116:
	{
		// Debug.LogError("SMContext:  unexpected failure requesting mesh bake!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral83D748A4D24B0945189E5C60B86FCDCF5E71A290, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// break;
		goto IL_0142;
	}

IL_0126:
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_012b:
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		int32_t L_37 = V_1;
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_38 = __this->get_m_Components_1();
		NullCheck(L_38);
		int32_t L_39 = List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_inline(L_38, /*hidden argument*/List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_7;
		if (L_40)
		{
			goto IL_0019;
		}
	}

IL_0142:
	{
	}

IL_0143:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_m5529DEFB30F2B54DF0D7A2D293AFC2B1EF7B6C67 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	{
		// RequestMeshPriorityFromComponents();
		SpatialMappingContext_RequestMeshPriorityFromComponents_m2F55523E87774786F18EE78A47CA1DAFD74E5705(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__cctor_mE1027CD21E2DC2792C377C0FAC92F4A42B5506CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__cctor_mE1027CD21E2DC2792C377C0FAC92F4A42B5506CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly SpatialMappingContext instance = new SpatialMappingContext();
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 *)il2cpp_codegen_object_new(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext__ctor_mE213514204AEFCDC1130E4496A75CAC9C190EEC9(L_0, /*hidden argument*/NULL);
		((SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mF948151007C0E6D8E5A56D07390BB18A0EFEC22E (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::<RegisterComponent>b__0(UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m1F1967D704E5FE3AD22823A3F582232B7CB9E811 (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m1F1967D704E5FE3AD22823A3F582232B7CB9E811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SMComponentRecord findResult = m_Components.Find(record => record.m_Component == smComponent);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = ___record0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_1 = L_0.get_m_Component_0();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m8F2D1733A044CAB323EC721F55EF8CF934305373 (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::<DeregisterComponent>b__0(UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m531DFED41F5A4968FD1E2672AA38C55D49452F22 (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m531DFED41F5A4968FD1E2672AA38C55D49452F22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int removeCount = m_Components.RemoveAll(record => record.m_Component == smComponent);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = ___record0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_1 = L_0.get_m_Component_0();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_m47258A0A36E0E79506F872C8E03AB33D8A666B47 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m26851E34E8F7F00E6D82EB593811F3230E8CB3E3 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dataRequest0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
					else
						result = GenericVirtFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dataRequest0);
					else
						result = VirtFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dataRequest0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___dataRequest0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___dataRequest0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::BeginInvoke(UnityEngine.XR.WSA.SurfaceData&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHighestPriorityCallback_BeginInvoke_m1CE22675CEE0E13C0A8E683B62D6CE4B3E1DEB80 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetHighestPriorityCallback_BeginInvoke_m1CE22675CEE0E13C0A8E683B62D6CE4B3E1DEB80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &*___dataRequest0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::EndInvoke(UnityEngine.XR.WSA.SurfaceData&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_EndInvoke_m24E6E8AA7D5216421B258A5A146EDF5E80A16845 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___dataRequest0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL);
}
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke_back(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke_cleanup(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL);
}
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com_back(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com_cleanup(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m86306BA81672224B59FAF4E222F232C6D2CC7946 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method)
{
	{
		// m_RequestData.id.handle = 0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = L_0->get_address_of_id_0();
		L_1->set_handle_0(0);
		// m_Requester.Clear();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_2 = __this->get_address_of_m_Requester_1();
		SMComponentRecord_Clear_m415CCE1F9F6B4654D3505256EFE05B49589A78DF((SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SMBakeRequest_Clear_m86306BA81672224B59FAF4E222F232C6D2CC7946_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * _thisAdjusted = reinterpret_cast<SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *>(__this + _offset);
	SMBakeRequest_Clear_m86306BA81672224B59FAF4E222F232C6D2CC7946(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return (m_RequestData.id.handle == 0 && m_Requester.IsClear());
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = L_0->get_address_of_id_0();
		int32_t L_2 = L_1->get_handle_0();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_3 = __this->get_address_of_m_Requester_1();
		bool L_4 = SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6((SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * _thisAdjusted = reinterpret_cast<SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *>(__this + _offset);
	return SMBakeRequest_IsClear_m3BA8862A1CA764128849ADFE016EBDAF51BB842C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL);
}
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL);
}
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m415CCE1F9F6B4654D3505256EFE05B49589A78DF (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method)
{
	{
		// m_Component = null;
		__this->set_m_Component_0((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL);
		// m_OnDataReady = null;
		__this->set_m_OnDataReady_1((SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 *)NULL);
		// m_GetHighestPri = null;
		__this->set_m_GetHighestPri_2((GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 *)NULL);
		// m_SurfaceObserver = null;
		__this->set_m_SurfaceObserver_3((SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SMComponentRecord_Clear_m415CCE1F9F6B4654D3505256EFE05B49589A78DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *>(__this + _offset);
	SMComponentRecord_Clear_m415CCE1F9F6B4654D3505256EFE05B49589A78DF(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6 (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return m_Component == null
		//     && m_OnDataReady == null
		//     && m_GetHighestPri == null
		//     && m_SurfaceObserver == null;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_0 = __this->get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_2 = __this->get_m_OnDataReady_1();
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_3 = __this->get_m_GetHighestPri_2();
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_4 = __this->get_m_SurfaceObserver_3();
		G_B5_0 = ((((RuntimeObject*)(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *>(__this + _offset);
	return SMComponentRecord_IsClear_mB3D727B09FA7DC4790DB5566F73E967E28047ED6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_CurrentRenderState;
		int32_t L_0 = __this->get_m_CurrentRenderState_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_renderState(UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_renderState_m8450524C7413463F34521D71AF035D5558C220A2 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_CurrentRenderState = value;
		int32_t L_0 = ___value0;
		__this->set_m_CurrentRenderState_28(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	{
		// return m_VisualMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_VisualMaterial_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m439EE5826EC8650A9051CE8878A4DE6E62BAA37E (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_VisualMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_VisualMaterial_29(L_0);
		// }
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	{
		// return m_OcclusionMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_OcclusionMaterial_30();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m6600CD1C60856651B8E939DA904984ED9DD82D51 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_OcclusionMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_OcclusionMaterial_30(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnSurfaceDataReady_m420A3B0A5C033BCC60642E85BAF41408A07B0BFA (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnSurfaceDataReady_m420A3B0A5C033BCC60642E85BAF41408A07B0BFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (!surfaceObjects.TryGetValue(bakedData.id.handle, out surface))
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = L_1.get_id_0();
		int32_t L_3 = L_2.get_handle_0();
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8(L_0, L_3, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDACA589E0C84ACB7DF778908A14BED213D8A83F8_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_00fd;
	}

IL_0026:
	{
		// surface.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = V_0;
		NullCheck(L_6);
		Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline(L_6, (bool)0, /*hidden argument*/NULL);
		// if (!outputWritten)
		bool L_7 = ___outputWritten2;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_00fd;
	}

IL_003c:
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = V_0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError(string.Format("A SpatialMappingRenderer component can not apply baked data to a surface with id \"{0}\" because its GameObject is null.", bakedData.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_13 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_14 = L_13.get_id_0();
		int32_t L_15 = L_14.get_handle_0();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral62234BEF4038675D8DA131376AEB172897EAB03D, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_18, /*hidden argument*/NULL);
		// return;
		goto IL_00fd;
	}

IL_0072:
	{
		// if (requester != this)
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_19 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, __this, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// CloneBakedComponents(bakedData, surface);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_22 = ___bakedData1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = V_0;
		SpatialMappingBase_CloneBakedComponents_m66D3996C9094FE1F3DFCAF19BBA3CBEED006BDFC(__this, L_22, L_23, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_24 = V_0;
		NullCheck(L_24);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_25 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00f0;
		}
	}
	{
		// surface.meshRenderer = surface.gameObject.GetComponent<MeshRenderer>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = V_0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_29 = V_0;
		NullCheck(L_29);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_31 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_30, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		NullCheck(L_28);
		Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112_inline(L_28, L_31, /*hidden argument*/NULL);
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_32 = V_0;
		NullCheck(L_32);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_33 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_33, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_34;
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00d5;
		}
	}
	{
		// surface.meshRenderer = surface.gameObject.AddComponent<MeshRenderer>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_36 = V_0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_37 = V_0;
		NullCheck(L_37);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_39 = GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E(L_38, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E_RuntimeMethod_var);
		NullCheck(L_36);
		Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112_inline(L_36, L_39, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		// surface.meshRenderer.receiveShadows = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_40 = V_0;
		NullCheck(L_40);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_41 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_41, (bool)0, /*hidden argument*/NULL);
		// surface.meshRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_42 = V_0;
		NullCheck(L_42);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_43 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_43, 0, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		// ApplyRenderSettings(surface.meshRenderer);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_44 = V_0;
		NullCheck(L_44);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_45 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_44, /*hidden argument*/NULL);
		SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50(__this, L_45, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnBeginSurfaceEviction_mCD9F24ED93F611DFA1A51A198CC5CC00D5291AFE (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnBeginSurfaceEviction_mCD9F24ED93F611DFA1A51A198CC5CC00D5291AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface1;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0014:
	{
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface1;
		NullCheck(L_4);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0027:
	{
		// surface.meshRenderer.enabled = shouldBeActiveWhileRemoved;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface1;
		NullCheck(L_8);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_9 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_8, /*hidden argument*/NULL);
		bool L_10 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_9);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_1 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81(L_1, /*hidden argument*/Dictionary_2_get_Count_m2CDCD61FC23B545272373EDBD6A1B6D3D3743C81_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0135;
	}

IL_0024:
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_4 = SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_5 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0088;
		}

IL_0033:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_6 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_2 = L_6;
			// GameObject go = kvp.Value.gameObject;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_7);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			// if (go == null)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0059;
			}
		}

IL_0056:
		{
			// continue;
			goto IL_0088;
		}

IL_0059:
		{
			// if (kvp.Value.meshRenderer == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_12);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_13 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_14 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_5 = L_14;
			bool L_15 = V_5;
			if (!L_15)
			{
				goto IL_0074;
			}
		}

IL_0071:
		{
			// continue;
			goto IL_0088;
		}

IL_0074:
		{
			// ApplyRenderSettings(kvp.Value.meshRenderer);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_16);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_17 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_16, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50(__this, L_17, /*hidden argument*/NULL);
		}

IL_0088:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_18 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0033;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(147)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
	}

IL_00a2:
	{
		// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_19 = SpatialMappingBase_get_pendingSurfacesForEviction_mCF200E69F146C059057BF8F2B08D283EF1B8916E(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B  L_20 = Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA(L_19, /*hidden argument*/Dictionary_2_GetEnumerator_m0300CC2BC49A99CDFDCC047C98483F6B260D60AA_RuntimeMethod_var);
		V_6 = L_20;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011b;
		}

IL_00b2:
		{
			// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248  L_21 = Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_inline((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_6), /*hidden argument*/Enumerator_get_Current_m37FCDF5205966327A1B07E0EB67D6592617B58E8_RuntimeMethod_var);
			V_7 = L_21;
			// if (kvp.Value.meshRenderer == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_22);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_23 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_24 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_8 = L_24;
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_00d7;
			}
		}

IL_00d4:
		{
			// continue;
			goto IL_011b;
		}

IL_00d7:
		{
			// ApplyRenderSettings(kvp.Value.meshRenderer);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_26 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_26);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_27 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_26, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50(__this, L_27, /*hidden argument*/NULL);
			// if (ShouldRemainActiveWhileBeingRemoved(kvp.Value))
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_28 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			bool L_29 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m41DCE64B180FB28C5CB32BA4BE2DACCF72B3FCC6(__this, L_28, /*hidden argument*/NULL);
			V_9 = L_29;
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_011a;
			}
		}

IL_00fd:
		{
			// kvp.Value.meshRenderer.enabled = renderState != RenderState.None;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_31 = KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_inline((KeyValuePair_2_t3CC18F83AB40E690969F71CD1B17C93AC44B9248 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m06A77EF14A4355BA4DBB9A14F3349AE383148180_RuntimeMethod_var);
			NullCheck(L_31);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_32 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_31, /*hidden argument*/NULL);
			int32_t L_33 = SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D(__this, /*hidden argument*/NULL);
			NullCheck(L_32);
			Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_32, (bool)((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		}

IL_011a:
		{
		}

IL_011b:
		{
			// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
			bool L_34 = Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m89C5C4731B704A423349D173039D37C359DA29B1_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00b2;
			}
		}

IL_0124:
		{
			IL2CPP_LEAVE(0x135, FINALLY_0126);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0126;
	}

FINALLY_0126:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1((Enumerator_t2F558C13712498A11197D34827AEBB22E2A0920B *)(&V_6), /*hidden argument*/Enumerator_Dispose_m8E035759C06A467EA835FD23E36AF6308A6493B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(294)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(294)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x135, IL_0135)
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRenderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyRenderSettings_m5A6A66E6A9D7088B675CE293E9F127188EBB8F50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (meshRenderer == null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___meshRenderer0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0062;
	}

IL_000f:
	{
		// switch (renderState)
		int32_t L_3 = SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_002a:
	{
		// meshRenderer.sharedMaterial = occlusionMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = ___meshRenderer0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_5, L_6, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = ___meshRenderer0;
		NullCheck(L_7);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_7, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_0062;
	}

IL_0041:
	{
		// meshRenderer.sharedMaterial = visualMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = ___meshRenderer0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_8, L_9, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = ___meshRenderer0;
		NullCheck(L_10);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_10, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_0062;
	}

IL_0058:
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_11 = ___meshRenderer0;
		NullCheck(L_11);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_11, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_DestroySurface_mD0C57EF7CC663F5487EC4AB804E6AED68460E2BA (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_DestroySurface_mD0C57EF7CC663F5487EC4AB804E6AED68460E2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (surface.meshRenderer != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_1 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// surface.meshRenderer.sharedMaterial = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		NullCheck(L_4);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_5, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// surface.meshRenderer.enabled = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		NullCheck(L_6);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_7, (bool)0, /*hidden argument*/NULL);
		// Destroy(surface.meshRenderer);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_9 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_9, /*hidden argument*/NULL);
		// surface.meshRenderer = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		NullCheck(L_10);
		Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112_inline(L_10, (MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED *)NULL, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// base.DestroySurface(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = ___surface0;
		SpatialMappingBase_DestroySurface_m61864CCED61827A61A95FA29FAD6ED9920F67E04(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnDestroy_m9D860213004344023EA62B0F871F9034B73B1435 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// occlusionMaterial = null;
		SpatialMappingRenderer_set_occlusionMaterial_m6600CD1C60856651B8E939DA904984ED9DD82D51(__this, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// visualMaterial = null;
		SpatialMappingRenderer_set_visualMaterial_m439EE5826EC8650A9051CE8878A4DE6E62BAA37E(__this, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// base.OnDestroy();
		SpatialMappingBase_OnDestroy_mAF2456D391A059BD21C03AC4F8D0CC1119677E54(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnResetProperties_m3FBB23E78FA0835DA1938EA25F0C526EDB114CF3 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// base.OnResetProperties();
		SpatialMappingBase_OnResetProperties_mD42F9367CEA98C6FABE37B83736BD9C6E405AE5A(__this, /*hidden argument*/NULL);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_mBF763A7CC07840540AF529416F5F8F21F3929248(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_Reset_m34D8765E9CDCDF837994F9D19748F16054304DEF (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		SpatialMappingBase_Reset_m2DB6F9468DCD37B2364AC0E1638C2D8C16A0B411(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer__ctor_m14922A96C242112D7063A6D099A62FAE3683AA77 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer__ctor_m14922A96C242112D7063A6D099A62FAE3683AA77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private RenderState m_CurrentRenderState = RenderState.Occlusion;
		__this->set_m_CurrentRenderState_28(1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m2C139D01FF3CA646961AB38B6A16E8D42E2C6448(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_m6AFBE2E2DD43BE4877B51B515994535F544E1E07_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CobserverIdU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m034B1632BAC1CE797ADE3EF453B3BF7F0C0B8E90_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = ___value0;
		__this->set_U3CsurfaceObjectsU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m571711921F39F8AC923BF9964A3E559DEF2455A2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___value0;
		__this->set_U3CselectedCameraU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m6EC9BA4E9FFDEE3AA5687571ABA564FB59BF590E_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_mDDE2BC259C50248E17B85DDB4C68097E7C97B9DE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = ___value0;
		__this->set_U3CsurfaceObserverU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = __this->get_U3CsurfaceObserverU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m537FDB6EDF4E405E7D140CFE44828BCB753C60EE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = ___value0;
		__this->set_U3CboundsU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * SpatialMappingBase_get_surfaceObjects_m0CC973B69325925F0B65A557961CCD49E76FCAE4_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_t38715BC71AE0DD0B9003B7ED7B8BF706C7A10A10 * L_0 = __this->get_U3CsurfaceObjectsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CgameObjectU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_mAB42AB4923890CE64BE6EC93A19002886CC88FAA_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = __this->get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = __this->get_U3CboundsU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_mFE6057264FC068449849BDAA7481A917B2FB75F8_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mEC13E0AFED47ECB2A1725FADF5D53281AFD14861_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___value0;
		__this->set_U3CsurfaceDataU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = __this->get_U3CsurfaceDataU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m8385EA301C24253FCD0A9CA20B966772763217F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CawaitingBakeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_updateTime_m8FDDAF318259294A7184AE968CBC52051BE225F2_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CupdateTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceId_m0B776CEC7A925E7780973C2E0D787C58B28439F1_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = ___value0;
		__this->set_U3CsurfaceIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CmeshFilterU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_m11215996E1207E53F6F0C1218CA50AD058B80495_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = __this->get_U3CobserverIdU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = __this->get_U3CsurfaceIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_gameObject_mA485C86A72C7B313E831FD5F2853338DF24C87F4_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CgameObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m09D0BD0AB6A36F2DB45400E12EE2D6CCE0FDF7A1_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = ___value0;
		__this->set_U3CmeshFilterU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = __this->get_U3CworldAnchorU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m89D7EAB5602CF873669A9D4FFAC3D3B8528C3CEE_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___value0;
		__this->set_U3CworldAnchorU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m1E017099A57598E4DD2D9DCF453B4146370E4537_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_U3CselectedCameraU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m5D45BD30D4CCCAF01FDC1E4D6ACA402AF2E5C1B4_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = __this->get_U3CremainingUpdatesToLiveU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m3B199586E0066144D8986804B73E5BDE97FEEB40_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = __this->get_U3CawaitingBakeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CmeshColliderU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m2928D4F59FDD43EDBA2C0A46D5B66BFFB80DAD5B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = ___value0;
		__this->set_U3CmeshColliderU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CmeshRendererU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m9579B75AD6D5C02765978AE0C6BC69F006A4E112_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___value0;
		__this->set_U3CmeshRendererU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  Enumerator_get_Current_mD6B1E9D5866E377F8CAD19D88CECDB8AA7016553_gshared_inline (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  L_0 = (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE )__this->get_current_3();
		return (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6111F7FFB9F9E80C559084882040115B4F3DFF8E_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m3A05638ECF11AC4B452C86801F0A7263344AB2AC_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	{
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C )__this->get_current_3();
		return (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m0D9B50B1941A434A7D49293AEE5DB620DCF296FF_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* L_2 = (SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1*)__this->get__items_1();
		int32_t L_3 = ___index0;
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1*)L_2, (int32_t)L_3);
		return (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2D783F2229496D36768C6A01A7296CE5DAAD423E_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
